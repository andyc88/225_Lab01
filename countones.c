//Andy Cai
//Kaitlyn Bresnan
#include <stdio.h>

int main(){
    char answer;
    int counter = 0;
    int mask = 1;
    int var;
    int result;
    
    printf("Welcome to the CountOnes program. \n");
    start:
    printf("Please enter a number: \n" );
    scanf("%d", &var);

   while(var != 0){
        result = var & mask;
            if (result = 1){
                counter++;
            } else { 
        var>>1;
        }
    }
    return counter;

    printf("The number of bits set is: ", counter);
    printf("Continue (y/n)?: ");
    scanf(" %c", &answer);

    if(answer == "y"){
        goto start;
    } else {
        printf("Exiting");
    }

    return 0;
}