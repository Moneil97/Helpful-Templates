#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getDigitNumber(int num){
    int digits =0;
    while (num){
        digits++;
        num/=10;
    }

    return digits;
}

int getNthDigit(int num, int dig){
    return (int)(num/pow(10, getDigitNumber(num)-dig-1))%10;
}

int getNthDigit2(int num, int dig, int digits){
    return (int)(num/pow(10, digits-dig-1))%10;
}


int isPal(int m){

    int digits = getDigitNumber(m);
    int i=0;
    for (; i<digits/2;i++){
        if (getNthDigit(m,i,digits) != getNthDigit(m,digits-i-1,digits))
            return 0;
    }

    return 1;

}

int isPrime(int m){
    int i=2;
    for (;i*i<m;i++)
        if (m%i == 0)
            return 0;
    return 1;
}
