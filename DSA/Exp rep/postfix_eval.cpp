#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;

int postfixeval(string s){
    stack<int> st;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            st.push(s[i] - '0'); // Convert character digit to integer
        }
        else {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            if(s[i] == '+') {
                st.push(op1 + op2);
            }
            else if(s[i] == '-') {
                st.push(op1 - op2);
            }
            else if(s[i] == '*') {
                st.push(op1 * op2);
            }
            else if(s[i] == '/') {
                st.push(op1 / op2);
            }
            else if(s[i] == '^') {
                st.push(pow(op1, op2));
            }
        }
    }
    return st.top(); // Return the final result after processing the entire expression
}

int main() {
    string exp = "46+2/5*7+";
    cout << postfixeval(exp);
    return 0;
}
