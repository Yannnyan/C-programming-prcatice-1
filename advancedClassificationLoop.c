// implement isArmstrong, isPalindrome
#include <math.h>
#include <stdio.h>

int length(int p){
    int len=0, temp =p;
    while(temp >=1){
        len+=1; temp = (int)temp/10;
    }
    return len;
}
int isPalindrome(int p){
    int temp =p, len=length(p);
        while(temp >= 10){
        int t=pow(10,len-1);
        int digitLeft = (int)(temp / t) ,digitRight= temp % 10;
        if(digitLeft != digitRight) return 0;
        temp = (int)(temp - digitLeft * t)/ 10;
        len -=2;
    }
    return 1;
}
int isArmstrong(int x){
    int n = length(x), temp=x,sum=0;
        for(int i=0; i<n; i++){
        int digit = temp%10;
        sum = sum + pow(digit,n);
        temp = (int)(temp/10);
    }
    if(sum == x)return 1;
    else return 0;
}

