#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX 10

struct Medicine {
    char name[50];
    int hour;
    int minute;
};

struct Medicine meds[MAX];
int count = 0;

// Function to add medicine
void addMedicine() {
    if (count >= MAX) {
        printf("Medicine list is full!\n");
        return;
    }

    printf("Enter medicine name: ");
    scanf(" %[^\n]", meds[count].name);

    printf("Enter time (HH MM in 24-hour format): ");
    scanf("%d %d", &meds[count].hour, &meds[count].minute);

    count++;
    printf("Medicine added successfully!\n\n");
}

// Function to view all medicines
void viewMedicines() {
    if (count == 0) {
        printf("No medicines scheduled.\n\n");
        return;
    }

    printf("\nMedicine Schedule:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s at %02d:%02d\n", i + 1,
               meds[i].name,
               meds[i].hour,
               meds[i].minute);
    }
    printf("\n");
}

// Function to check reminders
void checkReminder() {
    time_t t;
    struct tm *current;

    time(&t);
    current = localtime(&t);

    int currHour = current->tm_hour;
    int currMin = current->tm_min;

    int found = 0;

    for (int i = 0; i < count; i++) {
        if (meds[i].hour == currHour && meds[i].minute == currMin) {
            printf("\n⏰ Time to take: %s\n", meds[i].name);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo medicine at this time.\n");
    }
    printf("\n");
}

// Main menu
int main() {
    int choice;

    while (1) {
        printf("=== Medicine Reminder System ===\n");
        printf("1. Add Medicine\n");
        printf("2. View Medicines\n");
        printf("3. Check Reminder\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMedicine();
                break;
            case 2:
                viewMedicines();
                break;
            case 3:
                checkReminder();
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n\n");
        }
    }
}