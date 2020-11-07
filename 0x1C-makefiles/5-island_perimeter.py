#!/usr/bin/python3
"""returns a perimeter of island """


def island_perimeter(grid):
    """ module of island perimeter """
    h = 0
    v2 = 0
    v1 = 0
    if len(grid) is 1:
        if grid[0][0] is 1:
            return 4
        else:
            return 0
    x = len(grid[0])
    y = [0 for x in range(x)]
    grid.append(y)
    for c in grid:
        v2 = v1
        v1 = 0
        for l in c:
            if l == 1:
                v1 += 1
        if v1 > 0:
            h += 2
        if v1 > v2:
            h += (v1 - v2)
        elif v2 > v1:
            h += (v2 - v1)
        else:
            pass
    return h
