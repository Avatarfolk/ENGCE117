#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee 
{
    string name;
    double salary;
};
void calculateTax(Employee employees[], int n, double& totalSalary, double& totalTax, string& highestTaxEmployee, double& highestTax) {
    totalSalary = 0;
    totalTax = 0;
    highestTaxEmployee = "";
   

    for (int i = 0; i < n; ++i) {
        if (employees[i].name == "-1") {
            break;
        }

        totalSalary += employees[i].salary;
        double annualTax = employees[i].salary;

        totalTax += annualTax;

        if (annualTax > highestTax) {
            highestTax = annualTax;
            
            highestTaxEmployee = employees[i].name;
        }
    }
}

int main() {
    const int MAX_EMPLOYEES = 10;
    Employee employees[MAX_EMPLOYEES];

    int n = 0;

    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        cout << "Employee " << i + 1 << "'s Name : ";
        cin >> employees[i].name;

        if (employees[i].name == "-1") {
            break;
        }

        cout << "Salary (Bath/Month) : ";
        cin >> employees[i].salary;

        ++n;
    }

    double totalSalary, totalTax,highestTax;
    string highestTaxEmployee;

    calculateTax(employees, n, totalSalary, totalTax, highestTaxEmployee, highestTax);

    cout << "All salary per month: " << totalSalary << " Bath" << endl;
    cout << "All salary per year: " << totalSalary * 12 << " Bath" << endl;
    cout << "Tax (7% per year): " << totalSalary *12 * 0.07<< " Bath" << endl;
    cout << "Most tax in company: " << highestTaxEmployee << " (" << highestTax *12 *0.07 << " Bath per year)" << endl;

    return 0;
}

