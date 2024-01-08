#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;

int prefixeval(string s){
    stack<int> st;

    for(int i = s.length() - 1; i >= 0; i--) {
        if (s[i] >= '0' && s[i] <= '9') {
            st.push(s[i] - '0');
        }
        else {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            if (s[i] == '+') {
                st.push(op1 + op2);
            }
            else if (s[i] == '-') {
                st.push(op1 - op2);
            }
            else if (s[i] == '*') {
                st.push(op1 * op2);
            }
            else if (s[i] == '/') {
                st.push(op1 / op2);
            }
            else if (s[i] == '^') {
                st.push(pow(op1, op2));
            }
        }
    }
    
    return st.top(); // Return the final result after processing the entire expression
}

int main(){
    string exp = "-+7*45+20";
    cout << prefixeval(exp);
    return 0;
}
