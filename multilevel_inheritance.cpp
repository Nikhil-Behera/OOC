#include <iostream>
using namespace std;
class stud
{
private:
    int rn;

public:
    void setrn()
    {
        cout << "Enter the roll no. of the student: " << endl;
        cin >> rn;
    }
    void getrn()
    {
        cout << "The roll no of the student is: " << rn << endl;
    }
};
class studExam : public stud
{
public:
    int examMark1, examMark2;
    void setMark()
    {
        cout << "Enter the marks of subject 1: " << endl;
        cin >> examMark1;
        cout << "Enter the marks of subject 2: " << endl;
        cin >> examMark2;
    }
    void getMark()
    {
        cout << "The marks of the student in subject 1 is: " << examMark1 << endl;
        cout << "The marks of the student in subject 2 is: " << examMark2 << endl;
    }
};
class studResult : public studExam /*,public stud*/
{
    int res;

public:
    void Result()
    {
        cout << "The percentage of student is: " << (examMark1 + examMark2) / 2 << endl;
        cout << "The marks are: " << examMark1 << "and" << examMark2 << endl;
    }
};
int main()
{
    studResult one;
    one.setrn();
    one.getrn();
    one.setMark();
    one.getMark();

    one.Result();

    return 0;
}