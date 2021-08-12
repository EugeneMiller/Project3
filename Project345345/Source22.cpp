#include <iostream>
#include <time.h>

using namespace std;

int f1() {
    return 0;
}

int main()
{
    srand(time(0));
    const int row = 4, col = 4;
    int arr[row][col], arr2[row][col];
    int course, shift;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 20;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n\tShift direction\n"
        << "\t1. To the right\n"
        << "\t2. To the left\n"
        << "\t3. Up\n"
        << "\t4. Down\n\n"
        << "Select an action: ";
    cin >> course;

    if (course == 1) {
        cout << "Select the number of shift: ";
        cin >> shift;
        if (shift > col) {
            shift %= col;
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (col - shift + j > col - 1) {
                    arr2[i][j] = arr[i][j - shift];
                    cout << arr2[i][j] << "\t";
                }
                else {
                    arr2[i][j] = arr[i][col - shift + j];
                    cout << arr2[i][j] << "\t";
                }
            }
            cout << endl;
        }
    }
    else if (course == 2) {
        cout << "Select the number of shift: ";
        cin >> shift;
        if (shift > col) {
            shift %= col;
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (shift + j - col < 0) {
                    arr2[i][j] = arr[i][j + shift];
                    cout << arr2[i][j] << "\t";
                }
                else {
                    arr2[i][j] = arr[i][shift + j - col];
                    cout << arr2[i][j] << "\t";
                }
            }
            cout << endl;
        }
    }
    else if (course == 3) {
        cout << "Select the number of shift: ";
        cin >> shift;
        if (shift > row) {
            shift %= row;
        }
        for (int j = 0; j < col; j++)
        {
            for (int i = 0; i < row; i++)
            {
                if (shift + i - row < 0) {
                    arr2[i][j] = arr[i + shift][j];
                }
                else {
                    arr2[i][j] = arr[shift + i - row][j];
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr2[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else if (course == 4) {
        cout << "Select the number of shift: ";
        cin >> shift;
        if (shift > row) {
            shift %= row;
        }
        for (int j = 0; j < col; j++)
        {
            for (int i = 0; i < row; i++)
            {
                if (row - shift + i > row - 1) {
                    arr2[i][j] = arr
                        [i - shift][j];
                }
                else {
                    arr2[i][j] = arr[row - shift + i][j];
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr2[i][j] << "\t";
            }
            cout << endl;
        }
    }
}