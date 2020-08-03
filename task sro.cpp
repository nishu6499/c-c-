#include<iostream>
using namespace std;
class sentence
{
	public:
		int count();
};
int sentence::count()
{
	{
    char sen[1000];
    int vowels, consonants;

    vowels =  consonants = 0;

    cout << "Enter a string: ";
    cin.getline(sen,1000);
    for(int i = 0; sen[i]!='\0'; ++i)
    {
        if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' ||
           sen[i]=='o' || sen[i]=='u' || sen[i]=='A' ||
           sen[i]=='E' || sen[i]=='I' || sen[i]=='O' ||
           sen[i]=='U')
        {
            ++vowels;
        }
        else if((sen[i]>='a'&& sen[i]<='z') || (sen[i]>='A'&& sen[i]<='Z'))
        {
            ++consonants;
        }
    }
	cout<<"\nvowel :"<<vowels;
	cout<<"\nconsonant :"<<consonants;
}}
int main()
{
	sentence s;
	s.count();
}
