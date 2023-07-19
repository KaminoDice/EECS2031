# 8.18 LAB: Simple linked list

Given an IntNode struct and the operating functions for a linked list, complete the following functions to extend the functionality of the linked list:

1. `IntNode* IntNode_GetNth(IntNode* firstNode, int n)`\- Return a pointer to the $n^{th}$ node of the list starting at firstNode.
2. `void IntNode_PrintList(IntNode* firstNode)` - Call IntNode\_PrintNodeData() to output values of the list starting at firstNode. Do not add extra space characters in between values.
3. `int IntNode_SumList(IntNode* firstNode)` - Return the sum of the values of all nodes starting at firstNode.

> Note: The code for `IntNode\_Create()` provided here differs from the code shown in the book.

The given `main()` performs various actions to test `IntNode\_GetNth(), IntNode\_PrintList()`, and `IntNode\_SumList()`.

`main()` reads 5 integers from a user:

1. The number of nodes to be added to a new list
2. The value of the first node of the list
3. An increment between the values of two consecutive nodes.
4. A value of a new node
5. The position of a node after which the new node will be added, with 1 indicating the first node

Ex: If the input is:

```
4 2 5 99 1
```

the output is:

```
4 element list: 2 7 12 17 
From second element: 7 12 17 
sum: 38
New list: 2 99 7 12 17 
```