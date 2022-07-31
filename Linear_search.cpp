// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int size;
 cout<<"Enter array size: ";
 cin >> size;


 int array[size];
cout<<"Enter array elemets: ";

 for (int i=0;i<size;i++) {
    cin >>array[i];
 }

 int checkvalue;
 char c;

  cout<<"Do You want to search : (Y/N) =";

  cin >>c;

  while(toupper(c)=='Y'){
     cout<<"Please enter the value you want to search : ";
     cin >> checkvalue;
    int  flag=0;
  
   for (int i=0;i<size;i++)
   {
    if(array[i]==checkvalue){
        cout<<i<<"th index ,"<<i+1<<" Position"<<endl;
        flag=1;
    }
   }

  if(flag==0){
    cout<<"Not found!"<<endl;
      }

      cout<<"Do You want to continue searching : (Y/N)";
      cin>>c;

  }
 
 
  return 0;
}