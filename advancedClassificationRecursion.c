#include "stdio.h"
#include "NumClass.h"

int power(int pow, int base){
    if(pow==0){
        return 1;
    }
    int n=base;
    for(int i=1;i<pow;i++){
        base*=n;
    }
    return base;
 }



int isPalindrome(int num){

int tmp=0;
int tmp2=num;
int ans=0;
int num2=0;

while(tmp2!=0){//check how many digits there are in num
    tmp2=tmp2/10;
    tmp++;
    }
    if(tmp==1){//stop condition
        return 1;
    } 
    num2=num-(num/power(tmp-1,10))*power(tmp-1,10);//cut the most sagnificent digit
    num2=num2/10;//cut the least sagnificent digit
    printf("%d \n",num2);
    if(num/(power(tmp-1,10))==num%10){//check if the most and last sagnificent digits are equal
        printf("%d \n",num/power(tmp-1,10)==num%10);
        return (1 && isPalindrome(num2));
    }
    return 0;
    }

