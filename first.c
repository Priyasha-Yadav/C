
// #include <stdio.h>

// int main() {
//     int num1;
//     int num2;

// printf("Enter the first number: ");
// scanf("%d", &num1);

// printf("Enter the second number: ");
// scanf("%d", &num2);

// printf("%d\n", num1 + num2);

//     int num3 = num1+num2;
//     printf("%d \n",num3);

//     return 0;
// }

// #include <stdio.h>
// int main(){
// float side;
// printf("Enter the length of side: ");
// scanf("%f", &side);

// printf("Area: %f\n", side*side);

// return 0;

// }

// #include <stdio.h>
// int main(){
// float radius, area;
// printf("Enter the radius: %f", radius);
// scanf("%f", &radius);
// area = 3.141 * radius * radius;
// printf("Area: %.2f\n", area );

//     return 0;
// }

// #include <stdio.h>
// int main(){
// float radius;
// printf("Enter the radius: ");
// scanf("%f", &radius);
// printf("Area: %.2f\n", 3.141 * radius * radius );

//     return 0;
// }

// Online C compiler to run C program online
// #include <stdio.h>
// //void main(){}
// int main() {
// int i;
// for (i = 1; i <= 10; ++i) {
//   printf("%d\n", i);
// }

// }

// #include <stdio.h>
// int main(){
//     int i = 0;

//     while(i<=10){
//         printf("%d\n", i);
//         i= i+2;
//     }
// int age =19;
// if(age>18){
//     printf("Age is greater than 18");
// }
// else {printf("Age is less than 18");}
// }

// #include <stdio.h>
// int main(){
// int intnumber1= 34;
// int intnumber2 =42;
// float fnumber1= 34.32;
// float fnumber2 = 23.34;
// char ch1='a';
// char ch2 ='b';

// printf("%d\n",intnumber1+intnumber2);
// printf("%d\n",intnumber1*intnumber2);
// printf("%d\n",intnumber1-intnumber2);
// printf("%d\n",intnumber1%intnumber2);
// printf("%d\n\n\n",intnumber1/intnumber2);

// printf("%f\n",fnumber1+fnumber2);
// printf("%f\n",fnumber1-fnumber2);
// printf("%f\n",fnumber1/fnumber2);
// printf("%f\n\n\n",fnumber1*fnumber2);

// printf("%d\n",ch1+ch2);
// printf("%d\n",ch1%ch2);
// printf("%d\n",ch1-ch2);
// printf("%d\n",ch1*ch2);
// printf("%d\n\n\n",ch1/ch2);

// printf("%d\n",ch1+intnumber1);
// printf("%d\n",fnumber1+intnumber1);
// printf("%d\n",ch1+fnumber2);
// printf("%d\n\n\n",ch1+intnumber2);

// printf("%d\n",ch1-intnumber1);
// printf("%d\n",fnumber1-intnumber1);
// printf("%d\n",ch1-fnumber2);
// printf("%d\n\n\n",ch1-intnumber2);

// printf("%d\n",ch1*intnumber1);
// printf("%d\n",fnumber1*intnumber1);
// printf("%d\n",ch1*fnumber2);
// printf("%d\n\n\n",ch1*intnumber2);

// printf("%d\n",ch1/intnumber1);
// printf("%d\n",fnumber1/intnumber1);
// printf("%d\n",ch1/fnumber2);
// printf("%d\n\n\n",ch1/intnumber2);

// printf("%d\n",ch1%intnumber1);
// // printf("%d\n",fnumber1%intnumber1);
// // printf("%d\n",ch1%fnumber2);
// printf("%d\n\n\n",ch1%intnumber2);
//  }//

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char one [10]= "hello";
//   char two[8] = "world \n";
//   strcat(one, two);
//     printf("%s",one);

// int i;
// for (i = 0; i < strlen(one); ++i) {
//   printf("%c\n", one[i]);
// }
//     return 0;
// }

