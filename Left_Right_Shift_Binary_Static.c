#include <stdio.h>

int age(int num)
{
    static int total;
    total += num;
    (total > 18) ? printf("True\n") : printf("False\n");
    return 0;
}

int main()
{

    age(1);
    age(2);
    age(3);
    age(10);
    age(10);

    int x = 32;
    x <<= 1;
    printf("%d\n", x);

    x >>= 1;
    printf("%d\n", x);

    // if (age > 18)
    //     printf("True");
    // else
    //     printf("False");


int arr[3] ={1,2,3};
int arr2[2][2]={{1,2},{2,3}};

for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n"); 
    }


    return 0;
}



// #include <stdio.h>
// int main(){
//   unsigned int a =4.5;
//   float b =4.5;
//   long long int c = 323423435346543856384567384765;
//   double d = 3958039457034.4975308475;
//   printf("%u\n", a);
//     printf("%lld\n", c);

//   printf("%d\t", sizeof(a));
//     printf("%d\t", sizeof(b));
//   printf("%d\t", sizeof(c));
//   printf("%d\t", sizeof(d));

//   return 0;
  
// }

// counts the number of non-zero elements in a 2D array:
// Example:int arr[ROWS][COLS] = { {0, 1, 2, 0}, {3, 0, 0, 4}, {5, 6, 0, 7} };

#include <stdio.h>
int main(){
  int count = 0;
  int arr[3][4] ={ {0, 1, 2, 0}, {3, 0, 0, 4}, {5, 6, 0, 7} };
  for(int i=0;i<3;i++){
    for(int j = 0; j<4;j++){
      if(arr[i][j]!=0){
        count++;
      }
    }
    
  }
  printf("%d",count);
  return 0;
}