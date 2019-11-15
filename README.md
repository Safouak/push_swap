# push_swap
📚 Sorting algorithm using only two stacks
#   Push_swap
* [Subject](#subject)
* [Method](#method)

#   Subject   :pushpin:

Push_swap is a sorting game that requires *two programs* :
- **push_swap** : You only have two stacks to help you to sort. At first, a stack (called Stack A) contains a certain amount of unduplicated integers and a second one (Stack B) is empty. The goal is to have all the numbers sorted in increasing order in Stack A. The output of the program is a list of instructions.
- **checker** : read the instructions and execute them. It checks if  Stack A is correctly sorted and Stack B empy. It sends "OK" to stdin if it is the case, otherwise it sends "KO".

Instructions are pre-defined by the subject and are the only reference to measure the performance of both programs during the peer-evaluation. Of course the less, the better.
There are 4 types of instructions :
- **push** (pa, pb) : moves the first element of a stack to the beginning of the other one
 - **swap** (sa, sb, ss) : swap the two first elements of a stack
- **rotate** (ra, rb, rr) : first element comes last
- **reverse rotate** (rra, rrb, rrr) : last element comes first

 The instruction is ignored if the instruction cannot be executed (for instance if the stack is empty).

Allowed functions : write, read, malloc, free, exit

Find the subject [here](subject_push_swap.en.pdf)

### Libraries :books:
- **libft** : personnal library with functions from libc.h (printf from stdio.h for instance)

#  Method 

Different methods are used according to the number of elements to sort to reach the objectives asked by the correction.
- **sort_three** sorts 3 elements with less than 3 instructions
- **insert_sort** sorts short lists (with less than 20 elements)
- **quick_sort** sort 100 elements with less than 900 instructions, and around 6600 for 500 elements. These are average numbers, see :arrow_down: for further details.
