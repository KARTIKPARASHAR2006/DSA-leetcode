class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        int m2 = 0; 
        int m1 = 1;  
        int current;
        
        for (int i = 2; i <= n; i++) {
            current = m1 + m2;
            m2 = m1;
            m1 = current;
        }
        
        return current;
    }
};