# include <iostream>
# include <string>
using namespace std;
//multilevel inheritance
class kingdom
{
    public:
    string hum = "Human Classification";
    void king()
    {
        cout<<"Kingdom: Animalia ";
    }
};
class phylum: public kingdom
{
    public:
    string phy = "Phylum: Cordata ";

};

class classs:public phylum
{
    public:
    string cla = "Class: Mammalia ";

};
class order:public classs
{
    public:
    string ord = "Order: Primates ";

};
class family:public order
{
    public:
    string fam = "Family: Homonidae";

};
class genus:public family
{
    public:
    string gen = "Genus: Homo";

};
class species:public genus
{
    public:
    string spe = "Species: Species";

};
int main()
{
    species h1;
    cout<<h1.hum<<endl;
    h1.king();
    cout<<endl;
    cout<<h1.phy<<endl;
    cout<<h1.cla<<endl;
    cout<<h1.ord<<endl;
    cout<<h1.fam<<endl;
    cout<<h1.gen<<endl;
    cout<<h1.spe<<endl;


}