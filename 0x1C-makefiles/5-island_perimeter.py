#!/usr/bin/python3

""" Technical interview preparation: """


def island_perimeter(grid):
    """
        a function def island_perimeter(grid):
        that returns the perimeter of the island described in grid:
        Args:
            grid (2D array): grid is a list of list of integers:
            0 represents a water zone, 1 represents a land zone
        Return:
            returns the perimeter of the island described in grid
    """

    hight = 0
    for arr in grid:
        for j in arr:
            if (arr[j] == 1):
                hight += 1
                break

    width = 0
    lenght = len(grid[0])
    for ndx in range(lenght):
        for arr in grid:
            if (arr[ndx] == 1):
                width += 1
                break

    return 2*(hight + width)

# grid = [
#       [0, 0, 0, 0, 0, 0],
#       [0, 1, 0, 0, 0, 0],
#       [0, 1, 0, 0, 0, 0],
#       [0, 1, 1, 1, 0, 0],
#       [0, 0, 0, 0, 0, 0]
# }
