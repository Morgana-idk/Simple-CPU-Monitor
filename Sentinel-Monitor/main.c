#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>

int main() {
    
    int contagem = 0;
    int opcao = 0;
    int tecla;

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    curs_set(0);

    while (1){
        erase();
        mvprintw(0, 0, "========SENTINEL MONITOR========");
        mvprintw(1, 0, "Contagem: %d", contagem);
        mvprintw(3, 0, "Opcao: %d       (APERTE -> PARA MUDAR)", opcao);
        mvprintw(4, 0, "Aperte Q para Sair.");
        mvprintw(5, 0, "================================");

        tecla = getch();

        if (tecla == KEY_RIGHT){
            opcao++;
        } else if (tecla == KEY_LEFT) {
            opcao--;
        } else if (tecla == 'q' || tecla == 'Q') {
            break;
        }

        refresh();
        contagem++;
        usleep(10000);
    }
    
    endwin();
    return 0;
}
