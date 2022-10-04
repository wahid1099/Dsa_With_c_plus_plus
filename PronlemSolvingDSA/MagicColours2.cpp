// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string chk) {
        stack<char>st;
        stack<char> stt;
        string ans;
        string ans2;
        for(int i=0;i<chk.size();i++){
            if(st.size() == 0){
                
                st.push(chk[i]);
            }
            else if(chk[i] == st.top()){
                st.pop();
            }else if(chk[i]=='R'  && st.top()=='B'  || st.top()=='R'  &&  chk[i]=='B'){
                st.pop();
                st.push('P');

            }else if(chk[i]=='R'  &&  st.top()=='G'  || chk[i]=='G'  &&  st.top()=='R'){
                 st.pop();
                st.push('Y');

            }
            else if(chk[i]=='B'  &&  st.top()=='G'  || chk[i]=='G'  &&  st.top()=='B'){
                 st.pop();
                st.push('C');

            }
            else{
                st.push(chk[i]);
            }
        }
        
        while(st.size() != 0){
            ans += st.top();
            st.pop();
        } 
         reverse(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++){
            if(stt.size() == 0){
                stt.push(ans[i]);
            }else if(stt.top()==ans[i]){
                stt.pop();
            }else{
                stt.push(ans[i]);
            }

        }
        
         while(stt.size() != 0){
            ans2 += stt.top();
            stt.pop();
        } 
         reverse(ans2.begin(),ans2.end());
       
       

         
        return ans2;
            
        }

       

int main()
{
 
 int t;
 cin>>t;
 
 for(int i=0; i<t;i++) {
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    string removeduplStr=removeDuplicates(str);
   
    cout<<removeduplStr<<endl;

 }
 
 
  return 0;
}