// #include <stdio.h>

// int main() {

// printf("%d \n", 8/2);
// printf("%f \n", 8/2);
// printf("%f\n", 8.2/2);

// int arr[5] = {1,2,3,4,5};
// printf("%d",arr[0]);
// int i;
// for(i=0; i<sizeof(arr);i++){
//     printf("%c\n",arr[i])
// }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char one = 'a';
//     char two = 'b';
//     int sum = one + two;

//     printf("%d\n", sum);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//   int time = 20;
//   int a = (time < 18) ?
//     printf("Good day."):
//     printf("Good evening.");

//   return 0;
// }
//<stdbool.h>

// #include <stdio.h>
// int main(){
// int intnumber1= 10;
// float fnumber1= 2.5;
// char ch1='c';
// char ch2[] ="dd";
// printf("%i\t",intnumber1);
// printf("%.1f\t",fnumber1);
// printf("%c\t",ch1);
// printf("%s\n",ch2);

// float sum =intnumber1+fnumber1;
// float sub =intnumber1-fnumber1;
// int mul =intnumber1*fnumber1;
// float div =intnumber1/fnumber1;

// printf("%.1f \n", sum);
// printf("%.1f \n", sub);
// printf("%.i \n", mul);
// printf("%.1f \n", div);

// // printf("%i\t",intnumber1+ch1);
// // printf("%f\t",ch1+fnumber1);

// return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int i ;
//     int sum=0;
//     int arr[7]={4,3,2,1,7,8,6};
// int length= sizeof(arr)/sizeof(arr[0]);
// for(i=0;i<length;i++){
// sum =sum +arr[i];

// }
//     printf("Sum: %d \n",sum);

// }

// #include <stdio.h>
// int main()
// {
//     int sum=0;
//     int i;
//     int arr[]={4,3,2,1,7,8,6};
//     for(i=0;i<7;i++)
//     {
//         sum=sum+arr[i];

//     }
    
// printf("%d",sum);
// }

// Reverse a Number
// Write a program to reverse a given integer.


// Palindrome Check
// Write a program to check whether a given number is a palindrome.


// Sum of Digits
// Write a program to find the sum of digits of given number.
// #include <stdio.h>
// int main(){
//     int number;
//     int sum=0;
//     int remainder;
//     printf("Enter the number: ");
//     scanf("%d", &number);
// while(number != 0){
// remainder= number%10;
// number = (number - remainder)/10;
// sum += remainder;
// }
// printf("%d \n", sum);

//}

// GCD of Two Numbers
// Write a program to find the greatest common divisor (GCD) of two numbers.


// LCM of Two Numbers
// Write a program to find the least common multiple (LCM) of two numbers.


// String Length
// Write a program to find the length of a string without using the built-in strlen function.


// String Reverse
// Write a program to reverse a string.


// Find the Second Largest Number in an Array
// Write a program to find the second-largest number in an array.


// Check Armstrong Number
// Write a program to check whether a given number is an Armstrong number.


// Check the Alphabetic Order of Two Strings
// Write a program to check whether two strings are in alphabetic order.



// #include <stdio.h>
// int num =10;

//     int number(){
//         float num =30.289698;
//     printf("%f\n", num);
//     return 0;
// }
// int main(){
//     int num = 20;
//     printf("%d\n", num);
//     number();

//         return 0;



// int one() {
//     printf("One");
//     return 32.3;
// }

// int main() {
//     printf("Two");
// int num = one();
// printf("%d", num);
//     return 32.2;
// }
// }

#include <stdio.h>

int factorial (int number){
    // int fact =1;
    // for(int i=1; i<=number; i++){
    //     fact *=i;
    // }
    if (number == 1){
        return 1;
    }
    else{
    return number*factorial(number-1);}

}



int main(){
    int number;
    printf("Enter input: ");
    scanf("%d", &number);
int fact = factorial(number);
    printf("%d", fact);

return 0;
}

