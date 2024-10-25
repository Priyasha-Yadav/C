// //To write in a file
// #include <stdio.h>
// int main() {
//     FILE *var;

//     var = fopen("var.txt", "w");

//     fprintf(var, "This is a test.\n");

//     fclose(var);
    
//     printf("File created successfully.\n");
//     return 0; 
// }


// //To append a file
// #include <stdio.h>

// int main() {
//     FILE *var;
//     var = fopen("var.txt", "a");
//     fprintf(var, "This is a test.\n");
//     fclose(var);
    
//     printf("File created successfully.\n");
//     return 0;}


// //ChatGPT
// #include <stdio.h>

// int main() {
//     FILE *var;
//     var = fopen("var.txt", "r");
    
//     if (var == NULL) {
//         printf("Error opening file!\n");
//         return 1; 
//     }

//     char str[200];
//     printf("Enter a string to write to the file: ");
//     fgets(str, sizeof(str), var);

//     fprintf(var, "%s", str);
//     fclose(var);
//     printf("String written to var.txt successfully.\n");
    
//     return 0; 
// }


//Chat GPT read
#include <stdio.h>

int main() {
    FILE *var;
    var = fopen("var.txt", "r");
    
    if (var == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    char str[200];
    
    // Read and print each line from the file
    while (fgets(str, sizeof(str), var) != NULL) {
        printf("%s", str);
    }

    fclose(var);
    
    return 0; 
}
