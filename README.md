# C-Day-52-Largest-Number
# C Day 52 - Largest Number

This program takes multiple numbers from the user and finds the largest number among them.

## Example

Input:

```text id="p4v7ns"
Enter how many numbers: 5
Enter number 1: 25
Enter number 2: 10
Enter number 3: 45
Enter number 4: 30
Enter number 5: 15
```

Output:

```text id="j6k2qa"
Largest number = 45
```

## Concepts Used

* `for` loop
* `if` condition
* Comparison operator `>`
* User input
* Variables
* Finding the largest number

## How It Works

1. Ask the user how many numbers they want to enter.
2. Store the first number in the `largest` variable.
3. Use a `for` loop to take the remaining numbers.
4. Compare each number with `largest`.
5. If the new number is greater, update `largest`.
6. Print the largest number at the end.

## C Code

```c id="g4m8xz"
#include <stdio.h>

int main()
{
    int n, number;
    int largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &largest);

    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}
```

## Output

```text id="z2r7vp"
Enter how many numbers: 5
Enter number 1: 25
Enter number 2: 10
Enter number 3: 45
Enter number 4: 30
Enter number 5: 15
Largest number = 45
```

## Goal

The goal of this project is to practice `for` loops, user input, comparisons, and finding the largest value in C.
