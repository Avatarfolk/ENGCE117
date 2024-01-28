#include <iostream> //�� include ��鹰ҹ���е�ͧ������
#include <vector> //�繡�û�С������� vector
#include <algorithm> //���������� include algorithm ����鹨��������ö�� find
#include <iomanip> // ������������㹡�� setprecision

struct Person {
    std::string name ;
    int age ;
};

// Function to display name and age
void display(const std::vector<Person>& people) {
    for (const auto& person : people) {
        std::cout << person.name << "(" << person.age << ") " ;
    }
    std::cout << std::endl ;
}

int main() {
    std::vector<Person> people = {{"Arufa", 18}, {"Beta", 16}, {"Ganmai", 17}, {"Deruta", 17}, {"Ipushiron", 21}, {"Zeta", 20}, {"Eta", 20}, {"dtto", 16} };

    // Display names and ages
    std::cout << "--| Human: " ;
    display(people);

    // Display by age (ascending)
    std::sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
        return a.age < b.age;
    });
    std::cout << "\n--| Human: " ;
    display(people);

    // Display by age (descending)
    std::sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
        return a.age > b.age;
    });
    std::cout << "\n--| Human: " ;
    display(people);

    // Calculate average age
    double averageAge = 0.00;
    for (const auto& person : people) {
        averageAge += person.age ;
    }
    averageAge /= people.size() ;

    // Display average age with 2 decimal places
    std::cout << std::fixed << std::setprecision(2); // ��������������ء output ����������ʴ� 2 ���˹觷ȹ���
    std::cout << std::endl << "\nAverage Age = " << std::ceil(averageAge * 100) / 100 << std::endl ;

    // Display names and ages above average age
    std::cout << "\n--| Human: ";
    for (const auto& person : people) {
        if (person.age > averageAge) {
            std::cout << person.name << "(" << person.age << ") " ;
        }
    }

    return 0;
}

