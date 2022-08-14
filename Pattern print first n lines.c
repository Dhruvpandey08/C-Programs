#include <stdio.h>
void patternprint(int n);

int main(){
    int n=3;
    patternprint(n);
    return 0;
} 

void patternprint(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    patternprint(n-1);
    for (int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
