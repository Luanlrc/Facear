#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define SIZE 3
#define WIDTH 50
	// setlocale(LC_ALL, "Portuguese")
	// int aux;
	// for(aux = 1; aux <= 20; aux++){
	//     printf(" \n");
	//   };
	
	// tabela ascii https://www.matematica.pt/util/resumos/tabela-ascii.php
	// gotoxy(10,5) colunas / linhas
	
	//201	canto superior esquerdo
	//200 canto inferior esquerdo
	//187	superior direito
	//188 inferior direito
	//205 horizontal
	//186 vertical
	// 88 = X
	// 117 = O
	// 240 = caracter invisivel
	
char player_one[20];
char player_two[20];

void render_line_up(){ // renderiza a linha de cima
	int aux, aux2;
	printf("%c", 201);
	for(aux = 1; aux <= WIDTH; aux++){
		printf("%c", 205);
	}
	printf("%c\n", 187);
}

void render_line_down(){ // renderiza a linha de baixo
	int aux, aux2;
	printf("%c", 200);
	for(aux = 1; aux <= WIDTH; aux++){
		printf("%c", 205);
	}
	printf("%c\n", 188);
}

void render_body(){
	int aux, aux2;
	for(aux2 = 1; aux2 <= 13; aux2++){
		printf("%c", 186);
		for(aux = 1; aux <= WIDTH; aux++){
			printf(" ");
		}
		printf("%c\n", 186);
	}
}

//Função gotoxy
void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void template_test(){
	render_line_up();
	render_body();
	render_line_down();
	gotoxy(10,1); //colunas / linhas
	table_template(88);
	getchar();
}

char verify_winner(char tabuleiro[SIZE][SIZE]) {
	int i,j;
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

    return "E";
}

void template_line(int aux){
	int auxi;
	for(auxi = 1; auxi <= aux; auxi++){
		printf("%c                          ",186);
	};
}

void template_break_line(int aux){
	int auxi;
	for(auxi = 1; auxi <= aux; auxi++){
		printf("%c                          \n",186);
	};
}


void game_table(int pri){
	printf("***************\n");
	printf("*    |   |    *\n");
	printf("*  %c |   |    *\n",pri);
	printf("*____|___|____*\n");
	printf("*    |   |    *\n");
	printf("*    |   |    *\n");
	printf("*____|___|____*\n");
	printf("*    |   |    *\n");
	printf("*    |   |    *\n");
	printf("*    |   |    *\n");
	printf("***************\n");
}

void table_template(int pri){
	//template_break_line(1);
	printf("\n");
	game_table(pri);
	printf("\n");
	//template_break_line(1);
}


void start_game(){
	system("cls");
	table_template(88);
	printf("                     Digite o nome do player 1:\n");
	printf("                               ");
	scanf("%49s", &player_one);
	printf("\n");
	menu_principal(player_one, "Nao definido");
}

void menu_principal(char player_one[], char player_two[]){
	system("cls");
	table_template(88);
	printf("                                Menu                               \n");
	printf("                                                                   \n");
	printf("                            1 - Jogo Padrao                        \n");
	printf("                            2 - Jogar 'Caos no Tabuleiro'          \n");
	printf("                            3 - Ranking                            \n");
	printf("                            4 - Sair                               \n");
	printf("                                                                   \n");
	printf("                                                                   \n");
	printf("                            Jogador 1 - %s                         \n", player_one);
	printf("                            Jogador 2 - %s                         \n", player_two);
	printf("                                                                   \n");
	printf("                                                                   \n");
	getchar();
}




int main() {
	template_test();
	start_game();
	char tabuleiro[SIZE][SIZE] = {
		{'X', 'O', 'X'},
		{'O', 'X', 'O'},
		{'O', 'X', 'X'}
	};
	
	char resultado = verify_winner(tabuleiro);
	
	if (resultado == 'X' || resultado == 'O') {
		printf("O jogador '%c' venceu!\n", resultado);
	} else if (resultado == 'E') {
		printf("O jogo terminou em empate!\n");
	} else {
		printf("O jogo ainda não terminou.\n");
	}
    return 0;
}
