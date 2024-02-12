//Use functio  to return the sum of two numbers
#include <stdio.h>
int sum(int a, int b);
int main(){
    int num_1,num_2;
    printf("Enter the first number\n");
    scanf("%d",&num_1);
    printf("Enter the second number\n");
    scanf("%d",&num_2);
    printf("The sum of two numbers %d and %d is %d",num_1,num_2,sum(num_1,num_2));
    return 0;
}
int sum(int a,int b){
    int c = a+b;
    return c;
}