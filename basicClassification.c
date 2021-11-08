// implement isStrong,isPrime
#include <stdio.h>
#include <math.h>
int isPrime(int p){
    /* ferma's little theorem
    for(int i=2; i< p-2; i++){
        long a = (long)pow((double)i, (double)p-1);
        if((a % p) != 1)
         return 0;
    }
    return 1;
    */
   if(p == 0) return 0;
   for(int i=2; i<= sqrt(p)+1; i++){
       if(p % i == 0) return 0;
   }
   return 1;
}


int factorial(int n){
    if(n==0) return 1;
    int fact=1;
    for(int i=2; i <= n; i++){
        fact = i*fact;
    }
    return fact;
}


int isStrong(int s){
    int temp1 = s,f;
    int factorialDigitSum =0;
    for(int index=0; temp1 >= 1; index++){
        int digit = (int)temp1 % 10;
        f = factorial(digit);
        factorialDigitSum = factorialDigitSum + f;
        temp1 = (int)temp1/10;
    }
    if(factorialDigitSum == s){
        return 1;
    }
    else return 0;

}
