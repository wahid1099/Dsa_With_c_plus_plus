
#include<stdio.h>
#include<string.h>
void Push(char x);
char Pop();
int top=-1;
char Stack[4]={'\0'};
int main()
{
    char Str1[4]={'\0'};
     printf("string1 after initilize %s\n", Str1); 
    char Str2[4]={'\0'};
    int i;
    strcpy(Str1, "CSE");
    printf("string1  %s\n", Str1); 
    for(i=0; i<3; ++i){
    Push(Str1[i]);
    }
    for(i=0; i<3; ++i){
    Str2[i]=Pop();
    }
    printf("string is : %s\n", Str2);
    return 0;
}

void Push(char x){
  	Stack[++top]=x;
  	return;
}
char Pop(void){
   return Stack[top--];
   }

