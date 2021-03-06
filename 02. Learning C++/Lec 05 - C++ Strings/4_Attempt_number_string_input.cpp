//4. Numeric and string input together

#include <iostream>

using namespace std;

int main()
{
    int year;
    char address[80];
    
    cout << "In what year were you born?\n";
    cin >> year;
    
    cout << "Where do you live?\n";
    cin.getline(address, 80);
    
    cout << "Year born: " << year << endl;
    cout << "Address: " << address << endl;
    
    return 0;
}

/* WHY PROBLEM?

In above program user didn't get the opportunity to enter the address. 
The problem is because of our old reason that when cin reads the year, 
it leaves the newline generated by the Enter key in the input queue. 
Then cin.getline() reads the newline as an empty line and assigns the 
null to address array. 

*/
