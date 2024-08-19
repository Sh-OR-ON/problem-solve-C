#include <stdio.h>

void display(int n) {
    if (n > 10) { // Base case: stop the recursion when n > 10
        return;
    }
    printf("%d\n", n); // Print the current number
    display(n + 1); // Recursive call with the next number
}

int main() {
    display(1); // Start the recursion with 1
    return 0;
}
