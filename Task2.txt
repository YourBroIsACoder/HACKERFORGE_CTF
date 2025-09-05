#include <stdio.h>
#include <string.h> 
int main() 
{ 
    char input[50]; 
    char flag[] = "HACKERFORGE{you_patched_like_a_pro}"; 
    printf("zer0: Enter the password if you dare: "); 
    scanf("%s", input); 
    if (strcmp(input, "letmein") == 0) 
    { 
        printf("Correct! Flag: %s\n", flag); 
    } 
    else 
    { 
        printf("Access Denied! zer0 wins again.\n"); 
    } 
    return 0; 
}