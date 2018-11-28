// Genna Felder, 9-18-18, COP2000 Homework 1
// Malachi's Pie Ship
#include <iostream>
#include <iomanip>
using namespace std;

    int main()

        {
            const double FLOUR_CUPS_1PIE = 2.50;
            const double SUGAR_TBSP_1PIE = 1.33;
            const double SALT_TBSP_1PIE = 0.50;
            const double BUTTER_CUPS_1PIE = 0.88;
            const double EGGS_1PIE = 1.00;
            double pieswanted;

            cout << "How many pies do you wish to make?" << endl;
            cin >> pieswanted;
            cout << endl;
            cout << setprecision(2) << fixed;
            cout << "Malachi's Pie Shop - Pie Crust Recipe" << endl;
            cout << "-------------------------------------" << endl;
            cout << "You wish to make " << pieswanted << " pies." << endl;
            cout << endl;
            
            cout << "Flour:   " << pieswanted * FLOUR_CUPS_1PIE << " cups" << endl;
            cout << "Sugar:   " << pieswanted * SUGAR_TBSP_1PIE << " tablespoons" << endl;
            cout << "Salt:    " << pieswanted * SALT_TBSP_1PIE << " tablespoons" << endl;
            cout << "Butter:  " << pieswanted * BUTTER_CUPS_1PIE << " cups" << endl;
            cout << "Eggs:    " << pieswanted * EGGS_1PIE << " large eggs" << endl;

        return 0;

        }