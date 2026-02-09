#include<stdio.h>

int main()
{
    char s[] = "2AF" ;
    int cnt = 0 ;
    for (int i = 0 ; s[i] != '\0' ; i ++ )
    {
        if (s[i] == ' ')
            continue ;
        if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F') || (s[i] >= 'a' && s[i] <= 'f'))
            cnt ++ ;
    }
    cnt -- ;
    int exp = 1 ;
    while (cnt -- )
        exp *= 16 ;
    int ans = 0 ;

    for (int i = 0 ; s[i] != '\0' ; i ++ )
    {   
        if ((s[i] >= '0' && s[i] <= '9'))
        {
            int a = s[i] - '0' ;
            ans += a * exp ;
            exp /= 16 ;
            continue ;
        }
        if ((s[i] >= 'A' && s[i] <= 'F') || (s[i] >= 'a' && s[i] <= 'f'))
        {
            if ((s[i] == 'F') || (s[i] == 'f'))
                ans += 15 * exp ;
            else if ((s[i] == 'E') || (s[i] == 'e'))
                ans += 14 * exp ;
            else if ((s[i] == 'D') || (s[i] == 'd'))
                ans += 13 * exp ;
            else if ((s[i] == 'C') || (s[i] == 'c'))
                ans += 12 * exp ;
            else if ((s[i] == 'B') || (s[i] == 'b'))
                ans += 11 * exp ;
            else if ((s[i] == 'A') || (s[i] == 'a'))
                ans += 10 * exp ;
            
            exp /= 16 ;
        }
    }
    printf("The converted number would be : %d \n" , ans);
}