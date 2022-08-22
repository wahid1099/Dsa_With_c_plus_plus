// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int t,day,query;

cout << "Enter total Number of test cases:";
cin>>t;



int earnings[day],expense[day];

while(t--){
        cout << "Enter total Number of Days:";
        cin>>day;

    cout<<"Enter earnings: ";
    for(int i=0; i <day;i++){
        cin >>earnings[i];
    }


    cout<<"Enter expense: ";
    for(int j=0; j <day;j++){
        cin >>expense[j];
    }

    cout<<"Enter how many queries you want:";
    cin >>query;
    int key;
    for(int k=0; k <query;k++){

       cin >>key;
       int sum = 0;
       for(int i=0; i <=key;i++){
        sum += earnings[i];
        sum -= expense[i];
        }
        if(sum >0 || sum==0){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }


}

 
 
  return 0;
}