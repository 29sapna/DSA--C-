#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "enter character: " << endl;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "vowels" << endl;
    }
    else
        cout << "consonant" << endl;
}
//OR

// switch (c)
// {
// case 'a':
//     cout<<"vowel"
//     break;
// case 'e':
//     cout<<"vowel"
//     break;
// case 'i':
//     cout<<"vowel"
//     break;
// case 'o':
//     cout<<"vowel"
//     break;
// case 'u':
//     cout<<"vowel"
//     break;

// default:
// cout<<"consonent";
//     break;
// }