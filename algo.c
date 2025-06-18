#include <stdio.h>
#include <unistd.h>   
#include <stdlib.h>  
#define t 100000  
#define passos 40     

void limpaTela() {
 
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void desenho(int pos, int passo) {
    for (int i = 0; i < pos; i++) printf(" ");
    printf(" o\n");

    for (int i = 0; i < pos; i++) printf(" ");
    printf("/|\\\n");

    for (int i = 0; i < pos; i++) printf(" ");

   
    if (passo % 2 == 0)
        printf("/ \\\n");
    else
        printf("/\\ \n");
}

int main() {
    for (int i = 0; i < passos; i++) {
        limpaTela();
        desenho(i, i);
        usleep(t); 
    }

    return 0;
}

