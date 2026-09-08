class Solution {
public:
    bool isValidPair(char opening, char closing){
        if(opening == '(' && closing == ')') return true;
        else if(opening == '{' && closing == '}') return true;
        else if(opening == '[' && closing == ']') return true;
        else return false;
    }
    bool isValid(string s) {
       int n = s.length();
       if(n % 2 != 0) return false;
       stack<int> st;
       for(int i = 0; i<n; i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[') st.push(ch);
        else{
            if(st.size() == 0) return false;
            if(isValidPair(st.top(), ch)) st.pop();
            else return false;
        }
       }
       return (st.size() == 0);
    }
};