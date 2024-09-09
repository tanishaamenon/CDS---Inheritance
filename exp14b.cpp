# include <iostream>
# include <string>
using namespace std;
//multiple inheritance
class mammal
{
    public:
    string mammal = "Kingdom Mammalia";
    void exp()
    {
        cout<<"Exceptions: ";
    }
};
class aquatic
{
    public:
    string aqua = "Species living in the water ";

};

class walrus:public aquatic,public mammal
{
    public:
    string wallie = "Walrus are mammals which are aquatic ";

};
int main()
{
    walrus b1;
    cout<<b1.mammal<<endl;
    b1.exp();
    cout<<b1.wallie;
}