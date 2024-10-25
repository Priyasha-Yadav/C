// C Programming Practice Questions

// 1. Hello World Program
// Write a program to print "Hello, World!" on the screen.

// #include <stdio.h>
// int main(){
//     printf("Hello, World! \n");
//     return 0;
// }

// 2. Sum of Two Numbers
// Write a program to find the sum of two numbers the user enters.

// #include <stdio.h>
// int main(){
//     int number1, number2;
//     printf("Enter the first number: ");
//     scanf("%d", &number1);
//     printf("Enter the second number: ");
//     scanf("%d", &number2);
// printf("Sum: %d\n", number1+number2);
// }



// 3. Largest of Two Numbers
// Write a program to find the largest of two numbers.
// #include <stdio.h>
// int main(){
//     int number1, number2;
//     printf("Enter the first number: ");
//     scanf("%d", &number1);
//     printf("Enter the second number: ");
//     scanf("%d", &number2);
//     if(number1>=number2){
//         printf("%d \n", number1);
//     }
//     else{
//         printf("%d \n", number2);
//     }

// }

// 4. Even or Odd
// Write a program to check whether a given number is even or odd.

// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter the number: ");
//     scanf("%d", &number);
//     if(number%2==0){
//         printf("The number is even \n");
//     }
//     else{
//         printf("The number is odd \n");
//     }
// }

// 5. Factorial of a Number
// Write a program to calculate the factorial of a given number.
// #include <stdio.h>
// int main(){
//     int num, i, factorial =1;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     for(i=1;i<=num;i++){
//         factorial *=i;
//     }
//     printf("%d \n", factorial);
// }

// 6. Reverse a Number
// Write a program to reverse a given integer.

// #include <stdio.h>

// int main() {
//     int number, reversed = 0, remainder=0;

//     printf("Enter the number: ");
//     scanf("%d", &number);
//     int original_number = number;

//     while (number != 0) {
//         remainder = number % 10;      
//         reversed = reversed * 10 + remainder; 
//         number = number / 10;         
//     }

//     printf("Reversed number: %d\n", reversed);

//     return 0;
// }

// // 7. Palindrome Check
// // Write a program to check whether a given number is a palindrome.

#include <stdio.h>

int main() {
    int number, remainder, reversed = 0; 
    printf("Enter the number: ");
    scanf("%d", &number);

    int originalNumber = number; 

    while (number != 0) {
        remainder = number % 10;         
        reversed = reversed * 10 + remainder; 
        number = number / 10;              
    }

if(originalNumber==reversed){
    printf("Palindrome \n");
}

else{
    printf("Not Palindrome \n");
}
    return 0;
}





// #include <stdio.h>
// #include <string.h>
// int main(){

//     int i;
//     char string[5]="MOM";
//     char reverse[5];
//     for (i = 0; i < strlen(string); i++) {
//  reverse[i] = string[strlen(string) - 1 - i];
//     }
//     reverse[i] = '\0';
//     if(strcmp(string,reverse)==0){
//         printf("Palindrome\n");
//     }
//     else{
//         printf("Not a Plaindrome\n");
//     }
//     return 0;
// }



// 8. Sum of Digits
// Write a program to find the sum of digits of a given number.
// #include <stdio.h>
// int main(){
// int number=123;
// int sum =0;
// int remainder,i;
// for(i=0;i<3;i++){
//         remainder=number%10; // 3
//         number = (number -remainder)/10;//123 -3
//         sum+=remainder;
// }
// printf("%d \n",sum);
// }

// 9. Prime Number Check
// Write a program to check whether a given number is prime.

// #include <stdio.h>
// int main(){
//     int number, i;
//     int factors = 0;
//     printf("Enter the number: ");
//     scanf("%d", &number);
//     for(i=2; i<number; i++){
//         if(number%i == 0){
//             factors++;
//         }
//     }
//     if(factors>=1){
//     printf("The number %d is not Prime\n", number);
//     }
//     else{
//     printf("The number %d is Prime \n", number);

//     }
// }
// 10. Fibonacci Sequence
// Write a program to print the Fibonacci sequence up to a given number of terms.
// #include <stdio.h>
// int main(){
// int a=0;
// int b=1;
// int i,c, steps;
// printf("Enter the number of steps: ");
// scanf("%d", &steps);
// printf("%d\n",a);
// printf("%d\n",b);
// for(i=0; i<steps-2;i++){
//     c=a+b;
//     a=b;
//     b=c;
//     printf("%d \n",c);
// }

