class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                a.push(s[i]);
            } else {
                if (a.empty()) {
                    return false; 
                }

                if (s[i] == ')' && a.top() == '(') {
                    a.pop();
                } else if (s[i] == ']' && a.top() == '[') {
                    a.pop();
                } else if (s[i] == '}' && a.top() == '{') {
                    a.pop();
                } else {
                    return false; 
                }
            }
        }

        return a.empty(); 
    }
};
