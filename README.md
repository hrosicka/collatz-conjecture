# Collatz Conjecture

This repository provides a simple C program to explore the Collatz Conjecture. The program computes the Collatz sequence for a user-supplied positive integer and displays both the sequence and the highest number reached during the process.

## What is the Collatz Conjecture?

The Collatz Conjecture is an unsolved mathematical problem that proposes the following process for any positive integer:

1. If the number is even, divide it by 2.
2. If the number is odd, multiply it by 3 and add 1.
3. Repeat the process with the new number.

The conjecture states that no matter which positive integer you start with, you will eventually reach the number 1.

## Features

- Accepts user input for any positive integer.
- Computes and prints the full Collatz sequence.
- Tracks and displays the highest number reached in the sequence.
- Input validation to ensure only positive integers are processed.

## Usage

### 1. Clone the Repository

```sh
git clone https://github.com/hrosicka/collatz-conjecture.git
cd collatz-conjecture
```

### 2. Compile the Program

Use a C compiler such as `gcc`:

```sh
gcc -o collatz main.c
```

### 3. Run the Program

```sh
./collatz
```

You will be prompted to enter a positive integer. The program will print the Collatz sequence and the highest number reached.

## Example Output

```
Enter a positive integer: 7
Collatz sequence for 7:
7 -> 22 -> 11 -> 34 -> 17 -> 52 -> 26 -> 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

Highest number reached: 52

Press Enter to exit the program...
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Author

Created by [hrosicka](https://github.com/hrosicka).
