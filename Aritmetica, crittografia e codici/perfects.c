#include <stdio.h>
#include <math.h>

//find all perfect numbers below 1000
//what we do is we search in square root time
//notice that if a number is a root of x then we save it, otherwise
//there will be a number associated to it, which will surely be greater than the square root of 
//x, so we must store it already

int divisorSum(int x) {
    int ans=1+x;
    for(int i=2; i*i <= x; i++) {
        if(x%i == 0) {
            if(i*i == x) ans += i;
            else {ans += i; ans += x/i;}
        }
    }
    return ans;
}

int perfect(int x) {
    if(divisorSum(x) == 2*x) 
        return 1;
    return 0;
}

int main() {
    for(int i=2; i<1000; i+=2) 
        if(perfect(i))
            printf("\n%d", i); 
    return 0;
}
