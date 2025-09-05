#include <stdio.h> 
int main() 
{ 
    char enc_flag[] = {0x1D, 0x30, 0x36, 0x3E, 0x31, 0x27, 0x30, 0x3B, 0x20, 0x24, 0x3B, 0x3C, 0x00};  
    char key = 0x55; 
    char dec_flag[50]; 
    int i = 0; 
    while (enc_flag[i] != 0x00) 
    { 
        dec_flag[i] = enc_flag[i] ^ key; 
        i++; 
    } 
    dec_flag[i] = '\0'; 
    printf("zer0: Nothing to see here... or is there?\n"); 
    return 0; 
}