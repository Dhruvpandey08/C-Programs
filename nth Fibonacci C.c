#include <stdio.h>
int fibonacci(int x);

int main(){
    int x;
    printf("Enter the nth number to find fibonacci number");
    scanf("%d",&x);
    printf("The fibonacci number for %d is %d", x, fibonacci(x));
    return 0;
}

int fibonacci(int x){
    if (x==1){
        return 0;
    }
    else if (x==2){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }

}