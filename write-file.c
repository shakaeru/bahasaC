#include <stdio.h>

int main()
{
    // built-in struct FILe
    // fopen() = built-in function membuat / membuka file, "w" artinya file dapat diubah
    FILE *pFile = fopen("test.txt", "w");

    // membuat karakter atau isi yang mau dimasukkan ke file
    char text[] = "Moouney<3";

    // apabila gagal fopen akan mengembalikan NULL, untuk itu dibuat logika jika maka apabila hal tersebut terjadi program akan berhenti
    if (pFile == NULL)
    {
        printf("Tidak Dapat Membuat File");
        return 1;
    }

    // file print fprint() = mengedit isi file
    fprintf(pFile, "%s", text);

    printf("File Berhasil Dibuat!");

    // menutup file yang dibuka
    fclose(pFile);

    return 0;
}