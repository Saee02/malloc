# malloc
1. Linked List can be defined as collection of objects called nodes that are randomly stored in the memory.
2. A node contains two fields i.e. data stored at that particular address and the pointer which contains the address of the next node in the memory.
3. The last node of the list contains pointer to the null.

The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.
