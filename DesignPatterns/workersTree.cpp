#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Component
{
  public:
    Component(string name, double salary)
          : m_fullName(name), m_valueSalary (salary) {}

    virtual void printSalary(int level) = 0;

    //Of course these data members should be private,
    //but I did not wish to "litter" this class with
    //superfluous functions-interfaces,
    //therefore I have left these data members of class to be public
    string            m_fullName;
    double                 m_valueSalary;
};

/** "Leaf" */
class Worker : public Component
{
  public:
    Worker(string name , double salary): Component(name,salary)
    {
    }
    void printSalary(int level)
    {
        for(int j=0; j < level; ++j) cout << "\t";
        cout << "Worker : " <<
            m_fullName.c_str() << ",salary: " <<
            m_valueSalary << "$\n";
    }
};

/** "Composite" */
class Manager: public Component
{
  public:
    Manager(string name , double salary) : Component(name,salary)
    {
    }
    void add(Component *cmp)
    {
        m_children.push_back(cmp);
    }
    void printSalary(int level)
    {
        for(int j=0; j < level; ++j) cout << "\t";
        cout << "Manager : " <<  this->m_fullName.c_str() <<
            ",salary: " << m_valueSalary << "$\n";

        if(!m_children.empty())
        {
            for(int x=0; x < level; ++x) cout << "\t";
            cout << "Subordinates  of " <<
                m_fullName.c_str() << ":\n";
            ++level;
            for (int i = 0; i < m_children.size(); ++i)
              m_children[i]->printSalary(level);
        }
    }

   private:
    // The manager can have a number of people(managers or workers)
    // under his/her supervision
    // and that is the reason we have the vector here (for
    // navigating a hierarchical organisation,
    // for typing an individual salary)
    vector < Component * > m_children;
};

int main()
{
    //Let's define a big chief
    Manager president ("Gerard Butcher", 1000000.0);

    //Let's define several average chiefs
    Manager manager_production_department ("John Smith",400000.0);
    Manager manager_engineering_department ("Michael Biner",400000.0);
    Manager manager_quality_control_department ("David Jaskson",280000.0);
    Manager manager_sales_management_division ("Tom Vilow",270000.0);
    Manager manager_general_affairs_department ("Janet Teyllor" ,200000.0);

    //Let's define several managers of a engineering department
    Manager team_leader_RandD ("Jorge Creig", 250000.0);
    Manager team_leader_QA ("Arnold Lambero", 200000.0);

    //Let's define several engineers of a engineering department
    Worker software_developer1 ("Andrey Lapidos", 200000.0);
    Worker software_developer2 ("Maxim  Laertsky", 240000.0);
    Worker tester ("Miki  Minaj", 130000.0);

    //Now we will add the number of persons as assistants of president
    president.add(&manager_production_department);
    president.add(&manager_engineering_department);
    president.add(&manager_quality_control_department);
    president.add(&manager_sales_management_division);
    president.add(&manager_general_affairs_department );

    //Now we will add the number of persons as assistants of manager engineering department
    manager_engineering_department.add(&team_leader_RandD);
    manager_engineering_department.add(&team_leader_QA );

    //Now we will add the number of persons as assistants of team leader the R&D
    team_leader_RandD.add(&software_developer1);
    team_leader_RandD.add(&software_developer2);

    //Now we will add the tester as assistant of team leader the QA
    team_leader_QA.add(&tester);

    cout << "The hierarchy of the company,\ni.e. president and all who is under his supervision :\n\n" ;
    president.printSalary(0);

    cout << '\n';
}
