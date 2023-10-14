## How to analyze an Algorithm?

For a standard algorithm to be good, it must be efficient. Hence the efficiency of an algorithm must be checked and maintained. It can be in two stages:

1. Priori Analysis:
   _“Priori”_ means _“before”_. Hence Priori analysis means checking the algorithm before its implementation. In this, the algorithm is checked when it is written in the form of theoretical steps. This Efficiency of an algorithm is measured by assuming that all other factors, for example, processor speed, are constant and have no effect on the implementation. This is done usually by the algorithm designer. This analysis is independent of the type of hardware and language of the compiler. It gives the approximate answers for the complexity of the program.

2. Posterior Analysis:
   _“Posterior”_ means _“after”_. Hence Posterior analysis means checking the algorithm after its implementation. In this, the algorithm is checked by implementing it in any programming language and executing it. This analysis helps to get the actual and real analysis report about correctness(for every possible input/s if it shows/returns correct output or not), space required, time consumed, etc. That is, it is dependent on the language of the compiler and the type of hardware used.

## What is Algorithm complexity and how to find it?

An algorithm is defined as complex based on the amount of Space and Time it consumes. Hence the Complexity of an algorithm refers to the measure of the time that it will need to execute and get the expected output, and the Space it will need to store all the data (input, temporary data, and output). Hence these two factors define the efficiency of an algorithm.
The two factors of Algorithm Complexity are:

### **Time Factor:**

Time is measured by counting the number of key operations such as comparisons in the sorting algorithm.

#### Space Factor:

Space is measured by counting the maximum memory space required by the algorithm to run/execute.
Therefore the complexity of an algorithm can be divided into two types:

1. Space Complexity: The space complexity of an algorithm refers to the amount of memory required by the algorithm to store the variables and get the result. This can be for inputs, temporary operations, or outputs.

#### How to calculate Space Complexity?

The space complexity of an algorithm is calculated by determining the following 2 components:

- Fixed Part: This refers to the space that is required by the algorithm. For example, input variables, output variables, program size, etc.

- Variable Part: This refers to the space that can be different based on the implementation of the algorithm. For example, temporary variables, dynamic memory allocation, recursion stack space, etc.
  Therefore Space complexity S(P) of any algorithm P is S(P) = C + SP(I), where C is the fixed part and S(I) is the variable part of the algorithm, which depends on instance characteristic I.

Example: Consider the below algorithm for Linear Search

Step 1: START
Step 2: Get n elements of the array in arr and the number to be searched in x
Step 3: Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
Step 4: If x matches with an element, Print True.
Step 5: If x doesn’t match with any of the elements, Print False.
Step 6: END

Here, There are 2 variables arr[], and x, where the arr[] is the variable part of n elements and x is the fixed part. Hence S(P) = 1+n. So, the space complexity depends on n(number of elements). Now, space depends on data types of given variables and constant types and it will be multiplied accordingly.

2. Time Complexity: The time complexity of an algorithm refers to the amount of time required by the algorithm to execute and get the result. This can be for normal operations, conditional if-else statements, loop statements, etc.

### How to Calculate, Time Complexity?

The time complexity of an algorithm is also calculated by determining the following 2 components:

- Constant time part: Any instruction that is executed just once comes in this part. For example, input, output, if-else, switch, arithmetic operations, etc.

- Variable Time Part: Any instruction that is executed more than once, say n times, comes in this part. For example, loops, recursion, etc.
  Therefore Time complexity T(P) of any algorithm P is

```
T(P) = C + TP(I)
```

where C is the constant time part and TP(I) is the variable part of the algorithm, which depends on the instance characteristic I.

Example: In the algorithm of Linear Search above, the time complexity is calculated as follows:

Step 1: –Constant Time
Step 2: — Variable Time (Taking n inputs)
Step 3: –Variable Time (Till the length of the Array (n) or the index of the found element)
Step 4: –Constant Time
Step 5: –Constant Time
Step 6: –Constant Time
Hence

```
 T(P) = 1 + n + n(1 + 1) + 1 = 2 + 3n, which can be said as T(n).
```

This process can be tedious and can have the overhead of calculating all the steps , thus to simply this process we use the asymptotic notations to determine the time complexity of the algorithms, these notations are mathematical representations which helps us simplify the calculation and give an relative complexity of the algorithm.
