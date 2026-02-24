class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size()/2;
        set<int> st;
        for(int i=0; i<candyType.size(); i++){
            st.insert(candyType[i]);
        }
        if(st.size() < n){
            return st.size();
        }
        else{
            return n;
        }
    }
};