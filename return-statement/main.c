#include <stdio.h>

int main() {
    
    int panjang, lebar, tinggi, hasil, volume_balok;
    
    scanf("%d",&panjang);
    scanf("Masukkan lebar: %d",&lebar);
    scanf("Masukkan tinggi: %d",&tinggi);
    
    volume_balok = panjang * lebar * tinggi;
    printf("%d", volume_balok);
    
}