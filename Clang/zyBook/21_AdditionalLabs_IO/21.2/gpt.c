#include <stdio.h>
#include <string.h>

void prompt_user_for_title(char title[]) {
    printf("Enter a title for the data:\n");
    fgets(title, 100, stdin);
    title[strcspn(title, "\n")] = '\0'; // Remove the newline character from the input
    printf("You entered: %s\n", title);
    printf("\n");
}

void prompt_user_for_column_headers(char header1[], char header2[]) {
    printf("Enter the column 1 header:\n");
    fgets(header1, 100, stdin);
    header1[strcspn(header1, "\n")] = '\0';

    printf("You entered: %s\n", header1);
    printf("\n");

    printf("Enter the column 2 header:\n");
    fgets(header2, 100, stdin);
    header2[strcspn(header2, "\n")] = '\0';

    printf("You entered: %s\n", header2);
    printf("\n");
}

int prompt_user_for_data_points(char data_strings[][100], int data_integers[]) {
    int i = 0;
    while (1) {
        printf("Enter a data point (-1 to stop input):\n");
        char data_point[100];
        fgets(data_point, 100, stdin);
        data_point[strcspn(data_point, "\n")] = '\0';

        if (strcmp(data_point, "-1") == 0) {
            break;
        }

        char* comma_ptr = strchr(data_point, ',');
        if (!comma_ptr) {
            printf("Error: No comma in string.\n");
        } else if (strchr(comma_ptr + 1, ',')) {
            printf("Error: Too many commas in input.\n");
        } else {
            *comma_ptr = '\0'; // Split the string at the comma

            char* data_string = data_point;
            char* data_integer_str = comma_ptr + 1;
            int data_integer;
            if (sscanf(data_integer_str, "%d", &data_integer) != 1) {
                printf("Error: Comma not followed by an integer.\n");
            } else {
                printf("Data string: %s\n", data_string);
                printf("Data integer: %d\n", data_integer);
                strcpy(data_strings[i], data_string);
                data_integers[i] = data_integer;
                i++;
            }
        }
        printf("\n");
    }
    return i;
}

void print_table(const char title[], const char header1[], const char header2[], 
                 const char data_strings[][100], const int data_integers[], int size) {
    printf("\n%33s\n", title);
    printf("%-20s|%23s\n", header1, header2);
    printf("--------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%-20s|%23d\n", data_strings[i], data_integers[i]);
    }
    printf("\n");
}

void print_histogram(const char data_strings[][100], const int data_integers[], int size) {
    int max_width = 0;
    for (int i = 0; i < size; i++) {
        int current_width = strlen(data_strings[i]);
        if (current_width > max_width) {
            max_width = current_width;
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%20s ", data_strings[i]);
        for (int j = 0; j < data_integers[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
   
   /* Type your code here. */
    char title[100];
    char header1[100];
    char header2[100];
    char data_strings[100][100];
    int data_integers[100];
    int size = 0;

    prompt_user_for_title(title);
    prompt_user_for_column_headers(header1, header2);
    size = prompt_user_for_data_points(data_strings, data_integers);

    print_table(title, header1, header2, data_strings, data_integers, size);
    print_histogram(data_strings, data_integers, size);

    return 0;
}
