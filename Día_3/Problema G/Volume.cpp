#include <iostream>
#include <string>

using namespace std;

int iN;

int wVolume(string s)
{
    int cont = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int ch = s[i];
        if (ch >= 65 && ch <= 90)
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    int space = 0;
    int maxVol=0, ans=0;
    string text, sub;
    cin >> iN;
    cin.ignore();
    getline(cin, text);

    space = text.find(' ');

    if (space < 0)
    {
        ans = wVolume(text);
    } else {
        while (space != -1)
        {
            sub = text.substr(0, space);
            maxVol = wVolume(sub);
            if (maxVol > ans)
            {
                ans = maxVol;
            }
            text = text.erase(0, space + 1);
            space = text.find(' ');
            if (space == -1)
            {
                maxVol = wVolume(text);
                if (maxVol > ans)
                {
                    ans = maxVol;
                }
            }
        }
    }

    cout<<ans<<endl;
}
