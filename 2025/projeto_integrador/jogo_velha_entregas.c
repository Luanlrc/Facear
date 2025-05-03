//201	canto superior esquerdo
//200 canto inferior esquerdo
//187	superior direito
//188 inferior direito
//205 horizontal
//186 vertical
// 88 = X
// 117 = O
// 240 = caracter invisivel
	
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define WIDTH 50
#define HEIGHT 20
#define SIZE 3
#define XX 88
#define OO 79
#define LHORI 205  // ═
#define LVERT 186  // ║
#define CROSS 206  // ╬
#define INIT_HORI 17
#define INIT_VERT 6

char player_one[20] = "Nao definido";
char player_two[20] = "Nao definido";

// Função para posicionar o cursor na tela
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
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
    for(i = 1; i <= HEIGHT; i++){
        printf("%c", 186); // linha vertical esquerda
        for(j = 1; j <= WIDTH; j++) printf(" ");
        printf("%c\n", 186); // linha vertical direita
    }
}

void layout_game_template(){
    render_line_up();
    render_body();
    render_line_down();
}






// funções de renderização do tabuleiro

void table_template() {
    char tabuleiro[SIZE][SIZE];
    init_empty_table(tabuleiro);
    system("cls");
    layout_game_template();
    gotoxy(10, 2); printf("Tabuleiro do Jogo");
    render_table_game();
    render_simbols_table(tabuleiro);
}

void init_empty_table(char tabuleiro[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            tabuleiro[i][j] = ' ';
}

void render_table_game(){
    for (int i = 0; i < SIZE * 2 - 1; i++) {
        gotoxy(INIT_HORI, INIT_VERT + i);
        for (int j = 0; j < SIZE; j++) {
            if (i % 2 == 0) {
                printf("   ");
                if (j < SIZE - 1) printf("%c", LVERT);
            } else {
                printf("%c%c%c", LHORI, LHORI, LHORI);
                if (j < SIZE - 1) printf("%c", CROSS);
            }
        }
    }
}

void render_simbols_table(char tabuleiro[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int x = INIT_HORI + j * 4 + 1; // deslocamento horizontal para centro
            int y = INIT_VERT + i * 2;     // linha de conteúdo
            gotoxy(x, y);
            printf("%c", tabuleiro[i][j]);
        }
    }
}






//controllers
int generate_random_play() {
    return (rand() % (SIZE * SIZE)) + 1;
}

void play_with_friend() {
    int jogadas = 0;
    int jogada = XX; // começa com 'X' (88)
    int pos;

    while (jogadas < SIZE * SIZE) {
        system("cls");
        layout_game_template();
        table_template();
        gotoxy(10, 12); printf("Vez do jogador %c (%d)", (char)jogada, jogada);
        gotoxy(10, 16); printf("Sair? digite [0]");
        gotoxy(10, 14); printf("Escolha uma posicao (1 a 9): ");
        gotoxy(42, 14); scanf("%d", &pos);
        
        if (pos == 0){
            system("cls");
            layout_game_template();
            table_template();
            break;
        }
        if (pos < 1 || pos > 9) {
            gotoxy(10, 16); printf("Posicao invalida! Pressione Enter...");
            getchar(); getchar();
            continue;
        }

        jogada = (jogada == XX) ? OO : XX;
        jogadas++;
    }

    // Mostra tabuleiro final
    gotoxy(10, 16); printf("Jogo encerrado.");
    Sleep(1000);
}

void play_with_computer() {
    int jogadas = 0;
    int jogada = XX;
    int pos;

    while (jogadas < SIZE * SIZE) {
        system("cls");
        layout_game_template();
        table_template();
        gotoxy(10, 12); printf("Vez do jogador %c", (char)jogada);
        gotoxy(10, 16); printf("Sair? digite [0]");

        if (jogada == XX) {
            gotoxy(10, 14); printf("Escolha uma posicao (1 a 9): ");
            gotoxy(42, 14); scanf("%d", &pos);
        } else {
            pos = generate_random_play(); // gera número entre 1 e 9
            system("cls");
            layout_game_template();
            table_template();
            gotoxy(10, 12); printf("Vez do Computador %c", (char)jogada);
            gotoxy(10, 14); printf("O computador jogou (%d)", pos);
            Sleep(3000);
        }
        if (pos == 0){
            system("cls");
            layout_game_template();
            table_template();
            break;
        }
        if (pos < 1 || pos > 9) {
            gotoxy(10, 16); printf("Posicao invalida! Pressione Enter...");
            getchar(); getchar();
            continue;
        }

        jogada = (jogada == XX) ? OO : XX;
        jogadas++;
    }

    gotoxy(10, 16); printf("Jogo encerrado.");
    Sleep(1000);
}





