#include <stdio.h>

long long factorial(long n){
    long long result = 1;

    for(int i=1;i<=n;i++){
        result*=i;
    }

    return result;
}

int main(void) {
    int n;
    printf("Enter a non-negative number = ");
    scanf("%d",&n);

    if(n<0){

        printf("n must be greater than or equal to 0\n");

    }
    else{
        long long result=factorial(n);
        printf("Factorial of %d is %lld\n",n,result);
    }

    return 0;
}


