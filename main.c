#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main(){
    int x,y;
    scanf("%d%d", &x,&y);



    printf("Prime numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isPrime(i) == 1)
        printf(" ,%d",i);
    }

    printf("\nArmstrong numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isArmstrong(i) == 1)
        printf(" ,%d",i);
    }    

    printf("\nStrong numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isStrong(i) == 1)
        printf(" ,%d",i);
    }
    
    printf("\nPalindrome numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isPalindrome(i) == 1)
        printf(" ,%d",i);
    }
    
    printf("\n");

    return 0;

}