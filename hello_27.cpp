//how many vowels in a given sentence.
#include <iostream>
using namespace std;

int main()
{
    string sent;
    int length, count_v = 0;

    cout<<"Sentence: ";
    getline(cin,sent);

    cout<<"Sentence: "<< sent<<endl;

    length = sent.length();

    cout<<"length: "<< length<<endl;

    for (int i = 0; i < length ; i++)
    {
        
        if ( sent[i] == 'a'||sent[i]=='A'
            ||sent[i] == 'e'||sent[i]=='E'
            ||sent[i] == 'i'||sent[i]=='I'
            ||sent[i] == 'o'||sent[i]=='O'
            ||sent[i] == 'u'||sent[i]=='U')
        {
            count_v += 1;
        }
    }
    
    //cout<<"vowels in the sentence: "<<  count_v<<endl;
    cout<< "There are in total "<< count_v << " vowels in the given sentence."<<endl;

    return 0;
}