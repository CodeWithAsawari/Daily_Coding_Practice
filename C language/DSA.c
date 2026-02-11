// Data Structure using C language

// A data structure is a way to store data.
// Algorithm: A step by step procedure to solve a problem.
/* By understanding DSA, you can:

-Decide which data structure or algorithm is best for a given situation.
-Make programs that run faster or use less memory.
-Understand how to approach complex problems and solve them in a systematic way.*/

/* Data Structures and Algorithms (DSA) are used in virtually every software system, from operating systems to web applications:

For managing large amounts of data, such as in a social network or a search engine.
For scheduling tasks, to decide which task a computer should do first.
For planning routes, like in a GPS system to find the shortest path from A to B.
For optimizing processes, such as arranging tasks so they can be completed as quickly as possible.
For solving complex problems: From finding the best way to pack a truck to making a computer 'learn' from data.*/

/* DSA is fundamental in nearly every part of the software world:

Operating Systems
Database Systems
Web Applications
Machine Learning
Video Games
Cryptographic Systems
Data Analysis
Search Engines */

/*Interface − Each data structure has an interface. Interface represents the set of operations that a datastructure supports.An interface only provides the list of supported operations, type of parameters they can accept and return type of these operations.

Implementation − Implementation provides the internal representation of a data structure. Implementation also provides the definition of the algorithms used in the operations of the data structure.

*****Characteristics of a Data Structure******

Correctness − Data Structure implementation should implement its interface correctly.

Time Complexity − Running time or execution time of operations of data structure must be as small as possible.

Space Complexity − Memory usage of a data structure operation should be as little as possible.
 
****Need for Data Structure****
As applications are getting complex and data rich, there are three common problems applications face now-a-days.

Data Search − Consider an inventory of 1 million(106) items of a store. If application is to search an item. It has to search item in 1 million(106) items every time slowing down the search. As data grows, search will become slower.

Processor speed − Processor speed although being very high, falls limited if data grows to billion records.

Multiple requests − As thousands of users can search data simultaneously on a web server,even very fast server fails while searching the data.

To solve above problems, data structures come to rescue. Data can be organized in a data structure in such a way that all items may not be required to be search and required data can be searched almost instantly.

****Execution Time Cases****
There are three cases which are usual used to compare various data structure's execution time in relative manner.

Worst Case − This is the scenario where a particular data structure operation takes maximum time it can take. If a operation's worst case time is ƒ(n) then this operation will not take time more than ƒ(n) time where ƒ(n) represents function of n.

Average Case − This is the scenario depicting the average execution time of an operation of a data structure. If a operation takes ƒ(n) time in execution then m operations will take mƒ(n) time.

Best Case − This is the scenario depicting the least possible execution time of an operation of a data structure. If a operation takes ƒ(n) time in execution then actual operation may take time as random number which would be maximum as ƒ(n).*/

// Algorithm
/* Search − Algorithms to search an item in a datastrucure.

Sort − Algorithms to sort items in certain order

Insert − Algorithm to insert item in a datastructure

Update − Algorithm to update an existing item in a data structure

Delete − Algorithm to delete an existing item from a data structure*/
 
/* Asymptotic Notations
Following are commonly used asymptotic notations used in calculating running time complexity of an algorithm.

Ο Notation: O Notation is used to represent the upper bound of the running time of an algorithm. It gives the worst-case time complexity of an algorithm. For example, if an algorithm has a time complexity of O(n), it means that in the worst case, the running time will grow linearly with the input size n.

Ω Notation: Ω Notation is used to represent the lower bound of the running time of an algorithm. It gives the best-case time complexity of an algorithm. For example, if an algorithm has a time complexity of Ω(n), it means that in the best case, the running time will grow linearly with the input size n.

θ Notation: θ Notation is used to represent the tight bound of the running time of an algorithm. It gives the average-case time complexity of an algorithm. For example, if an algorithm has a time complexity of θ(n), it means that in the average case, the running time will grow linearly with the input size n.

***Data Definition***
Data Definition defines a particular data with following characteristics.

Atomic − Definition should define a single concept

Traceable − Definition should be be able to be mapped to some data element.

Accurate − Definition should be unambiguous.

Clear and Concise − Definition should be understandable.

// Datatype :
- Built-in Data Type: C provides several built-in data types, such as int, float, char, and double, which are used to store different types of datatypes.
-Derived Data Type: C also allows you to create your own data types using structures (struct), unions (union), and enumerations (enum). These derived data types can be used to group related data together and create more complex data structures.
List

Array

Stack

Queue
*/

