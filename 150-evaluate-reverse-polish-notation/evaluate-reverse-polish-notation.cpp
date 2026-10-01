class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<int> st;

        for (const std::string& token : tokens) {
            
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                long long b = st.top(); 
                st.pop();
                long long a = st.top(); 
                st.pop();

                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b); 
            } else {
                st.push(std::stoi(token));
            }
        }

        return st.top();
    }
};