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

int isPalindrome (int a){
int tmp=0;
int tmp2=a;

while(tmp2!=0){
    tmp2=tmp2/10;
    tmp++;
    }
    tmp2=tmp;
for(int i=0;i<tmp2/2;i++){
   if(a/power(tmp-1,10)!=a%10){
        return 0;
   }
    a-=(a/power(tmp-1,10))*power(tmp-1,10);
    a=a/10;
    tmp-=2;
    }
    return 1;
}
 int isArmstrong(int num){
    int tmp =0;
    int tmp2=num;
    int ans=0;
    while(tmp2!=0){
    tmp2=tmp2/10;
    tmp++;
    }
    tmp2 =num;
    while(tmp2!=0){
        ans+=power(tmp,tmp2%10);
        tmp2/=10;
    }
    if(num==ans){
        return 1;
    }
    return 0;
 }
 