#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void countchars(const char *str)
{
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
    }

    cout << "Vowels : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;
    cout << "Digits : " << digits << endl;
    cout << "Spaces : " << spaces << endl;
}

int main()
{
    char str[100];
    cout << "Enter a string : ";
    cin.ignore();  
    cin.getline(str, 100);  
    countchars(str);
    return 0;
}
