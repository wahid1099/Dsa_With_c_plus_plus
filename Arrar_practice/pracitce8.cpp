// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


// void sortArray(int n,int array[]){
    
//     for(int i=0;i<n; i++){
//         if(array[i]>array[i+1]){
//             int temp = array[i];
//             array[i] = array[i+1];
//             array[i+1] = temp;

//         }

//     }
// }

int main()
{
 int n;
 cout << "Enter 1st array size : ";
 cin >> n;

 cout << "Enter 1st array elements : ";
int num[n];
for(int i = 0; i < n; i++){

    cin >> num[i];
}



sort(num, num+n); 

cout << "Array after sorting : ";
for(int i = 0; i < n; i++){
    cout << num[i]<< " ";
}


cout << "Array after deleting duplicate values : ";
for(int i = 0; i < n; i++){
    cout << num[i]<< " ";
}





 
 
  return 0;
}