#include <stdio.h>

/**
 * Greets a person by name.
 * Collaborative function built via Live Share & GitLens.
 */
void greet(const char *name) {
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name ? name : "Guest");
}

int main(void) {
    printf("=== Activity 5: Collaborative Program ===\n");
    printf("Hello, World!\n");
    greet("Ada");
    greet("Alan");
    return 0;
}