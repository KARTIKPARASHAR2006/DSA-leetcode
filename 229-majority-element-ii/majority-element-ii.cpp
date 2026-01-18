class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<int> abc;
        int req = n/3;
        for(auto it: mpp){
            if(it.second > req){
                abc.push_back(it.first);
            }
        }
        return abc;
    }
};