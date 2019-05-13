#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
#include<iomanip>
 using namespace std;
 int main()
 {
    string alpha{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secretmsg{};
    cout<<"ENTER THE SECRET MESSAGE::";
    getline(cin,secretmsg);

    string encp{};
    cout<<"ENCRYPTING......................"<<endl;

    for(char c :secretmsg)
    {
        size_t pos=alpha.find(c);
        if(pos!=string::npos)
        {
            char k=key.at(pos);
            encp+=k;//add the corresponding character from key string
        }
        else
        {
            encp+=c;//if the character is out of the given alphabet range
        }
    }
    cout<<encp<<endl;

    cout<<"DECRYPTING............................."<<endl;

    string decp{};
    for( char c: encp)
    {
        size_t pos=key.find(c);
        if(pos!=string::npos)
        {
            char p=alpha.at(pos);
            decp+=p;
        }
        else
        {
            decp+=c;
        }
    }
    cout<<decp<<endl;
 }
