#include <iostream>
#include <iomanip>
//declared functions
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    //initial variables
    double balance = 0;
    int choice = 0;

    do{
        //prompts
        std::cout << "Banking Program Has Started\n";
        std::cout << "Enter your choice: \n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);
        //switch on choice
        switch(choice){

            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks For Visiting";
                    break;
            default: std::cout << "Invalid Choice";
        }   
    }while(choice !=4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your Balance Is $"<< std::setprecision(2) << std::fixed << balance << '\n'; 

}
double deposit(){
    double amount = 0;
    std::cout << "Enter Amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Not Valid Amount ";
        return 0;
    }
    
        return amount;
}

double withdraw(double balance){
    double amount = 0; 
    std::cout << "Enter Amount: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficient Funds ";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount ";
        return 0;
    }
    else{
        return amount;
    }
    
        return amount;
}