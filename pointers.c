#include <stdio.h>

void ulangTahun(int *umur);

int main()
{
    // pointer adalah variabel yang dapat menyimpan alamat memori variabel lain.
    // manfaatnya adalah kita dapat mencegah membuang penggunaan memori yang sia-sia dengan cara memberikan kita akses untuk mengakses variabel dengan struktur data yang besar tanpa menyalin keseluruhan isi datanya.

    int umur = 18;
    // * = dereference operator, variabel pUmur menyimpan alamat memori dari variabel umur
    int *pUmur = &umur;

    // menampilkan alamat memori variabel umur
    // &umur = alamat memori dari variabel umur
    // %p format specifier yang menampilkan alamat memori
    printf("%p\n", &umur);

    // memberikan alamat memori variabel umur agar fungsi yang berbeda dapat mengakses variabel tersebut
    ulangTahun(pUmur);

    return 0;
}

void ulangTahun(int *umur)
{
    // (*umur) mengubah alamat memori dari variabel umur menjadi nilai pada variabel tersebut
    (*umur)++;
}