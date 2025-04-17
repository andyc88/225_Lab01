//Andy Cai
//Kaitlyn Bresnan
#include <stdio.h>

int main(){
    int num;
    char answer;
    int counter = 0;
    int mask = 1;
    int var;
    int result;
    
    printf("Welcome to the CountOnes program. \n");
    start:
    printf("Please enter a number: \n" );
    scanf("%d", &num);

   while(var != 0){
        result = var & mask;
            if (result = 1){
                var>>1;
            } else { 
        return counter;
        }
    }

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