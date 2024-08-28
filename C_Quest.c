// Beginner Friendly Questions

// 1. **Print "Hello, World!"**  
//    - Task: Write a function that prints "Hello, World!" to the console.
   
// #include <stdio.h>
// int main(){
//     printf("%s \n","Hello, world!");
//     return 0;
// }

// 2. **Add Two Numbers**  
//    - Task: Write a function that takes two numbers and returns their sum.  
//    - Test: `sum(3, 5)`  
//    - Expected Output: `8`

// #include <stdio.h>
// int main(){
//     int number1;
//     int number2;
//     printf("Enter the first number: ");
//     scanf("%d",&number1);
//     printf("Enter the second number: ");
//     scanf("%d",&number2);
//     printf("%d \n",number1+number2);
// }

// 3. **Find the Largest Number**  
//    - Task: Write a function that takes three numbers and returns the largest.  
//    - Test: `findLargest(2, 8, 5)`  
//    - Expected Output: `8`

// #include <stdio.h>
// int main(){
//     int num1;
//     int num2;
//     int num3;
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     printf("Enter the third number: ");
//     scanf("%d", &num3);
//     if(num1>=num2 && num1>=num3){
//         printf("%d\n", num1);
//     }
//     else if(num2>=num1 && num2>=num3){
//         printf("%d\n", num2);
//     }
//     else{
//         printf("%d\n", num3);
//     }
//     return 0;
// }


// 4. **Check if a Number is Even or Odd**  
//    - Task: Write a function that checks if a number is even or odd.  
//    - Test: `isEven(4)`  
//    - Expected Output: `true`

// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     if(num%2==0){
//         printf("True \n");
//     }
//     else {printf("False \n");}
// }

// 5. **Calculate the Factorial of a Number**  
//    - Task: Write a function that returns the factorial of a number.  
//    - Test: `factorial(5)`  
//    - Expected Output: `120`

// #include <stdio.h>
// int main(){
//     int num;
//     int i;
//     int factorial=1;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         factorial=i*factorial;
//     }
//     printf("%d \n", factorial);
// }

// 6. **Reverse a String**  
//    - Task: Write a function that takes a string and returns it reversed.  
//    - Test: `reverseString('hello')`  
//    - Expected Output: `'olleh'`

// #include <stdio.h>
// #include <string.h>
// int main(){
//     int i;
//     char reverse[6];
//     char string[6]="hello";
//         for (i = 0; i < strlen(string); i++) {
//         reverse[i] = string[strlen(string) - 1 - i];

//     }reverse[i] = '\0';
//         printf("%s\n",reverse);
//     return 0;
// }

// 7. **Check for Palindrome**  
//    - Task: Write a function that checks if a given string is a palindrome.  
//    - Test: `isPalindrome('madam')`  
//    - Expected Output: `true`

// #include <stdio.h>
// #include <string.h>
// int main(){
//     int i;
//     char reverse[6];
//     char string[6]="madam";
//         for (i = 0; i < strlen(string); i++) {
//         reverse[i] = string[strlen(string) - 1 - i];

//     }
//     reverse[i] = '\0';

//     if (strcmp(reverse, string) == 0) {
//         printf("True\n");
//     } else {
//         printf("False\n");}
//     return 0;
// }

// 8. **Find the Minimum Number in an Array**  
//    - Task: Write a function that takes an array and returns the smallest number.  
//    - Test: `findMin([3, 1, 4, 1, 5])`  
//    - Expected Output: `1`

// #include <stdio.h>
// int main(){
//     int arr[]={3, 1, 4, 1, 5};
//     int min = arr[0];
//     int i;
//     int length= sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<=length-1;i++){
//         if(min>arr[i]){
//             min= arr[i];
//         }
//     }
//     printf("%d \n", min);

// }

// 9. **Sort an Array**  
//    - Task: Write a function that sorts an array of numbers in ascending order.  
//    - Test: `sortArray([3, 1, 4, 1, 5])`  
//    - Expected Output: `[1, 1, 3, 4, 5]`

