#include <iostream>

using namespace std;

int longitud(char cad[]) {
    int result = 0;
    for(int i = 0; cad[i] != '\0'; i++)
        result++;
    return result;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    char cad1[] = {'c', 'i', 'e', 'n', 'c', 'i', 'a','\0'};
    char cad2[] = "ciencia";

    cout << arr << endl;
    cout << cad1 << endl;
    cout << cad2 << endl;

    cout << longitud(cad1) << endl;
    return 0;
}
