#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& n, int a, double g) : name(n), age(a), gradePointAverage(g) {}

    void showDetails() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getGradePointAverage() const {
        return gradePointAverage;
    }

private:
    std::string name;
    int age;
    double gradePointAverage;
};

int main() {
    Student student("John Doe", 20, 3.9);

    student.showDetails();

    std::cout << "Student Name: " << student.getName() << "\n";
    std::cout << "Student Age: " << student.getAge() << "\n";
    std::cout << "Student Grade point: " << student.getGradePointAverage() << "\n";

    return 0;
}
