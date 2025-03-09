#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "John";
    int age = 25;
    bool isCool = true;

    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;

    if (isCool) {
        cout << "I am cool!" << endl;
    } else {
        cout << "I am not cool." << endl;
    }

    return 0;
}
