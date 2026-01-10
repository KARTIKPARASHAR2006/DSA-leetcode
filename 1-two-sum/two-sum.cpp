class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            int rem = target - nums[i];
            if(m.find(rem) != m.end()){
                return {m[rem], i};
            }
            m[a] = i;
        }
        return {-1, -1};
    }
};