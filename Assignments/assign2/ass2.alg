/* ******************************************************************
* Filename: ass2.alg                                                *
* By. James Halladay                                                *
* Project: task1/week 5 practicum                                   *
* Login: jehalladay                                                 *
* Assignment No: 2                                                  *
* File Description:   A file that outlines the algorithm for        *
*                          step 3 and step 4                        *
*                                                                   *
*                                                                   *
*                                                                   *
* I declare that all material in this assessment task is my work    *
* except where there is clear acknowledgement                       *
* or reference to the work of others. I further declare that I      *
* have complied and agreed to the CMU Academic Integrity Policy     *
* at the University website.                                        *
*                                                                   *
* Author�s Name: James Halladay UID(700#): 700425363                *
* Date: 3/2/2020                                                   *
*                                                                   *
* Date Last Modified: 3/2/2020                                     *
******************************************************************* */







double income = 0, levyTax = .015, levyTotal = 0, taxPayable = 0, totalTax = 0;

cout << "Please enter your Annual Income: " << endl;
cin >> income;

levyTotal = income * levyTax;

if (income < 5401) {
    taxPayable = 0;
} else if (income < 20701) {
    taxPayable = .2 * income;
} else if (income < 38001) {
    taxPayable = 3060;
    taxPayable += (income - 20700) * .34;
} else if (income < 50001) {
    taxPayable = 8942;
    taxPayable += (income - 38000) * .43;
} else {
    taxPayable = 14102;
    taxPayable += (income - 50000) * .47;
}

totalTax = levyTotal + taxPayable;


cout << "Your taxable income is: " << income << endl;
cout << "Your income tax is: " << taxPayable << endl;
cout << "Your Health Levy contribution is: " << levyTotal << endl;
cout << "Total Taxes: " << totalTax << endl;




// Step 4:



int items = 0, round = 0, round2 = 0, change2 = 0;
int n = 0, d = 0, q = 0;
int d1 = 0, d5 = 0, d10 = 0, d20 = 0, d50 = 0, d100 = 0;
double cost = 0, pay = 0, change = 0;

cin >> items >> cost;
cost = cost * items;

// Rounding by converting cost to an integer in two steps and comparing the difference

round = cost * 100;
round2 = cost * 10;
round2 *= 10;
round2 = round - round2;
round2 = round2 % 5;
if (round2 > 2) {
    round2 = 5 - round2;
    round += round2;
} else {
    round -= round2;
}

cost = round / 100.0;


cout << "Please enter cash exchanged before change was given." << endl;
cin >> pay;

change = pay - cost;


change2 = change * 100;
d100 = change2 / 10000;
change2 = change2 % 10000;

d50 = change2 / 5000;
change2 = change2 % 5000;

d20 = change2 / 2000;
change2 = change2 % 2000;

d10 = change2 / 1000;
change2 = change2 % 1000;

d5 = change2 / 500;
change2 = change2 % 500;

d1 = change2 / 100;
change2 = change2 % 100;

q = change2 / 25;
change2 = change2 % 25;

d = change2 / 10;
change2 = change2 % 10;

n = change2 / 5;
change2 = change2 % 5;


cout << fixed << setprecision(2) << cost << endl;

cout << change << endl;
cout << change2 << endl;
cout << "Hundreds: " << "\t" << d100 << endl;
cout << "Fifties:  " << "\t" << d50 << endl;
cout << "Twenties: " << "\t" << d20 << endl;
cout << "Tens:     " << "\t" << d10 << endl;
cout << "Fives:    " << "\t" << d5 << endl;
cout << "Ones:     " << "\t" << d1 << endl;
cout << "Quarters: " << "\t" << q << endl;
cout << "Dimes:    " << "\t" << d << endl;
cout << "Nickels:  " << "\t" << n << endl;

