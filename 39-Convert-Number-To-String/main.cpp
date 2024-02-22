#include <iostream>
#include <string>

using namespace std;

std::string number_to_string(int num)
{
    return std::to_string(num);
}

int main(int argc, char *argv[])
{

    auto s = number_to_string(1000);
    cout << typeid(s).name() << endl;

    cout << number_to_string(10) << endl;
    cout << number_to_string(-10) << endl;
    cout << number_to_string(1110) << endl;
    cout << number_to_string(-99910) << endl;

    return 0;
}