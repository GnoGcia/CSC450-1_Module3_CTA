#include <iostream>

using namespace std;

int main()
{
    // Create three pointer integers in dynamic memory
    int *pX = new int;
    int *pY = new int;
    int *pZ = new int;

    // Loops while input is invalid
    while(true)
    {
        // Take in three integers from user input
        // and store each value in the dereferenced
        // pointer variables
        try
        {
            // Take in *pX and check for type mismatch
            cout << "X: ";
            cin >> *pX;
            if(cin.fail())
                throw "Invalid Input For X";
            // Take in *pY and check for type mismatch
            cout << "Y: ";
            cin >> *pY;
            if(cin.fail())
                throw "Invalid Input For Y";
            // Take in *pZ and check for type mismatch
            cout << "Z: ";
            cin >> *pZ;
            if(cin.fail())
                throw "Invalid Input For Z";
            // Terminate loop
            cout << endl;
            break;
        }
        catch(const char* msg)
        {
            // Clear cin buffer
            cin.clear();
            string* str = new string;
            getline(cin, *str);
            delete str;
            cout << "Error: " << msg << endl;
        }
    }

    // Output the dereferenced value and memory address of pX
    cout << "X Value: " << *pX << endl;
    cout << "X Address: " << pX << endl << endl;

    // Output the dereferenced value and memory address of pY
    cout << "Y Value: " << *pY << endl;
    cout << "Y Address: " << pY << endl << endl;

    // Output the dereferenced value and memory address of pZ
    cout << "Z Value: " << *pZ << endl;
    cout << "Z Address: " << pZ << endl << endl;

    // Deallocate the memory for each pointer
    delete pX;
    delete pY;
    delete pZ;

    return 0;
}
