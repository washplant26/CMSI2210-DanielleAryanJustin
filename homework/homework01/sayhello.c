#include <stdio.h>
#include <stdlib.h>
int main(){
    char userName[] = "";
    printf("What is your name?: ");
    gets(userName);
    printf("Hello, %s\n", userName);
}