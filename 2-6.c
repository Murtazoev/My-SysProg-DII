#include<stdio.h>

char *setbits(int x , int p , int n , int y) ;

int main()
{
    printf("%s \n" , setbits(15 , 1 , 2 , 14)) ;
}

char *setbits (int x , int p , int n , int y )
{
    char s[33] ;
    int i = 0 ;
    int s_s = 0 ;
    while (x > 0)
    {
        int a = x % 2 ;
        s[i] = '0' + (a == 1) ;
        i ++ ;
        x /= 2 ;
    }
    
    s[i] = '\0' ;

    int l , r ;
    l = 0 ;
    r = i - 1 ;
    s_s = i ;

    while (l < r)
    {
        char ch = s[l] ;
        s[l] = s[r] ;
        s[r] = ch ;
        l ++ ;
        r -- ;
    }

    char g[33] ;
    i = 0 ;
    int g_s = 0 ;
    while (y > 0)
    {
        int a = y % 2 ;
        g[i] = '0' + (a == 1) ;
        i ++ ;
        y /= 2 ;
    }
    
    g[i] = '\0' ;
    l = 0 ;
    r = i - 1 ;
    g_s = i ;
    while (l < r)
    {
        char ch = g[l] ;
        g[l] = g[r] ;
        g[r] = ch ;
        l ++ ;
        r -- ;
    }
    
    
    i = 0 ;
    int t_p = p ;
    while (p < g_s && i < n)
    {
        g[i] = g[p] ;
        i ++ ;
        p ++ ;
    }
    int j = 0 ;
    while (t_p < s_s && j < n)
    {
        g[i] = s[t_p] ;
        t_p ++ ;
        j ++ ;
        i ++ ;
    }
    g[i] = '\0' ;

    return g ;
}