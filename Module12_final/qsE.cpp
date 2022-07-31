// #include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
 int t;
cin >> t;
bool found = true;
 while(t--){
    int n,q;
    cin >> n>>q;
    int num[n];
    for(int i=0;i< n; i++){
        cin >>num[i];
    }

    int l,m,v;
    int pre[n];
    pre[0] =num[0];
    for(int i=1;i<= q; i++){
        cin >>l;
         
        

        //  for(int k=0;k< n; k++){
        //     cout << "Numbers are : " <<num[k] <<" "<<endl;

        //  }
        if(found){
            cout << "Case 1:"<<endl;
            found = false;
        }
        if(l==1){
            cin>>m;
            
            cout<<num[m]<<endl;
            num[m]=0;


        }else if(l==2){
            cin>>m>>v;
            num[m]=num[m]+v;
           // cout<<pre[m];
        }else if(l==3){

            cin>>m>>v;
            //cout<<"Value of m and v is "<<m<<v<<endl;
            int sum=0;
            if(m==0){
                 for(int i=m;i<=v; i++){
                sum+=num[i];
                     } 
            }
            else{
                 for(int i=m-1;i< v; i++){
                sum+=num[i];
                
            }
               
            
           
            
        }
        cout<<sum<<endl;
       
    }

 }
 }

 
 
  return 0;
}