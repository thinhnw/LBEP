#include <stdio.h>
#include <stdlib.h>
int main() {
    int date, month;
    printf("nhap ngay: ");
    scanf("%d", &date);
    printf("nhap thang: ");
    scanf("%d", &month);

    if (month > 12) {
        printf("khong co thang %d\n", month);
        exit(0);
    }
    if (month < 1) {
        printf("khong co thang %d\n", month);
        exit(0);
    }
    if (date < 1) {
        printf("khong co ngay %d", date);
    }

    int count = 0;

    switch(month) {
        case 1:
            if (date <= 31) count += date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 2:
            if (date <= 28) count += 31 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 3:
            if (date <= 31) count += 59 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 4:
            if (date <= 30) count += 90 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 5:
            if (date <= 31) count += 120 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 6:
            if (date <= 30) count += 151 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 7:
            if (date <= 31) count += 181 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 8:
            if (date <= 31) count += 212 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 9:
            if (date <= 30) count += 242 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 10:
            if (date <= 31) count += 273 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        case 11:
            if (date <= 30) count += 304 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
        default:
            if (date <= 31) count += 334 + date;
                else printf("khong co ngay %d/%d", date, month);
            break;
    }

    // Khong co trong flowchart
    // Dieu kien nay co nghia la chung ta co ket qua
    if (count > 0) {
        printf("day la ngay thu %d trong nam\n", count);
        int dayInWeek = count % 7;
        if (dayInWeek == 0) {
            printf("day la chu nhat");
        } else {
            printf("day la thu %d", dayInWeek+1);
        }
    }
    return 0;
}