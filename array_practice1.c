#include <stdio.h>

//count number in array
void print_count_freq(int number[16]);

//find girl in class
int have_menber_by_gender(int class_members[12], int gender);

int main() {
    /* //count number
    int number[16] = {1, 2, 4, 12, 89, 1, 2, 12, 12, 9, 4, 2, 4, 12, 3, 3};
    print_count_freq(number);
    */

   /* // check gender in class
    int class_member[12] = {1, 0, 1, 1, 1, 0, 0, 0, 1, 1};
    
    int is_have_girl = have_menber_by_gender(class_member, 0);
    int is_have_boy = have_menber_by_gender(class_member, 1);

    printf("is have girl = %d\nis_have_boy = %d\n", is_have_girl, is_have_boy);
    */

    return 0;
}

void print_count_freq(int number[16]) {

    for (int i = 0; i < 16; i++) {
        int num = number[i];
        int count = 0;

        for (int i = 0; i < 16; i++) {
            if (num == number[i]) {
                count++;
            }
    }
        printf("Freg of %d = %d\n", num, count);
    }
}


int have_menber_by_gender(int class_members[12], int gender) {
    int result = 0;

    for (int i = 0; i < 12; i++) {
        if (gender == class_members[i]) {
            result = 1;
            break;
        }
    }
    return result;
}





