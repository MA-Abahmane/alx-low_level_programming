#!/usr/bin/python3


def island_perimeter(grid):
    """ 
    a function def island_perimeter(grid): 
    that returns the perimeter of the island described in grid:
    """

    hight = 0
    for arr in grid:
        for j in arr:
            if (arr[j] == 1):
                hight += 1
                break

    width = 0
    l = len(grid[0])
    for ndx in range(l):
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