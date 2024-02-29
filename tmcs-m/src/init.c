// initialize board
#include "/Users/zamirlatta/tmcs_/tmcs-m/lib/start.h"
#include <stdio.h>


/* key 
    a = -1
    b = -2
    c = -3
    d = -4
    e = -5
    f = -6
    g = -7
    h = -8
*/

    // white pieces:
    /*int wap[] = {-1, 2};
    int wbp[] = {-2, 2};
    int wcp[] = {-3, 2};
    int wdp[] = {-4, 2};
    int wep[] = {-5, 2};
    int wfp[] = {-6, 2};
    int wgp[] = {-7, 2};
    int whp[] = {-8, 2};

    int wr1[] = {-1, 1};
    int wn1[] = {-2, 1};
    int wb1[] = {-3, 1};
    int wq[] = {-4, 1};
    int wk[] = {-5, 1};
    int wb2[] = {-6, 1};
    int wn2[] = {-7, 1};
    int wr2[] = {-8, 1};

    // black pieces:
    int bap[] = {-1, 7};
    int bbp[] = {-2, 7};
    int bcp[] = {-3, 7};
    int bdp[] = {-4, 7};
    int bep[] = {-5, 7};
    int bfp[] = {-6, 7};
    int bgp[] = {-7, 7};
    int bhp[] = {-8, 7};

    int br1[] = {-1, 8};
    int bn1[] = {-2, 8};
    int bb1[] = {-3, 8};
    int bq[] = {-4, 8};
    int bk[] = {-5, 8};
    int bb2[] = {-6, 8};
    int bn2[] = {-7, 8};
    int br2[] = {-8, 8};

    // other squares
    int a3[] = {-1, 3};
    int b3[] = {-2, 3};
    int c3[] = {-3, 3};
    int d3[] = {-4, 3};
    int e3[] = {-5, 3};
    int f3[] = {-6, 3};
    int g3[] = {-7, 3};
    int h3[] = {-8, 3};

    int a4[] = {-1, 4};
    int b4[] = {-2, 4};
    int c4[] = {-3, 4};
    int d4[] = {-4, 4};
    int e4[] = {-5, 4};
    int f4[] = {-6, 4};
    int g4[] = {-7, 4};
    int h4[] = {-8, 4};
    
    int a5[] = {-1, 5};
    int b5[] = {-2, 5};
    int c5[] = {-3, 5};
    int d5[] = {-4, 5};
    int e5[] = {-5, 5};
    int f5[] = {-6, 5};
    int g5[] = {-7, 5};
    int h5[] = {-8, 5};

    int a6[] = {-1, 6};
    int b6[] = {-2, 6};
    int c6[] = {-3, 6};
    int d6[] = {-4, 6};
    int e6[] = {-5, 6};
    int f6[] = {-6, 6};
    int g6[] = {-7, 6};
    int h6[] = {-8, 6}; */

    // chessSquares[64] = [wap[], wbp[], wcp[], wdp[], wep[], wfp[], wgp[], whp[], wr1[], wn1[], wb1[], wq[], wk[], wb2[], wn2[], wr2[], bap[], bbp[], bcp[] , bdp[], bep[], bfp[], bgp[], bhp[], br1[], bn1[], bb1[], bq[], bk[], bb2[], bn2[], br2[], a3[], b3[], c3[], d3[], e3[], f3[], g3[], h3[], a4[], b4[], c4[], d4[], e4[], f4[], g4[], h4[], a5[], b5[], c5[], d5[], e5[], f5[], g5[], h5[], a6[], b6[], c6[], d6[],e6[], f6[], g6[], h6[]];

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