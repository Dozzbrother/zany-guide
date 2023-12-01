#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
setlocale(LC_ALL, "Ukr");

int a = 7;
int *px = &a;
cout << a << endl;
cout << *px << endl;
cout << &a << endl;
cout << &*px << endl;

string str = "string";
for (size_t i = 0; i < str.length(); i++){
 cout << str[i];
 cout << "\a";
}


return 0;
}