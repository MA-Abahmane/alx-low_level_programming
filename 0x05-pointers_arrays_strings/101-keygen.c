#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 30 
#define CHARS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\"\\|,.<>/?`~" // characters to use in the password

int main() {
    srand(time(NULL)); 
    char password[LENGTH + 1]; 

    for (int i = 0; i < LENGTH; i++) {
        password[i] = CHARS[rand() % (sizeof(CHARS) - 1)]; 

    password[LENGTH] = '\0'; 

    printf("%s", password); 

    return 0;
}
