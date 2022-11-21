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


// printing prime numbers
printf("the Prime numbers between %d and %d are: ",x,y);
for(int i = x; i <= y; i++){
    if(isPrime(i)){
        printf("%d , ",i);
    }
}

// printing armstrong nubers
printf("the Armstrong numbers between %d and %d are: ",x,y);
for(int i = x; i <= y; i++){
    if(isArmstrong(i)){
        printf("%d , ",i);
    }
}

//printing strong numbers
printf("the Strong numbers between %d and %d are: ",x,y);
for(int i = x; i <= y; i++){
    if(isStrong(i)){
        printf("%d , ",i);
    }
}
 //printing palindrome numbers
printf("the Palindrome numbers between %d and %d are: ",x,y);
for(int i = x; i <= y; i++){
    if(isPalindrome(i)){
        printf("%d , ",i);
    }
}
return 5;
}
