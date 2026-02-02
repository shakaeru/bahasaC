#include <stdio.h>
#include <string.h>

struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

// dapat menggunakan typedef

typedef struct
{
    char nama[50];
    int umur;
} Manusia;

void printMahasiswa(struct Mahasiswa mahasiswa);

int main()
{
    // struct adalah kontainer yang menyimpan beberapa informasi terkait suatu hal (oop)

    struct Mahasiswa mahasiwa1 = {"Munirah Rahmani", 18, 4.0};

    Manusia manusia1 = {"Awan", 18};

    // mengakses nilai pada struct
    strcpy(manusia1.nama, "Shafwan");
    manusia1.umur = 19;

    printMahasiswa(mahasiwa1);

    // struct juga dapat dibuat menjadi array

    struct Mahasiswa mahasiswa[] = {{"Munirah Rahmani", 18, 4.0}, {"Shafwan Khairullah", 18, 4.0}};

    int size = sizeof(mahasiswa) / sizeof(mahasiswa[0]);

    for (int i = 0; i < size; i++)
    {
        printf("Nama : %s\n", mahasiswa[i].nama);
        printf("Umur : %d\n", mahasiswa[i].umur);
        printf("IPK  : %.2f\n", mahasiswa[i].ipk);
    }

    return 0;
}

void printMahasiswa(struct Mahasiswa mahasiswa)
{
    printf("Nama : %s\n", mahasiswa.nama);
    printf("Umur : %d\n", mahasiswa.umur);
    printf("IPK  : %.2f\n", mahasiswa.ipk);
}