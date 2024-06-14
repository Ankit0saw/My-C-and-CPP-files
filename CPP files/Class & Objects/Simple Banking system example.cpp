#include <iostream>
#include <cmath>
using namespace std;

class BankingSystem{
  private:
    double balance;
    double interestRate;
  public:
    BankingSystem (double initialBalance, double intialInterestRate)
    {
				balance = initialBalance;
				interestRate =intialInterestRate;
				}
				void deposit (double amount)
				{
				  balance += amount;
          cout <<"Deposit successful\n";
				}
  void Withdrew(double amount)
  {
    if (amount <= balance) {
      balance -=amount;
      cout <<" Withdrawl Successful.\n ";
    }
    else{
      cout <<" Insufficient balance.\n ";
    }
  }

  double CalculateCI (int years)
  {
    return balance*pow((1+ interestRate /100), years) - balance;
  }

  void displayBalance () {
    cout <<" Balance: $ " << balance<<endl;
  }

  void displayMenu(){
    cout <<" \n Menu options:"<<endl;
    cout <<" 1. Deposit "<<endl;
    cout <<" 2. Withdraw " << endl;
    cout <<" 3. Display Balance " << endl;
    cout <<" 4. calculate compound Interest "<<endl;
    cout <<" 5. Exit "<<endl;
  }

  ~BankingSystem() {
    cout << "Banking System object destroyed.\n";
    }
};

int main (){
				double initialBalance, initialInterestRate;
				cout << " Enter initial balance: ";
				cin >> initialBalance;
				cout << "Enter Interest Rate (in percentage): ";
				cin >> initialInterestRate;
				BankingSystem account (initialBalance,initialInterestRate); 
				int choice;
				do{
				  account.displayMenu (); 
				  cout << "Enter your choice:"; 
				  cin >> choice;
				  switch(choice){ 
				    case 1:
				      double depositAmount; 
				      cout << " Enter deposit amount:"; 
				      cin >> depositAmount;
				      account.deposit (depositAmount); 
				      break;
				    case 2:
				      double withdrawAmount;
				      cout <<" Enter withdrawal Amount: ";
				      cin >> withdrawAmount;
				      account.Withdrew(withdrawAmount);
				      break;
				    case 3:
				      account.displayBalance();
				      break;
				    case 4:
				    int years;
				    cout << "Enter no of years:";
				    cin>>years;
				    cout <<" Compound interest: $"<< account.CalculateCI(years)<< endl;
				    break;
				  case 5:
				    cout << " Exiting program \n"; 
				    break;
				  default:
				    cout << " Invalid choice, please try again. \n";
				     break;
				}
			}while (choice != 5); 
			return 0;
}
