/**
    
    \@file      FinalExam.cpp
    \@name      Daniel Levin
    \@date      27/05/2024
    \@brief     The file contains functions that work with a matrix
    \@details   The functions include initializing the matrix with user defined values, sum of the elements and show the matrix


*/

#include <iostream>
#include <cassert>

using namespace std;

void enterData(double matrix[][3], const int MAX_ROW, const int MAX_COL);
double sumNumbers(double matrix[][3], const int MAX_ROW, const int MAX_COL);
void showData(double matrix[][3], const int MAX_ROW, const int MAX_COL);


int main()
{
    const int MAX_ROW = 4;
    const int MAX_COL = 3;

    int usrChoice;

    double matrix[MAX_ROW][MAX_COL];
    

    do 
    {   
        cout << "\n1) Enter data in matrix (range -2.5 to 2.5)" << endl;
        cout << "2) Sum of all numbers" << endl;
        cout << "3) Show data in matrix" << endl;
        cout << "4) Exit" << endl;

        cout << "\nPlease enter choice: ";
        cin >> usrChoice;
        
        switch (usrChoice)
        {
        case 1:
            enterData(matrix, MAX_ROW ,MAX_COL);
            break;
        case 2:
            cout << "The sum of the numbers in the matrix is: " << sumNumbers(matrix, MAX_ROW, MAX_COL) << endl;
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

/**

    \@brief  The function initializes a matrix with user defined values
    \@param matrix
    \@param MAX_ROW
    \@param MAX_COL

*/
void enterData(double matrix[][3], const int MAX_ROW, const int MAX_COL)
{
    double usrnum;

    for (int i = 0; i < MAX_ROW; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            do
            {
                cout << "Enter the value for row " << i << " and column " << j << " (from -2.5 to 2.5): ";
                cin >> usrnum;

                assert(usrnum >= -2.5 || usrnum <= 2.5);

            } while (usrnum < -2.5 || usrnum > 2.5);

            matrix[i][j] = usrnum;

        }
    }

}

/**

    \@brief  The function sums the elements of the matrix
    \@param matrix
    \@param MAX_ROW
    \@param MAX_COL
    \@return sum
*/
double sumNumbers(double matrix[][3], const int MAX_ROW, const int MAX_COL)
{
    double sum = 0;

    for (int i = 0; i < MAX_ROW; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

/**

    \@brief  The function initializes displays the values in the matrix
    \@param matrix
    \@param MAX_ROW
    \@param MAX_COL

*/
void showData(double matrix[][3], const int MAX_ROW, const int MAX_COL)
{
    for (int i = 0; i < MAX_ROW; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }
}