// }

// 11. GCD of Two Numbers
// Write a program to find the greatest common divisor (GCD) of two numbers.

//#include <stdio.h>
// int main(){
//     int num1, num2, i, min, max =0;
//     printf("Enter the first number: ");
//     scanf("%d",&num1);
//     printf("Enter the second number: ");
//     scanf("%d",&num2);
//     if(num1>num2){
//         min =num2;
//     }
//     else{
//         min = num1;
//     }

//     for(i=1;i<=min;i++){
//         if(num1%i == 0 && num2%i==0){
//             max=i;
//         }
//     }
//     printf("GCD: %d\n",max);
//     return 0;
// }


// 12. LCM of Two Numbers
// Write a program to find the least common multiple (LCM) of two numbers.

// #include <stdio.h>

// int main() {
//     int num1, num2, i, max, lcm;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     if (num1 > num2) {
//         max = num1;
//     } else {
//         max = num2;
//     }

//     for (i = max; ; i += max) {
//         if (i % num1 == 0 && i % num2 == 0) {
//             lcm = i;
//             break;
//         }
//     }

//     printf("LCM: %d\n", lcm);

//     return 0; 
// }


// 13. Leap Year Check
// Write a program to check whether a given year is a leap year.
// #include <stdio.h>
// int main(){
// int year; 
// printf("Enter the year: ");
// scanf("%d", &year);

// if((year%4==0 & year%100!=0) ||(year%400 == 0)){
//     printf("The year is a leap year \n");
// }
// else{
//         printf("The year not a leap year \n");

// }
// return 0;
// }


// 14. Simple Calculator
// Write a program to create a simple calculator that can add, subtract, multiply, and divide two numbers.

// #include <stdio.h>

// int main() {
//     int number1, number2;
//     char operation;

//     printf("Enter the first number: ");
//     scanf("%d", &number1);

//     printf("Enter the second number: ");
//     scanf("%d", &number2);

//     while (getchar() != '\n');

//     printf("Enter the operation to be performed (+, -, *, /): ");
//     scanf("%c", &operation);

//     if (operation == '+') {
//         printf("Result: %d\n", number1 + number2);
//     } else if (operation == '-') {
//         printf("Result: %d\n", number1 - number2);
//     } else if (operation == '*') {
//         printf("Result: %d\n", number1 * number2);
//     } else if (operation == '/') {
//         if (number2 != 0) {
//             printf("Result: %d\n", number1 / number2);
//         } else {
//             printf("Error: Division by zero.\n");
//         }
//     } else {
//         printf("Error: Invalid operation.\n");
//     }

//     return 0;
// }


// 15. Sum of Array Elements
// Write a program to find the sum of all elements in an array.
// #include <stdio.h>
// int main(){
// int arr[3]={1,2,3};
// int sum=0;
// int i;
// int length=sizeof(arr)/sizeof(arr[0]);
// for(i=0;i<length;i++){
// sum+=arr[i];
// }
// printf("Sum: %d\n", sum);
// }

// 16. Largest Element in an Array
// Write a program to find the largest element in an array.
// #include <stdio.h>
// int main(){
// int arr[7]={1,2,3,5,6,8,9};
// int i;
// int length= sizeof(arr)/sizeof(arr[0]);
// int max= arr[0];
// for(i=0;i<length;i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
// }
// printf("%d \n", max);

// }
// 17. String Length
// Write a program to find the length of a string without using the built-in strlen function.
// #include <stdio.h>

// int main(){
//     char string[4]="abcd";
// int i=0;
// while(string[i]!='\0'){
//     i++;
// }
// printf("%d\n",i);
// }

// 18. String Reverse
// Write a program to reverse a string.
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int i;
//     char string[5]="Hola";
//     char reverse[5];
//     for (i = 0; i < strlen(string); i++) {
//  reverse[i] = string[strlen(string) - 1 - i];
//     }
//     reverse[i] = '\0';
//     printf("%s\n",reverse);
//     return 0;
// }


// 19. Swapping Two Numbers
// Write a program to swap two numbers without using a third variable.
// #include <stdio.h>
// int main(){
// int num1=1;
// int num2=2;
// num2=num1+num2;
// num1=num2-num1;
// num2=num2-num1;
// printf("%d\n", num1);
// printf("%d\n", num2);

// }

