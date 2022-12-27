#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include<process.h>
#include <limits>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

char employeeCode,ans;
double ratePerHour,hoursWork,tax,grossPay,netPay,deduction;

double grosspay(double x, double y);
double Deduction(double x, double y);
double netpay(double x, double y);
void display();
void selectionTax();
void loopTax();
void tax1();
void tax2();
void A();
void B();
void C();
void payroll();
void again();
void input();
void introductionDisplay();
void codeSelection();


int main ()
{
system("Color E0");
introductionDisplay();
payroll();
return 0;
}

double grosspay(double x, double y)
{

    x= x * y;
    return x;
}
double Deduction(double x, double y)
{
    x = x * y;
    return x;
}
double netpay(double x, double y)
{
    x = x - y;
    return x;
}
void display()
{
    system("cls");
    cout<<"\n\t\t-------------------------------------------------------";
    cout<<"\n\t\t     =============================================";
    cout<<"\n\t\t\t Thank you for using our Payroll Program";
    cout<<"\n\t\t     =============================================\n";
    cout<<"\t\t-------------------------------------------------------\n";
    cout<<"\n\t\t     =============================================";
    cout<<"\n\t\t\t      Payroll Official Receipt";
    cout<<"\n\t\t     =============================================";
    cout<<"\n\t\t\tEmployee Code\t\t\t"<< setprecision(2) << fixed <<employeeCode;
    cout<<"\n\t\t\tEmployee Rate Per Hour\t\t"<< setprecision(2) << fixed <<ratePerHour;
    cout<<"\n\t\t\tEmployee Total Hours Worked\t"<< setprecision(0) << fixed << hoursWork;
    cout<<"\n\t\t\tEmployee Total Gross Pay\t"<< setprecision(2) << fixed <<grossPay;
    cout<<"\n\t\t\tEmployee Total Deductions\t"<< setprecision(2) << fixed <<deduction;
    cout<<"\n\t\t\tEmployee Total Net Pay\t\t"<< setprecision(2) << fixed <<netPay<<endl;
    cout<<"\t\t     =============================================\n";
    cout<<"\n\t\t-------------------------------------------------------";
    cout<<"\n\t\t     =============================================";
    cout<<"\n\t\t             Have a Great Day, Godbless!";
    cout<<"\n\t\t     =============================================\n";
    cout<<"\t\t-------------------------------------------------------\n\n\t\t\t   ";
    system("pause");
    system("cls");
    return;
}
void tax1()
{
    deduction = .05;
    grossPay= grosspay(ratePerHour, hoursWork);
    deduction = Deduction(grossPay, deduction);
    netPay = netpay(grossPay, deduction);
    cout<<"\n\t\t\t";
    return;
}
void tax2()
{
    deduction = .10;
    grossPay= grosspay(ratePerHour, hoursWork);
    deduction = Deduction(grossPay, deduction);
    netPay = netpay(grossPay, deduction);
    cout<<"\n\t\t\t";
    return;
}
void A()
{
                        ratePerHour=250;
                        codeSelection();
                        cout<<"\n\n\t\t\t-----------------------------------------";
                        cout<<"\n\t\t\t     ================================";
                        cout<<"\n\t\t\t\tEnter Hours Worked  : ";
                        cin>>hoursWork;
                        cout<<"\t\t\t     ================================";
                            if(hoursWork<=0)
                             {
                                system("cls");
                                cout<<"\n\t\t\t     =============================";
                                cout<<"\n\t\t\t---------------------------------------";
                                cout<<"\n\t\t\t        Invalid Hours Work Input";
                                cout<<"\n\t\t\t     =============================";
                                cout<<"\n\t\t\t---------------------------------------";
                                A();
                             }
                             else{
                        grossPay= grosspay(ratePerHour, hoursWork);
                        cout<<"\n\t\t\t-----------------------------------------\n\n";
                        cout<<"\n\t\t\t-----------------------------------------";
    selectionTax();
    system("pause");
    system("cls");
    display();
    again();
                             }
}
void B()
{
                        ratePerHour=320;
                        codeSelection();
                        cout<<"\n\n\t\t\t-----------------------------------------";
                        cout<<"\n\t\t\t     ==============================";
                        cout<<"\n\t\t\t\tEnter Hours Worked : ";
                        cin>>hoursWork;
                        cout<<"\t\t\t     ==============================";
                            if(hoursWork<=0)
                             {
                                system("cls");
                                cout<<"\n\t\t\t     =============================";
                                cout<<"\n\t\t\t---------------------------------------";
                                cout<<"\n\t\t\t        Invalid Hours Work Input";
                                cout<<"\n\t\t\t     =============================";
                                cout<<"\n\t\t\t---------------------------------------";
                                B();
                             }
                             else{
                        grossPay= grosspay(ratePerHour, hoursWork);
                        cout<<"\n\t\t\t-----------------------------------------\n\n";
                        cout<<"\n\t\t\t-----------------------------------------";
    selectionTax();
    system("pause");
    system("cls");
    display();
    again();
                             }

}
void C()
{
                        ratePerHour=450;
                        codeSelection();
                        cout<<"\n\n\t\t\t-----------------------------------------";
                        cout<<"\n\t\t\t     ==============================";
                        cout<<"\n\t\t\t\tEnter Hours Worked : ";
                        cin>>hoursWork;
                        cout<<"\t\t\t     ==============================";
                            if(hoursWork<=0)
                             {
                                system("cls");
                                cout<<"\n\t\t\t     =============================";
                                cout<<"\n\t\t\t---------------------------------------";
                                cout<<"\n\t\t\t        Invalid Hours Work Input";
                                cout<<"\n\t\t\t     =============================";
                                cout<<"\n\t\t\t---------------------------------------";
                                C();
                             }
                             else{
                        grossPay= grosspay(ratePerHour, hoursWork);
                        cout<<"\n\t\t\t-----------------------------------------\n\n";
                        cout<<"\n\t\t\t-----------------------------------------";
    selectionTax();
    system("pause");
    system("cls");
    display();
    again();
                             }
}
void payroll()
{
    codeSelection();
    cout<<"\n\n\t\t\t---------------------------------------";
    cout<<"\n\t\t\t     =============================";
    cout<<"\n\t\t\t\tInput Employee Code : ";
    cin>>employeeCode;
    cout<<"\t\t\t     =============================";
    cout<<"\n\t\t\t---------------------------------------\n\n\t\t\t";
    system("pause");
    employeeCode=toupper(employeeCode);
    switch(employeeCode)
{

        case 'A':{
                        system("cls");
                        A();
                        break;
                        }
        case 'B':{
                        system("cls");
                        B();
                        break;
                        }
        case 'C':{
                        system("cls");
                        C();
                        break;
                        }
        default:    system("cls");

                    cout<<"\n\t\t---------------------------------------------------------";
                    cout<<"\n\t\t\t\tInvalid employee code!";
                    cout<<"\n\t\t--------------------------------------------------------\n";
                    cin.clear();// this is for clearing the previous input
                    cin.ignore(123, '\n');
                    payroll();


                break;

}
}
void again()
{
    char ans;

    cout<<"\n\t\t\t------------------------------------------------";
    cout<<"\n\t\t\t     =====================================";
    cout<<"\n\t\t\t\tDo you want to try again ? >Y< or >N<   ";
    cout<<"\n\t\t\t     =====================================";
    cout<<"\n\t\t\t------------------------------------------------\t\t\t\t\t\t";
    cout<<"\n\t\t\t\t\t    Answer: ";
    cin>>ans;
    ans=toupper(ans);
            if (ans == 'Y' || ans == 'y')
            {
                system("cls");
                payroll();
            }else if(ans == 'N' || ans == 'n')
                    {
                    system ("CLS");
                    cout<<"\n\n\t\t--------------------------------------------";
                    cout<<"\n\t\t     =====================================";
                    cout<<"\n\t\t\t  Thank you for testing out!!";
                    cout<<"\n\t\t     =====================================";
                    cout<<"\n\t\t--------------------------------------------\n\n\t\t";
                    } else {
                        system("cls");
                        cout<<"\n\n\t\t\t------------------------------------------------";
                        cout<<"\n\t\t\t     =====================================";
                        cout<< "\n\t\t\t Invalid input. Please enter either 'Y' or 'N'." << endl;
                        cout<<"\t\t\t     =====================================";
                        cout<<"\n\t\t\t------------------------------------------------\n\t\t\t";
                        again();
                    }

return;
}
void selectionTax()
{
    cout<<"\n\t\t\t\t      Tax Rate Options";
    cout<<"\n\t\t\t     ================================";
    cout<<"\n\t\t\t       >[1] With Dependent      5%<\n\t\t\t       >[2] Without Dependent  10%<";
    cout<<"\n\t\t\t     ================================";
    cout<<"\n\t\t\t\t--------------------------";
    cout<<"\n\t\t\t\t    Select Tax Rate : "; cin>>tax;
    cout<<"\t\t\t\t--------------------------";
    cout<<"\n\n\t\t\t----------------------------------------";
    loopTax();
}
void loopTax()
{
    if(tax==1)
    {
    tax1();
    }
    else if (tax==2)
        {
        tax2();
        }
        else
            {
            system("cls");
            cout<<"\n\t\t\t     =============================";
            cout<<"\n\t\t\t---------------------------------------";
            cout<<"\n\t\t\t        Invalid Tax Rate Input";
            cout<<"\n\t\t\t     =============================";
            cout<<"\n\t\t\t---------------------------------------";
            selectionTax();
            }
}
void introductionDisplay()
{
    cout<<"\n\n\t===============================================================";
    cout<<"\n\t<$$$$$$$$$$$$$$$> GROUP 10 FINAL PROJECT CODE <$$$$$$$$$$$$$$$>\n";
    cout<<"  \t===============================================================\n\n";
    cout<<"  \t                -------------------------------";
    cout<<"\n\t       <--------|      MEMBERS / ENCODERS     |-------->\n";
    cout<<"  \t                -------------------------------";
    cout<<"\n\t       <========|       Magcayang, Jonel      |========>\n";
    cout<<"  \t                -------------------------------";
    cout<<"\n\t       <========| Presented by: BSIT 1C - G1  |========>\n";
    cout<<"  \t                -------------------------------";
    cout<<"\n\n\n\t===============================================================";
    cout<<"\n\t<--------------->  Please Enjoy the Program.  <--------------->\n";
    cout<<"  \t===============================================================\n\t\t\t";
    system("pause");
    system("cls");
    return;
}
void codeSelection()
{
    cout<<"\n\t\t-------------------------------------------------------";
    cout<<"\n\t\t     =============================================";
    cout<<"\n\t\t      Choose one of the Employee Codes to proceed";
    cout<<"  \n\t\t     =============================================\n";
    cout<<"\n\t\t-------------------------------------------------------";
    cout<<"\n\t\t     =============================================\n";
    cout<<"  \t\t     | EMPLOYEE CODE >A< | RATE PER HOUR = 250.00 |\n";
    cout<<"  \t\t     | EMPLOYEE CODE >B< | RATE PER HOUR = 320.00 |\n";
    cout<<"  \t\t     | EMPLOYEE CODE >C< | RATE PER HOUR = 450.00 |\n";
    cout<<"  \t\t     =============================================\n";
    cout<<"\t\t-------------------------------------------------------";
}
void codeSelection();


