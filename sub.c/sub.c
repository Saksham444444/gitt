// To find the difference
#include <stdio.h>
int difference(int p, int q);
int main(){
    int num_1,num_2;
    printf("Enter the first number\n");
    scanf("%d",&num_1);
    printf("Enter the second number\n");
    scanf("%d",&num_2);
    printf("The differnce of two numbers %d and %d is %d",num_1,num_2,difference(num_1,num_2));
    return 0;
}
int difference(int p,int q){
    int c = p-q;
    return c;
} 