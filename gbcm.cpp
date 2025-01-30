#include <iostream>
#include <string>
using namespace std;


int main()
{
    string zxcStr;
    int swit;
    cout << "Enter strok: ";
    getline(cin, zxcStr);

    cout << "1 - encrype Cesar \n2 - encrype atbash \n3 - decipher Cesar"<< endl;
    cin >> swit;
    switch(swit)
    {
        case 1:
        {
            for (int i = 0; i < zxcStr.length(); i++) {
                char l = zxcStr[i];
                if (l >= 'A' && l <='Z')
                {
                    l = l + 3;
                    if(l > 'Z')
                    {
                        l = 'A';
                    }

                }
                else if(l >= 'a' && l <='z') 
                { 
                    l = l + 3;
                    if (l > 'z')
                    {
                        l = 'a';
                    }
                }
                zxcStr[i] = l;
            }
            cout << zxcStr << endl;
            break;
        }
        case 2:
        {
            for (int i = 0; i < zxcStr.length(); i++)
            {
                if (zxcStr[i] >= 'a'&& zxcStr[i] <= 'z')
                {
                    zxcStr[i] = 'z' - (zxcStr[i] - 'a');
                }
                else if (zxcStr[i] == ' ')
                {

                }
            }
            cout << zxcStr << endl;
        }
        case 3: {
            for (int i = 0; i < zxcStr.length(); i++)
            {
                char l = zxcStr[i];
                if (l >= 'A'&& l <= 'Z')
                {
                    l = l - 3;
                    if(l > 'Z')
                    {
                        l = 'A';
                    }
                }
                else if (l >= 'a' && l <= 'z')
                {
                    l = l - 3;
                    if (l > 'z')
                    {
                        l = 'a';
                    }
                }
                zxcStr[i] = l;
            }
            cout << zxcStr << endl;
        }

    }
    system("pause");
}
