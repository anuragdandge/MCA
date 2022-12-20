#include <iostream>
using namespace std;
void AssignInitialValues();
void DisplayNameNBalance();
void WithdrawAmount();
void DepositAmount();
class Bank
{
public:
    int AccountNumber, BalanceAmount;
        char AccountType[50], DepositorName[50];

        public:
            void AssignInitialValues()
                {
                        
                                cout << " Enter Account Number :";
                                        cin >> AccountNumber;
                                                
                                                        cout << " Enter Account Type : ";
                                                                cin >> AccountType;
                                                                        
                                                                                cout << " Enter Balance : ";
                                                                                        cin >> BalanceAmount;
                                                                                                

                                                                                                    }
                                                                                                        void DepositAmount()
                                                                                                            {
                                                                                                                    cout << "\n--------------------------------------";
                                                                                                                            cout << "\n------------Deposit Amount------------";
                                                                                                                                    int DAmount;
                                                                                                                                            cout << "\n\n Enter Your Name :-";
                                                                                                                                                    cin >> DepositorName;
                                                                                                                                                            cout << " Enter Amount to be Deposited :- ";
                                                                                                                                                                    cin >> DAmount;
                                                                                                                                                                            BalanceAmount += DAmount;
                                                                                                                                                                                    cout << "\n Rs." << DAmount << "/- Amount Deposited Successfully by " << DepositorName;
                                                                                                                                                                                            cout << "\n Total Balance = " << BalanceAmount;
                                                                                                                                                                                                }
                                                                                                                                                                                                    void WithdrawAmount()
                                                                                                                                                                                                        {    char WithDrawerName[50];
                                                                                                                                                                                                                cout << "\n\n---------------------------------------";
                                                                                                                                                                                                                        cout << "\n-------------Withdraw Amount-------------\n";
                                                                                                                                                                                                                                int WAmount;
                                                                                                                                                                                                                                        cout << "\n Enter Your Name:- ";
                                                                                                                                                                                                                                                cin >> WithDrawerName;
                                                                                                                                                                                                                                                        cout << " Enter Amount to be Withdraw :- ";
                                                                                                                                                                                                                                                                cin >> WAmount;
                                                                                                                                                                                                                                                                        BalanceAmount -= WAmount;
                                                                                                                                                                                                                                                                                cout << "\n Rs. "
                                                                                                                                                                                                                                                                                             << WAmount << "/-  Withdrawal Successfully by " << WithDrawerName ;
                                                                                                                                                                                                                                                                                                     cout << "\n Total Balance = " << BalanceAmount;
                                                                                                                                                                                                                                                                                                             // DisplayNameNBalance();
                                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                                                     void DisplayNameNBalance()
                                                                                                                                                                                                                                                                                                                         {
                                                                                                                                                                                                                                                                                                                                 cout << "\n\n\n---------------------------------------";
                                                                                                                                                                                                                                                                                                                                         cout << "\n------------Display Information------------";
                                                                                                                                                                                                                                                                                                                                                 cout << "\n\n Account Number = " << AccountNumber;
                                                                                                                                                                                                                                                                                                                                                         cout << "\n Account Type = " << AccountType;
                                                                                                                                                                                                                                                                                                                                                                 cout << "\n Total Balance = " << BalanceAmount;
                                                                                                                                                                                                                                                                                                                                                                         cout << "\n\nx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x";
                                                                                                                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                                                                                                                             } b1;

                                                                                                                                                                                                                                                                                                                                                                             int main()
                                                                                                                                                                                                                                                                                                                                                                             {
                                                                                                                                                                                                                                                                                                                                                                                 b1.AssignInitialValues();
                                                                                                                                                                                                                                                                                                                                                                                     b1.DepositAmount();
                                                                                                                                                                                                                                                                                                                                                                                         b1.WithdrawAmount();
                                                                                                                                                                                                                                                                                                                                                                                             b1.DisplayNameNBalance();
                                                                                                                                                                                                                                                                                                                                                                                             }

                                                                                                                                                                                                                                                                                                                                                                                             