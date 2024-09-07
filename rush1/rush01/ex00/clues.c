#include <stdio.h>

int isValid(int grid[4][4], int clues[16])
{
    int row;
    int col;
    int max_seen;
    int seen;

    col = 0;
    while (col < 4)
    {
        max_seen = 0;
        seen = 0;
        row = 0;
        while (row < 4)
        {
            if (grid[row][col] > max_seen)
            {
                max_seen = grid[row][col];
                seen++;
            }
            row++;
        }
        if (seen != clues[col])
        {
            return 0;
        }
        col++;
    }
    col = 0;
    while(col < 4)
    {
        max_seen = 0;
        seen = 0;
        row = 3;
        while (row >= 0)
        {
            if (grid[row][col] > max_seen)
            {
                max_seen = grid[row][col];
                seen++;
            }
            row--;
        }
        if (seen != clues[col + 4])
        {
            return 0;
        }
        col++;
    }
    row = 0;
    while (row < 4)
    {
        max_seen = 0;
        seen = 0;
        col = 0;
        while (col < 4)
        {
            if (grid[row][col] > max_seen)
            {
                max_seen = grid[row][col];
                seen++;
            }
            col++;
        }
        if (seen != clues[row + 8])
        {
            return 0;
        }
        row++;
    }
    row = 0;
    while (row < 4)
    {
        max_seen = 0;
        seen = 0;
        col = 3;
        while (col >= 0)
        {
            if (grid[row][col] > max_seen)
            {
                max_seen = grid[row][col];
                seen++;
            }
            col--;
        }
        if (seen != clues[row + 12])
        {
            return 0;
        }
        row++;
    }
    return 1;
}