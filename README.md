# Experiment 14

**Aim:** <br>
To study and implement inheritance. <br>
<br>
**Theory:** <br>
Constructors: <br>
<br>
The child class can inherit properties, characteristics from another class called the parent class. This fundamental object-oriented programming principle known as _inheritance_. <br>
There are three inheritance modes: <br>
&#8594; Public Inheritance. <br>
&#8594; Private Inheritance. <br>
&#8594; Protected Inheritance. <br>
<br>
_Public Inheritance:_ <br>
When a class is derived using public inheritance, the public and protected members of the base class remain public and protected in the derived class, respectively.<br>
<br>
_Protected Inheritance:_ <br>
In protected inheritance, the public and protected members of the base class become protected members of the derived class. <br>
<br>
_Private Inheritance:_ <br>
In private inheritance, the public and protected members of the base class become private members of the derived class. <br>
<br>
<br>
There are mainly 4 types of inheritance. They are: <br>
_Single Inheritance:_ <br>
A derived class inherits from a single parent class. <br>
_Multiple Inheritance_  <br>
 A derived class inherits from more than one parent class. <br>
_Multilevel Inheritance:_  <br>
A class is derived from another child class. <br>
_Hierarchical Inheritance:_  <br>
Multiple child classes inherit from the same parent class <br>
<br>


**Code:** <br>
<br>
a.<br>

```

# include <iostream>
# include <string>
using namespace std;

//single inheritance
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
```
<br>
b.<br>

```
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

```
<br>
c.<br>

```
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
```
<br>
d.<br>

```
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

```
<br>

**Outputs:**  <br>
<br>
a.<br>
![exp12a output](https://github.com/tanishaamenon/CDS---Constructors/blob/main/exp12a.JPG) <br>
b.<br>
![exp12b output](https://github.com/tanishaamenon/CDS---Constructors/blob/main/exp12b.JPG) <br>
c.<br>
![exp12c output](https://github.com/tanishaamenon/CDS---Constructors/blob/main/exp12c.JPG) <br>
d.<br>
![exp12d output](https://github.com/tanishaamenon/CDS---Constructors/blob/main/exp12d.JPG) <br>
e.<br>
![exp12e output](https://github.com/tanishaamenon/CDS---Constructors/blob/main/exp12e.JPG) <br>
f.<br>
![exp12f output](https://github.com/tanishaamenon/CDS---Constructors/blob/main/exp12f.JPG) <br>



<br>

**Conclusion:** <br>
&#8594; We learnt about constructors and deconstructors in C++. <br>
&#8594; We learnt the use case of each of them in C++. <br>
*******
<br>
