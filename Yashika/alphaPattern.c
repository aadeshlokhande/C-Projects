#include<stdio.h>
int main()
{
    char alpha[27][7][20] = {{"      ","      ","      ","      ","      ","      ","      "},
        {"   ###     ","  ## ##    "," ##   ##   ","##     ##  ","#########  ","##     ##  ","##     ##  "},
        {"########   ","##     ##  ","##     ##  ","########   ","##     ##  ","##     ##  ","########   "},
        {" ######    ","##    ##   ","##         ","##         ","##         ","##    ##   "," ######    "},
        {"########   ","##     ##  ","##     ##  ","##     ##  ","##     ##  ","##     ##  ","########   "},
        {"########   ","##         ","##         ","######     ","##         ","##         ","########   "},
        {"########   ","##         ","##         ","######     ","##         ","##         ","##         "},
        {" ######    ","##    ##   ","##         ","##   ####  ","##    ##   ","##    ##   "," ######    "},
        {"##     ##  ","##     ##  ","##     ##  ","#########  ","##     ##  ","##     ##  ","##     ##  "},
        {"####       "," ##        "," ##        "," ##        "," ##        "," ##        ","####       "},
        {"      ##   ","      ##   ","      ##   ","      ##   ","##    ##   ","##    ##   "," ######    "},
        {"##    ##   ","##   ##    ","##  ##     ","#####      ","##  ##     ","##   ##    ","##    ##   "},
        {"##         ","##         ","##         ","##         ","##         ","##         ","########   "},
        {"##     ##  ","###   ###  ","#### ####  ","## ### ##  ","##     ##  ","##     ##  ","##     ##  "},
        {"##    ##   ","###   ##   ","####  ##   ","## ## ##   ","##  ####   ","##   ###   ","##    ##   "},
        {" #######   ","##     ##  ","##     ##  ","##     ##  ","##     ##  ","##     ##  "," #######   "},
        {"########   ","##     ##  ","##     ##  ","########   ","##         ","##         ","##         "},
        {" #######   ","##     ##  ","##     ##  ","##     ##  ","##  ## ##  ","##    ##   "," ##### ##  "},
        {"########   ","##     ##  ","##     ##  ","########   ","##   ##    ","##    ##   ","##     ##  "},
        {" ######    ","##    ##   ","##         "," ######    ","      ##   ","##    ##   "," ######    "},
        {"########   ","   ##      ","   ##      ","   ##      ","   ##      ","   ##      ","   ##      "},
        {"##     ##  ","##     ##  ","##     ##  ","##     ##  ","##     ##  ","##     ##  "," #######   "},
        {"##     ##  ","##     ##  ","##     ##  ","##     ##  "," ##   ##   ","  ## ##    ","   ###     "},
        {"##      ## ","##  ##  ## ","##  ##  ## ","##  ##  ## ","##  ##  ## ","##  ##  ## "," ###  ###  "},
        {"##     ##  "," ##   ##   ","  ## ##    ","   ###     ","  ## ##    "," ##   ##   ","##     ##  "},
        {"##    ##   "," ##  ##    ","  ####     ","   ##      ","   ##      ","   ##      ","   ##      "},
        {"########   ","     ##    ","    ##     ","   ##      ","  ##       "," ##        ","########   "}};
    char ch;
    int index;
    char str[27] = " abcdefghijklmnopqrstuvwxyz";
    printf("enter a char = ");
    scanf("%c",&ch);

    for(int i = 0; i<27; i++)
    {
        if(str[i]==ch)
        {
            
        }
    }

}