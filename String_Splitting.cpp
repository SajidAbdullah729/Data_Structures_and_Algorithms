#include<bits/stdc++.h>
using namespace std;


int main()
{
    string _string;getline(cin,_string);
    int i=0;
    vector<string> all_strings_collection;
    string temporary="";
    for(i=0;i<_string.length();)
    {

        if(_string[i]==' ')
        {
            all_strings_collection.push_back(temporary);
            i++;
            temporary="";
        }
        else
        {
            temporary=temporary+_string[i];
            i++;
        }
    }
    all_strings_collection.push_back(temporary);
    cout<<"All Strings->\n";
    for(int i=0;i<all_strings_collection.size();i++)
    {
        cout<<all_strings_collection[i]<<"\n";
    }



    return 0;
}
