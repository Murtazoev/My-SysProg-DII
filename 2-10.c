#include<stdio.h>

char MyLower() ;

int main()
{
    char s[] = "OlIjOn" ;
    for (int i = 0 ; s[i] != '\0' ; i ++ )
    {
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] + 32) : s[i] ;
    }
    printf(s) ;
}

char myLower ()
{

}