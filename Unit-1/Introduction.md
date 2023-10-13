## Table of content:

- Introduction to Algorithms
- Importance of Algorithm
- Some real world examples.
- Common Mis-beliefs
- Input , Output and Instance of o problem

### Introduction to Algorithms :

_An algorithm is any well defined computational procedure that takes some value or a set of values as input and produces some value or a set of values as output. An algorithm is thus a sequence of computational steps that transforms the input into output_

_A procedure of solving a computational problem in a finite number of steps._

### Importance of Algorithms.

Algorithms are not just a theoretical concepts but are used in numerous filds such as maths, science, programming , artificial intelligence just to name a few.

In fact, algorithms are the fundamental core of the computer science.Any operation on data or any computational task such as searching, sorting, finding the shortest past, or the maximum value involes algorithms in one way or another.

One might think that algorithms are difficult to understand and are more complex than writing code as it involves mathematical calculations and critical thinking , but we should not forget that the main purpose of defining an algorithm is to provide feasible and effecient solutions difficult problems which at first glance looks impossible to solve.

Imagine a scenario that you dont know the concept of binary search and you are asked to find a value in a sorted array, but the condition is you cannot traverse the complete array , can you come up with a solution? , This simple seaching problem which involves a maximum to 10 lines of code can get really difficult if you are not aware of the fudamental concept of binary search.

Thus learing about algorithms is an absolute must and in long run this will help us immnesly as it teaches us to

- break complex problems into smaller pieces
- find patterns among different problems
- write effecient programs
- also it provides a deeper understanding of how the computer works.

## Some Real world exapmles:

Algorithms are used in almost every filed which involes any form of computation.

- Search Engines
- GPS and stallite Navigations
- AI & ML
- Medical Science
- Graphics and Videography
- Image and Speech Recognition.
- and a 1000 more....

## Common mis-beliefs

There are many misbeliefs relating alogoritms which should be clered in the beginning itself.

1. Speed of the algorithm depends on the system: Well this may be true for a small amout of scale for example there might be a difference of few milliseconds or even few seconds depending on the processing speed of the different system, but we are talking about large scale data inputs here, just because we have a high end system an algorithm having exponential time complexity cannot be solved in liner time.

To prove this point , lets see a simple function which finds the nth fibonacci number.

```c
long nthFib(int n){
    if(n < 2){
        return n;
    }
    return nthFib(n-1)+ nthFib(n-2);
}
```

A simple straight forward code which we have wrote for more than 10 times, try running it for a value of 100. You will be surprised.

An interesting take , sorting an array of 100,000,000 numbers using merge sort is faster than finding the 50th fibonacci element using the above algorithm. So its not about the system it about the complexity of the algorithm which determines the speed.