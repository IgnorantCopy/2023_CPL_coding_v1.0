//
// Created by Ignorant on 2023/10/8.
//


#include <stdio.h>

int main() {
    int year = 0;
    int isLeapYear = 0;
    scanf("%d", &year);
//    if (year % 4 == 0) {
//        if (year % 100 == 0) {
//            if (year % 400 == 0) {
//                IsLeapYear = 1;
//            } else {
//                IsLeapYear = 0;
//            }
//        } else {
//            IsLeapYear = 1;
//        }
//    } else {
//        IsLeapYear = 0;
//    }
    //上述代码风格属于头重脚轻式(not recommended)

    //Modify next: easier first
//    if (year % 4 != 0) {
//        IsLeapYear = 0;
//    } else {
//        if (year % 100 != 0) {
//            IsLeapYear = 1;
//        } else {
//            if (year % 400 == 0) {
//                IsLeapYear = 1;
//            } else {
//                IsLeapYear = 0;
//            }
//        }
//
//    }

    //then simplify
//    if (year % 4 != 0) {
//        IsLeapYear = 0;
//    } else if (year % 100 != 0) {
//        IsLeapYear = 1;
//    } else if (year % 400 == 0) {
//        IsLeapYear = 1;
//    } else {
//        IsLeapYear = 0;
//    }

    //at last, merge the conditions
    /*
     * logical operator:
     * &&: and
     * ||: or
     * !: not
     */
    /*
     * short-circuit evaluation(短路求值):
     * &&: 一旦有不成立,停止判断
     * ||: 一旦有成立,停止判断
     */
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//        IsLeapYear = 1;
//    }

    isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    if (isLeapYear == 0) {
        printf("%d is a common year", year);
    } else {
        printf("%d is a leap year", year);
    }
    return 0;
}
