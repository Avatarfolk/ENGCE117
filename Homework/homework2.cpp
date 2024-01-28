#include <iostream> //เป็น include พื้นฐานที่จะต้องมีเสมอ
#include <vector> //เป็นการประกาศให้ใช้ vector
#include <algorithm> //อย่าลืมใส่ include algorithm ไม่งั้นจะไม่สามารถใช้ find

int main() {
    char choice;
    
    do {
        int maxNumber;
        std::cout << "User input max number: ";
        std::cin >> maxNumber;

        // Generate the normal series
        std::vector<int> normalSeries(maxNumber);
        for (int i = 1; i <= maxNumber; ++i) {
            normalSeries[i - 1] = i;
        }
 
        std::cout << "----| Normal Series: ";
        for (int i : normalSeries) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        // Display Odd/Even/Normal
        char mode;
        std::cout << "Display Odd/Even/Normal? (o/e/n): ";
        std::cin >> mode;

        std::vector<int> filteredSeries;
        if (mode == 'o') {
            // Display Odd
            std::copy_if(normalSeries.begin(), normalSeries.end(), std::back_inserter(filteredSeries), [](int i ) {
                return i % 2 != 0;
            });

            std::cout << "----| Odd Series: ";    
        }
		 else if (mode == 'e') {
            // Display Even
            std::copy_if(normalSeries.begin(), normalSeries.end(), std::back_inserter(filteredSeries), [](int i ) {
                return i % 2 == 0;
            });

            std::cout << "----| Even Series: ";
        }
        else {
        	// Display Normal
            std::copy_if(normalSeries.begin(), normalSeries.end(), std::back_inserter(filteredSeries), [](int i ) {
                return i ;
            });

            std::cout << "----| Normal Series: ";
}
        for (int i : filteredSeries) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        // Display a-z / z-a
        char sort;
        std::cout << "Display a-z / z-a? (a/z): ";
        std::cin >> sort;

        if (sort == 'z') {
            std::sort(filteredSeries.rbegin(), filteredSeries.rend());
        }

        std::cout << "----|  ";
        for (int i : filteredSeries) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        // Ask for another round
        std::cout << "Do you want to run again? (y/n): ";
        std::cin >> choice;
		std::cout << "\n-------------------------------------------------------\n ";
    } while (choice == 'y');

    return 0;
}
