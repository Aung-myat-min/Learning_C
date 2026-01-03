#include <stdio.h>

int main() {
    const float PI = 3.1415f;
    const int MAX_USERS = 100;

    // PI = 3.14f; // <-- cannot modify since PI is a constant value
    /*
    ./const_keyword.c: In function ‘main’:
    ./const_keyword.c:7:8: error: assignment of read-only variable ‘PI’
    7 |     PI = 3.14f; // <-- cannot modify since PI is a constant value
      |        ^
    */

    printf("Value of PI: %.5f\n", PI);
    printf("Maximum users: %d\n", MAX_USERS);

    return 0;
}