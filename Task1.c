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

//zer0 has given you a suspicious program. It seems to check for a hidden password before revealing the flag. Can you figure out the correct password and prove yourself?

//zer0 dares you to enter the right password. But instead of playing by his rules, maybe you can bend the program to your will. Can you make it reveal the flag?


