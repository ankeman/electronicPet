#include<iostream>
#include<string>
#include"pet.h"
using namespace std;



int main()
{
    pet pet1;
    int choice;
    int health_check;
    do{
        pet1.print();
        cout << "What would you like to do with your pet?\n";
        cout << "Play (1) \n Feed (2) \n Exit (0) \n";
        cin >> choice;
        switch(choice){
            case 1:
                pet1.play();
                break;
            case 2:
                pet1.feed();
                break;
            case 0:
                cout << "Press enter to exit." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
        health_check = pet1.check_health();
    } while(choice != 0 && health_check != 1);
    cin.ignore();
    return 0;
}