#include "stdio.h"
#include "NumClass.h"

int main(){

int x,y;

printf("pls enter your first number: \n");
scanf("%d",&x);
while(x <= 0){
printf("pls enter a number that is bigger than 0: \n");
scanf("%d",&x);  
}

printf("pls enter your second number: \n");
scanf("%d",&y);
while(y < x){
printf("pls enter a number that is bigger than the first number: \n");
scanf("%d",&y); 
}



// printing armstrong nubers
printf("\n 1 the Armstrong numbers are: ");
for(int i = x; i <= y; i++){
    if(isArmstrong(i)){
        printf("%d ",i);
    }
}

 //printing palindrome numbers
printf("\n 2 the Palindrome numbers are: ");
for(int i = x; i <= y; i++){
    if(isPalindrome(i)){
        printf("%d ",i);
    }
}

// printing prime numbers
printf("\n 3 the Prime numbers are: ");
for(int i = x; i <= y; i++){
    if(isPrime(i)){
        printf("%d ",i);
    }
}
//printing strong numbers
printf("\n 4 the Strong numbers are: ");
for(int i = x; i <= y; i++){
    if(isStrong(i)){
        printf("%d ",i);
    }
}
return 0;
}

