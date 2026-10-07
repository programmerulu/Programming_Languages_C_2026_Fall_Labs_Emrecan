#include <stdio.h>

<<<<<<< HEAD
int sum_to_n(int n){
    int sum=0;
    for(int i=0; i<=n;i++){
        sum+=i;
    }
    return sum;
=======
/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    // TODO: implement sum with a for loop
    return 0; // placeholder
>>>>>>> e8e7440f80c47790c60ade84f408eb29becd396b
}

int main(void) {
    int n;
<<<<<<< HEAD
    printf("Enter a positive integer number= ");
    scanf("%d",&n);
    if(n<1){

        printf("Error: N must be greater than or equal to 1 \n");

    }

    else {
        int result= sum_to_n(n);
        printf("Sum from 1 to %d is %d\n",n,result);
    }

    return 0;
}


=======

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, and print result

    return 0;
}
>>>>>>> e8e7440f80c47790c60ade84f408eb29becd396b
