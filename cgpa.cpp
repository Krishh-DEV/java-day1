#include <iostream>
using namespace std;

int main()
{
    int n;
    float grade, credit;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of subjects: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "Enter grade for subject " << i << ": ";
        cin >> grade;

        cout << "Enter credit hours for subject " << i << ": ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += (grade * credit);
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
