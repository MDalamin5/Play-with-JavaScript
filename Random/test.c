#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=5; i<=200; i += 5)
        sum += i;

    printf("Sum = %d", sum);
}