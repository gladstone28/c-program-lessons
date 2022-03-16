#include <stdio.h>

int main() {

  int i = 11;

  do {
    printf("%d\n", i);
    i++;
  } while (i < 10);
}
/*
LOOPS: LESSON
do-while Loop
Now that we’ve written a while loop, let’s write an alternate form of it.

We’ll look at its syntax first then explain what’s happening and why:

do {
  // Statement(s)
} while (condition);
This is odd, the condition came after the statements. Does this mean the condition isn’t checked until after the statements get executed?

That is exactly what happens!

This is what’s known as a do-while loop. Simply put, it does something first, and then checks the condition afterward and loops in this manner until the condition is no longer true.

The do-while loop is most often used when a program wants to do something at least once before checking the condition.

Instructions
1.
Convert the while loop into a do-while loop.

Checkpoint 2 Passed

Hint
The syntax of a do-while loop is:

do {
  // Statement(s)
} while (condition);
Don’t forget the ; at the end!

*/

