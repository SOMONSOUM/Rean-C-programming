#include<stdio.h>
float avg;
float find_avg(int a, int b, int c){
    avg=(a+b+c)/3.0;
    return avg;
}

int main()
{
    int num1,num2,num3;
    printf("Please input three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%.2f", find_avg(num1,num2,num3));

    return 0;
}
