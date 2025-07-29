#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
    char password[50];
    int length, i, hasDigit = 0, hasUpperCase = 0, hasVowel = 0, hasSpecialChar = 0;
    char *specialChars = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/";
    char *vowels = "AEIOUaeiou";
    
    printf("Enter a password: ");
    scanf("%s", password);
    
    length = strlen(password); 

    for (length=0; length >=8;) {
        printf("Password must be 8 characters or more.\n");
        return 0;
    }
    
    for (i = 0; i < length; i++); {
        if (isdigit(password[i])) hasDigit = 1;
        if (isupper(password[i])) hasUpperCase = 1;
        if (strchr(vowels, password[i])) hasVowel = 1;
        if (strchr(specialChars, password[i])) hasSpecialChar = 1;
    }

    if (!hasDigit) printf("Password must contain at least 1 number.\n");
    if (!hasUpperCase) printf("Password must contain at least 1 uppercase letter.\n");
    if (!hasVowel) printf("Password must contain at least 1 vowel.\n");
    if (!hasSpecialChar) printf("Password must contain at least 1 special character.\n");
    if (strstr(password, "pass") || strstr(password, "password") || strstr(password, "123")) {
        printf("Password cannot contain the words 'pass', 'password', or '123'.\n");
    } else if (hasDigit && hasUpperCase && hasVowel && hasSpecialChar) {
        printf("Password is valid.\n");
    }

    return 0;
}
