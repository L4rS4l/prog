//Name: Yllar Nomolos J. Saldua
//Activity: Performance Task #1 Odd/Even Number Scheme
//Date: March 24, 2022
//Year and Section: BSIE1-1

#include <iostream>

using namespace std;

int main (){
    int number, range;
    char choices;

    do{
        cout << "Enter the range of nos.: ";
        cin >> range;
        for (int number, count = 1; count <= range; count++){
            cout << "Enter the no. that you want to know if its EVEN or ODD. " << "[" << count << "]: ";
            cin >> number;
            if (number % 2 == 0){
            cout << number << " - EVEN no." << endl;
            } else {
            cout << number << " - ODD no." << endl;
            }
        }
            cout << "Do you want to try again? [y/n]: ";
            cin >> choices;
            cout << endl;
    } while (choices == 'y');

    return 0;
}