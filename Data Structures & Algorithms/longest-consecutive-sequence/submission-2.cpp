class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> sorted = nums;

        sort(sorted.begin(),sorted.end());

        int longest = 0;

        for(int i = 0; i < sorted.size(); i++){
            int count = 1;
            int seq_start = sorted[i];
            for(int j = 0; j < sorted.size(); j++){
                if(sorted[j] == seq_start+1){
                    count++;
                    seq_start = sorted[j];
                }
            }
            if(count > longest){
                longest = count;
            }
        }

        return longest;
    }
};
