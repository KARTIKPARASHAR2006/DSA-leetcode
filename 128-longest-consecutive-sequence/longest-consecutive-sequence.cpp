class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty array edge case
        
        unordered_set<int> st;
        int longest = 1;

        // 1. Fixed: use parentheses () instead of brackets []
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            // Check if 'it' is the start of a sequence
            if(st.find(it - 1) == st.end()){
                int count = 1;
                int x = it;
                
                // 2. Fixed: look forward (x + 1) instead of backward (x - 1)
                while(st.find(x + 1) != st.end()){
                    x = x + 1;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};