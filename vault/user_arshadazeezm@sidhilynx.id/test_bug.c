Let's break down the issues in your C code.

### 1. Explanation of Errors

*   **Missing Semicolon:** In C, statements (like variable declarations or assignments) must end with a semicolon (`;`). The line `int a = 10` is missing this crucial punctuation. This prevents the compiler from understanding where one statement ends and the next begins, leading to a syntax error.

*   **Division by Zero:** The line `int result = a / b` attempts to divide the value of `a` (which is 10) by the value of `b` (which is 0). Division by zero is an undefined mathematical operation and will cause a runtime error. The program will likely crash or produce unpredictable results.

*   **Incorrect `printf` Syntax:** In the line `printf("Result is %d, result);`, the format specifier `%d` indicates that an integer should be printed. However, the second argument to `printf` is missing. It should be the variable `result` to print its value. Also, the closing double quote for the string literal is missing before the closing parenthesis.

*   **Assignment vs. Comparison in `if` statement:** The line `if (a = 5)` uses the assignment operator (`=`) instead of the comparison operator (`==`). The assignment operator `a = 5` assigns the value 5 to the variable `a`. Since an assignment in C evaluates to the assigned value (which is 5, a non-zero value), the `if` condition is always considered true, regardless of the original value of `a`. This is a logical error, not a syntax error, and it means the `if` block will always execute.

*   **Missing Semicolon in `return` statement:** Similar to other statements, the `return 0` statement also needs a semicolon at the end.

### 2. Corrected Code

```c
#include <stdio.h>

int main() {
    int a = 10; // Added semicolon
    int b = 0;
    int result; // Declared result here, will handle division carefully

    // Handle division by zero to prevent runtime error
    if (b != 0) {
        result = a / b;
        printf("Result is %d\n", result); // Corrected printf, added newline
    } else {
        printf("Error: Cannot divide by zero.\n"); // Informative message
    }

    // Corrected comparison: using == for equality check
    if (a == 5) {
        printf("A is five\n"); // Added newline
    } else {
        printf("A is not five\n"); // Added a case for when a is not 5
    }

    return 0; // Added semicolon
}
```

### 3. Brief Explanation of Fixes

*   **Semicolons:** Semicolons have been added to the end of `int a = 10;`, `return 0;`, and also implicitly to the lines where `result` is used within the `if (b != 0)` block.
*   **Division by Zero:** The division `a / b` is now wrapped in an `if (b != 0)` block. This ensures that the division only occurs if `b` is not zero, preventing a runtime error. An `else` block is added to provide feedback if `b` is indeed zero.
*   **`printf` Syntax:** The `printf` statement for `result` has been corrected to `printf("Result is %d\n", result);`. The `result` variable is now provided as the second argument, and the missing closing double quote has been added. A newline character (`\n`) is also added for better output formatting.
*   **Assignment vs. Comparison:** The `if` condition has been changed from `if (a = 5)` to `if (a == 5)`. The `==` operator correctly checks if `a` is equal to 5. An `else` block has been added for completeness.
*   **`return` statement:** A semicolon has been added to the `return 0;` statement.