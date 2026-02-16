#include <assert.h>
#include <math.h>

#include "add.h"

void test_add_int_1_2() {
    // Arrange
    int a = 1;
    int b = 2;
    
    // Act
    int res = add_int(a, b);

    // Assert
    assert(res == 3);
}

void test_add_double_general() {
    // Arrange
    double a = 0.1;
    double b = 0.2;
    
    // Act
    double res = add_double(a, b);
    // double eps = 1E-8;
    // Assert
    // assert(fabs(res - 0.3) < eps);
    assert(res == 0.3);
}


int main() {
    test_add_int_1_2();
    test_add_double_general();
    return 0;
}