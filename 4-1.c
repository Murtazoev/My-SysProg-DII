#include<stdio.h>

int strindex (char s[] , char t[]) ;

int main()
{
    char s[] = "abracadabra" ;
    char t[] = "ada" ;
    printf("%d \n" , strindex(s , t)) ;
}

int strindex(char s[] , char t[])
{
    int t_size = 0 ;
    for (; t[t_size] != '\0' ; t_size ++ )
        continue ;

    int s_size = 0 ;
    for (; s[s_size] != '\0' ; s_size ++)
        continue ;


    int ans = -1 ;
    bool ok = false ;

    for (int i = 0 ; i < s_size - t_size + 1 ; i ++ )
    {
        ok = true ;
        for (int j = i ; j < i + t_size ; j ++ )
        {
            if (s[j] != t[j - i])
            {
                ok = false ;
                break ;
            }
        }
        if (ok == true)
            ans = i ;
    }
    return ans ;
}
