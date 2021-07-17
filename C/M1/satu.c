#include <stdio.h> // Header File

int main() {
   
    // === 
    float lebar;
    float panjang;
    
    lebar = 10.2;
    panjang = 20.5;
    
    // Hitung Luas
    float Luas = panjang * lebar;
    
    // Hitung Keliling
    float Keliling = 2 * (panjang + lebar);
    
    // Output
    printf("Luas = %.2f cm^2 & Keliling  = %.3f cm", Luas, Keliling);
    
    return 0;
    
    // ========== LINGKARAN ======
    
    float jari_jari = 7;
    float PI = 3.14;
    
    // Hitung Luas
    float Luas = PI * jari_jari * jari_jari;
    float Keliling = 2 * PI * jari_jari;
    
    printf("Luas = %.2f cm^2 & Keliling  = %.3f cm", Luas, Keliling);
    
    
    
    return 0;
    
}
