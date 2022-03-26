//Performance Task 2:
//Description: Conversion Console App using functions [Dollar to Peso & Peso to Dollar] (Debugging Activity)
//Name: Yllar Nomolos J. Saldua

#include <iostream>

using namespace std;

struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
};

void promptAndWait();

void DollarsToPesos(float conversionRate, unsigned usd = 0);
void PesosToDollars(float conversionRate, unsigned php = 0);
int ans = 1;

int main () 
{
    float conversionRate = 50;
    unsigned dollarsIn, pesosIn;
    int ch;

    do
    {
        system("cls");
        cout << endl;
        cout << "UPPUCCA (USD to PHP/PHP to USD Conversion Console App)" << endl;
        cout << "[1] USD to PHP" << endl;
        cout << "[2] PHP to USD" << endl;
        cout << "[3] Exit UPPUCCA" << endl;
        cout << "Select Number : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                system("cls");
                cout << "\n<< Convert USD to PHP >>" << endl;
                cout << "\nEnter USD Amount (without dollar sign, commas or decimal) : ";
                cin >> dollarsIn;
                DollarsToPesos(conversionRate,dollarsIn);
                promptAndWait();
                break;
           }
           case 2:
           {
               system("cls");
               cout << "\n<< Convert PHP to USD >>" << endl;
               cout << "\nEnter PHP Amount (without peso sign, commas or decimal) : ";
               cin >> pesosIn;
               PesosToDollars(conversionRate,pesosIn);
               promptAndWait();
               break;
           }
           case 3:
           {
               cout << "UPPUCCA Stopped \nThank you for using UPPUCCA!";
               return 0;
           }
           default:
           {
               cout << "Invalid Input! Error!";
               break;
           }
        }
    }while(ans == 1);
return 0;
}

void promptAndWait()
{
    cout << "Do you want to try again? " << endl;
    cout << "[1] Yes" << endl;
    cout << "[2] No" << endl;
    cin >> ans;
}

void DollarsToPesos (float conversionRate, unsigned usd)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$" << usd << " USD = " << "P" << (conversionRate * usd) << " PHP. \n";
}

void PesosToDollars (float conversionRate, unsigned php)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\nP" << php << " PHP = " << "$" << (php / conversionRate) << " USD. \n";
}