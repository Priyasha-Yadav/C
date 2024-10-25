// // //Fibonnaci

// // #include <stdio.h>

// // int main(){
// // int steps;
// // int a=0,b=1,c;
// // printf("Enter the number of Steps: ");
// // scanf("%d", &steps);
// // if(steps<=0){
// //     printf("-1\n");
// // }
// // else if(steps==1){
// //     printf("0\n");
// // }

// // else{
// //      printf("0\n");
// //     printf("1\n");
// //     for(int i=1;i<=steps-2;i++){
// // c=a+b;
// // a=b;
// // b=c;
// // printf("%d\n",c);

// //     }
// // }
// //         return 0;
// // }

// //Armstrong
// #include <stdio.h>
// #include <math.h>
// int count_digits(int num)
// {
//     int count = 0;
//     while (num != 0)
//     {
//         count++;
//         num = num / 10;
//     }
//     return count;
// }

// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     int sum = 0, remainder = 0;
//     int original_number = num;
//     int digits_count = count_digits(num);
//     while (original_number != 0)
//     {
//         remainder = original_number % 10;
//         sum += pow(remainder, digits_count);
//         original_number = original_number / 10;
//     }
//     if (num == sum)
//     {

//         printf("Armstrong \n");
//     }
//     else
//     {
//         printf("Not Armstrong \n");
//     }

//     return 0;
// }

// Palindrome
#include <stdio.h>
#include <string.h>


int main(){
char string[10]="MaM", reverse[10];
int i;
for(i=0;i<=strlen(string);i++){
    reverse[i]=string[strlen(string)-i-1];

}
reverse[strlen(string)]='\0';

if(strcmp(string,reverse)==0){
    printf("Palindrome\n");
}
else{
    printf("Not Palindrome\n");
}

    return 0;
}