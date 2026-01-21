#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 30;

    // Pre-filled set of 30 student test scores (0-100)
    int scores[SIZE] = {
        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
        83, 67, 90, 74, 88, 91, 60, 77, 69, 85,
        93, 56, 62, 79, 84, 70, 95, 66, 82, 64
    };

    int sum = 0;
    int highest = scores[0];
    int lowest  = scores[0];
    int passedCount = 0; // score >= 60
    int aCount = 0;      // score >= 90

    // One loop to compute sum, min, max, passed, A
    for (int i = 0; i < SIZE; i++) {
        sum += scores[i];

        if (scores[i] > highest) highest = scores[i];
        if (scores[i] < lowest)  lowest  = scores[i];

        if (scores[i] >= 60) passedCount++;
        if (scores[i] >= 90) aCount++;
    }

    double average = static_cast<double>(sum) / SIZE;

    // Output (format similar to the example)
    cout << "Number of students: " << SIZE << endl;

    cout << fixed << setprecision(2);
    cout << "Average score:      " << average << endl;

    cout << "Highest score:      " << highest << endl;
    cout << "Lowest score:       " << lowest << endl;

    cout << "Students passed:    " << passedCount << "  (>= 60)" << endl;
    cout << "Students with A:    " << aCount << "  (>= 90)" << endl;

    cout << endl;

    cout << "Scores in original order:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << scores[i];
        if (i < SIZE - 1) cout << " ";
    }
    cout << endl << endl;

    cout << "Scores in reverse order:" << endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << scores[i];
        if (i > 0) cout << " ";
    }
    cout << endl;

    return 0;
}
