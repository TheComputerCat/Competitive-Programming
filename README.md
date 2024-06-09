# Competitive Programming
It's never too late :v.

Here I will keep track of all the problems I've done, or I'm doing.
In the first line of the file you will find the source of the problem, the verdict, the execution time and the memory used. The tag @Me or @Team refers to a code made by me or with a team, respectively.

The verdict that can be:
- AC = Accepted
- WA = Wrong Answer
- TLE = Time Limit Exceeded
- MLE = Memory Limit Exceeded
- RTE = Run Time Error
- CE = Compile Error
- PE = Presentation Error
- OT = Output Limit
- IP = I'm currently working on it

For example, for a c++ code:

```cpp
#/a/path/to/a/file.cpp
/*
 * Problem: https://codeforces.com/gym/105079/problem/E
 * V: AC, ET: 100ms, M:500KB
 * @Team
*/
```

This code could not have test or a super readable code because it's not the point of the competitions. For a better code(I hope) you can see my repo of [katas](https://github.com/TheComputerCat/katas). Anyway, sometimes I will try to make a more robust and readable code.

# How to run code
1. Compile:
    ```bash
        g++ [file] -o o.o
    ```
2. Execute with input file:
    ```bash
        cat [input_file] | ./o.o
    ```
3. Compare with expected output:
    ```bash
       diff exp out 
    ```

Also it is possible:

```bash
    g++ [file] -o o.o && cat imp | ./o.o | diff exp -
```

