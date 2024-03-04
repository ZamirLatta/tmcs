// initialize board
#include "/Users/zamirlatta/tmcs_/tmcs-m/lib/start.h"
#include <stdio.h>

// board
int a1c[2] = {-1, 1};
int a2c[2] = {-1, 2};
int a3c[2] = {-1, 3};
int a4c[2] = {-1, 4};
int a5c[2] = {-1, 5};
int a6c[2] = {-1, 6};
int a7c[2] = {-1, 7};
int a8c[2] = {-1, 8};

int b1c[2] = {-2, 1};
int b2c[2] = {-2 ,2};
int b3c[2] = {-2, 3};
int b4c[2] = {-2, 4};
int b5c[2] = {-2, 5};
int b6c[2] = {-2, 6};
int b7c[2] = {-2, 7};
int b8c[2] = {-2, 8};

int c1c[2] = {-3, 1};
int c2c[2] = {-3, 2};
int c3c[2] = {-3, 3};
int c4c[2] = {-3, 4};
int c5c[2] = {-3, 5};
int c6c[2] = {-3, 6};
int c7c[2] = {-3, 7};
int c8c[2] = {-3, 8};

int d1c[2] = {-4, 1};
int d2c[2] = {-4, 2};
int d3c[2] = {-4, 3};
int d4c[2] = {-4, 4};
int d5c[2] = {-4, 5};
int d6c[2] = {-4, 6};
int d7c[2] = {-4, 7};
int d8c[2] = {-4, 8};

int e1c[2] = {-5, 1};
int e2c[2] = {-5, 2};
int e3c[2] = {-5, 3};
int e4c[2] = {-5, 4};
int e5c[2] = {-5, 5};
int e6c[2] = {-5, 6};
int e7c[2] = {-5, 7};
int e8c[2] = {-5, 8};

int f1c[2] = {-6, 1};
int f2c[2] = {-6, 2};
int f3c[2] = {-6, 3};
int f4c[2] = {-6, 4};
int f5c[2] = {-6, 5};
int f6c[2] = {-6, 6};
int f7c[2] = {-6, 7};
int f8c[2] = {-6, 8};

int g1c[2] = {-7, 1};
int g2c[2] = {-7, 2};
int g3c[2] = {-7, 3};
int g4c[2] = {-7, 4};
int g5c[2] = {-7, 5};
int g6c[2] = {-7, 6};
int g7c[2] = {-7, 7};
int g8c[2] = {-7, 8};

int h1c[2] = {-8, 1};
int h2c[2] = {-8, 2};
int h3c[2] = {-8, 3};
int h4c[2] = {-8, 4};
int h5c[2] = {-8, 5};
int h6c[2] = {-8, 6};
int h7c[2] = {-8, 7};
int h8c[2] = {-8, 8};

// pieces
char a1[6] = " wr1 ";
char a2[6] = " wap ";
char a3[6] = "     ";
char a4[6] = "     ";
char a5[6] = "     ";
char a6[6] = "     ";
char a7[6] = " bap ";
char a8[6] = " br1 ";

char b1[6] = " wn1 ";
char b2[6] = " wbp ";
char b3[6] = "     ";
char b4[6] = "     ";
char b5[6] = "     ";
char b6[6] = "     ";
char b7[6] = " bbp ";
char b8[6] = " bn1 ";

char c1[6] = " wb1 ";
char c2[6] = " wcp ";
char c3[6] = "     ";
char c4[6] = "     ";
char c5[6] = "     ";
char c6[6] = "     ";
char c7[6] = " bcp ";
char c8[6] = " bb1 ";

char d1[6] = " wqq ";
char d2[6] = " wdp ";
char d3[6] = "     ";
char d4[6] = "     ";
char d5[6] = "     ";
char d6[6] = "     ";
char d7[6] = " bdp ";
char d8[6] = " bqq ";

char e1[6] = " wkk ";
char e2[6] = " wep ";
char e3[6] = "     ";
char e4[6] = "     ";
char e5[6] = "     ";
char e6[6] = "     ";
char e7[6] = " bep ";
char e8[6] = " bkk ";

char f1[6] = " wb2 ";
char f2[6] = " wfp ";
char f3[6] = "     ";
char f4[6] = "     ";
char f5[6] = "     ";
char f6[6] = "     ";
char f7[6] = " bfp ";
char f8[6] = " bb2 ";

char g1[6] = " wn2 ";
char g2[6] = " wgp ";
char g3[6] = "     ";
char g4[6] = "     ";
char g5[6] = "     ";
char g6[6] = "     ";
char g7[6] = " bgp ";
char g8[6] = " bn2 ";

char h1[6] = " wr2 ";
char h2[6] = " whp ";
char h3[6] = "     ";
char h4[6] = "     ";
char h5[6] = "     ";
char h6[6] = "     ";
char h7[6] = " bhp ";
char h8[6] = " br2 ";

void printBoard()
{
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a8, b8, c8, d8, e8, f8, g8, h8);
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a7, b7, c7, d7, e7, f7, g7, h7);
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a6, b6, c6, d6, e6, f6, g6, h6);
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a5, b5, c5, d5, e5, f5, g5, h5);
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a4, b4, c4, d4, e4, f4, g4, h4);
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a3, b3, c3, d3, e3, f3, g3, h3);
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a2, b2, c2, d2, e2, f2, g2, h2);
    printf("\n");
    printf("%s %s %s %s %s %s %s %s", a1, b1, c1, d1, e1, f1, g1, h1);
    
}

int main(void)
{
    start(0);
    printBoard();
    return 0;
}