class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c : s){
            //if char is operning brackets then push that in the stack
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                //if the stack is empty or the opening and closing brackets do not match then return false
                if(st.empty() || (c == ')' && st.top() != '(')|| (c == ']' && st.top() != '[') || (c == '}' && st.top() != '{') ){
                    return false; //string not valid
                }
                st.pop(); //otherwise pop the opening bracket from the stack
            }
        }
        return st.empty(); //if stack is empty then string is valid
        //else not valid string
    }
};