// #include <stdio.h>
// int main() {
//     int arr[] = {3, 1, 4, 1, 5};
//     int i, j;
//     int temp;
//     int length = sizeof(arr) / sizeof(arr[0]);

//     for (i = 0; i < length - 1; i++) {
//         for (j = 0; j < length - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for (i = 0; i < length; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// 10. **Check if a String Contains a Substring**  
//     - Task: Write a function that checks if a string contains another substring.  
//     - Test: `containsSubstring('hello world', 'world')`  
//     - Expected Output: `true`

// #include <stdio.h>
// #include <string.h>  // For strstr function

// int main() {
//     char str[] = "Hello, world!";
//     char substr[] = "world";

//     // Use strstr to find the substring
//     if (strstr(str, substr) != NULL) {
//         printf("The substring \"%s\" was found in \"%s\".\n", substr, str);
//     } else {
//         printf("The substring \"%s\" was not found in \"%s\".\n", substr, str);
//     }

//     return 0;
// }


// 11. **Sum All Elements in an Array**  
//     - Task: Write a function that returns the sum of all numbers in an array.  
//     - Test: `sumArray([1, 2, 3, 4, 5])`  
//     - Expected Output: `15`

// #include <stdio.h>
// int main()
// {int arr[5]={1,2,3,4,5};
// int sum=0;
// //sizeof(arr) gives the total size of the array in bytes and sizeof(arr[0]) gives the size of one element in bytes.
// //Dividing these gives the number of elements in the array.
// int length = sizeof(arr) / sizeof(arr[0]);
// int i;
// for(i=0;i<length;i++){
//     sum=sum+arr[i];
// }
// printf("%d \n", sum);

// }

// 12. **Generate Fibonacci Sequence**  
//     - Task: Write a function that generates the first `n` Fibonacci numbers.  
//     - Test: `fibonacci(5)`  
//     - Expected Output: `[0, 1, 1, 2, 3]`

// #include <stdio.h>
// int main(){
// int a=0;
// int b=1;
// int steps, i, c;
// printf("Enter the number of steps: ");
// scanf("%d",& steps);
// if(steps == 1){
//     printf("%d\n",a);
// }
// else if (steps==2){
//     printf("%d\n",a);
//    printf("%d\n",b); 
// }

// else if(steps<0){
//     printf("Steps cannot be negative");
// }
// else{
//     printf("%d\n",a);
//    printf("%d\n",b); 

// for(i=0;i<steps-2;i++){
//     c=a+b;
//     a=b;
//     b=c;
//     printf("%d\n",c);
// }
// }
// }


// 13. **Check if a Number is Prime**  
//     - Task: Write a function that checks if a number is prime.  
//     - Test: `isPrime(7)`  
//     - Expected Output: `true`

// #include <stdio.h>
// int main(){
//     int num;
//     int count=0;
//     int i;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=2;i<num;i++){
//         if(num%i==0){
//             count++;
//         }

//     }
//     if(count==0){
//         printf("True\n");
//     }
//     else{printf("False\n");}
//     return 0;
// }

// 14. **Count the Number of Vowels in a String**  
//     - Task: Write a function that counts the number of vowels in a given string.  
//     - Test: `countVowels('hello')`  
//     - Expected Output: `2`

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[5]="hello";
//     int count=0;
//     for(int i=0; i<=strlen(str); i++){
//         if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
//             count++;
//         }
//     }
//     printf("%d \n",count);
//}
// 15. **Find the Index of an Element in an Array**  
//     - Task: Write a function that returns the index of a given element in an array. If the element is not found, return -1.  
//     - Test: `findIndex([1, 2, 3, 4, 5], 3)`  
//     - Expected Output: `2`

// #include <stdio.h>
// int main(){
// int arr[]={1,2,3,4,5,65};
// int length = sizeof(arr)/sizeof(arr[0]);
// int num, i;
// printf("Enter the number whose index is to be found: ");
// scanf("%d",&num);
// for(i=0;i<length; i++){
//     if(num==arr[i]){
//         printf("%d \n",i);
//     }
// }
// return 0;
// }


