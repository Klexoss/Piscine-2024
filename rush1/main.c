#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void print_grid(int grid[4][4]);

int valid(int grid[4][4], int x, int y, int n);

int solve(int grid[4][4], int x, int y);

int main(int argc, char* argv[])
{
    int grid[4][4] = { { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 },
                       { 0, 0, 0, 0 } 
                     };
    int i;
    int clues[16];
    
    i = 0;
    if (argc != 2 || argv[1][16] != 0)
    {
        write(1, "Insert 16-digit number!\n", 24);
        return (1);
    }
    while(i < 16)
    {
        if (argv[1][i] > '4' || argv[1][i] < '1')
        {
            write(1, "Numbers between 1 to 4 only!\n", 29);
            return (1);
        }
        clues[i] = argv[1][i] - '0';
        i++;
    }

    if (solve(grid, 0, 0) == 1)
        print_grid(grid);
    else
        write(1, "Can't solve.\n", 12);
    return 0;
}