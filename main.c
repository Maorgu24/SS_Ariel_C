#include <stdio.h>
#include "NumClass.h"

int main(){
    int x,y;
    scanf("%i%i", &x,&y);



    printf("Prime numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isPrime(i));
        printf("%i"i);
    }

    printf("\nArmstrong numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isArmstrong(i));
        printf("%i"i);
    }    

    printf("\nStrong numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isStrong(i));
        printf("%i"i);
    }
    
    printf("\nPalindrome numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isPalindrome(i));
        printf("%i"i);
    }
    
printf("\n", );

 return 0;

}