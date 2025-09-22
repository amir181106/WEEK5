#include <stdio.h>

int main() {
    char ch;

    // Ask the user to input a character
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if the character is a letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase to make the condition case-insensitive
        ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert uppercase to lowercase

        // Check if it's a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Please enter a valid alphabet.\n");
    }

    return 0;
}

