class Solution {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) return "";

        int count = 0;
        int l = 0;
        int r = 0;
        int min_length = INT_MAX;
        int min_start = 0;

        vector<int> char_index(128, 0);

        // 1. Setup the board with what we NEED
        for(auto& ch : t){
            char_index[ch]++;
        }

        while(r < s.length()) {
            // A. THE BOUNCER (r) ADDS TO THE ROOM
            // If the board says we still need this character (>0), it's a VIP!
            if (char_index[s[r]] > 0) {
                count++;
            }
            // Add the character to the room by decrementing the board.
            // (If we needed 1, it becomes 0. If it was garbage, it becomes -1)
            char_index[s[r]]--;

            // B. THE LEFT WALL (l) SHRINKS THE ROOM
            // As long as our room has all the VIPs, try to make it smaller!
            while (count == t.length()) {
                
                // Did we beat the record?
                if ((r - l + 1) < min_length) {
                    min_length = r - l + 1;
                    min_start = l;
                }

                // Kick the Left Wall character out of the room by adding it back to the board
                char_index[s[l]]++;

                // If adding it back made the board > 0, it means we just kicked out a vital VIP!
                if (char_index[s[l]] > 0) {
                    count--; // We lose a VIP, which instantly breaks this while loop.
                }
                
                // Actually shrink the wall
                l++;
            }

            // C. Move the Bouncer forward
            r++;
        }

        // 3. FINAL CHECK
        if (min_length == INT_MAX) {
            return ""; // We never found a valid window
        }
        return s.substr(min_start, min_length);
    }
};