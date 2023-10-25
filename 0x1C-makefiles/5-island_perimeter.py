#!/usr/bin/python3
"""Defines a function that returns the perimeter of an island grid"""


def island_perimeter(grid):
    """Returns the perimeter of a grid
    
    Args:
        grid (list): list of integers (island)
    Returns: The perimeter of the island
    """
    length = len(grid)
    width = len(grid[0])
    perimeter = 0
    
    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
    return perimeter * 2