#include <stdio.h>
#include <time.h>

int main() {
    int score = 0;
    int timeLimit = 30; // 30 seconds
    time_t startTime = time(NULL);

    printf("Welcome to the Quiz Game!\n");
    printf("Instructions:\n");
    printf("1. You will be asked 5 questions.\n");
    printf("2. You have %d seconds to answer all questions.\n", timeLimit);
    printf("3. Choose the correct answer from the options.\n");
    printf("4. Press 'A', 'B', 'C', or 'D' to submit your answer.\n");
    printf("Let's start the game!\n");

    // Question 1
    printf("Question 1: What is the capital of France?\n");
    printf("A) Paris\n");
    printf("B) London\n");
    printf("C) Berlin\n");
    printf("D) Rome\n");

    char answer1;
    scanf(" %c", &answer1);

    if (answer1 == 'A' || answer1 == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is A) Paris.\n");
    }

    // Question 2
    printf("Question 2: Which planet is the largest in our solar system?\n");
    printf("A) Earth\n");
    printf("B) Saturn\n");
    printf("C) Jupiter\n");
    printf("D) Uranus\n");

    char answer2;
    scanf(" %c", &answer2);

    if (answer2 == 'C' || answer2 == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is C) Jupiter.\n");
    }

    // Question 3
    printf("Question 3: Who painted the Mona Lisa?\n");
    printf("A) Leonardo da Vinci\n");
    printf("B) Michelangelo\n");
    printf("C) Raphael\n");
    printf("D) Caravaggio\n");

    char answer3;
    scanf(" %c", &answer3);

    if (answer3 == 'A' || answer3 == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is A) Leonardo da Vinci.\n");
    }

    // Question 4
    printf("\nQuestion 4: What is the chemical symbol for gold?\n");
    printf("A) Ag\n");
    printf("B) Au\n");
    printf("C) Hg\n");
    printf("D) Pb\n");
    char answer4;
    scanf(" %c", &answer4);
    if (answer4 == 'B' || answer4 == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is B) Au.\n");
    }

    // Question 5
    printf("\nQuestion 5: Who is the founder of Microsoft?\n");
    printf("A) Bill Gates\n");
    printf("B) Steve Jobs\n");
    printf("C) Mark Zuckerberg\n");
    printf("D) Larry Page\n");
    char answer5;
    scanf(" %c", &answer5);
    if (answer5 == 'A' || answer5 == 'a') {
        printf("Correct\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is A) Bill Gates.\n");
    }

    time_t endTime = time(NULL);
    int timeTaken = endTime - startTime;

    printf("Time taken: %d seconds\n", timeTaken);

    if (timeTaken > timeLimit) {
        printf("\nTime's up! \nYou didn't complete the quiz within the time limit.\n");
    } else{
        printf("\nQuiz Completed!\n");
        printf("Your final score is %d/5.\n", score);

       if (score == 5) {
            printf("Congratulations! You scored a perfect score!\n");
     }  else if (score == 4) {
            printf("Good job! You scored well!\n");
     }  else if (score == 3) {
            printf("You did well!\n");
     }  else if (score == 2) {
            printf("Good Try to score high!\n");
     }  else {
            printf("Better luck next time! You scored low!\n");
    }
 }
    return 0;
}
