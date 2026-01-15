class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int ni = 1;
        int pi = 0;
        vector<int> arr(n,0);
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                arr[ni] = nums[i];
                ni += 2;
            }
            else{
                arr[pi] = nums[i];
                pi += 2;
            }
        }
        return arr;
    }
};