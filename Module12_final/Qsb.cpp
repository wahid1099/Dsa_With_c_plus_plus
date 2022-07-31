// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


void minNum(){

}

int main()
{
 
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  
  
   int t;
   cin >> t;
   
    
   
   int p;
   for (p = 0; p <t;p++) {
    bool found=true;
  // cout<<endl;
    int n,q;
    cin >> n>>q;
    
    int num[n];
    for (int i = 0; i < n; i++){
        cin >> num[i];
        
    }
       
    int l,m;
    

    
    for (int j=0; j < q; j++) {
       
        
        cin >>l>>m;
       if(found){
         cout<< "Case "<<p+1<<":"<<endl;
         found=false;
         
        }
        int mn= num[l-1];
       for (int k = l-1;k<m;k++ ){
       
       
        if (mn>num[k]){
            mn=num[k];
            
           

        }
        
        

     }
     
       cout<<mn<<endl;
       
        

    }

    
   

   }

 
 
  return 0;
}