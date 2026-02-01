#include <stdio.h>

typedef int BilanganDesimal;
typedef char NamaPanjang[50];
typedef char Username[20];

int main()
{
    // typedef berfungsi untuk mendefinisikan tipe data yang ada menjadi sebuah nama yang dapat meningkatkan keterbacaan kode
    // typedef tipe_data nama_baru

    BilanganDesimal x = 10;
    printf("%d", x);

    NamaPanjang y = "Munirah Rahmani";
    printf("%s", y);

    Username z = "moouney";
    printf("%s", z);

    return 0;
}