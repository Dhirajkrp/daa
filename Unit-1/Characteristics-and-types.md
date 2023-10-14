## Characteristics :

As we have defiend algorithm as a set of instruction which is used to solve a computational problem , but not all set of instructions can be considered as algorithm, let's see come of the characteristics that the instructions should have for it to be considered as an algorithm.

- ** Clear and Unambiguous:** The algorithm should be unambiguous. Each of its steps should be clear in all aspects and must lead to only one meaning.
  for example it should not contain a step like
  a= b \* c / d + e;

There can be more than one interpretation of this expression , so it is better to clarify the statements and should be easy to understand.

- **Well-Defined Inputs:** If an algorithm says to take inputs, it should be well-defined inputs. It may or may not take input.
  For example if we are taking an input , it is better to spefify the nature of the input as whether it should be a number or a chareacter etc.

- **Well-Defined Outputs:** The algorithm must clearly define what output will be yielded and it should be well-defined as well. It should produce at least 1 output.

- **Finite-ness:** The algorithm must be finite, i.e. it should terminate after a finite time, this becomes important when the algorithm contains some sort of loops like for or while the terimating condition should be clearly defined.

- **Feasible:** The algorithm must be simple, generic, and practical, such that it can be executed with the available resources. It must not contain some future technology or anything.

- **Language Independent:** The Algorithm designed must be language-independent, i.e. it must be just plain instructions that can be implemented in any language, and yet the output will be the same, as expected.

- **Input:** An algorithm has zero or more inputs. Each that contains a fundamental operator must accept zero or more inputs.

- **Output:** An algorithm produces at least one output. Every instruction that contains a fundamental operator must accept zero or more inputs.

- **Definiteness:** All instructions in an algorithm must be unambiguous, precise, and easy to interpret. By referring to any of the instructions in an algorithm one can clearly understand what is to be done. Every fundamental operator in instruction must be defined without any ambiguity.

- **Finiteness:** An algorithm must terminate after a finite number of steps in all test cases. Every instruction which contains a fundamental operator must be terminated within a finite amount of time. Infinite loops or recursive functions without base conditions do not possess finiteness.

- **Effectiveness:** An algorithm must be developed by using very basic, simple, and feasible operations so that one can trace it out by using just paper and pencil.

## Instance of a problem and correctness of the algoritm

An instance of a problem is defined as the input value or set of input values which satisfies the problem statement.

For example an instance of a problem for the merge sort algorithm can be [2,4,1,5,3,4,7,1] because it is a valid array of numbers, and "good morning" cannot be a valid instance of a problem for the merge sort algorithm.

### Correctness of the algorithm :

An algorithm is said to be correct is it leads to the desired output for every or any instance of a problem. It should not be that case that the algorithm fails to provid an output for some or any valid instance of a problem.
