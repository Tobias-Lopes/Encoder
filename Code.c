#include <stdio.h>
#include <string.h>

const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                  'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                  'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

int findIndex(char c) {
    for (int i = 0; i < sizeof(S); i++) {
        if (S[i] == c) {
            return i;
        }
    }
    return -1; // Caractere inválido
}

void cifrar(char *P, int K, char *C) {
    int lenP = strlen(P);
    int lenS = sizeof(S);

    for (int i = 0, j = 0; i < lenP; i++, j = (j + 1) % 4) {
        int indexP = findIndex(P[i]);
        if (indexP == -1) {
            strcpy(C, "Caractere invalido na entrada!");
            return;
        }
        int indexK = K / (int)pow(10, 3 - j) % 10;
        int indexC = (indexP + indexK) % lenS;
        C[i] = S[indexC];
    }
    C[lenP] = '\0';
}

int main() {
    char P[201], C[201];
    int K;

    scanf("%d", &K);

    if (K < 0 || K > 9999) {
        printf("Chave invalida!\n");
        return 1;
    }

    scanf(" %[^\n]", P);

    cifrar(P, K, C);

    printf("%s\n", C);

    return 0;
}
