#include <math.h>
# include <stdio.h>
#include "NumClass.h"

int factorial(int x){
    int fac = 1;
    for(int i = 2; i <= x; i++)
    fac = fac*i;
    return fac;
}
int isPrime(int num)
{
    for (int i=2; i<num ; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
   return 1;
}

int isStrong(int num)
{
    int sum=0;
    int temp = 1;
    int num1= num;
    do{
    for(int i=1; i<=num%10;i++)
    {
        temp*=i;
    }
    num = num/10;
    sum +=temp;
    temp =1;
    } while(num!=0);
    if(sum==num1)
    {return 1;}
    else{return 0;}
}