// 20. Swap Two Numbers Using Third Variable
// Write a program to swap two numbers using a third variable.
// #include <stdio.h>
// int main(){
// int num1= 1;
// int num2= 2;
// int num3 =num2;
// num2 = num1;
// num1 = num3;
// printf("%d\n", num1);
// printf("%d\n", num2);

// }

// 21. ASCII Value of a Character
// Write a program to find and print the ASCII value of a character.
// #include <stdio.h>
// int main() {
//     char character;

//     printf("Enter a character: ");
//     scanf("%c", &character);

//     printf("The ASCII value is %d\n", (int)character);

//     return 0;
// }


// 22. Convert Celsius to Fahrenheit
// Write a program to convert temperature from Celsius to Fahrenheit.
// #include <stdio.h>
// int main(){
// int celcius; 
// float fahrenheit; 
// printf("Temperature in Celcius: ");
// scanf("%i", &celcius);
// fahrenheit= ((9.0/5.0)* celcius)+32;
// printf("Temperature in Fahrenheit: %.1f \n", fahrenheit);
//return 0;

// }

// 23. Convert Fahrenheit to Celsius
// Write a program to convert temperature from Fahrenheit to Celsius.
// #include <stdio.h>
// int main(){

// float celcius; 
// int fahrenheit; 
// printf("Temperature in Fahrenheit: ");
// scanf("%i", &fahrenheit);
// celcius = (fahrenheit- 32) * (5.0/9.0) ;
// printf("Temperature in Celcius: %.1f \n", celcius);
// return 0;
// }

// 24. Sum of First N Natural Numbers
// Write a program to calculate the sum of the first N natural numbers.
// #include <stdio.h>
// int main(){
// int sum=0;
//  int number;
// int i;
//     printf("Enter the value for N: ");
//     scanf("%d", &number);
// for(i=1;i<=number;i++){
// sum+=i;
// }
// printf("Sum: %d\n", sum);}


// 25. Check Vowel or Consonant
// Write a program to check whether a given character is a vowel or consonant.
// #include <stdio.h>
// int main(){
// char charac;
// printf("Enter the Aplabet: ");
// scanf("%c", &charac);
//     if(charac =='a' ||charac =='e'|| charac =='i'|| charac =='o'|| charac =='u' ){
//         printf("Vowel\n");
//     }
//     else{
//         printf("Consonant\n");

//     }
// }

// 26. Check Alphabet, Digit, or Special Character
// Write a program to check whether a character is an alphabet, digit, or special character.

// #include <stdio.h>

// int main() {
//     char charac;

//     printf("Input: ");
//     scanf("%c", &charac);

//     if ((charac >= 65 && charac <= 90) || (charac >= 97 && charac <= 122)) {
//         printf("Character\n");
//     } else if (charac >= 48 && charac <= 57) {
//         printf("Number\n");
//     } else if ((charac >= 32 && charac <= 47) || 
//                (charac >= 58 && charac <= 64) || 
//                (charac >= 91 && charac <= 96) || 
//                (charac >= 123 && charac <= 126)) {
//         printf("Special Character\n");
//     } else {
//         printf("Invalid Input\n");
//     }

//     return 0;
// }


// 27. Count the Number of Digits in an Integer
// Write a program to count the number of digits in a given integer.
// #include <stdio.h>

// int main() {
//     int number;
//     int remainder, count = 0;
    
//     printf("Enter an integer: ");
//     scanf("%d", &number);
// while (number != 0) {
//         remainder = number % 10;
//         number = (number-remainder)/10 ;
//         count++;
//     }
// printf("%d \n", count);

// }


// 28. Reverse a String
// Write a program to reverse a given string.

// #include <stdio.h>
// #include <string.h>
// int main(){
//     int i;
//     char reverse[6];
//     char string[6]="Hola";
//         for (i = 0; i < strlen(string); i++) {
//         reverse[i] = string[strlen(string) - 1 - i];

//     }reverse[i] = '\0';
//         printf("%s\n",reverse);
//     return 0;
// }

// 29. Check the Alphabetic Order of Two Strings
// Write a program to check whether two strings are in alphabetic order.

// #include <stdio.h>
// #include <string.h> 
// int compareStrings(char str1[], char str2[]) {
//     int i = 0;

//     while (str1[i] != '\0' && str2[i] != '\0') {
//         if (str1[i] < str2[i]) {
//             return -1;
//         } else if (str1[i] > str2[i]) {
//             return 1;
//         }
//         i++;
//     }

