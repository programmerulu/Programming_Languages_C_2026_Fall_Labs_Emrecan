#include <stdio.h>

<<<<<<< HEAD
long long factorial(long n){
    long long result = 1;

    for(int i=1;i<=n;i++){
        result*=i;
    }

    return result;
=======
/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    return 1; // placeholder
>>>>>>> e8e7440f80c47790c60ade84f408eb29becd396b
}

int main(void) {
    int n;
<<<<<<< HEAD
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


=======

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, print result

    return 0;
}
>>>>>>> e8e7440f80c47790c60ade84f408eb29becd396b
