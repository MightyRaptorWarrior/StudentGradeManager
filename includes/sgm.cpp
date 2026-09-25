#include <iostream>
#include <string>
using namespace std;
#include "scoreCmpr.cpp"


int main() {
    
    scoreCmpr sc;
    sc.scoreInput();
    cout <<  "the highest score is: " << sc.getHighestScore() << endl;
    cout << "the average score is: " << sc.getAverage() << endl;
    cout << "the lowest score is: " << sc.getLowestScore() << endl;
    return 0;
}

