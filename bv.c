#include<stdio.h>

int main(){
    int i=0 ,n=4 , factorial=1 ;
    for(i=1 ; i<=n ; i++){
        factorial *=i ;
        printf("the factorial of %d is %d\n", n , factorial);

    }
    
    return 0;
}