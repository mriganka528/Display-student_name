// display student's name of a class
#include <iostream>
using namespace std;

int main()
{
    int max_std, len;
    char ch;
    cout << "Enter number of student :";
    cin >> max_std;
    char arr[max_std][100];
    for (int i = 0; i < max_std; i++)
    {
        cout << "\nEnter length of student[" << i + 1 << "] name :";
        cin >> len;
        cout << "Enter student[" << i + 1 << "] name :";
        for (int j = 0; j < len; j++)
        {
            cin >> arr[i][j];
        }
        arr[i][len] = '\0';
    }
    for (int i = 0; i < max_std; i++)

    {
        cout << "\nStudent[" << i + 1 << "]"
             << " name is :" << arr[i];
    }
    cout << endl;
    return 0;
}