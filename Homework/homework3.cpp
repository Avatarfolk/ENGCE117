#include <iostream> //เป็น include พื้นฐานที่จะต้องมีเสมอ
#include <vector> //เป็นการประกาศให้ใช้ vector
#include <algorithm> //อย่าลืมใส่ include algorithm ไม่งั้นจะไม่สามารถใช้ find
#include <iomanip> // นำเข้าไฟล์ที่ใช้ในการ setprecision

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
    std::cout << std::fixed << std::setprecision(2); // ใส่ที่นี่เพื่อให้ทุก output ในโปรแกรมนี้แสดง 2 ตำแหน่งทศนิยม
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

