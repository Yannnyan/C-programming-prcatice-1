#include <stdio.h>   
#include <assert.h>
#include "NumClass.h"
int main(){
    int a,b;
     scanf("%d", &a); scanf("%d", &b);
     int min = a <= b ? a : b;
     int max = a >= b ? a : b;
     int temp =min;
      printf("The Armstrong numbers are:");
     while(temp <= max){
         int tempArmstrong = isArmstrong(temp);
         if(tempArmstrong == 1) {printf(" %d",temp);}
         temp+=1;
     } 
      temp =min;
     printf("\nThe Palindromes are:");
     
     while(temp <= max){
         int tempPalindrome = isPalindrome(temp);
         if(tempPalindrome == 1){printf(" %d", temp);}
         temp+=1;  
     } 
      temp =min;
     printf("\nThe Prime numbers are:");
     
     while(temp <= max){
         int tempprime = isPrime(temp);
         if(tempprime == 1) {printf(" %d",temp);}
         temp+=1;
     } 

     temp =min;
     printf("\nThe Strong numbers are:");
     
     while(temp <= max){
         int tempStrong = isStrong(temp);
         if(tempStrong == 1){printf(" %d",temp);}
         temp+=1;
     }
     }

