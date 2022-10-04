// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void magicColours(string chk){

   stack<string> st;
   string newstring=" ";
   
    for (int i=0; i < chk.length(); i++){
        if(chk[i]=='R'  &&  chk[i+1]=='B'  || chk[i]=='B'  &&  chk[i+1]=='R' ){
             //  st.push('P');
             newstring+='P';
              cout<<"Now new string at 1st "<<new
                chk.erase(chk.begin() + i);
                chk.erase(chk.begin() + (i+1));

            
        }else if (chk[i]=='R'  &&  chk[i+1]=='G'  || chk[i]=='G'  &&  chk[i+1]=='R'){
          //   st.push('Y');
           newstring+='Y';
             chk.erase(chk.begin() + i);
                chk.erase(chk.begin() + (i+1));
               

        }else if (chk[i]=='B'  &&  chk[i+1]=='G'  || chk[i]=='G'  &&  chk[i+1]=='B'){
           //  st.push('C');
           newstring+='C';
             chk.erase(chk.begin() + i);
            chk.erase(chk.begin() + (i+1));

        }else {
             newstring+=chk[i];
        }

    }

   cout<<"new string"<<newstring<<endl;
}

int main()
{
 
 int t;
 cin>>t;
 
 for(int i=0; i<t;i++) {
    string str;
    cin>>str;
    magicColours(str);
 }
 
 
  return 0;
}