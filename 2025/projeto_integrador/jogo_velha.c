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
    return 0;
}
