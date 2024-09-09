# include <iostream>
# include <string>
using namespace std;

//hierarchical inheritance
class fivekingdom
{
    public:
    string fiv = " is one of the kingdoms in the 5 Kingdom Classification";

};
class animalia: public fivekingdom
{
    public:
    string ani = "Animalia";

};
class monera: public fivekingdom
{
    public:
    string mon = "Monera";

};
class protists: public fivekingdom
{
    public:
    string pro = "Protists";

};
class fungi: public fivekingdom
{
    public:
    string fun = "Fungi";

};
class plantae: public fivekingdom
{
    public:
    string pla = "Plantea";

};
int main()
{
    animalia k1;
    monera k2;
    protists k3;
    fungi k4;
    plantae k5;

    
    cout<<k1.ani;
    cout<<k1.fiv<<endl;

    cout<<k2.mon;
    cout<<k1.fiv<<endl;

    cout<<k3.pro;
    cout<<k1.fiv<<endl;

    cout<<k4.fun;
    cout<<k1.fiv<<endl;
    
    cout<<k5.pla;
    cout<<k1.fiv<<endl;


}
