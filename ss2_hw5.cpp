#include <stdio.h>

int main() {
    // Khoi tao bien chieu dai v� chieu rong
    int length = 8;  // Chi�u dai
    int width = 4;   // Chieu rong

    // Tinh toan chu vi v� dien tich
    int perimeter = 2 * (length + width); // Chu vi: 2 * (chieu dai + chieu rong)
    int area = length * width;           // Di?n t�ch: chieu dai * chieu rong

    // In ket qua ra man hinh
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d\n", area);

    return 0;
}

