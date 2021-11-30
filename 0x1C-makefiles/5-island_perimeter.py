#!/usr/bin/python3
"""island perimeter method"""


def island_perimeter(grid):
    """returns the perimeter of the
    island described in grid"""
    per = 0
    lon = len(grid)

    for i in range(lon):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:

                if i is 0 or i == len(grid) - 1:
                    per += 1

                if j is 0 or j == len(grid[i]) - 1:
                    per += 1

                if j is not 0:
                    if grid[i][j - 1] is 0:
                        per += 1

                if i is not 0:
                    if grid[i - 1][j] is 0:
                        per += 1

                if j != len(grid[i]) - 1:
                    if grid[i][j + 1] is 0:
                        per += 1

                if i != len(grid) - 1:
                    if grid[i + 1][j] is 0:
                        per += 1

    return per
