class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};
        
        sort(nums.begin(), nums.end());  
        
        vector<int> result;
        int expected = nums[0];
        
        for (int num : nums) {
            while (expected < num) {
                result.push_back(expected);
                expected++;
            }
            expected = num + 1;
        }
        
        return result;
    }
};