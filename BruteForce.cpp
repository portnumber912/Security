/*
The Shift cipher given a key K encrypts a plain text in a way that each letter in the plain text is replaced with the K th letter in the list of symbols. A list of symbols used for Shift cipher is as follows:

{ ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?,.}

This list includes white space and special characters including ‘!’, ‘?’, ‘,’, ‘.’.


*/

#include <iostream>
#include <string.h>
using namespace std;

class Variable
{
private:
    char *encrypt[132];
    char *decrypt[69];

public:
    char calculate(char *_encrypt, char *_decrypt);
};

char Variable::calculate(char *_encrypt, char *_decrypt)
{
    for (int number = 0; number < strlen(_encrypt); ++number)
    {
        cout << endl
             << "--------------------------------------------------------------------------- " << endl;
        for (int n = 0; n < strlen(_encrypt); n++)
        {
            for (int m = 0; m < strlen(_decrypt); m++)
            {
                if (_encrypt[n] == _decrypt[m])
                {
                    int holdvalue = (m + number) % strlen(_decrypt);
                    cout << _decrypt[holdvalue];
                }
            };
        };
    };
    return 0;
};

int main()
{
    char encrypt[132] = {"wslhzlCzlukC2zCz2wwsplzCx2pjrs6ChzCwvzzpislGCdlChylCsvjh1lkCpuC1olC4lz1CvmCwhjpmpjCvjlhuGCV2yClult6C4pssChyyp3lCpuC89C1vC8!Cov2yzG "};

    char decrypt[69] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?,. "};
    Variable _var;
    _var.calculate(encrypt, decrypt);
}