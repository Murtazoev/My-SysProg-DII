#include<stdio.h>
#include<float.h>
#include<limits.h>

int main()
{
    printf("Signed char -> min: %11d , max %d \n" , SCHAR_MIN , SCHAR_MAX) ;
    printf("UnSigned char -> min: %11d , max %d \n" , 0 , UCHAR_MAX) ;
    printf("Signed short -> min: %11d , max %d \n" , SHRT_MIN , SHRT_MAX) ;
    printf("UnSigned short -> min: %11d , max %d \n" , 0 , USHRT_MAX) ;
    printf("Signed long -> min: %11d , max %d \n" , LONG_MIN , LONG_MAX) ;
    printf("UnSigned long -> min: %11d , max %d \n" , 0 , ULONG_MAX) ;
    printf("Float -> min: %11d , max %d \n" , FLT_MIN , FLT_MAX) ;
    printf("Double -> min: %11d , max %d \n" , DBL_MIN , DBL_MAX) ;

}