#include <iostream>
#include <string>
using namespace std;

const int STUDENT_SIZE = 5;
double scores[STUDENT_SIZE];

// Function prototypes
void scoreInput();
void calcAverage(double scores[]);
void highestScore(double scores[]);
void lowestScore(double scores[]);

void updateMax(double *max, double current);
void updateMin(double *min, double current);

void printScore(int score);
void printScore(double score);

int main() {
    scoreInput();
    calcAverage(scores);
    highestScore(scores);
    lowestScore(scores);
    // Function overloading
    printScore(100);
    printScore(95.5);

    return 0;
}

void scoreInput() {
    double score;

    for (int i = 0; i < STUDENT_SIZE; i++) {
        cout << "Enter score number " << i + 1 << " : ";
        cin >> score;
        cout << '\n';
        scores[i] = score;
    }
}

void calcAverage(double scores[]) {
    double total = 0;

    for (int i = 0; i < STUDENT_SIZE; i++) {
        total += scores[i];
    }
    cout << '\n' << "The average is: ";
    cout << total / STUDENT_SIZE << '\n';
}

void highestScore(double scores[]) {
    double num = scores[0];

    for (int i = 1; i < STUDENT_SIZE; i++) {
        updateMax(&num, scores[i]);
    }

    cout << "The highest score is: " << num << endl;
}

void lowestScore(double scores[]) {
    double num = scores[0];

    for (int i = 1; i < STUDENT_SIZE; i++) {
        updateMin(&num, scores[i]);
    }

    cout << "The lowest score is: " << num << endl;
}

// Pointer function
void updateMax(double *max, double current) {
    if (current > *max) {
        *max = current;
    }
}

// Pointer function
void updateMin(double *min, double current) {
    if (current < *min) {
        *min = current;
    }
}

// Function overloading
void printScore(int score) {
    cout << "Integer score: " << score << endl;
}

void printScore(double score) {
    cout << "Double score: " << score << endl;
}