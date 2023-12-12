#include <stdio.h>

#define MEMORY_SIZE 30000

int main() {
    char tape[MEMORY_SIZE] = {0};
    int ptr = 0;
    char instruction;

    while ((instruction = getchar()) != EOF) {
        switch (instruction) {
            case 'Z':
                tape[ptr] = 0; // Ziggy Stardust
                break;
            case 'M':
                ++tape[ptr]; // Major Tom
                break;
            case 'S':
                instruction = getchar();
                if (instruction == 't' || instruction == 'T') {
                    putchar(tape[ptr]); // Starman
                } else {
                    --tape[ptr]; // Space Oddity
                }
                break;
            case 'L':
                tape[ptr] = getchar(); // Life on Mars?
                break;
            case 'C':
                if (tape[ptr] == 0) {
                    int nesting = 1;
                    while (nesting > 0) {
                        instruction = getchar();
                        if (instruction == 'C' || instruction == 'c') {
                            nesting++;
                        } else if (instruction == 'h' || instruction == 'H') {
                            nesting--;
                        } else if (instruction == EOF) {
                            break; // Break out of the loop if EOF is encountered
                        }
                    }
                }
                break;
            case 'R':
                if (tape[ptr] != 0) {
                    int nesting = 1;
                    while (nesting > 0) {
                        instruction = getchar();
                        if (instruction == 'R' || instruction == 'r') {
                            nesting++;
                        } else if (instruction == 'e' || instruction == 'E') {
                            nesting--;
                        } else if (instruction == EOF) {
                            break; // Break out of the loop if EOF is encountered
                        }
                    }
                }
                break;
        }
    }

    return 0;
}
