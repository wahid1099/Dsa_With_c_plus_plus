// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{


 int n;
 cout << "Enter 1st array size : ";
 cin >> n;

 cout << "Enter 1st array elements : ";
int array[n];
for(int i = 0; i < n; i++){

    cin >> array[i];
}


 int m;
 cout << "Enter 2nd array size : ";
 cin >> m;

 cout << "Enter 2nd array elements : ";
int arr[m];
for(int i = 0; i < m; i++){

    cin >> arr[i];
}



//int sizeofSet=m+n;
int set_array[n];
int k=0,flag=0;

for(int i = 0; i < n; i++){
    for(int j = 0; j < m;j++){
        if(array[i]==arr[j]){
            set_array[k]=arr[j];
            k++;
            flag++;
        }

    }
}

if(flag){
    
cout <<" set array : ";

for(int i = 0; i < k; i++){
    cout<<set_array[i]<<" "  ;
}

}

else{
    cout<<"Not found!";
}




  return 0;
}
