#include <stdio.h>

int main() {

  int learning = 1;
  int cont;

  while (learning++ < 10) {

    printf("Congratulations! Are you ready to continue learning in the next lesson?\n");
    printf("1 - Yes\t2 - No\n");

    scanf("%d", &cont);

    if (cont == 1) {

      printf("Awesome! Let's break out and move forward!\n");
      break;

    } else {

      printf("Okay! Keep practicing! And remember to take breaks!\n");

    }

  }

}

/*
LOOPS: LESSON
Review
Great job! You completed the lesson on loops! 🙌

Key concepts covered in this lesson:

Loops perform repetitive actions so we don’t have to code those actions manually every time.
How to write while loops with a condition.
How to write do-while loops with a condition.
How to write for loops with a counter that increments or decrements.
How to break out of a loop.
How to continue a loop at any point.
Instructions
1.
Run the loop!

gcc congrats.c
./a.out
*/

