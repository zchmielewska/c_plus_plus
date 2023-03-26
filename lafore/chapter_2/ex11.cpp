/*
By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
means.) Use this manipulator, along with setw(), to help generate the following output:
Last name  First name  Street address     Town        State
------------------------------------------------------------
Jones      Bernard     109 Pine Lane      Littletown  MI
O’Brian    Coleen      42 E. 99th Ave.    Bigcity     NY
Wong       Harry       121-A Alabama St.  Lakeville   IL
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << setiosflags(ios::left)
         << setw(11) << "Last name" << setw(12) << "First name" << setw(19) << "Street address" << setw(12) << "Town" << setw(6) << "State" << endl
         << setw(11) << "Jones" << setw(12) << "Bernard" << setw(19) << "109 Pine Lane" << setw(12) << "Littletown" << setw(6) << "MI" << endl
         << setw(11) << "O'Brian" << setw(12) << "Coleen" << setw(19) << "42 E. 99th Ave." << setw(12) << "Bigcity" << setw(6) << "NY" << endl
         << setw(11) << "Wong" << setw(12) << "Harry" << setw(19) << "121-A Alabama St." << setw(12) << "Lakeville" << setw(6) << "IL" << endl;

    return 0;
}