#include <iostream>
using namespace std;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void readStudentData(studentType student[], int numberStudent)
{
    cout << "Input Student Data (firstname [space] lastname [space] test score)"<< endl;
   for (int i = 0; i < numberStudent; i++)
    {
        cout << "Student " << i +1 << ": ";
        cin >> student[i].studentFName >> student[i].studentLName >> student[i].testScore;
    }
}

void assignStudentGrade(studentType student[], int numberStudent)
{
    for (int i = 0; i < numberStudent; i++)
    {
        if (student[i].testScore>=90)
            student[i].grade = 'A';
        else if (student[i].testScore>=75)
                student[i].grade = 'B';
        else if (student[i].testScore>=60)
                student[i].grade = 'C';
        else if (student[i].testScore>=45)
                student[i].grade = 'D';
        else
                student[i].grade = 'E';
    } 
}

int findHighestScore(studentType student[], int numberStudent)
{
    int highest = -1 ;
    for (int i = 0; i < numberStudent; i++)
    {
        if (student[i].testScore>highest)
        highest = student[i].testScore;
    }
    return highest;
}    

void printHighestScore(studentType student[], int numberStudent, int highest)
{
    cout << "\nStudent with the highest score (" << highest << ") :" << endl;
    for (int i = 0; i < numberStudent; i++)
    {
        if (student[i].testScore==highest)
        cout << student[i].studentFName << " " <<student[i].studentLName << endl;
    }
}

void printStudentData(studentType student[], int numberStudent)
{
    cout << "\nAll Student Data"<< endl;
    cout << "Name\t\tScore\tGrade"<<endl;
    for (int i = 0; i < numberStudent; i++)
    {
        cout << student[i].studentLName << ", " << student[i].studentFName <<"\t"<< student[i].testScore <<"\t"<< student[i].grade << endl;
    }
}

int main()
{
    const int numberStudent = 20;
    studentType student[numberStudent];
    readStudentData(student, numberStudent);
    assignStudentGrade(student,numberStudent);
    int highest = findHighestScore(student, numberStudent);
    printStudentData(student, numberStudent);
    printHighestScore(student, numberStudent, highest);

return 0;
}
