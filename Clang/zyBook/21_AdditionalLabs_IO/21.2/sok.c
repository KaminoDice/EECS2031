@@ -2,6 +2,14 @@
 
 #include <stdio.h>
 #include <string.h>
+#include <stdlib.h>
+#include <ctype.h>
+
+// via: https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
+void readStringStripNewline(char *destBuf, unsigned int size) {
+	fgets(destBuf, size, stdin);
+	destBuf[strcspn(destBuf, "\r\n")] = 0;
+}
+
 int main(void) {
 	char title[50];
 	char col1[50];
@@ -19,20 +27,13 @@
 	int commaAfterInt = 0;
 
 	printf("Enter a title for the data:\n");
-	fgets (title, 50, stdin);
+	readStringStripNewline(title, sizeof(title));
 	printf("You entered: %s\n", title);
 	printf("Enter the column 1 header:\n");
-	fgets (col1, 50, stdin);
+	readStringStripNewline(col1, sizeof(col1));
 	printf("You entered: %s\n", col1);
-	/* Removing new line character at end */
-	len = strlen(col1);
-	if (len > 0 && col1[len-1] == '\n')
-	{
-		//Placing null character
-		col1[--len] = '\0';
-	}
 	printf("Enter the column 2 header:\n");
-	fgets (col2, 50, stdin);
+	readStringStripNewline(col2, sizeof(col2));
 	printf("You entered: %s\n", col2);
 	while (count < 50) {
 		printf("Enter a data point (-1 to stop input):\n");
@@ -87,19 +88,20 @@
 			printf("Data integer: %d\n", point[count - 1]);
 		}
 	}
-	printf("\n\t\t\tFORMATTED TABLE\n");
-	printf("\n %40s \n", title);
-	printf("\n\t %-20s | %20s \n", col1, col2);
-	printf(" \n -----------------------------------------------------\n");
+	printf("\n");
+	printf("\t\t\tFORMATTED TABLE\n\n");
+	printf(" %40s \n\n", title);
+	printf("\t %-20s | %20s \n", col1, col2);
+	printf("-----------------------------------------------------\n");
 	i = 0;
 	while (i < count) {
-		printf("\n\t %s | %10d \n", names[i], point[i]);
+		printf("\t %20s | %10d \n", names[i], point[i]);
 		i++;
 	}
 	printf("\n\n\n\t\t\tFORMATTED HISTOGRAM\n");
 	i = 0;
 	while (i < count) {
-		printf("\n %s \t", names[i]);
+		printf("%s \t", names[i]);
 		j = 0;
 		while (j < point[i]) {
 			printf("*");