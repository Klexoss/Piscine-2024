#include <unistd.h>

void ft_putchar(char);

void print_grid(int grid[4][4])
{
    int x;
    x = 0;
    while (x < 4)
    {
        int y;
        y = 0;
        while (y < 4)
        {
            ft_putchar(grid[x][y] + '0');
            ft_putchar(' ');
            y++;
        }
        ft_putchar('\n');
        x++;
    }
}

int valid(int grid[4][4], int x, int y, int n)
{
    int i;
    i = 0;
    while (i < 4)
    {
        if (grid[x][i] == n || grid[i][y] == n)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int solve(int grid[4][4], int x, int y)
{
    int n;
    n = 0;
    if (x == 4)
    {
        return 1;
    }
    if (y == 4)
    {
        return solve(grid, x + 1, 0);
    }
    if (grid[x][y] > 0)
    {
        return solve(grid, x, y + 1);
    }
    while (n <= 4)
    {
        if (valid(grid, x, y, n))
        {
            grid[x][y] = n;
            if (solve(grid, x, y + 1))
            {
                return 1;
            }
            grid[x][y] = 0;
        }
        n++;
    }
    return 0;
}
