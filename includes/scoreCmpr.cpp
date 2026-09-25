#include <iostream>
using namespace std;


class scoreCmpr{
    private:
        static const int STUDENT_SIZE = 5;
        double scores[STUDENT_SIZE];

        void updateMax(double *max, double current) {
            if (current > *max) {
                *max = current;
            }
        }

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

    public:
        void scoreInput() {
            double score;

            for (int i = 0; i < STUDENT_SIZE; i++) {
                cout << "Enter score number " << i + 1 << " : ";
                cin >> score;
                cout << '\n';
                scores[i] = score;
            }
        }

        double getScore(int index) const {
            if (index < 0 || index >= STUDENT_SIZE) {
                return 0.0;
            }
            return scores[index];
        }

        double getAverage() const {
            double total = 0.0;

            for (int i = 0; i < STUDENT_SIZE; i++) {
                total += scores[i];
            }

            return total / STUDENT_SIZE;
        }

        double getHighestScore() const {
            double num = scores[0];

            for (int i = 1; i < STUDENT_SIZE; i++) {
                if (scores[i] > num) {
                    num = scores[i];
                }
            }

            return num;
        }

        double getLowestScore() const {
            double num = scores[0];

            for (int i = 1; i < STUDENT_SIZE; i++) {
                if (scores[i] < num) {
                    num = scores[i];
                }
            }

            return num;
        }
};