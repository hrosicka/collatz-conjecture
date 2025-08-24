#include <stdio.h>

// Function to compute the Collatz sequence and find the highest number
void collatz(long long n) {
    long long highest_number = n; // Initialize with the starting number

    // Prints the starting number
    printf("Collatz sequence for %lld:\n", n);

    // The loop repeats until the number reaches 1
    while (n != 1) {
        // Prints the current number
        printf("%lld -> ", n);

        // Checks if the number is even or odd
        if (n % 2 == 0) {
            // Even number - divide by two
            n = n / 2;
        } else {
            // Odd number - multiply by three and add one
            n = 3 * n + 1;
        }

        // Checks if the new number is the highest so far
        if (n > highest_number) {
            highest_number = n;
        }
    }

    // Prints the final number (1)
    printf("1\n");

    // Prints the highest number reached
    printf("\nHighest number reached: %lld\n", highest_number);
}

int main() {
    long long number;

    // Gets the number from the user
    printf("Enter a positive integer: ");
    scanf("%lld", &number);

    // Checks if the number is positive
    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; // Terminates the program with an error
    }

    // Calls the function to compute the sequence
    collatz(number);

    // Wait for the user to press Enter before exiting.
    printf("\nPress Enter to exit the program...");
    
    // Clear the input buffer from the previous `scanf`.
    // This part can be tricky and platform-dependent.
    // A safer way is to use a loop to consume characters.
    while (getchar() != '\n'); 
    getchar(); // Reads the final newline character.

    return 0; // Program proběhl úspěšně
}