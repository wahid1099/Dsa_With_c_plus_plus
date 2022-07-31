#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int i;
    gets(s);
    int k=0,j=0;
    int new[30];
    for(i=strlen(s)-1;i>=0;i--)
    {
        printf("The word is : %c \n",s[i]);
        printf("The word K : %d \n",k);
        
        if(j==3)
        {
            new[k++]=',';
            new[k++]=s[i];
            j=0;
                    printf("The word is : %c \n",new[k]);
printf("The word K : %d \n",k);
        }
        else
            new[k++]=s[i];
            printf("The word K : %d \n",k);
     j++;

    }

    for(i=k-1;i>=0;i--)
    {
        printf("%c",new[i]);
    }


}