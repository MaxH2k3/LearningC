#include <stdio.h>

//electric bill
typedef struct 
{
    int month;
    int year;
    float total;
    int pay_status;
} electric_bill;

//4. hoa don gan nhat
electric_bill find_latest_bill(electric_bill bills[10]);

void import_bill(electric_bill bills[10]);

int main() {
    electric_bill bills[10] = {};
    import_bill(bills);

    electric_bill latest_bill = find_latest_bill(bills);
    printf("latest_bill: month = %d, year = %d total = %f, pay_status = %d", latest_bill.month, latest_bill.year, latest_bill.total, latest_bill.pay_status);

    return 0;    
}

void import_bill(electric_bill bills[10]) {
    for (int i = 0; i < 10; i++) {
        electric_bill bill;
        bill.month = i;
        bill.year = 2021;
        bill.total = (i + 1) * 1000000;
        bill.pay_status = i % 2;

        bills[i] = bill;
    }
}

electric_bill find_latest_bill(electric_bill bills[10]) {
    electric_bill latest_bill;
    int max_month = 0;
    int max_year = 0;

    for (int i = 0; i < 10; i++)
    {
        electric_bill bill = bill[i];
        if (bill.month > max_month)
        {
            max_month = bill.month;
            latest_bill = bill;
        }
        
        
    }
    
}
