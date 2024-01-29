#!/usr/bin/python3
"""No module imported"""


def island_perimeter(grid):
    """ a function that returns
        the perimeter of the island
        described in grid"""
    count = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, f in enumerate(r):
            if f == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count += 1
                if j == 0 or grid[i][j - 1] != 1:
                    count += 1
                if j == width or grid[i][j + 1] != 1:
                    count += 1
                if i == length or grid[i + 1][j] != 1:
                    count += 1
    return count
