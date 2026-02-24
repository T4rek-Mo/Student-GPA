
#include <iostream>
using namespace std;

int NumofSubjects() {
    int NumofSubjects = 0;

        do {
            cout << " Please Enter Subject's Number\n";
            cin >> NumofSubjects;
          

        } while (NumofSubjects <= 0||NumofSubjects>15);
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






































/*
#include <iostream>
using namespace std;

float CalcGPAoneSub(float degree) {

    float GPA = 0;
    GPA = (degree * 4) / 100;
    return GPA;
}

int NumofSubjects() {
    int Nums = 0;
    cout << "Enter Num of Subjects \n";
    cin >> Nums;
    return Nums;
}


float SumofallhoursTimesallgpa(int Subjectts, int& totallHours) {

    float Sum1 = 1, Sumofall = 0;
    float degree;
    int hourofoneSubj;

    for (int i = 1; i <= Subjectts; i++) {
        cout << " Please Enter the Num of hours of Subject " << i << endl;
        cin >> hourofoneSubj;
        cout << " Please Enter the degree of Subject " << i << endl;
        cin >> degree;
        totallHours += hourofoneSubj;
        Sum1 = CalcGPAoneSub(degree) * hourofoneSubj;
        Sumofall += Sum1;
    }
    return Sumofall;
}




void CalcAllGPA(int Sumofhours, float sumofabove) {

    float AllGPA;

    AllGPA = sumofabove / Sumofhours;
    cout << " Totall GPA is: " << AllGPA << endl;
}


int main() {
    int H = NumofSubjects();
    int totalHours = 0;
    float totalWeighted = SumofallhoursTimesallgpa(H, totalHours);

    CalcAllGPA(totalHours, totalWeighted);
}*/



//#include <iostream>
//using namespace std;
//
//int NumofSubjects() {
//    int Nums = 0;
//    cout << "Enter Num of Subjects \n";
//    cin >> Nums;
//    return Nums;
//}
//
//float calculategpa(int Subject) {
//
//    float sum = 0;
//    float GpA = 0;
//    float hours = 0;
//    float times;
//    float NUmofhours = 0;
//
//    for (int j = 1; j <= Subject; j++) {
//
//        cout << " Please Enter the GPA of Subject " << j << endl;
//        cin >> GpA;
//         cout << " Please Enter the Num of Hours of Subject " << j << endl;
//         cin >> hours;
//
//         NUmofhours += hours;
//         times = hours * GpA;
//         sum += times;
//    } 
//    return sum / NUmofhours;
//}
//int main() {
//
//    cout << "The Totall GPA is : " << calculategpa(NumofSubjects()) << endl;
//}




