#ifndef DEFS_H
#define DEFS_H

typedef unsigned long U64;

/*
Some bitboard constants with LERF-mapping:

a-file             0x0101010101010101
h-file             0x8080808080808080
1st rank           0x00000000000000FF
8th rank           0xFF00000000000000
a1-h8 diagonal     0x8040201008040201
h1-a8 antidiagonal 0x0102040810204080
light squares      0x55AA55AA55AA55AA
dark squares       0xAA55AA55AA55AA55
*/


const U64 start[14] = {
    0x000000000000FF00, // wP (white pawns)
    0x0000000000000042, // wN (white knights)
    0x0000000000000024, // wB (white bishops)
    0x0000000000000081, // wR (white rooks)
    0x0000000000000008, // wQ (white queen)
    0x0000000000000010, // wK (white king)
    0x00FF000000000000, // bP (black pawns)
    0x4200000000000000, // bN (black knights)
    0x2400000000000000, // bB (black bishops)
    0x8100000000000000, // bR (black rooks)
    0x0800000000000000, // bQ (black queen)
    0x1000000000000000, // bK (black king)
    0x0000000000000000, // Empty (unused index for clarity)
    0x0000000000000000  // Empty (unused index for clarity)
};

// enum SQ{
//     a1, b1, c1, d1, e1, f1, g1, h1,
//     a2, b2, c2, d2, e2, f2, g2, h2,
//     a3, b3, c3, d3, e3, f3, g3, h3,
//     a4, b4, c4, d4, e4, f4, g4, h4,
//     a5, b5, c5, d5, e5, f5, g5, h5,
//     a6, b6, c6, d6, e6, f6, g6, h6,
//     a7, b7, c7, d7, e7, f7, g7, h7,
//     a8, b8, c8, d8, e8, f8, g8, h8, nosq
// };

// enum PC{
//     wP, wN, wB, wR, wQ, wK,
//     bP, bN, bB, bR, bQ, bK
// };

// move by bitmask, create a bitmask that can turn current position to a 0 and
// destiation to 1

typedef struct {

  U64 bb[14];
  U64 board;
  int wtm;
  int ply;

} BOARD;

void init(BOARD* board);
void print_binary(U64 n);

#endif