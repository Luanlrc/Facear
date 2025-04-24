//201	canto superior esquerdo
//200 canto inferior esquerdo
//187	superior direito
//188 inferior direito
//205 horizontal
//186 vertical
// 88 = X
// 117 = O
// 240 = caracter invisivel

// Proxima entrega é para fazer
// Sorteio de jogada do computador com random
// Criar logica de vez do jogador, quem esta jogando no momento
	
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h> // Responsavel por manipulação de timesleep e math.random com rand() e Sleep() o windows.h tambem faz porem so ira rodar no windows
#define WIDTH 50
#define SIZE 3

char player_one[20] = "Nao definido";
char player_two[20] = "Nao definido";

// Função para posicionar o cursor na tela
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int verify_winner() { //char tabuleiro[SIZE][SIZE]
	int i,j;
    
    char tabuleiro[SIZE][SIZE] = {
        {'X', 'O', 'X'},
		{'O', 'X', 'O'},
		{'O', 'X', 'X'}
	};
    
    // Verifica linhas e colunas
    for (i = 0; i < SIZE; i++) {
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
        if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
            return tabuleiro[0][i];
        }
    }

    // Verifica diagonais
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }

    // Verifica se há espaços vazios para continuar o jogo
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }

    return 0;
}

// Funções de template de tela
void render_line_up(){
    int i;
    printf("%c", 201); // canto superior esquerdo
    for(i = 1; i <= WIDTH; i++) printf("%c", 205); // linha horizontal
    printf("%c\n", 187); // canto superior direito
}

void render_line_down(){
    int i;
    printf("%c", 200); // canto inferior esquerdo
    for(i = 1; i <= WIDTH; i++) printf("%c", 205); // linha horizontal
    printf("%c\n", 188); // canto inferior direito
}

void render_body(){
    int i, j;
    for(i = 1; i <= 17; i++){
        printf("%c", 186); // linha vertical esquerda
        for(j = 1; j <= WIDTH; j++) printf(" ");
        printf("%c\n", 186); // linha vertical direita
    }
}

void table_template(){
    render_line_up();
    render_body();
    render_line_down();
}

// Telas
void tela_login(){
    system("cls");
    table_template();
    gotoxy(10, 2); printf("Login de Jogador");
    gotoxy(10, 4); printf("Digite seu nome:");
    gotoxy(10, 6); printf("> ");
    scanf("%19s", player_one);
}

void tela_cadastro(){
    system("cls");
    table_template();
    gotoxy(10, 2); printf("Cadastro de Jogador");
    gotoxy(10, 4); printf("Nome do Jogador 1: ");
    scanf("%19s", player_one);
    gotoxy(10, 6); printf("Nome do Jogador 2: ");
    scanf("%19s", player_two);
}

void tela_ranking(){
    system("cls");
    table_template();
    gotoxy(10, 2); printf("Ranking de Jogadores");
    gotoxy(10, 4); printf("1. Fulano - 10 pts");
    gotoxy(10, 5); printf("2. Ciclano - 8 pts");
    gotoxy(10, 6); printf("3. Beltrano - 5 pts");
    getchar(); getchar();
}

void tela_jogar(){
    system("cls");
    table_template();
    gotoxy(10, 2); printf("Tela de Jogo");
    gotoxy(10, 4); printf("Tabuleiro aqui futuramente.");
    getchar(); getchar();
}

void tela_configuracoes(){
    system("cls");
    table_template();
    gotoxy(10, 2); printf("Configuracoes");
    gotoxy(10, 4); printf("1 - Som: Ativado");
    gotoxy(10, 5); printf("2 - Dificuldade: Facil");
    getchar(); getchar();
}

void tela_carregar(){
    system("cls");
    table_template();
    gotoxy(10, 2); printf("Carregar Jogo");
    gotoxy(10, 4); printf("1 - Save Slot 1");
    gotoxy(10, 5); printf("2 - Save Slot 2");
    getchar(); getchar();
}

void tela_salvar(){
    system("cls");
    table_template();
    gotoxy(10, 2); printf("Salvar Jogo");
    gotoxy(10, 4); printf("Jogo salvo com sucesso!");
    getchar(); getchar();
}

// Menu principal interativo
void menu_principal(){
    int opcao;
    do {
        system("cls");
        table_template();
        gotoxy(10, 2);  printf("Menu Principal");
        gotoxy(10, 4);  printf("1 - Login");
        gotoxy(10, 5);  printf("2 - Cadastro de Jogador");
        gotoxy(10, 6);  printf("3 - Jogar");
        gotoxy(10, 7);  printf("4 - Ranking");
        gotoxy(10, 8);  printf("5 - Configuracoes");
        gotoxy(10, 9);  printf("6 - Carregar Jogo");
        gotoxy(10,10);  printf("7 - Salvar Jogo");
        gotoxy(10,11);  printf("8 - Salvar e Sair");
        gotoxy(10,12);  printf("0 - Sair do Jogo");
        gotoxy(10,14);  printf("Jogador 1: %s", player_one);
        gotoxy(10,15);  printf("Jogador 2: %s", player_two);
        gotoxy(10,17);  printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: tela_login(); break;
            case 2: tela_cadastro(); break;
            case 3: tela_jogar(); break;
            case 4: tela_ranking(); break;
            case 5: tela_configuracoes(); break;
            case 6: tela_carregar(); break;
            case 7: tela_salvar(); break;
            case 8:
                tela_salvar();
                system("cls");
                table_template();
                gotoxy(10, 6); printf("Jogo salvo com sucesso!");
                gotoxy(10, 8); printf("Saindo...");
                Sleep(1500); // espera para mostrar a mensagem
                exit(0);
                break;
            case 0:
                system("cls");
                table_template();
                gotoxy(10, 6); printf("Saindo do jogo...");
                Sleep(1000);
                exit(0);
                break;
            default:
                gotoxy(10, 19); printf("Opcao invalida!");
                getchar(); getchar();
        }
    } while(opcao != 0);
}

int main() {
    menu_principal();
    return 0;
}
