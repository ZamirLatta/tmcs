// initialize board
#include "/home/zmr_4c/tmcs/tmcs-l/lib/start.h"
#include <stdio.h>

char a1[] = " wr1 ";
    char a2[] = " wap ";
    char a3[] = "     ";
    char a4[] = "     ";
    char a5[] = "     ";
    char a6[] = "     ";
    char a7[] = " bap ";
    char a8[] = " br1 ";

    char b1[] = " wn1 ";
    char b2[] = " wbp ";
    char b3[] = "     ";
    char b4[] = "     ";
    char b5[] = "     ";
    char b6[] = "     ";
    char b7[] = " bbp ";
    char b8[] = " bn1 ";

    char c1[] = " wb1 ";
    char c2[] = " wcp ";
    char c3[] = "     ";
    char c4[] = "     ";
    char c5[] = "     ";
    char c6[] = "     ";
    char c7[] = " bcp ";
    char c8[] = " bb1 ";

    char d1[] = " w1 ";
    char d2[] = " wdp ";
    char d3[] = "     ";
    char d4[] = "     ";
    char d5[] = "     ";
    char d6[] = "     ";
    char d7[] = " bdp ";
    char d8[] = " bq ";

    char e1[] = " wk ";
    char e2[] = " wep ";
    char e3[] = "     ";
    char e4[] = "     ";
    char e5[] = "     ";
    char e6[] = "     ";
    char e7[] = " bep ";
    char e8[] = " bk ";

    char f1[] = " wb2 ";
    char f2[] = " wfp ";
    char f3[] = "     ";
    char f4[] = "     ";
    char f5[] = "     ";
    char f6[] = "     ";
    char f7[] = " bfp ";
    char f8[] = " bb2 ";

    char g1[] = " wn2 ";
    char g2[] = " wgp ";
    char g3[] = "     ";
    char g4[] = "     ";
    char g5[] = "     ";
    char g6[] = "     ";
    char g7[] = " bgp ";
    char g8[] = " bn2 ";

    char h1[] = " wr2 ";
    char h2[] = " whp ";
    char h3[] = "     ";
    char h4[] = "     ";
    char h5[] = "     ";
    char h6[] = "     ";
    char h7[] = " bhp ";
    char h8[] = " br2 ";

    void printBoard(void)
    {
        int rowVal = 97;
        char colVal = "1";
        printf("%c", rowVal, colVal);

        for (int i=0; i<8; ++i)
        {
            
            ++rowVal;
        }
    }

    int main(void)
    {
        start(0);
        printBoard();
        return 0;
    }