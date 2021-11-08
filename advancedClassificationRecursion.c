// implement isArmstrong, isPalindrome with recursion
#include <stdio.h>
#include <math.h>

int len(int p, int l){ // counts the length of the integer
    if(p >=1) return len(p/10,l+1);
    else return l;
}

int checkPalindrome(int p, int len){
    if(len >= 2){
        int t = (int)(pow(10,len-1));
        int leftDigit = (int) p /t,RightDigit= p%10;
        int decp = (int)(p - t*leftDigit)/10;
        if (RightDigit == leftDigit) {return checkPalindrome(decp,len-2);}
        else {return 0;}
    }
    else {return 1;}
}

int isPalindrome(int p){
    int length = len(p,0);
    return checkPalindrome(p,length);
}
int checkArmstrong(int x, int length, int sum){
    if(x <1) return sum;
    else
    return checkArmstrong((int)x/10,length,sum + pow(x%10,length));
}
int isArmstrong(int x){
    int length = len(x,0);
    int t = checkArmstrong(x,length,0);
    if(t == x) return 1;
    else return 0;
}
