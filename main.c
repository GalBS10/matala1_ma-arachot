#include "stdio.h"
#include "NumClass.h"

int main(){

int x,y;

scanf("%d",&x);
while(x <= 0){
scanf("%d",&x);  
}


scanf("%d",&y);
while(y < x){
scanf("%d",&y); 
}



// printing armstrong nubers
printf("\nThe Armstrong numbers are:");
for(int i = x; i <= y; i++){
    if(isArmstrong(i)){
        printf(" %d",i);
    }
}

 //printing palindrome numbers
printf("\nThe Palindrome numbers are:");
for(int i = x; i <= y; i++){
    if(isPalindrome(i)){
        printf(" %d",i);
    }
}

// printing prime numbers
printf("\nThe Prime numbers are:");
for(int i = x; i <= y; i++){
    if(isPrime(i)){
        printf(" %d",i);
    }
}
//printing strong numbers
printf("\nThe Strong numbers are:");
for(int i = x; i <= y; i++){
    if(isStrong(i)){
        printf(" %d",i);
    }
}
printf("\n");
return 0;
}

