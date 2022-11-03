#include <iostream>
using namespace std;

int main()
{
    int i, j, n1, n2, temp, size = 0, l = 0, k = 0;
    int fgсc[20];
    int fgprog[20];
    int sgсс[20];
    int sgprog[20];
    int progmarks[40];
    int time[40];
    int tgcc[40];
    int tgprog[40];

    cout << "Please enter the quantity of the students in the 1st group(from 12 to 20): " << endl;
    cin >> n1;

    cout << "Please enter the quantity of the students in the 2nd group(from 12 to 20): " << endl;
    cin >> n2;

    cout << " PLease enter the time of the 1st group students: ";
    for (i = 0; i < n1; i++)
        cin >> fgсc[i];

    cout << " Please enter the grades of the 1st group students: ";
    for (i = 0; i < n1; i++)
        cin >> fgprog[i];

    cout << " Please enter the time of the 2nd group students: ";
    for (i = 0; i < n2; i++)
        cin >> sgсс[i];

    cout << "Please enter the grades of the 2st group students: ";
    for (i = 0; i < n2; i++)
        cin >> sgprog[i];

    for (i = 0; i < n1; i++)
        time[i] = fgсc[i];

    for (i = n1; i < n1 + n2 - 1; i++)
    {
        time[i] = sgсс[i - n1];
    }

    for (i = 0; i < n1; i++)
    {
        progmarks[i] = fgprog[i];
    }
    for (i = n1; i < n1 + n2 - 1; i++)
    {
        progmarks[i] = sgprog[i - n1];
    }

    for (i = 0; i < n1 + n2 - 1; i++)
    {
        for (j = i + 1; j < n1 + n2; j++)
        {
            if (time[i] < time[j])
            {
                temp = time[i];
                time[i] = time[j];
                time[j] = temp;
            }
        }
    }

    for (i = 0; i < n1 + n2 - 1; i++)
    {
        for (j = i + 1; j < n1 + n2; j++)
        {
            if (progmarks[i] < progmarks[j])
            {
                temp = progmarks[i];
                progmarks[i] = progmarks[j];
                progmarks[j] = temp;
            }
        }
    }

    cout << "So, here we have 5 fastest runners are: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << time[i] << " " << endl;
    }

    cout << "\n _______________________________________________________________" << endl;

    cout << "\n _______________________________________________________________" << endl;

    cout << " \n And here we have 5 best grades for programming exam: ";
    for (i = 0; i < 5; i++)
    {
        cout << progmarks[i] << " " << endl;
    }
}