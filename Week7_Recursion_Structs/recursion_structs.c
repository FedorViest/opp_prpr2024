/*#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void numbers(int n) {
    if(n<=0) {
        return;
    }
    printf("%d\n", n);
    numbers(n - 1);
}

int main() {
    int number = 5;
    numbers(number);
    int result = fibonacci(5);
    printf("%d\n", result);
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float grade;
};


struct Student populate(struct Student student) {
    student.id = 1;
    strcpy(student.name, "Alice");
    student.grade = 3.5;
    return student;
}

int main() {
    struct Student student;
    student = populate(student);
    printf("Student ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Grade: %.2f\n", student.grade);
    return 0;
}*/

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float grade;
};
struct Student populate(int id, const char* name, float grade) {
    struct Student student;
    student.id = id;
    strcpy(student.name, name);
    student.grade = grade;
    return student;
}

int main() {
    struct Student students[3];
    students[0] = populate(1, "Alice", 3.5);
    students[1] = populate(2, "Bob", 3.8);
    students[2] = populate(3, "Charlie", 3.2);
    for (int i = 0; i < 3; i++) {
        printf("Student ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Grade: %.2f\n", students[i].grade);
        printf("\n");
    }
    return 0;
}

