#include<stdio.h>
int main() {
int x=2, y=6,i, z;
scanf("%d", &z);
for(i=1; i<=5; i++)
{
if(x==y)
continue;
else if (x>y)
{
printf("you have no money");
}
else{
++y;
printf("value of y is is:%d\n", y);
printf("-------------------");
printf("Here is your money:%d\n", x);
}
printf("value of x is is:%d\n", x);
++x;
printf("value of x is is:%d\n", x);


}
printf("here is your money: %d\n", y);

return 0;
}