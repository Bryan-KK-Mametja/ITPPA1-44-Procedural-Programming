#include <iostream>
#include <fstream>
using namespace std;


double prices(int itemIndex){
    double itemPrice;

    switch(itemIndex){
    case 1:
        itemPrice = 15.00;
        break;
    case 2:
        itemPrice = 30.00;
        break;
    case 3:
        itemPrice = 25.00;
        break;
    case 4:
        itemPrice = 10.00;
        break;
    case 5:
        itemPrice = 20.00;
        break;
    case 6:
        itemPrice = 35.00;
        break;
    case 7:
        itemPrice = 18.00;
        break;
    case 8:
        itemPrice = 40.00;
        break;
    }
    return itemPrice;
}


int main(){
    string name;
    string surname;
    int numberOfItems;
    double finalValue;
    ofstream file;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter surname: ";
    cin >> surname;
    cout << "Number of items you would like to buy: ";
    cin >> numberOfItems;
    cout << endl << "Cafeteria  Menu" << endl;
    cout << "1. Coffee - R15.00" << endl;
    cout << "2. Sandwich - R30.00" << endl;
    cout << "3. Salad - R25.00" << endl;
    cout << "4. Juice - R10.00" << endl;
    cout << "5. Muffin - R20.00" << endl;
    cout << "6. Pizza Slice - R35.00" << endl;
    cout << "7. Soup - R18.00" << endl;
    cout << "8. Burger - R40.00" << endl << endl;

    for(int i=1; i <= numberOfItems; i++){
        int itemIndex;
        double officialPrice;

        cout << "Select item " << i << " (1-8): ";
        cin >> itemIndex;

        finalValue = finalValue + prices(itemIndex);
    }
    if(finalValue > 100){
            double discount = finalValue - finalValue * 10/100;
            cout << "Your total is: R " << discount << endl;
            cout << "Discount has been applied.";

            file.open("CafeteriaBill.txt");
            if(file.is_open()){
                file << name << " " << surname << endl;
                file << "Total: R " << discount << " - Discount has been applied.";
                file.close();
                cout << "The bill has been written to CafeteriaBill.txt.";
            }else{
                cout << "CafeteriaBill.txt could not be opened.";
            }
        }else{
            cout << endl << "Your total is: R " << finalValue << endl;
            cout << "No discount has been applied. ";

            file.open("CafeteriaBill.txt");

            if(file.is_open()){
                file << name << " " << surname << endl;
                file << "Total: R " << finalValue << " - No discount has been applied.";
                file.close();
                cout << "The bill has been written to CafeteriaBill.txt.";
            }else{
                cout << "CafeteriaBill.txt could not be opened.";
            }

        }
    return 0;
}
