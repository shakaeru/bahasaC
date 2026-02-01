#include <stdio.h>

// dapat diakses melalui fungsi manapun
int globalVariable;

// void = tidak mengembalikan apapun
void testing(char name[], int date)
{
    printf("%s, March %d 2007.\n", name, date);
}

// untuk mengembalikan nilai, kita membuat fungsi dengan tipe data yang akan dikembalikan
int penjumlahan(int a, int b)
{
    int hasil = a + b;

    return hasil;
}

// function prototype (mendeklarasikan nama fungsi beserta parameternya terlebih dahulu)
int perkalian(int a, int b);

int main()
{
    // function adalah sebuah konsep membungkus beberapa baris kode untuk digunakan berulang-ulang

    // memanggil function
    char name[] = "Munirah Rahmani";
    int date = 6;
    testing(name, date);

    // return = mengembalikan nilai yang kita berikan kepada fungsi yang kita panggil

    int hasilPenjumlahan = penjumlahan(5, 6);
    printf("%d", hasilPenjumlahan);

    // variable scope adalah letak dimana variabel dapat diakses. variabel yang diletakkan pada fungsi yang berbeda tidak dapat digunakan apabila satu sama lain. serta, penamaan variabel bisa saja sama asalkan pada function / scope yang berbeda. sementara itu, apabila terdapat variabel yang dibuat diluar main function maka variabel tersebut adalah variabel global karena dapat diakses oleh function manapun.

    printf("Hasil Kali: \n%d", perkalian(5, 6));

    return 0;
}

int perkalian(int a, int b)
{
    return a * b;
}