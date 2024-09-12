// namespace is region that provide scope to --identifiers-- inside it

// Identifiers are names of type, function and variables
// they are used to provide code into logical groups and to prevent name collisseion that can ocur espacially
// whan code base include multiple libraries
//

// like example of std::cout

// this tells us that cout is defined in standard(std) library so when we use something from another library we use scope resolution operators

// there may be MAY BE other cout defined in other namespaces / library so this std tells us that we are using std from std library

// same like this in cpp we cannot make two same functions having every thing same it will give error

// e.g

/*
void print(){

}
void print()
{

}
*/

// as these two print functions are exactly same compiler will give error but this can be solved by using namespace

/*
namespace prt1{
    void print(){

    }
}
namespace prt2{
    void print()
    {

    }
}
*/

// just like i previously said that there can be many couts in many libraries
// same here there are multiple print functions in different name spaces now if
// if we want to use print frm ptr2 we will right
/*
Ptr2::print();
or
using namespace ptr2;
print

*/

// now in main if write both using name space prt using name space prt2 and then call print then it will give error of ambigious

// if name space name is big we can also do

// using namespace p=prt;

// p::print();

// now p is acting same like prt

// we can also define a namespace inside another namespace

// e.g

/*
namespace prt1{
    namespace inside{
        void print(){

    }
    }
    void print(){

    }
}
*/

// as we can see there are two namepaces inside namespace ptr to use inside namespace syntax is

// ptr1::inside::print();

// this will calll inside print()