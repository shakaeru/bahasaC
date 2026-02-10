#include <stdio.h>

int main()
{
    FILE *pFile = fopen("test.txt", "r");
    // buffer untuk menyimpan isi dari file yang dibaca, byte nya harus diberikan
    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("File Tidak Dapat Diakses");
    }

    // apabila fgets masih belum menerima NULL dari pembacaan file yang dibaca, maka akan terus mencetak isi file
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}