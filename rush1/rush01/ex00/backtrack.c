#include <unistd.h>
#include <stdio.h>

void ft_putchar(char);
char isValid(int grid[4][4], int clues[16]);

//Declares a function to print the contents of the Sudoku grid.
void print_grid(int grid[4][4])
{
    int row;
    row = 0;
    while (row < 4)
    {
        int col;
        col = 0;
        while (col < 4)
        {
            ft_putchar(grid[row][col] + '0');
            ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}

//Declares a function to check if placing the number n at position (row, col) in the grid is safe (doesn't violate Sudoku rules).
int isSafe(int grid[4][4], int row, int col, int n)
{
    int i;
    i = 0;
    while (i < 4)
    {
        if (grid[row][i] == n || grid[i][col] == n)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

//Declares the core function that attempts to solve the Sudoku puzzle using backtracking.
int solve(int grid[4][4], int row, int col, int clues[16])
{
    int n;
    n = 1;
    if (row == 4)
    {
        return isValid(grid, clues);
    }
    if (col == 4)
    {
        return solve(grid, row + 1, 0, clues);
    }
    while (n <= 4)
    {
        if (isSafe(grid, row, col, n))
        {
            grid[row][col] = n;
            if (solve(grid, row, col + 1, clues))
            {
                return 1;
            }
        }
        grid[row][col] = 0;
        n++;
    }
    return 0;
}
