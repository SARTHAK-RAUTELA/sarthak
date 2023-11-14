Question7-	Determine the number of vowels in an array of characters using a C program


Answer = 

#include <stdio.h>
#include <ctype.h>

// Function to count vowels in a string
int countVowels(char *str) {
    int count = 0;

    while (*str != '\0') {
        char currentChar = tolower(*str); // Convert to lowercase for case-insensitivity

        // Check if the current character is a vowel
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            count++;
        }

        str++; // Move to the next character in the string
    }

    return count;
}

int main() {
    char str[] = "Hello, World!"; // Example string

    // Calling the function to count vowels
    int vowelCount = countVowels(str);

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
