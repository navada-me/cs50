#include <cs50.h>
#include <stdio.h>

int main(void){
    int age = get_int("Please enter your age\n");
    int days = age * 365;
    printf("You are at least %i days old. \n", days);
}
