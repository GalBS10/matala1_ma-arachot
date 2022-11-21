#include "stdio.h"
#include "NumClass.h"

int check(int arr [] , int start , int end){
    if(start>end){
        return 1;
    }
    if(arr[start]!=arr[end]){
    return 0;
    }
        return ((check(arr,start+1,end-1))&&1);
}
int howManyDigits(int num){
    if(num>=0&&num<=9){
        return 1;
    }
    return 1+howManyDigits(num/10);
}
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


int arr [tmp];
for(int i=tmp-1;i>=0;i--){
    arr[i]=num%10;
    num=num/10;
}
return check(arr,0,tmp-1);

}
int isArmstrongRec(int num, int length){
    if(num<=9&&num>=0){
        return power(length,num);
    }
    return power(length,(num%10))+isArmstrongRec(num/10,length);
}

int isArmstrong(int num){
    int numCount = howManyDigits(num);
    if(isArmstrongRec(num,numCount)==num){
        return 1;
    }
    return 0;
}

