#include <stdio.h>
#include <string.h>

int main() {
    char input[50];

    int scrambled_pw[] = {105, 101, 108, 110, 116, 109, 101}; 
    int order_pw[]     = {2, 6, 4, 5, 1, 0, 3}; 
    char secret[50];
    for (int i = 0; i < 7; i++) {
        secret[i] = scrambled_pw[order_pw[i]];
    }
    secret[7] = '\0';

    int scrambled_flag[] = {
        72, 65, 67, 75, 69, 82, 70, 79, 82, 71, 69, 123,
        121, 111, 117, 95, 112, 97, 116, 99, 104, 101, 100,
        95, 108, 105, 107, 101, 95, 97, 95, 112, 114, 111, 125
    };
    int flag_len = sizeof(scrambled_flag) / sizeof(scrambled_flag[0]);
    char flag[100];

    printf("zer0: Enter the password if you dare: ");
    scanf("%s", input);

    if (strcmp(input, secret) == 0) {
        for (int i = 0; i < flag_len; i++) {
            flag[i] = (char) scrambled_flag[i];
        }
        flag[flag_len] = '\0';

        printf("Correct! Flag: %s\n", flag);
    } else {
        printf("Access Denied! zer0 wins again.\n");
    }

    return 0;
}
