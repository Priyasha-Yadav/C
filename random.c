#include <stdio.h>

int main(){
    int gnumb;
    printf("Enter the number: ");
    scanf("&d",gnumb);
    int num = 84;
    if(gnumb<num)
    printf("Higher ");
    else if (gnumb>num){
        printf("Lower ");
    }
    else if(num==gnumb){
        printf("You Guessed right");
    }
    



    return 0;
}