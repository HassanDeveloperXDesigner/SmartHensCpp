#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

/*
1. menu
2. user registration (sign up)
3. user login (sign in)
4. Exit
5. input validation
*/

string usernames[100], emails[100], passwords[100];
// int prices[100];
int totalUsers = 0;


/*
Ali     ali@gmail.com     123
Usman   usman@gmail.com   456
-----   ---------         ---

*/

void Menu();
void signUp(string username , string email, string password);
bool signIn(string email, string password);
bool isUserPresent(string email);
string GetField(string data, int feild);
void LoadData();
void saveData(string username , string email, string password);

int main()
{
    LoadData();

    cout << "Welcome to the Sign In/Sign Up page!" << endl;

    int choice;
    do
    {
        Menu();
        cin >> choice;

        string username, email, password;
        switch (choice)
        {
        case 1:
            // Sign Up
            cout << "Sign Up" << endl;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            if(isUserPresent(email))
            {
                cout << "User already exists" << endl;
                break;
            }
            else
            {
                signUp(username , email, password);
                saveData(username , email, password);
            }
            break;
        case 2:
            // Sign In
            cout << "Sign In" << endl;
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;

            signIn(email, password);
            choice = 3;  // Exit after sign in
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        getch();
        system("cls");
    } while(choice != 3);

    return 0;
}

void signUp(string username , string email, string password)
{
    usernames[totalUsers] = username;
    emails[totalUsers] = email;
    passwords[totalUsers] = password;
    totalUsers++;
}

bool signIn(string email, string password)
{
    for (int i = 0; i < totalUsers; i++)
    {
        if (emails[i] == email)
        {
            if (passwords[i] == password)
            {
                cout << "Welcome " << emails[i] << endl;
                return true;
            }
        }
    }
    cout << "Invalid email or password" << endl;
    return false;
}

bool isUserPresent(string email)
{
    for (int i = 0; i < totalUsers; i++)
    {
        if (emails[i] == email)
        {
            return true;
        } 
    }
    return false;
}

void Menu()
{
    cout << "1. Sign Up" << endl;
    cout << "2. Sign In" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

void LoadData()
{
    ifstream file("users.txt");
    string data;
    while(!file.eof())
    {
        getline(file,data);
        usernames[totalUsers] = GetField(data,1);
        emails[totalUsers] = GetField(data,2);
        passwords[totalUsers] = GetField(data,3);
        // prices[totalUsers] = stoi(GetField(data,4));
        // stoi = string to int   "int stoi(string)"
        // stof = string to float   "int stof(string)"
        totalUsers++;

    }
    file.close();
}

string GetField(string data, int feild)
{
    //  data = Ali,ali@gmail.com,123
    // feild = 1

    string fieldData = "";
    int commaCount = 1;
    for(int i = 0;i < data.length();i++){
        if(data[i] == ','){
            commaCount++;
        }
        else if(commaCount == feild){
            fieldData += data[i];
        }
    }
    return fieldData;

}

void saveData(string username , string email, string password)
{
    ofstream file ("users.txt", ios::app);
    file<<username << "," << email << "," << password << endl;
    file.close();
}

