#include <stdio.h>

typedef struct {
    char * name;
    float math_grade;
    float english_grade;
    float literature_grade;
    float average;
} hocsinh;

float average_class(hocsinh class_speacial[3]);

int main() {
    hocsinh hs1;
    hs1.name = "Le Huy";
    hs1.math_grade = 10.0;
    hs1.english_grade = 9.2;
    hs1.literature_grade = 8.1;
    hs1.average = (hs1.english_grade + hs1.literature_grade + hs1.math_grade) / 3;


    hocsinh hs2;
    hs2.name = "Nguyen Duy";
    hs2.math_grade = 5.2;
    hs2.english_grade = 4.2;
    hs2.literature_grade = 2.9;
    hs2.average = (hs2.english_grade + hs2.literature_grade + hs2.math_grade) / 3;

    hocsinh hs3;
    hs3.name = "Tran Dan";
    hs3.math_grade = 7.2;
    hs3.english_grade = 6.9;
    hs3.literature_grade = 8.1;
    hs3.average = (hs3.english_grade + hs3.literature_grade + hs3.math_grade) / 3;

    
    hocsinh class_speacial[3] = {
        hs1,
        hs2,
        hs3
    };

    for (int i = 0; i < 3; i++)
    {
        hocsinh hs = class_speacial[i];
        printf("My name is %s\n", hs.name);
        printf("Point of subject math = %f, english = %f, literature = %f\n", hs.math_grade, hs.english_grade, hs.literature_grade);
        printf("Average of subject = %f\n", hs.average);
        printf("-----------------\n");
    };


    float results = average_class(class_speacial);
    printf("average of class: %f", results);
    

    return 0;
}

float average_class(hocsinh class_speacial[3]) {
    int i = 0;
    float results_of_class = 0;
    for (i; i < 3; i++) {
        hocsinh hs = class_speacial[i];
        results_of_class = hs.average + results_of_class;
    }
    return results_of_class / i;
}