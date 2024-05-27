#include <iostream>

using namespace std;

void enterData(double matrix[][3], const int MAX_ROW, const int MAX_COL);
double sumNumbers(double matrix[][3], const int MAX_ROW, const int MAX_COL);
void showData(double matrix[][3], const int MAX_ROW, const int MAX_COL);


int main()
{
    const int MAX_ROW = 4;
    const int MAX_COL = 3;

    int usrChoice;

    double matrix[4][3];
    

    do 
    {
        cout << "1) Enter data in matrix (range -2.5 to 2.5)" << endl;
        cout << "2) Sum of all numbers" << endl;
        cout << "3) Show data in matrix" << endl;
        cout << "3) Exit" << endl;

        cout << "\nPlease enter choice: ";
        cin >> usrChoice;
        
        switch (usrChoice)
        {
        case 1:
            enterData(matrix, MAX_ROW ,MAX_COL);
            break;
        case 2:
            sumNumbers(matrix, MAX_ROW, MAX_COL);
            break;
        case 3:
            showData(matrix, MAX_ROW, MAX_COL);
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            break;
        }

    } while (usrChoice != 4);

    return 0;
}

