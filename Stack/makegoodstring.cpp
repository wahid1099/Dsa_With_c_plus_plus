class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(char c:s){
            if(st.empty()){
                st.push(c);
                continue;
            }
            if(c>='a' && c<='z'){
                char k=st.top();
                if(k>='A' && k<='Z' && k+32==c){
                    st.pop();


                }else{
                    st.push(c);
                }

            }
            else if(c>='A' && c<='Z){
                 char k=st.top();
                if(k>='a' && k<='z' && k+32==c){
                    st.pop();


                }else{
                    st.push(c);
                }

            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            
        }
        reverse(a.begin(), a.end());
        return ans;
    }
};