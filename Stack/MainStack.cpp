// #include<iostream>
#include<bits/stdc++.h>
// #include"WahidStack.h"
#include "demostack.h"
using namespace std;


int gloabId=100;
class person{
  string name;
  int id;
  float salary;

  public:
  person(){
    name = "";
    id=-1;
    salary = 1.0;
  }

  void setName(string name){
     this->name=name;
  }

  void setSalary(float salary){
  this->salary=salary;
  }
  person(string name,float salary){
    setName(name);
    setSalary(salary);
   
    id=gloabId;
    gloabId++;
  }

  int getId(){
    return id;
  }

  string getName() {
    return name;
  }
  float getsalary(){
    return salary;
  }

  void print(){
    cout<<"Name="<<name<<"Id="<<id<<"Salary="<<salary<<endl;
  }
};

int main()
{
    //Stack <int>st;
    // Stack <string> st;

    // st.push(1); 
    // st.push(2); 
    // st.push(3); 

    // cout<<st.size()<<endl;

    // if(!st.empty())cout<<st.Top()<<endl;
    //  st.push("MD WAHID"); 
    //  st.push("MD WAHID"); 
    //  st.push("MD WAHID"); 
    //  st.push("MD WAHID"); 
    

    //  cout<<"Size of st2 is :"<<st.size()<<endl;

    // if(!st.empty())cout<<st.Top()<<endl;
 


 Stack <person> st;
 person a("Md wahid",1500);
 person b("Md wahid",1700);
//  person c("Md wahid",1800);
 person d("Md wahid",2000);


//  person e("Md wahid",4000);
//  person b("Md wahid",1500);
//  person c("Md wahid",1500);
 st.push(a);
 st.push(b);
//  st.push(c);
 st.push(d);
//  st.push(e);
//  st.push(b);
//  st.push(c);
// //  while(!st.empty()){
//   person printobj;
//   printobj=st.pop();
//   printobj.print();
  
//  }

//  st.Top();
// Stack <int>st;
// st.push(1);

// st.push(2);
// st.push(3);
// //if(!st.empty())cout<<st.Top()<<endl;
// st.push(4);
// st.push(5);
// st.push(5);
// st.push(5);
// st.push(5);

// st.pop();
// st.Top();
// st.Top();
cout <<"mid is "<<endl;
person printfObj;
printfObj=st.mid();
printfObj.print();
cout<<st.size()<<endl;

  return 0;
}