//C program
#include <stdio.h>
int reverse_number(int a);
int no_digits(int a);
int individual_digits(int a,int array[]);
int sum_adigits(int array[],int size);
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int array[no_digits(num)];
    printf("The reveerse of the number %d is %d", num,reverse_number(num));
    printf("The total number of digits in number %d is %d",num,no_digits(num));
    printf("The sum of the individual digits of number %d is %d", num,sum_adigits(individual_digits(num,array),no_digits(num)));
   
}
//function to calculate reverese of the digits
int reverse_number(int a){
    int sum=0,ind;//ind indicate the individual digits of the number
    while(a!=0){
        ind = a %10;
        sum= sum*10+ind;
        a=a/10;
    }
    return sum;
}
//Function to calcualte the number of digits
int no_digits(int a){
    int count=0;//It counts the number of digits
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    
    return no_digits;
}
//Function to store the individual digits in an array
int individual_digits(int a, int array[]){
    int j;
     for(int i=0;i<no_digits(a);i++){
        j=a%10;
        array[i]=j;
        j=a/10;
     }   
     return *array;
    }
    int sum_adigits(int array[], int size){
        int sum=0;
        for(int i=0;i<size;i++){
            sum+= array[i];
        }
        return sum;

    }
