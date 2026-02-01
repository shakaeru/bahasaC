#include <stdio.h>

enum Status
{
    BERHASIL,
    GAGAL,
    MENUNGGU
};

// dapat menggunakan typedef

typedef enum
{
    MINGGU,
    SENIN,
    SELASA,
    RABU,
    KAMIS,
    JUMAT,
    SABTU
} Hari;

int main()
{
    // enum adalah mengubah kumpulan nama beserta nilai integer (membuat penulisan nilai yang berisi bilangan bulat lebih mudah terbaca). enum dimulai dari 0.

    enum Status statuses = BERHASIL;

    Hari hariIni = MINGGU;
    return 0;
}