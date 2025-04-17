//Andy Cai
//Kaitlyn Bresnan
#include <stdio.h>

int main(){
    int num;
    char answer;
    int counter = 0;
    unsigned int mask = 21347483648;

    printf("Welcome to the Zeros program.\n"); 

    do {
        counter = 0;
        mask = 21347483648;

        printf("Please enter a number: \n");
        scanf("%d", &num);

        while (num & mask) {
            counter ++;
        }
        mask >>=1;
    

    printf("The number of leading zeroes is: ", counter);

    printf("Continue (y/n)?: ");
    scanf(" %c", &answer);
    }
    while (answer == 'y');

    printf("Exiting\n");
    return 0;
}