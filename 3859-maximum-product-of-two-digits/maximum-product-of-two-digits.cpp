class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n>0){
            int x = n%10;
            arr.push_back(x);
            n=n/10;
        }
        sort(arr.begin(),arr.end());
        int a = arr.size();
        return arr[a-1]*arr[a-2];
    }
};