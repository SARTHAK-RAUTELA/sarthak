Question2	Illustrate for, while, and do-while loops with suitable examples.

Answer =



Certainly! Here are examples illustrating the use of `for`, `while`, and `do-while` loops in C:

1. **For Loop:**
   - The `for` loop is commonly used for iterating a specific number of times.

```c
#include <stdio.h>

int main() {
    // Example: Print numbers from 1 to 5 using a for loop
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    return 0;
}
```

2. **While Loop:**
   - The `while` loop is used when the number of iterations is not known beforehand, and it depends on a condition.

```c
#include <stdio.h>

int main() {
    // Example: Print numbers from 1 to 5 using a while loop
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
```

3. **Do-While Loop:**
   - The `do-while` loop is similar to the `while` loop, but it guarantees that the loop body is executed at least once, as the condition is checked after the loop body.

```c
#include <stdio.h>

int main() {
    // Example: Print numbers from 1 to 5 using a do-while loop
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}

