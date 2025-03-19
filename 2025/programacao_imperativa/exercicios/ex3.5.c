#include <stdio.h>
#include <time.h>

void main(void){
    int idade, current_year;
    time_t date_time;
    struct tm *time_info;
    
    time(&date_time);
    time_info = gmtime(&date_time);
    current_year = time_info->tm_year + 1900;
    printf("Ano atual (UTC): %d\n", current_year);

    printf("Vamos verificar em que ano voce nasceu \n");
    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

    printf("Seu ano de nascimento e %i", current_year-idade);

}

// O que é ->?
// É um operador em C usado para acessar campos de uma estrutura quando você tem um ponteiro para essa estrutura.
// Equivale a (*ponteiro).campo.

// time_info = gmtime(&date_time);:
// gmtime() retorna um ponteiro para uma estrutura tm.
// Esse ponteiro é armazenado em time_info.

// time_info->tm_year:
// Acessa o campo tm_year da estrutura tm apontada por time_info.
// tm_year armazena o número de anos desde 1900.

// current_year = time_info->tm_year + 1900;:
// Soma 1900 ao valor de tm_year para obter o ano atual.

// Exemplo: Se tm_year for 123, o ano atual é 
// 123
// +
// 1900
// =
// 2023
// 123+1900=2023.

//exemplo de uso de um ponteiro




// int x = 10;
// int *ptr = &x;  ptr aponta para o endereço de x
// *ptr = 20;      Modifica o valor de x através do ponteiro
// printf("%d", x);  Saída: 20




// void incrementar(int *ptr) {
//     (*ptr)++;  Incrementa o valor apontado por ptr
// }
// int main() {
//     int x = 10;
//     incrementar(&x);  Passa o endereço de x
//     printf("%d", x);  Saída: 11
//     return 0;
// }




// int arr[3] = {10, 20, 30};
// int *ptr = arr;  ptr aponta para o primeiro elemento do array
// printf("%d", *(ptr + 1));  Acessa o segundo elemento (20)



// Alocação dinâmica de memória
// int *ptr = (int *)malloc(sizeof(int) * 3);  Aloca memória para 3 inteiros
// ptr[0] = 10;  Atribui valores
// ptr[1] = 20;
// free(ptr);    Libera a memória alocada




//Funções que retornam ponteiros
// int* criarArray(int tamanho) {
//     int *arr = (int *)malloc(sizeof(int) * tamanho);
//     return arr; // Retorna um ponteiro para o array alocado
// }



// Ponteiros para funções
// int soma(int a, int b) {
//     return a + b;
// }
// int main() {
//     int (*ptr)(int, int) = soma;  Ponteiro para a função soma
//     printf("%d", ptr(2, 3));  Chama a função através do ponteiro
//     return 0;
// }



// Manipulação de arquivos
// FILE *arquivo = fopen("arquivo.txt", "r");
// if (arquivo != NULL) {
//     // Ler ou escrever no arquivo
//     fclose(arquivo);
// }





// void imprimir(void *ptr, char tipo) {
//     if (tipo == 'i') {
//         printf("%d", *(int *)ptr);  Converte para int e imprime
//     } else if (tipo == 'f') {
//         printf("%f", *(float *)ptr);  Converte para float e imprime
//     }
// }
// int main() {
//     int x = 10;
//     imprimir(&x, 'i');  Imprime 10
//     return 0;
// }




// Ponteiros para ponteiros
// int x = 10;
// int *ptr = &x;
// int **ptr2 = &ptr;  Ponteiro para ponteiro
// printf("%d", **ptr2);  Acessa o valor de x (10)