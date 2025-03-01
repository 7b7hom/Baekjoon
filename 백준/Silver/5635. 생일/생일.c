#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int day, month, year;
} Student;

int main() {
    int n;
    scanf("%d", &n);

    Student students[100];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].day, &students[i].month, &students[i].year);
    }

    int youngestIndex = 0, oldestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].year > students[youngestIndex].year || 
            (students[i].year == students[youngestIndex].year && students[i].month > students[youngestIndex].month) || 
            (students[i].year == students[youngestIndex].year && students[i].month == students[youngestIndex].month && students[i].day > students[youngestIndex].day)) {
            youngestIndex = i;
        }
        
        if (students[i].year < students[oldestIndex].year || 
            (students[i].year == students[oldestIndex].year && students[i].month < students[oldestIndex].month) || 
            (students[i].year == students[oldestIndex].year && students[i].month == students[oldestIndex].month && students[i].day < students[oldestIndex].day)) {
            oldestIndex = i;
        }
    }

    printf("%s\n%s", students[youngestIndex].name, students[oldestIndex].name);

    return 0;
}
