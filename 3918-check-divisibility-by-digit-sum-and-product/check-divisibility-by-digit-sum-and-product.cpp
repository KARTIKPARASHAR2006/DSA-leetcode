class Solution {
public:
    bool checkDivisibility(int n) {
        int orgval = n;
        int sum = 0;
        int product = 1;
        while(n>0){
            int x = n%10;
            sum += x;
            product *= x;
            n = n/10;
        }
        int k = sum+product;
        if(orgval%k == 0){
            return true;
        }
        return false;
    }
};