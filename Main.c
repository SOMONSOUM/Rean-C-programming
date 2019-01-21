#include<stdio.h>
int count=0,i;
float avg;
int count_divisible_number(int n){
    for(i=1; i<=n; i++){
        if(i%3==0){
            count++;
        }
    }
    return count;
}

float find_avg(int a, int b, int c){
    avg=(a+b+c)/3.0;
    return avg;
}

int main()
{
    printf("Find the numbers of divisible by 3 from 1 to n");

    int n;
    printf("\nPlease input a number: ");
    scanf("%d", &n);
    printf("The number which divisible by 3 from 1 to %d has %d", n, count_divisible_number(n));

    printf("\nFind the average of three numbers");

    int num1,num2,num3;
    printf("\nPlease input three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The average of %d %d %d is %.2f", num1, num2, num3, find_avg(num1,num2,num3));

    return 0;
}

