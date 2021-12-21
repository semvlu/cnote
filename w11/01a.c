#include <stdio.h>
#include <stdlib.h>
// Place your right hand on the wall to your right and begin walking forward. 
// Never remove your hand from the wall. 
// If the maze turns to the right, you follow the wall to the right.
void mazeTraverse(char *m[][12]);
void Print(char *m[][12]);

void Print(char *m[][12])
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%c", m[i][j]);
        }
        printf("\n"); 
    }
}

void mazeTraverse(char *m[][12]) //return char X as path
{
    char s; //find start
    static int j;
    for (j = 0; j < 12; j++)
    {
        if (m[j][0] == '.')
        {
            s = m[j][0];
            m[j][0] = 'X';
            break;
        }
    }

    for (int i = 0; i < 11; i++) //facing dir
    {
        if ( (m[j][i+1] == '#') && (m[j+1][i] == '.') ) // going R
        {
            s = m[j+1][i];
            m[j+1][i] = 'X';
        }
        else if ( (m[j][i+1] == '.') && (m[j+1][i] == '#') ) // going Down
        {
            s = m[j][i+1];
            m[j][i+1] = 'X';
        }
        else if ( (m[j][i+1] == '#') && (m[j+1][i] == '#') && m[j][i-1] == '.') // going Up 
        {
            s = m[j][i-1];
            m[j][i-1] = 'X';
        }
        else // going L
        {
            s = m[j-1][i];
            m[j-1][i] = 'X';
        } 
    } 
}


void mazeTraversal(char *maze[12][12]);
static int face = 6;

int main()
{
    int i = 0;
    int j = 0; 
    int k = 0;
    int start;
    int xpos;

    char *mazeone[12][12] = {
        "#","#","#","#","#","#","#","#","#","#","#","#",
        "#",".",".",".","#",".",".",".",".",".",".","#",
        ".",".","#",".","#",".","#","#","#","#",".","#",
        "#","#","#",".","#",".",".",".",".","#",".","#",
        "#",".",".",".",".","#","#","#",".","#",".",".",
        "#","#","#","#",".","#",".","#",".","#",".","#",
        "#","#",".","#",".","#",".","#",".","#",".","#",
        "#","#",".","#",".","#",".","#",".","#",".","#",
        "#",".",".",".",".",".",".",".",".","#",".","#",
        "#","#","#","#","#","#",".","#","#","#",".","#",
        "#",".",".",".",".",".",".","#",".",".",".","#",
        "#","#","#","#","#","#","#","#","#","#","#","#",};

    for (i = 0; i <12; i++)
        if (mazeone[i][0] == "." ) {
            start = i; 
            mazeone[start][0] = "x";
            xpos = start;
            break;
        }

    getchar();
    mazePrint(mazeone);
    getchar();
}

void mazeTraversal(char *maze[12][12])
{
    int x = 0; 
    int y = 0;

    for (x = 0; x < 12; x++) {
        for (y = 0; y < 12; y++) {
            if (maze[y][x] == "x")
                break;
        } 
        if(maze[y][x] == "x")
            break;
    }

    for (y = 0; y < 12; y++) {
        for (x = 0; x < 12; x++) {
            if (maze[y][x] == "x")
                break;
        } 
        if (maze[y][x] == "x")
            break;
    }

    maze[y][x] = ".";

    switch (face) {
        case 6:{
            if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x"; 
                face = 4;
            }
        }
        case 8:{
            if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x"; 
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            }
        }
        case 4:{
            if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x"; 
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            }
        }
        case 5:{
            if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x";
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            }
        }
    }

    mazePrint(maze);
}
