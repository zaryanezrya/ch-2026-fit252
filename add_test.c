#include <assert.h>

#include "add.h"

void test_add_int_1_2() {
    // Arrange
    int a = 1;
    int b = 2;
    
    // Act
    int res = add_int(a, b);

    // Assert
    assert(res == 4);
}


int main() {
    test_add_int_1_2();
    return 0;
}