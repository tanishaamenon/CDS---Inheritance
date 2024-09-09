//inheritance
//types of inheritance - public, protected and private
//pyes of inheritance - sngle, mutiple, multilevel

# include <iostream>
# include <string>
using namespace std;

class uni
{
    public:
    string uni = "Symbiosis";
    void course()
    {
        cout<<"B. Tech ";
    }
};
class branch: public uni
{
    public:
    string branch = " Electronics and Telecommunication ";

};

int main()
{
    branch b1;
    cout<<b1.uni<<endl;
    b1.course();
    cout<<b1.branch;
}