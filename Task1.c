#include <stdio.h> 
#include <string.h> 
int main() { char input[50]; 
char password[] = "Lwklv_lv_wkh_sdvvzrug"; 
printf("zer0: Enter the password to prove your worth: "); 
scanf("%s", input); 
for (int i = 0; i < strlen(password); i++)
 { 
    password[i] = password[i] - 3; 
} 
if (strcmp(input, password) == 0) 
{ 
    printf("Well done... You escaped my first trap!!!\n"); 
} 
else 
{ printf("Wrong! zer0 laughs at your failure.\n"); 
} 
return 0; }