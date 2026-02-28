class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};
        
        // 1st pass: count frequency
        for (char c : s) {
            count[c - 'a']++;
        }
        
        // 2nd pass: find first char with count == 1
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};