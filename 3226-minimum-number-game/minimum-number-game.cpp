class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i%2 != 0)
                swap(nums[i], nums[i-1]);
            }
        for(int i=0; i<n; i++){
            arr[i] = nums[i];
        }
        return arr;
    }
};