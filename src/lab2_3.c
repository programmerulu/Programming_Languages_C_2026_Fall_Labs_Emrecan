#include <stdio.h>

int is_prime(int n){

    if(n<2){

        return 0;

    }

    for(int i=2;i*i<=n;i++){

        if(n%i==0)
        {

            return 0;

        }
    }
    return 1;
}

int main(void) {
    int n;
    printf("Enter an integer = ");
    scanf("%d",&n);

    if(n<2){

        printf("n must be greater than or equal to 2\n");

    }
    else{
        printf("Prime numbers up to %d: ",n);
        for(int i=2; i<=n;i++)
        {
            if(is_prime(i)){
                printf("%d ",i);
            }
        }

        printf("\n");
    }

    return 0;
}


