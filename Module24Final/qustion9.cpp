#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
struct Node
{
    int front;
     int next;
} a[ 104 ];
 int f[ 110 ];
 void init( int n)
{
    for ( int i = 1 ; i <= n; i++)
    {
        f[i] = i;
    }
    return ;
}
int getf( int v)
{
    if (v == f[v]) ///When f[v] = v, it means that he is the leader of the chain and the leader. 
    return v;
     else ///If not, search recursively
    {
        f[v] = getf(f[v]);
        return f[v];
    }
}
int merge_f( int x, int y) /// Merge the same leader
{
    int t1 = getf(x);
     int t2 = getf(y);
     if (t1 != t2)
    {
        f[t2] = t1;
        return  1 ;
    }
    else
    {
        return  0 ;
    }
}
int main()
{
    int n, i, j;
     while (~ scanf ( "%d" , &n))
    {
        init(n);
        for (i = 1 ; i <= n; i++)
        {
            scanf ( "%d %d" , &a[i].front, &a[i].next);
             if (a[i].front != 0 )
                f[i] = a[i].front; ///The previous number of i is his leader, which is recorded in f[i]
        }
        for (i = 1 ; i <= n; i++)
        {
            if (a[i].next != 0 )
                 continue ;
             for (j = 1 ; j <= n; j++)
            {
                if (i != j && a[j].front == 0 )
                {
                    if (merge_f(i, j))
                    {
                        a[i].next = j;
                        a[j].front = i;
                        break ;
                    }
                }
            }
        }

        
        printf("---------------");
        for (i = 1 ; i <= n; i++)
        {
            printf ( "%d %d\n" , a[i].front, a[i].next);
        }
    }
    return  0 ;
}

 

 

