#include <stdio.h>

int main() {
    const int age = 21;
    const float height = 1.73736f;
    const char initName = 'A';

    // initName = 'B';     // <-- cannot change due to const
    /*
        ./exercise-2.c: In function ‘main’:
        ./exercise-2.c:8:14: error: assignment of read-only variable ‘initName’
        8 |     initName = 'B';     
    */

    printf("Hello, I am %c, %d years old and %.2f meters tall.\n", initName, age, height);

    return 0;
}