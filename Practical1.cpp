using namespace std;
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    bool retry = true;
    do {
        int choice;
        cout << "BMI Calculator\n\n";
        cout << "1. Weight in pounds, height in inches\n";
        cout << "2. Weight in kilograms, height in meters\n";
        cin >> choice;

        while ((choice != 1) && (choice != 2)) {
            cout << "Invalid choice! Please enter valid choice: \n";
            cin >> choice;
        };

        double BMI = 0.0;
        double W = 0.0;
        double H = 0.0;
        string Weight = choice == 1 ? " pounds" : " kilograms";
        string Height = choice == 1 ? " inches" : " meters";
        int Measurement = choice == 1 ? 703 : 1;
        string result = "";

        cout << "Weight in" << Weight << "?:" << endl;
        cin >> W;
        cout << "Height in" << Height << "?:" << endl;
        cin >> H;
        BMI = (W * Measurement) / (H * H);

        cout << endl;
        cout << "\nResult..............\n" << endl;
        cout << "Weight:\t" << W << Weight << endl;
        cout << "Height:\t" << H << Height << endl;
        cout << "BMI:\t" << fixed << setprecision(1) << BMI << endl;

        if ((BMI >= (double)30)) {
            result = "Obese";
        }
        else if ((BMI < 30) && (BMI >= 25)) {
            result = "Overweight";
        }
        else if ((BMI < 25) && (BMI >= 18.5)) {
            result = "Normal";
        }
        else {
            result = "Underweight";
        }
        cout << "Status:\t" << result << endl;

        string response;
        cout << "Try Again? (y/n):";
        cin >> response;
        retry = response == "y" ? true : false;
    } while (retry);
    return 0;
}