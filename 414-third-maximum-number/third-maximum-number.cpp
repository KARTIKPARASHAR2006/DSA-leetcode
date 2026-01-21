class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        if (st.size() <= 2) {
            return *st.rbegin();
        }
        auto it = st.rbegin();   
        ++it;                   
        ++it;                    
        
        return *it;
    }
};