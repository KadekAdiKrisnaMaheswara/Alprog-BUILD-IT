//soal 1
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);  // Membandingkan nilai dereferensi dari pointer a dan b
}

int main() {
    int N;

    // Meminta input ukuran array
    scanf("%d", &N);

    int nilai[N];

    // Meminta input nilai-nilai array
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    // Mengurutkan array menggunakan qsort
    qsort(nilai, N, sizeof(int), compare);

    // Menampilkan nilai yang sudah diurutkan
    for(int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}

//soal 2
#include <stdio.h>
#include <string.h>

void evaluasi_string(char a[], char b[]) {
   
    if (strlen(a) != strlen(b)) {
        printf("BERBEDA\n");
    }
   
    else if (strcmp(a, b) == 0) {
        printf("IDENTIK\n");
    }
  
    else {
        printf("MIRIP\n");
    }
}

int main() {
    char string_a[101], string_b[101];

    scanf("%100s", string_a);


  
    scanf("%100s", string_b);

  
    evaluasi_string(string_a, string_b);

    return 0;
}

//soal 3
#include <stdio.h>
#include <math.h>


int apakah_prima(long long N) {
    if (N <= 1) return 0;  
    if (N == 2) return 1;  
    if (N % 2 == 0) return 0;  
    
    
    for (long long i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    long long N;
    
    
    scanf("%lld", &N);
    
    
    if (apakah_prima(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}