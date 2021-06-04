//p5_20190609_20190487_20190487
#include <iostream>
#include<string>
#include<vector>
using namespace std;
void RecPermute(string soFar,string rest)
{
    vector<string>str;
    bool check;
    if (rest == "")
    {
        check=false;
        for(int i=0;i<str.size();i++)
        {
            if(soFar==str[i])
            {
                check =true;
                break;
            }
        }
        if(check ==false)
        {
            str.push_back(soFar);
            cout<<soFar<<endl;
        }

    }// No more characters
// Print the word
    else // Still more chars
// For each remaining char
    for (int i = 0; i < rest.length(); i++) {
        string next = soFar + rest[i];// Glue next char
        string remaining = rest.substr(0, i)+ rest.substr(i+1);
        RecPermute(next, remaining);
        }

}
// "wrapper" function
void ListPermutations(string s) {
    RecPermute("",s);
}

int main()
{
    ListPermutations("ABCA");
}
