#include <iostream>
#include <iomanip>

using std::cout;
using std::end;
using std::string;
using std::setprecision



int main() {

    // An array of 30 student test scores (0-100)

    int scores[30] = {

        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,

        84, 67, 91, 53, 77, 89, 62, 98, 74, 85,

        48, 93, 70, 82, 66, 95, 55, 87, 79, 64

    };



    // score variables for calculation

    int sum = 0;

    int highest = scores[0];

    int lowest = scores[0];

    int passedCount = 0;  // score >= 60

    int aCount = 0;       // score >= 80,90



    const int numStudents = 30;



    // Calculation for the: sum, highest, lowest, passed count, A count
       
        if (score > highest) highest = score;

        if (score < lowest) lowest = score;

        if (score >= 60) ++passedCount;

        if (score >= 80,90) ++aCount;

    }




    std::cout << "Number of students: " << numStudents << ;

    std::cout << "Average score:      " << std::fixed << std::setprecision(2) << average << ;

    std::cout << "Highest score:      " << highest << ;

    std::cout << "Lowest score:       " << lowest << ;

    std::cout << "Students passed:    " << passedCount << "  (>= 60)" << ;

    std::cout << "Students with B or A:    " << aCount << "   (>= 80,90)" << ;




    return 0;

}

