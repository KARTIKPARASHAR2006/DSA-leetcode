class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.size();
        while (n > 0 && num[n-1] == '0') {
            n--;
        }
        num.erase(n);
        
        return num;
    }
};