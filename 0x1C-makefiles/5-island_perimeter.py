#!/usr/bin/python3
"""Defines island perimeter module"""


def island_perimeter(grid):
    """Function that returns the perimeter of the island described in grid
    0 represents water zone while 1 represents land zone.

    Args:
        grid (list): A list of list of integers
    Returns:
        The perimeter of the island
    """

    height = len(grid)
    width = len(grid[0])
    size = 0
    sides = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sides += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    sides += 1
    return size * 4 - sides * 2
