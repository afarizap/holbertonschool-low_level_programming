# General

## What is a search algorithm
- Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored. Based on the type of search operation, these algorithms are generally classified into two categories:

- Sequential Search: In this, the list or array is traversed sequentially and every element is checked. For example: Linear Search.

- Interval Search: These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear Search as they repeatedly target the center of the search structure and divide the search space in half. For Example: Binary Search.

## What is a linear search
- In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

![](https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif)

## What is a binary search

- Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of item is returned. If the middle item is greater than the item, then the item is searched in the sub-array to the left of the middle item. Otherwise, the item is searched for in the sub-array to the right of the middle item. This process continues on the sub-array as well until the size of the subarray reduces to zero.

![](https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Binary_Search_Depiction.svg/1920px-Binary_Search_Depiction.svg.png)

## What is the best search algorithm to use depending on your needs

# TASK

## 0-linear.c

- compile with: ```gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear```

- searches for a value in an array of integers using linear search basic algorithm

- As a result, even though in theory other search algorithms may be faster than linear search (for instance binary search), in practice even on medium-sized arrays (around 100 items or less) it might be infeasible to use anything else. On larger arrays, it only makes sense to use other, faster search methods if the data is large enough, because the initial time to prepare (sort) the data is comparable to many linear searches.

##   1-binary.c

- compile with: ```gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary```

- searches for a value in a sorted array of integers using the Binary search algorithm

- Binary search is a search algorithm that finds the position of a target value within a sorted array.[4][5] Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.