#include<iostream>
using namespace std;

class pet{
    private:
        int hunger;
        int happy;
        string name;
    public:
    pet();
    void play();
    void feed();
    void print();
    int check_health();
};

pet::pet(){
    hunger = 50;
    happy = 50;
    cout<<"Pet's name ?";
    cin>>name;

}

void pet::play(){
    int choice = 0;
    cout<<"What should we play\n";
    cout<<"Fetch(1)\n Roll over(2)\n";
    cin>>choice;

    switch(choice){
        case(1):
            happy = happy +  rand()%10;
            hunger = hunger + rand()%10;
            break;
        case(2):
            happy = happy + rand()%10;
            hunger = hunger - rand()%10;
        default:
        cout<<"Not a valid choice."<<endl;
    }
}
/* Member function feed(), allows the user to feed a pet. */
    void pet::feed(){
        cout << "\nMMM Yummy!\n";
        if (hunger<10)
        hunger-=5;
        else{
        hunger -= rand()%10;
        }
    }

    /* Member function print(), prints information about a pet. */
    void pet::print(){
        cout << "\nYour pet " << name << " is " << endl;
        cout << "Happy: " << happy << endl;
        cout << "Hungry: " << hunger << endl;
    }

    /* Member function check_health(), checks the health of a pet. */
    int pet::check_health(){
        if(hunger > 100){
            cout << "\nYour pet has starved.\n";
            return 1;
        }
        if(happy <= 0){
            cout << "\nYour pet has died of a broken heart.\n";
            return 1;
        }

        cout<<hunger<<endl<<happy<<endl;
        return 0;
    }
