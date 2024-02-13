// To give the gifts based on the mark obtained by the student
#include <stdio.h>
int check(char a,char b);
int main(){
    char math,science;
    printf("Enter p if you are pass and character if you are fail in math\n");
    scanf(" %c",&math);
    printf("Enter p if you are pass and any character if you are fail in science\n");
    scanf(" %c",&science);
    check(math,science);
}
int check(char a,char b){
    if(a=='p'&& b=='p'){
        printf("congtatulation you one 45");
    }
    else if (a=='p' || b=='p'){
        printf("You won rs 15");
    }
    else {
        printf("You won nothing");
    }
}