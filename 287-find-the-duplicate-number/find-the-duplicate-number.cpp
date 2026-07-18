class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n = nums.size();    
    vector<int> freq(n,0);
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];   
        freq[num]++;
        if (freq[num] == 2){
            return num;
        }
    }
    return -1; 
    }
};