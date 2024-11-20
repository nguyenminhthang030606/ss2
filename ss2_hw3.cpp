#include <stdio.h>

int main() {
    // Khai bao va khoi dong bien kieu nguyen 
    int a = 3;  // khoi tao bien a voi gia tri 3 
    int b = 4;  // khoi tao bien b voi gia tri 4 

    

// cac phep tinh co ban 
    int sum = a + b;        // Tinh tong
    int difference = a - b; // Tinh hieu
    int product = a * b;    // Tinh tich
    double quotient = (double)a / b; // Tinh thuong (ép kieu sang double de chia chính xác)

    

// In ket qua ra man hinh 
    printf("Tong cua %d va %d la: %d\n", a, b, sum);
    printf("Hieu cua %d va %d la: %d\n", a, b, difference);
    printf("Tich cua %d va %d la: %d\n", a, b, product);
    
   
printf("Thuong cua %d va %d la: %.2f\n", a, b, quotient);

    return 0;
}
