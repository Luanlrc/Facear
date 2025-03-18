#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	// int aux;
	// for(aux = 1; aux <= 20; aux++){
	//     printf(" \n");
	//   };
	
char player_one[20];
char player_two[20];

void template_line(int aux){
	for(aux = 1; aux <= 6; aux++){
		printf("                          ");
	};
}

void template_break_line(aux){
	for(aux = 1; aux <= 6; aux++){
		printf("                          \n");
	};
}


void game_table(void){
	printf("                          ***************\n");
	printf("                          *    |   |    *\n");
	printf("                          *____|___|____*\n");
	printf("                          *    |   |    *\n");
	printf("                          *____|___|____*\n");
	printf("                          *    |   |    *\n");
	printf("                          *    |   |    *\n");
	printf("                          ***************\n");
}

void table_template(void){
	template_break_line(6);
	game_table();
	template_break_line(3);
}


void start_game(void){
	system("cls");
	table_template();
	printf("                     Digite o nome do player 1:\n");
	printf("                               ");
	scanf("%49s", &player_one);
	printf("\n");
	menu_principal(player_one, "Nao definido");
}

void menu_principal(char player_one[], char player_two[]){
	system("cls");
	table_template();
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
