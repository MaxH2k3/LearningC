#include <stdio.h>

struct hocsinh {
    char * name;
    float math_grade;
    float english_grade;
    float literature_grade;
};

int main() {
    struct hocsinh hs1;
    hs1.name = "Le Huy";
    hs1.math_grade = 10.0;
    hs1.english_grade = 9.2;
    hs1.literature_grade = 8.1;


    struct hocsinh hs2;
    hs2.name = "Nguyen Duy";
    hs2.math_grade = 5.2;
    hs2.english_grade = 4.2;
    hs2.literature_grade = 2.9;


    struct hocsinh hs3;
    hs3.name = "Tran Dan";
    hs3.math_grade = 7.2;
    hs3.english_grade = 6.9;
    hs3.literature_grade = 8.1;

    
    struct hocsinh class_speacial[3] = {
        hs1,
        hs2,
        hs3
    };

    for (int i = 0; i < 3; i++)
    {
        struct hocsinh hs = class_speacial[i];
        printf("My name is %s\n. Point of subject math = %f, english = %f, literature = %f\n", hs.name, hs.math_grade, hs.english_grade, hs.literature_grade);
    }
    

    return 0;
}