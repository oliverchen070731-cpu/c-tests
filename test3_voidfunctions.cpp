#include <iostream>
using namespace std;


// Function declarations
void print_message();
void ask_questions();

// Put global variables here
int main()
{
    print_message();
    ask_questions();
    return 0;  
} 


// Function definitions


void print_message()
{
    cout << "Hello, welcome to the program!" << endl;
}

void ask_questions()
{
    int age;
    cout << "How old are you?" << endl;
    cin >> age;

    //option 1
    /*int birth_year = 2026 - age;
    cout << "You were born in" << "\t" << birth_year << endl; */

    //option 2
    cout << "You were born in" << " " << 2026 - age << endl;
}


    
