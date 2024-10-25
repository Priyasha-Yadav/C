// //Factorial
// #include <stdio.h>

// int fact(int num) {
//     if (num <= 1) {
//         return 1;
//     }
//     return num * fact(num - 1);
// }

// int main() {
//     int numb;

//     printf("Enter the number: ");
//     scanf("%d", &numb);

//     int result = fact(numb);

//     printf("The factorial of %d is %d.\n", numb, result);
    
//     return 0;
// }


//Fibonnaci
#include <stdio.h>

int fibo(int steps) {
    if (steps <= 0) {
        return 0;
    } else if (steps == 1) {
        return 1;
    } else {
        return fibo(steps - 1) + fibo(steps - 2);
    }
}

int main() {
    int steps;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);

    printf("Fibonacci series up to %d steps:\n", steps);
    for (int i = 0; i < steps; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}
