#include "stdio.h"
#include "NumClass.h"

int isPrime(int num){
    int run = 2;
    while(run<num){
        if((num%run)==0){
            return 0;
        }
        run++;
    }
    return 1;
}

int factorial(int num){
    if(num==1){
        return 1;
    }
    return num*(factorial(num-1));
}

int isStrong(int num){
    int flag = num;
    int sum=0;
    while(num>0){
        int mod = num%10;
        sum += factorial(mod);
        num=num/10;
    }
    if(sum==flag){
        return 1;
    }
    return 0;
}

