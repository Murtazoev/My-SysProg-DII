#include<stdio.h>

void squeeze(char s1[] , char s2[]);

int main()
{
    char s1[] = "alijon" ;
    char s2[] = "jon" ;
    squeeze(s1 , s2) ;
}

void squeeze(char s1[] , char s2[])
{
    int i , j ;
    for (i = j = 0 ; s1[i] != '\0' ; i ++ )
    {
        bool ok = true ;
        for (int h = 0 ; s2[h] != '\0' ; h ++ )
        {
            if (s1[i] == s2[h])
            {
                ok = false ;
                break ;
            }
        }
        if (ok == true)
        {
            // printf("1 %d %d \n" , i , j) ;
            s1[j] = s1[i] ;
            j ++ ;
            // printf("2 %d %d \n\n" , i , j) ;
        }
    }
    s1[j] = '\0' ;
    printf(s1) ;
}