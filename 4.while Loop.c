#include <stdio.h>

int main() {

  int i = 9;
  int square = 0;

  // Write a while loop here:
  while (i >= 0) {
    printf("%d\t%d\n", i, i * i);
    i--;
  }
}
/*
while Loop
For the last loop we held your hand, so let’s try one on your own!

As an example of iteration, we have the first program ever to run on a stored-program computer (the EDSAC). It was written and run by David Wheeler in the computer laboratory at Cambridge University, England, on May 6th, 1948, to calculate and print a simple list of squares like the following:

0    0
1    1
2    4
3    9
4    16
5    25
6    36
7    49
8    64
9    81
On the left, there are numbers from 0 to 9. On the right are their squares. For example, for the number 9: 9 * 9 = 81.

Note: An algorithm like this is one of the easiest tells for needing a loop. But as you develop your programming skills, you’ll pick up more and more subtle hints and uses for where loops can be incorporated into your code!

Instructions
1.
Write a while loop that prints out a number, followed by a tab \t, then the square of that number, followed by a new line \n like so:

printf("%d\t%d\n", num, num * num);
Have the while loop calculate this from 0 to 9.

Note: If you notice the Run button spinning continuously or a “Lost connection to Codecademy” message in this exercise, you may have an infinite loop! If the stop condition for our loop is never met, we will create a loop that never exits which prevents the program from ever completing. In this exercise, you can simply refresh the page to stop the infinite loop — then fix the code for your loop. However, we’ll talk more about infinite loops later, and even how to use them effectively!

Checkpoint 2 Passed

Hint
You can write the while loop in a couple of different ways. One way could involve the condition i < 10, another way could involve i <= 9. You can also choose not to use the square variable entirely. In this exercise, the output is what matters.

And remember, you can output multiple things in a single print statement.

2.
Now change your while loop to go backward from 9 and stop at 0. Your new output should look like this:

9    81
8    64
7    49
6    36
5    25
4    16
3    9
2    4
1    1
0    0
Checkpoint 3 Passed

Hint
Make sure you’re decrementing here with -- instead of incrementing with ++. And make sure you’re also starting your i at 9 instead of 0!

*/

