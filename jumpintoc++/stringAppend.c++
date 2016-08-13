#include <iostream>
#include <string>
using namespace std;
int main ()
{
string user_first_name;
string user_last_name;
string user_age;
cout << "Please enter your first name: ";
getline( cin, user_first_name, '\n' );
cout << "Please enter your last name: ";
getline( cin, user_last_name ,',');
getline(cin, user_age );
string user_full_name = user_first_name + " " + user_last_name;
cout << "Your name is: " << user_full_name << " " << user_age <<"\n";
}