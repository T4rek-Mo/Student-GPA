
#include <iostream>
using namespace std;

int NumofSubjects() {
    int NumofSubjects = 0;

    do {
        cout << " Please Enter Subject's Number\n";
        cin >> NumofSubjects;


    } while (NumofSubjects <= 0 || NumofSubjects > 15);
    return NumofSubjects;
}


void giveMeData(int NumofSubjects, int hours[], float grades[]) {

    for (int i = 0; i < NumofSubjects; i++) {

        cout << " Enter the GPA of Subject  " << i + 1;
        cin >> grades[i];

        cout << "Enter the Number of hour for Subject " << i + 1;
        cin >> hours[i];
    }
}

float CalcTotalGPA(int NumofSubjects, int hours[], float grades[]) {
    int totallHours = 0;
    float SumofGPAs = 0;

    for (int j = 0; j < NumofSubjects; j++) {

        SumofGPAs += hours[j] * grades[j];
        totallHours += hours[j];

    }

    return SumofGPAs / totallHours;
}

void printResult(float result) {

    if (result > 2)
        cout << "\nCongrats! you passed and your GPA is: " << result << endl;
    else
        cout << "\nUnfortunately, you failed and you GPA is: " << result << endl;

}

int main() {
    const int MaxSubjects = 15;
    int Subjects = NumofSubjects();
    float grades[MaxSubjects];
    int hours[MaxSubjects];

    giveMeData(Subjects, hours, grades);
    float TotallGPA = CalcTotalGPA(Subjects, hours, grades);
    printResult(TotallGPA);

}
