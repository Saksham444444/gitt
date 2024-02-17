// Understanding the use of goto statment to end or continue
#include <stdio.h>
int main()
{
    int num;
    printf("Hi My name is Saksham\n");
    printf("Enter any key if you want to come my house and entery 0 if you dont want to come");
    scanf("%d", &num);
    if (num == 0)
    {
        goto bye;// If you enter 0 it will direct you to the end of the program and nothing wll be printed
    }
    else
    {
        goto welcome;// it will take you to welcome and the line  below will be priented
    }
welcome:
    printf("HAppy to see you here in my house. Hope you will have  great time here.\n");
bye:
    return 0;
}