//     if (str1[i] == '\0' && str2[i] != '\0') {
//         return -1;
//     } else if (str1[i] != '\0' && str2[i] == '\0') {
//         return 1;
//     }

//     return 0;
// }

// int main() {
//     char str1[100], str2[100];

//     printf("Enter the first string: ");
//     fgets(str1, sizeof(str1), stdin);
//     str1[strcspn(str1, "\n")] = '\0';

//     printf("Enter the second string: ");
//     fgets(str2, sizeof(str2), stdin);
//     str2[strcspn(str2, "\n")] = '\0';

//     int result = compareStrings(str1, str2);

//     if (result < 0) {
//         printf("The first string is alphabetically before the second string.\n");
//     } else if (result > 0) {
//         printf("The first string is alphabetically after the second string.\n");
//     } else {
//         printf("The two strings are equal.\n");
//     }

//     return 0;
// }


// 30. Calculate the Power of a Number
// Write a program to calculate the power of a number using a loop.
// #include <stdio.h>
// int main(){
//     int power,i;
//     int base = 1;
//     int ans=1;

//     printf("Enter the power: ");
//     scanf("%d",&power);
//     printf("Enter the base: ");
//     scanf("%d",&base);
// for(i=1;i<=power;i++){ //1,2
// ans*=base;
// }
// printf("%d \n", ans);
// }

// 31. Print All Prime Numbers Between Two Numbers
// Write a program to print all prime numbers between two given numbers.

// #include <stdio.h>
// int main(){
//     int number,numb, i, j;
 
//     printf("From : ");
//     scanf("%d", &number);//2

//     printf("To : ");
//     scanf("%d", &numb);//3


//     for(i=number+1; i<numb; i++){
//         int factors = 0;
//         for(j=1;j<=i;j++){  
//         if(i%j == 0){
//             factors++; 
//             }
//         }
//     if(factors==2){
//         printf("%d \n",i);
//     }
//     else if (factors<2){
//         printf("%d \n",i);
//     }
   
// }
// }


// 32. Check Armstrong Number
// Write a program to check whether a given number is an Armstrong number.
// #include <stdio.h>
// #include <math.h>

// int countDigits(int num) {
//     int count = 0;
//     while (num != 0) {
//         num /= 10;
//         count++;
//     }
//     return count;
// }

// int main() {
//     int number, originalNumber, remainder, sum = 0, numDigits;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     originalNumber = number;
//     numDigits = countDigits(number);

//     while (number != 0) {
//         remainder = number % 10;
//         sum += pow(remainder, numDigits);
//         number /= 10;
//     }

//     if (sum == originalNumber) {
//         printf("%d is an Armstrong number.\n", originalNumber);
//     } else {
//         printf("%d is not an Armstrong number.\n", originalNumber);
//     }

//     return 0;
// }


// 33. Calculate the Average of Numbers in an Array
// Write a program to calculate the average of all the numbers in an array.
// #include <stdio.h>
// int main(){
// int arr[3]={1,2,3};
// int sum=0;
// int i;
// int length=sizeof(arr)/sizeof(arr[0]);
// for(i=0;i<length;i++){
// sum+=arr[i];
// }
// printf("Average: %d\n", sum/length);
// }


// 34. Find the Second Largest Number in an Array
// Write a program to find the second-largest number in an array.

// #include <stdio.h>
// int main() {
// int arr[7]={1,2,3,5,6,8,9};
// int i;
// int secondMax=arr[0];
// int length= sizeof(arr)/sizeof(arr[0]);
// int max= arr[0];
//  for (i = 1; i < length; i++) {
//         if (arr[i] > max) {
//             secondMax = max; 
//             max = arr[i];    
//          }
//     }
// printf("%d \n", secondMax);

// }


// 35. Check If a Number is a Perfect Square
// Write a program to check if a given number is a perfect square. A perfect square is an integer that is the square of an integer. For example, 9 is a perfect square since it equals 3² and can be written as 3 × 3.

// #include <stdio.h>
// int main(){
//     int number,i,check;
//     printf("Enter the number: ");
//     scanf("%d",&number);
//     for(i=1;i*i<=number;i++){
//         if(i*i==number){
//             check=1;
//             break;
//         }

//     }
//     if(check==1){
//         printf("The number is a perfect square");
//     }
//     else{
//         printf("The number is not a perfect square");

//     }
// }


