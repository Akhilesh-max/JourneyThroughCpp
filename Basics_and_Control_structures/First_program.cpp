// This program is Developed to find GCD of smallest and largest number in a given integer Vector. 
 // It will help me learn the basic structures of c++,  Preprocedure directives, header files, namespaces, 
 // scope resolution operator, input stream like cin and output ones like cout, clog, cerr vector and other syntaxtical things.
  

#include <iostream>
#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    std::vector<int> numbers;
    int n, num;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        std::cin >> num;
        numbers.push_back(num);
    }


    int smallest = *min_element(numbers.begin(), numbers.end());
    int largest = *max_element(numbers.begin(), numbers.end());

    std::cout << "GCD of smallest and largest numbers is: " << gcd(smallest, largest) << std::endl;

    return 0;
}
