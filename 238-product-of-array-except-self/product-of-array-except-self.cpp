class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n); 
        int left = 1;
        int rih = 1;
        
        for(int i = 0; i < n; i++) {
            answer[i] = left;
            left *= nums[i];
        }
        
        for(int j = n - 1; j >= 0; --j) {
            answer[j] *= rih;
            rih *= nums[j];
        }
        
        return answer;
    }
};