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