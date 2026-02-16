class Solution {
public:
int sumOfUnique(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int x : nums) freq[x]++;
    
    int ans = 0;
    for (auto& p : freq)
        if (p.second == 1)
            ans += p.first;
            
    return ans;
}
};