#include <iostream>

class Person
{
public:
    std::string name;
    long aadhar;
    std::string address;
    Person(std::string n, std::string a, long ad)
    {
        name = n;
        aadhar = ad;
        address = a;
    }
    void show()
    {
        std::cout << "Person========>" << std::endl;
        std::cout << "Aadhar : " << aadhar << std::endl;
        std::cout << "Name : " << name << std::endl;
        std::cout << "Address : " << address << "\n\n";
    }
};

class Student
{
public:
    float fees;
    int roll_no;
    std::string name;
    long aadhar;
    std::string address;
    void set(Person person, int roll, float fee)
    {
        aadhar = person.aadhar;
        name = person.name;
        address = person.address;
        roll_no = roll;
        fees = fee;
    }
    void show()
    {
        std::cout << "Student========>" << std::endl;
        std::cout << "Aadhar : " << aadhar << std::endl;
        std::cout << "Roll NO. : " << roll_no << std::endl;
        std::cout << "Name : " << name << std::endl;
        std::cout << "fee : " << fees << std::endl;
        std::cout << "Address : " << address << "\n\n";
    }
};

int main(int argc, char const *argv[])
{
    Person p("Ayush Sahu", "Barhi, Katni", 7498498);
    Student s;
    s.set(p, 4007, 8888.98f);
    p.show();
    s.show();
    exit(EXIT_SUCCESS);
}
