#include <stdio.h>
#include "defs.h"


int main(){
    BOARD board;
    init(&board);
    print_binary(board.bb[0]);
    return 0;
}

void init(BOARD* board){
    board->board = 0;
    for(int i = 0; i<14; i++){
        board->bb[i] = start[i];
        board->board |= start[i];
    }
    board->wtm = 1;
    board->ply = 0;

}

void print_binary(U64 n) {
    for (int i = 63; i >= 0; i--) {
        printf("%c", (n & (1ULL << i)) ? '1' : '0');
        if (i % 8 == 0 && i != 0) {
            printf("\n"); // Add a space every 8 bits for readability
        }
    }
    printf("\n");
}
