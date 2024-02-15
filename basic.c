//To check weather the character is alphabate or not
#include <stdio.h>
int check(int ch);
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    check(ch);
    if(check(ch)==1){
        printf("Alphapate");
    }
}
int check(int ch){
    if((ch>= 'A' && ch<= 'Z') || (ch>= 'a' && ch<= 'z')){
        return 1;
    }
    else{
        return 0;
    }
}


//swap two numbers without using the third variables
#include <stdio.h>
void swap(int a,int b);
int main(){
    int a,b;
    printf("Enter two numbers a and b \n");
    scanf("%d%d",&a,&b);
    printf("%d a\n",a);
    printf("%d b\n",b);
    swap(a,b);
    return 0;
}
void swap(int a, int b){
a =a +b;
b=a-b;
a= a-b;
printf("The reverce is a is %d\n",a);
printf("b is %d",b);
}

// Finding the square root of a function using squrt()
#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    float root;
    root = sqrt(num);
    printf("The square root of %d is %.4f",num,root);
    return 0;
}

// Find the number of digits in a numbers and sum them
#include <stdio.h>
int number(int num);
int sum(int num);
int main(){
    int num_1;
    printf("Enter a number");
    scanf("%d",&num_1);
    printf("The total number of digits in %d is %d\n",num_1,number(num_1));
    printf("The sum of those digits is %d",sum(num_1));
    return 0;
}
int  number(int num){
    int i=0;
    while (num != 0){
        i=i+1;
        num= num/10;
    }
    return i;
}
int sum(int num){
    int i, s=0;
    while (num != 0){
        i = num %10;
        s+=i;
        num = num/10;
    }
    return s;
}

// finding the reverse of an array
#include <stdio.h>
int main(){
    int num,j;
    printf("Enter the numbers of terms in an arrray");
    scanf("%d",&num);
    int array[num];
    int revercearray[num];
    for(int i=0;i<num;i++){
        printf("Enter the %d term",i+1);
        scanf("%d",&array[i]);
    }
    printf("{");
     for(int i=0;i<num;i++){
        printf("%d",array[i]);
        if(i<num-1){
            printf(",");
        }
    }
    printf("}");
    printf("\n");
    printf("---------The reverse of the array is----------\n");
    for(int i=num-1, j=0; i>=0; i--,j++){
        revercearray[j]= array[i];
    }
    printf("{");
    for(int i=0; i<num;i++){
        printf("%d",revercearray[i]);
        if(i<num-1){
            printf(",");
        }
    }
    printf("}");
}