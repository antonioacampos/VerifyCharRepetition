#include <stdio.h>
#include <string.h>

// Faça uma função que recebe uma string por parâmetro e retorna 1 se não há repetição de caracteres na 
// string e 0 caso contrário. Por exemplo, a palavra "PERNAMBUCO" é formada por caracteres distintos,
// ou seja, não há repetição. Já a palavra "ALGORITMO" possui repetição do caractere "O".

int repeteCaracter(const char* string) {
    int contador[26] = {0};
    int i;

    for (i = 0; string[i] != '\0'; i++) 
        contador[string[i] - 'a']++; 


    for (i = 0; i < 26; i++) 
        if (contador[i]>1) 
            return 0; 
    return 1; 
}

int main() {
    const char* A = "algritmo";
    
    if (!repeteCaracter(A)) {
        printf("repete\n");
    } else {
        printf("não repete\n");
    }

    return 0;
}
