// OOP tutorial https://youtu.be/wNOx9eZLix4

#include <iostream>
using std::string;


// abstraction [#2]
class AbstractEmployee {
    // virtual makes it required when added to Employee below
    virtual void Promotion() = 0;
};

// private, public, and protected modifiers, private by default
class Employee:AbstractEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;
 
public:
    void Introduction() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

// constructor method
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

// setters & getters for encapsulation [#1]
    void setName(string name) { Name = name; }
    void setCompany(string company) { Company = company; }
    void setAge(int age) { 
        if (age >= 18) Age = age;
        else std::cout << "Can't be hired, must be 18+!" << std::endl;
    }

    string getName() { return Name; }
    string getCompany() { return Company; }
    int getAge() { return Age; }

    void Promotion() {
        if (Age > 30) std::cout << Name << " can be promoted!" << std::endl;
        else std::cout << Name << " can't be promoted!" << std::endl;
    }

};



// inheritance [#3] 
class Developer: public Employee {
private:
    string FavProgLang;

public:

    Developer(string name, string company, int age, string faveLang)
    :Employee(name, company, age)
    {
        FavProgLang = faveLang;
    }

 
    void FixBug() {
        std::cout << Name << " Fixing Bug " << FavProgLang << std::endl;
    };
};

// skip Teacher section for inheritance, but need to use for Polymophism [#4]
// a work method in each of the classes: Employee, Developer, and Teacher, but work does/says something different in each class
// explanation of pointers, but will do something else with pointers later on


int main() {
    std::cout << "Hello, world!" << std::endl;

    //Employee employee1 = Employee("Mike", "solo developer", 42);
    Developer dev1 = Developer("Mike", "solo developer", 42, "C++");
    dev1.FixBug();
    dev1.Introduction();
    dev1.Promotion();

    /*  encapsulation prevents access so the method above is needed
    employee1.Name = "Mike";
    employee1.Company = "solo dev";
    employee1.Age = 42;                 
    employee1.Introduction();
    employee1.Promotion();

// setters & getters for encapsulation
/  
    employee1.setName("Joe");
    employee1.setCompany("Tron");
    employee1.setAge(24);

    employee1.Introduction();
    employee1.Promotion();

    std::cout << employee1.getAge() << " year old " << employee1.getName() << " the programmer works for " << employee1.getCompany() << std::endl;
    employee1.setAge(14);
*/

};