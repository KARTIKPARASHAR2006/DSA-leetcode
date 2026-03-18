class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
            int k = 0;
            for(int i=0; i<candies.size(); i++){
                if(candies[i] > k){
                k = candies[i];
            }}
            int n = candies.size();
            vector<bool> result(n);
            for(int i=0; i<n; i++){
                if((candies[i]+extraCandies) >= k){
                    result[i] = true;
                }
                else if((candies[i]+extraCandies) < k){
                    result[i] = false;
                }
            }
        return result;
    }
};