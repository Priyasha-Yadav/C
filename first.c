
// #include <stdio.h>

// int main() {
//     int num1;
//     int num2;

//     printf("Enter the first number: ");
//     scanf("%d", &num1); 

//     printf("Enter the second number: ");
//     scanf("%d", &num2); 

//     printf("%d\n", num1 + num2);

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
#include <stdio.h>
int main(){
float radius;
printf("Enter the radius: ");
scanf("%f", &radius);
printf("Area: %.2f\n", 3.141 * radius * radius );

    return 0;
}


// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
// int i;
// for (i = 1; i <= 10; ++i) {
//   printf("%d\n", i);
// }
//     return 0;
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

#include <stdio.h>
int main(){
int intnumber1= 34;
int intnumber2 =42;
float fnumber1= 34.32;
float fnumber2 = 23.34;
char ch1='a';
char ch2 ='b';

printf("%d\n",intnumber1+intnumber2);
printf("%d\n",intnumber1*intnumber2);
printf("%d\n",intnumber1-intnumber2);
printf("%d\n",intnumber1%intnumber2);
printf("%d\n\n\n",intnumber1/intnumber2);

printf("%f\n",fnumber1+fnumber2);
printf("%f\n",fnumber1-fnumber2);
printf("%f\n",fnumber1/fnumber2);
printf("%f\n\n\n",fnumber1*fnumber2);

printf("%d\n",ch1+ch2); 
printf("%d\n",ch1%ch2); 
printf("%d\n",ch1-ch2);   
printf("%d\n",ch1*ch2); 
printf("%d\n\n\n",ch1/ch2); 

printf("%d\n",ch1+intnumber1); 
printf("%d\n",fnumber1+intnumber1); 
printf("%d\n",ch1+fnumber2); 
printf("%d\n\n\n",ch1+intnumber2); 

printf("%d\n",ch1-intnumber1); 
printf("%d\n",fnumber1-intnumber1); 
printf("%d\n",ch1-fnumber2); 
printf("%d\n\n\n",ch1-intnumber2); 

printf("%d\n",ch1*intnumber1); 
printf("%d\n",fnumber1*intnumber1); 
printf("%d\n",ch1*fnumber2); 
printf("%d\n\n\n",ch1*intnumber2); 

printf("%d\n",ch1/intnumber1); 
printf("%d\n",fnumber1/intnumber1); 
printf("%d\n",ch1/fnumber2); 
printf("%d\n\n\n",ch1/intnumber2); 

printf("%d\n",ch1%intnumber1); 
// printf("%d\n",fnumber1%intnumber1); 
// printf("%d\n",ch1%fnumber2); 
printf("%d\n\n\n",ch1%intnumber2);
}



#include <stdio.h>
#include <string.h>
int main()
{
  char one [10]= "hello";
  char two[8] = "world \n";
  strcat(one, two);
    printf("%s",one);

int i;
for (i = 0; i < strlen(one); ++i) {
  printf("%c\n", one[i]);
}
    return 0;
}

#include <stdio.h>

int main() {

// printf("%d \n", 8/2);
// printf("%f \n", 8/2);
// printf("%f\n", 8.2/2);

int arr[5] = {1,2,3,4,5};
printf("%d",arr[0]);
int i;
for(i=0; i<sizeof(arr);i++){
    printf("%c\n",arr[i])
}
    return 0;
}

#include <stdio.h>

int main()
{
    char one = 'a';
    char two = 'b';
    int sum = one + two; 
   
    printf("%d\n", sum);

    return 0;
}
