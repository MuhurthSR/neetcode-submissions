class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int sol = INT_MAX;

        while (l <= r) {
            // BUG 3 FIX: If the current window is already perfectly sorted, 
            // the minimum is strictly the left-most element.
            // (Using <= handles the single-element [5] edge case safely).
            if (nums[l] <= nums[r]) {
                sol = min(sol, nums[l]);
                break; // We found the absolute bottom, stop searching!
            }

            int mid = l + (r - l) / 2; // Better math to prevent integer overflow
            sol = min(sol, nums[mid]);

            // BUG 2 FIX: The '>=' ensures we don't break on size-2 arrays
            if (nums[mid] >= nums[l]) {
                // We are on the left cliff. The drop-off is to the right.
                l = mid + 1;
            } else {
                // We are in the right valley. The drop-off is to the left.
                r = mid - 1;
            }
        }

        return sol;
    }
};