#include<stdio.h>

void something (int n , char s[] , int b) ;

int main()
{
    something(10 , "" , 16) ;
}

void something(int n , char s[] , int b)
{
    int i = 0 ; 
    char g[] = "";
    while (n)
    {
        int x = n % b ;
        n /= b ;
        if (x < 10)
        {
            g[i] = '0' + x ;
        }
        else
        {
            x -= 10 ;
            g[i] = 'A' + x ;
        }
        i ++ ;
    }
    i -- ;
    int j = 0 ;
    while (i < j)
    {
        char ch = g[i] ;
        g[i] = g[j] ;
        g[j] = ch ;
    }
    printf(g) ;
}