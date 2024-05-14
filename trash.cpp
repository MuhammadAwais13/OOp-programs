#include <iostream>
#include <string>
using namespace std;

class Benefits
{
    bool hasHealthInsurance;
    bool hasRetirementPlan;

public:
    Benefits(bool healthInsurance, bool retirementPlan)
        : hasHealthInsurance(healthInsurance), hasRetirementPlan(retirementPlan) {}

    void setBenefits(bool healthInsurance, bool retirementPlan)
    {
        hasHealthInsurance = healthInsurance;
        hasRetirementPlan = retirementPlan;
    }

    void display() const
    {
        cout << "Health Insurance: " << (hasHealthInsurance ? "Yes" : "No") << endl;
        cout << "Retirement Plan: " << (hasRetirementPlan ? "Yes" : "No") << endl;
    }
};

class Employee
{
protected:
    string emp_name;
    int emp_code;
    string emp_designation;
    float emp_salary;
    Benefits benefits;

public:
    Employee(const string &name, int code, const string &designation, float salary, bool healthInsurance, bool retirementPlan)
        : emp_name(name), emp_code(code), emp_designation(designation), emp_salary(salary), benefits(healthInsurance, retirementPlan) {}

    virtual float AnnualSalary() const = 0;

    friend istream &operator>>(istream &in, Employee &emp);
    friend ostream &operator<<(ostream &out, const Employee &emp);
};

istream &operator>>(istream &in, Employee &emp)
{
    cout << "Enter Employee Name: ";
    in >> emp.emp_name;
    cout << "Enter Employee Code: ";
    in >> emp.emp_code;
    cout << "Enter Employee Designation: ";
    in >> emp.emp_designation;
    cout << "Enter Employee Salary: ";
    in >> emp.emp_salary;

    int healthInsurance, retirementPlan;
    cout << "Health Insurance Status (1 for Yes, 0 for No): ";
    in >> healthInsurance;
    cout << "Retirement Plan Status (1 for Yes, 0 for No): ";
    in >> retirementPlan;

    emp.benefits.setBenefits(healthInsurance, retirementPlan);

    return in;
}

ostream &operator<<(ostream &out, const Employee &emp)
{
    out << "Employee Name: " << emp.emp_name << endl;
    out << "Employee Code: " << emp.emp_code << endl;
    out << "Employee Designation: " << emp.emp_designation << endl;
    out << "Employee Salary: " << emp.emp_salary << endl;
    emp.benefits.display();
    return out;
}

class Manager : public Employee
{
public:
    Manager(const string &name, int code, const string &designation, float salary, bool healthInsurance, bool retirementPlan)
        : Employee(name, code, designation, salary, healthInsurance, retirementPlan) {}

    float AnnualSalary() const 
    {
        return emp_salary * 1.2; // 20% bonus for manager
    }
};

class Supervisor : public Employee
{
public:
    Supervisor(const string &name, int code, const string &designation, float salary, bool healthInsurance, bool retirementPlan)
        : Employee(name, code, designation, salary, healthInsurance, retirementPlan) {}

    float AnnualSalary() const 
    {
        return emp_salary * 1.1; // 10% bonus for supervisor
    }
};

int main()
{
    Manager manager("John", 1001, "Manager", 50000, true, true);
    Supervisor supervisor("Alice", 1002, "Supervisor", 40000, false, true);

    cout << "Manager Details:" << endl;
    cout << manager << endl;
    cout << "Annual Salary (with bonus increment): " << manager.AnnualSalary() << endl;

    cout << endl;

    cout << "Supervisor Details:" << endl;
    cout << supervisor << endl;
    cout << "Annual Salary (with bonus increment): " << supervisor.AnnualSalary() << endl;

    return 0;
}