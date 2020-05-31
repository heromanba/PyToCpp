
// usebrass1.cpp -- testing bank accout classes
// compile with brass.cpp
#include <iostream>
#include "13.7.brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porceot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatic Hogg", 382288, 3000.00);

    Piggy.ViewAcct();
    cout << endl;
    
    Hoggy.ViewAcct();
    cout << endl;
    
    cout << "Depositing $1000 into the Hogg Account;\n";
    Hoggy.Deposit(1000.00);
    cout << "New balance: $" << Hoggy.Balance() << endl;
    
    cout << "Withdrawing $4200 from the Pigg Account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Pigg account balance: $" << Piggy.Balance() << endl;

    cout << "Withdrawing $4200 from the Hogg Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0;
}


// OUTPUT:
// Client: Porceot Pigg
// Account Number: 381299
// Balance: $4000.00

// Client: Horatic Hogg
// Account Number: 382288
// Balance: $3000.00
// Maximum load: $500.00
// Owed to bank: $0.00
// Loan Rate: 11.125%

// Depositing $1000 into the Hogg Account;
// New balance: $4000
// Withdrawing $4200 from the Pigg Account:
// Withdrawal amount of $4200.00exceeds your balance.
// Withdrawal cancelled.
// Pigg account balance: $4000
// Withdrawing $4200 from the Hogg Account:
// Bank advance: $200.00
// Finance charge: $22.25
// Client: Horatic Hogg
// Account Number: 382288
// Balance: $0.00
// Maximum load: $500.00
// Owed to bank: $222.25
// Loan Rate: 11.125%