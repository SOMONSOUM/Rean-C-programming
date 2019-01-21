#include<stdio.h>
int count=0,i;
int count_divisible_number(int n){
    for(i=1; i<=n; i++){
        if(i%3==0){
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Please input a number: ");
    scanf("%d", &n);
    printf("The number which divisible by 3 from 1 to %d has %d", n, count_divisible_number(n));
}