// 16. **Remove Duplicates from an Array**  
//     - Task: Write a function that removes duplicate elements from an array.  
//     - Test: `removeDuplicates([1, 2, 2, 3, 4, 4, 5])`  
//     - Expected Output: `[1, 2, 3, 4, 5]`

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates
    for (i = 0; i < size; i++) {
        // Check if the current element is a duplicate
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to remove the duplicate
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;  // Decrease the size of the array
                j--;  // Check the new element at index j
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



// 17. **Find the Intersection of Two Arrays**  
//     - Task: Write a function that returns an array of the common elements in two arrays.  
//     - Test: `findIntersection([1, 2, 3], [2, 3, 4])`  
//     - Expected Output: `[2, 3]`
#include <stdio.h>

int main() {
    int i, j;
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    int arr3[3];  
    int index = 0;
    
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    
    for (i = 0; i < length1; i++) {
        for (j = 0; j < length2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[index] = arr1[i];
                index++;
                break;  
            }
        }
    }
    
    printf("Intersection: ");
    for (i = 0; i < index; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

// 18. **Check if Two Strings are Anagrams**  
//     - Task: Write a function that checks if two strings are anagrams of each other.  
//     - Test: `areAnagrams('listen', 'silent')`  
//     - Expected Output: `true`
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX_SIZE 100  

// void sortString(char str[]) {
//     int i, j;
//     char temp;

//     // Sort the string using a simple bubble sort algorithm
//     for (i = 0; str[i] != '\0'; i++) {
//         for (j = i + 1; str[j] != '\0'; j++) {
//             if (str[i] > str[j]) {
//                 // Swap characters
//                 temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }
// }

// int areAnagrams(char str1[], char str2[]) {
//     sortString(str1);
//     sortString(str2);

//     return strcmp(str1, str2) == 0;
// }

// int main() {
//     char str1[MAX_SIZE];
//     char str2[MAX_SIZE];

//     // Read two strings from the user
//     printf("Enter the first string: ");
//     fgets(str1, MAX_SIZE, stdin);
//     printf("Enter the second string: ");
//     fgets(str2, MAX_SIZE, stdin);

//     // Remove the newline character if present
//     str1[strcspn(str1, "\n")] = '\0';
//     str2[strcspn(str2, "\n")] = '\0';

//     // Convert both strings to lowercase
//     for (int i = 0; str1[i] != '\0'; i++) {
//         str1[i] = tolower((unsigned char)str1[i]);
//     }
//     for (int i = 0; str2[i] != '\0'; i++) {
//         str2[i] = tolower((unsigned char)str2[i]);
//     }

//     // Check if the strings are anagrams
//     if (areAnagrams(str1, str2)) {
//         printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
//     } else {
//         printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
//     }

//     return 0;
//}



// 19. **Capitalize the First Letter of Each Word**  
//     - Task: Write a function that capitalizes the first letter of each word in a string.  
//     - Test: `capitalizeWords('hello world')`  
//     - Expected Output: `'Hello World'`

// Function to capitalize the first letter of each word in the string
// void capitalizeWords(char str[]) {
//     int i = 0;

//     // Process each character in the string
//     while (str[i] != '\0') {
//         // Check if the current character is the start of a word
//         // A word starts at the beginning of the string or after a space
//         if (i == 0 || str[i - 1] == ' ') {
//             // Capitalize the character if it's a lowercase letter
//             if (islower((unsigned char)str[i])) {
//                 str[i] = toupper((unsigned char)str[i]);
//             }
//         }
//         i++;
//     }
// }

// int main() {
//     char str[] = "hello world! this is a test string.";

//     printf("Original string: %s\n", str);

//     capitalizeWords(str);

//     printf("Capitalized string: %s\n", str);

//     return 0;
// }
