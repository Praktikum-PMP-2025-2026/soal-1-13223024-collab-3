/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 02 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Senin, 20 April 2026
 *   Nama (NIM)          : Muhammad 'Afif Yusuf (13223024)
 *   Nama File           : soal1.c
 *   Deskripsi           : Di sebuah stasiun pengamatan cuaca ekstrem, deretan sensor badai mengirimkan data intensitas angin 
 * secara berkala. Sayangnya, beberapa pembacaan hilang akibat gangguan transmisi dan ditandai 
sebagai data kosong. Sebelum data tersebut dipakai oleh tim analisis, sistem harus terlebih dahulu 
memulihkan nilai yang hilang berdasarkan pembacaan valid terdekat. Setelah seluruh data 
dipulihkan, tim ingin mengetahui rentang waktu pengamatan paling berbahaya, yaitu segmen kontigu 
dengan total intensitas terbesar. Pulihkan elemen array yang hilang lalu cari jumlah subarray maksimum. 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
int n = -1;
int a, b, c, d, e, f, g, h, i, j;
int MAX_SUM;
char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
scanf( "%d", "%d", "%d", "%d", "%d", "%d", "%d", "%d", "%d", "%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

if (arr[0] == n) {
    if (arr[1] == n) {
        printf ("arr[0] = '0'\n");
    } else if (arr[1] != n) {
        printf ("arr[0] = arr[1]\n");
    }
}
else if (arr [1] == n) {
    if (arr[0] != n && arr[2] != n) {
        printf ("arr[1] = (arr[0] + arr [2]) / 2\n");
    }else if (arr [0] != n  && arr [2] == n) {
        printf ("arr[1] == arr[0]\n");
    }else if (arr [2] != n && arr [0] == n) {
        printf ("arr[1] == arr[2]\n");
    }else if (arr [0] == n && arr [2] == n) {
        printf ("arr[1] = '0'\n");
    }
}
else if (arr [2] == n) {
    if (arr [1] != n && arr [3] != n) {
        printf ("arr[2] = (arr[1] + arr [3]) / 2\n");
    }else if (arr [1] != n  && arr [3] == n) {
        printf ("arr[2] == arr[1]\n");
    }else if (arr [3] != n && arr [1] == n) {
        printf ("arr[2] == arr[3]\n");
    }else if (arr [1] == n && arr [3] == n) {
        printf ("arr[2] = '0'\n");
    }
}
else if (arr [3] == n) {
    if (arr [2] != n && arr [4] != n) {
        printf ("arr[3] = (arr[2] + arr [4]) / 2\n");
    }else if (arr [2] != n  && arr [4] == n) {
        printf ("arr[3] == arr[2]\n");
    }else if (arr [4] != n && arr [2] == n) {
        printf ("arr[3] == arr[4]\n");
    }else if (arr [2] == n && arr [4] == n) {
        printf ("arr[3] = '0'\n");
    }
}
else if (arr [4] == n) {
    if (arr [3] != n && arr [5] != n) {
        printf ("arr[4] = (arr[3] + arr [5]) / 2\n");
    }else if (arr [3] != n  && arr [5] == n) {
        printf ("arr[4] == arr[3]\n");
    }else if (arr [5] != n && arr [3] == n) {
        printf ("arr[4] == arr[5]\n");
    }else if (arr [3] == n && arr [5] == n) {
        printf ("arr[4] = '0'\n");
    }
}
else if (arr [5] == n) {
    if (arr [4] != n && arr [6] != n) {
        printf ("arr[5] = (arr[4] + arr [6]) / 2\n");
    }else if (arr [4] != n  && arr [6] == n) {
        printf ("arr[5] == arr[4]\n");
    }else if (arr [6] != n && arr [4] == n) {
        printf ("arr[5] == arr[6]\n");
    }else if (arr [4] == n && arr [6] == n) {
        printf ("arr[5] = '0'\n");
    }
}
else if (arr [6] == n) {
    if (arr [5] != n && arr [7] != n) {
        printf ("arr[6] = (arr[5] + arr [7]) / 2\n");
    }else if (arr [5] != n  && arr [7] == n) {
        printf ("arr[6] == arr[5]\n");
    }else if (arr [7] != n && arr [5] == n) {
        printf ("arr[6] == arr[7]\n");
    }else if (arr [5] == n && arr [7] == n) {
        printf ("arr[6] = '0'\n");
    }
}
else if (arr [7] == n) {
    if (arr [6] != n && arr [8] != n) {
        printf ("arr[7] = (arr[6] + arr [8]) / 2\n");
    }else if (arr [6] != n  && arr [8] == n) {
        printf ("arr[7] == arr[6]\n");
    }else if (arr [8] != n && arr [6] == n) {
        printf ("arr[7] == arr[8]\n");
    }else if (arr [6] == n && arr [8] == n) {
        printf ("arr[7] = '0'\n");
    }
}
else if (arr [8] == n) {
    if (arr [7] != n && arr [9] != n) {
        printf ("arr[8] = (arr[7] + arr [9]) / 2\n");
    }else if (arr [7] != n  && arr [9] == n) {
        printf ("arr[8] == arr[7]\n");
    }else if (arr [9] != n && arr [7] == n) {
        printf ("arr[8] == arr[9]\n");
    }else if (arr [7] == n && arr [9] == n) {
        printf ("arr[8] = '0'\n");
    }
}
else if (arr [9] == n) {
    if (arr [8] == n) {
        printf ("arr[9] = '0'\n");
    } else if (arr [8] != n) {
        printf ("arr[9] = arr[8]\n");
    }
}
MAX_SUM = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9];
printf ("RECOVERED = '%d'\n", arr[10]);
printf ("MAX_SUM = '%d'\n", MAX_SUM);

return 0;
}
