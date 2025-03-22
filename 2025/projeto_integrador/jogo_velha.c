#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	// setlocale(LC_ALL, "Portuguese")
	// int aux;
	// for(aux = 1; aux <= 20; aux++){
	//     printf(" \n");
	//   };
	// 88 = X
	// 117 = O
	// 240 = caracter invisivel
	// tabela ascii https://www.matematica.pt/util/resumos/tabela-ascii.php
	
char player_one[20];
char player_two[20];

char verify_winner(char tabuleiro[SIZE][SIZE]) {
    // Verifica linhas e colunas
    for (int i = 0; i < SIZE; i++) {
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
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }

    return 1;
}

void template_line(int aux){
	int auxi;
	for(auxi = 1; auxi <= aux; auxi++){
		printf("                          ");
	};
}

void template_break_line(int aux){
	int auxi;
	for(auxi = 1; auxi <= aux; auxi++){
		printf("                          \n");
	};
}


void game_table(int pri){
	printf("                          ***************\n");
	printf("                          *    |   |    *\n");
	printf("                          *  %c |   |    *\n", pri);
	printf("                          *____|___|____*\n");
	printf("                          *    |   |    *\n");
	printf("                          *    |   |    *\n");
	printf("                          *____|___|____*\n");
	printf("                          *    |   |    *\n");
	printf("                          *    |   |    *\n");
	printf("                          *    |   |    *\n");
	printf("                          ***************\n");
}

void table_template(int pri){
	template_break_line(3);
	game_table(pri);
	template_break_line(2);
}


void start_game(void){
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