// Telas
void tela_login(){
    system("cls");
    layout_game_template();
    gotoxy(10, 2); printf("Login de Jogador");
    gotoxy(10, 4); printf("Digite seu nome:");
    gotoxy(10, 6); printf("> ");
    scanf("%19s", player_one);
}

void tela_cadastro(){
    system("cls");
    layout_game_template();
    gotoxy(10, 2); printf("Cadastro de Jogador");
    gotoxy(10, 4); printf("Nome do Jogador 1: ");
    scanf("%19s", player_one);
    gotoxy(10, 6); printf("Nome do Jogador 2: ");
    scanf("%19s", player_two);
}

void tela_ranking(){
    system("cls");
    layout_game_template();
    gotoxy(10, 2); printf("Ranking de Jogadores");
    gotoxy(10, 4); printf("1. Fulano - 10 pts");
    gotoxy(10, 5); printf("2. Ciclano - 8 pts");
    gotoxy(10, 6); printf("3. Beltrano - 5 pts");
    getchar(); getchar();
}

void play_with_friend_menu(){
    play_with_friend();
}

void play_with_computer_menu(){
    play_with_computer();
}

void tela_configuracoes(){
    system("cls");
    layout_game_template();
    gotoxy(10, 2); printf("Configuracoes");
    gotoxy(10, 4); printf("1 - Som: Ativado");
    gotoxy(10, 5); printf("2 - Dificuldade: Facil");
    getchar(); getchar();
}

void tela_carregar(){
    system("cls");
    layout_game_template();
    gotoxy(10, 2); printf("Carregar Jogo");
    gotoxy(10, 4); printf("1 - Save Slot 1");
    gotoxy(10, 5); printf("2 - Save Slot 2");
    getchar(); getchar();
}

void tela_salvar(){
    system("cls");
    layout_game_template();
    gotoxy(10, 2); printf("Salvar Jogo");
    gotoxy(10, 4); printf("Jogo salvo com sucesso!");
    getchar(); getchar();
}

// Menu principal interativo
void menu_principal(){
    int opcao;
    do {
        system("cls");
        layout_game_template();
        gotoxy(10, 2);  printf("Menu Principal");
        gotoxy(10, 4);  printf("1 - Login");
        gotoxy(10, 5);  printf("2 - Cadastro de Jogador");
        gotoxy(10, 6);  printf("3 - Jogar com Amigo");
        gotoxy(10, 7);  printf("4 - Jogar com Computador");
        gotoxy(10, 8);  printf("5 - Ranking");
        gotoxy(10, 9);  printf("6 - Configuracoes");
        gotoxy(10, 10);  printf("7 - Carregar Jogo");
        gotoxy(10,11);  printf("8 - Salvar Jogo");
        gotoxy(10,12);  printf("9 - Salvar e Sair");
        gotoxy(10,13);  printf("0 - Sair do Jogo");
        gotoxy(10,15);  printf("Jogador 1: %s", player_one);
        gotoxy(10,16);  printf("Jogador 2: %s", player_two);
        gotoxy(10,18);  printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: tela_login(); break;
            case 2: tela_cadastro(); break;
            case 3: play_with_friend_menu(); break;
            case 4: play_with_computer_menu(); break;
            case 5: tela_ranking(); break;
            case 6: tela_configuracoes(); break;
            case 7: tela_carregar(); break;
            case 8: tela_salvar(); break;
            case 9:
                tela_salvar();
                system("cls");
                layout_game_template();
                gotoxy(10, 6); printf("Jogo salvo com sucesso!");
                gotoxy(10, 8); printf("Saindo...");
                Sleep(1500); // espera para mostrar a mensagem
                exit(0);
                break;
            case 0:
                system("cls");
                layout_game_template();
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
    srand(time(NULL));
    menu_principal();
    return 0;
}
