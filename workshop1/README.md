# ACM_Workshop1

## Question 1

Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation. The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum  only if the summands follow in non- decreasing order. For example,she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3.

You've got the sum that was written on the board. Rearrange the summands and print the sum in such a way that Xenia can calculatethe sum.

### Input
The first line contains a non-empty strings—the sum Xenia needs to count.Strings contains no spaces. It only contains digits and characters "+". Besides,strings is a correct sum of numbers 1, 2 and 3. Strings is at most 100 characters long.

### Output
Print the new sum that Xenia can count.

### Examples

#### input
```
3+2+1
```
#### output
```
1+2+3
```
#### input
```
1+1+3+1+3
```
#### output
```
1+1+1+3+3
```

## Question 2

Reading the book "Equations of Mathematical Magic" Roman Oira-Oira and Cristobal Junta found an interesting equation: a−(a⊕x)−x=0 for some given a, where ⊕ stands for a bitwise exclusive or (XOR) of two integers (this operation is denoted as ^ or xor in many modern programming languages). Oira-Oira quickly found some x, which is the solution of the equation, but Cristobal Junta decided that Oira-Oira's result is not interesting enough, so he asked his colleague how many non-negative solutions of this equation exist. This task turned out to be too difficult for Oira-Oira, so he asks you to help.

### Input

Each test contains several possible values of a and your task is to find the number of equation's solution for each of them. The first line contains an integer t (1 ≤ t ≤
1000) the number of these values. The following t lines contain the values of parameter a, each value is an integer from 0 to 2 30 − 1 inclusive.

### Output

For each value of a print exactly one integer — the number of non-negative solutions of the equation for the given value of the parameter. Print answers in the same order as
values of a appear in the input. One can show that the number of solutions is always finite.

### Example

#### input
```
3
0
2
1073741823
```
#### output
```
1
2
1073741824
```
