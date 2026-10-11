#include <stdio.h>
int main() {
int a[5];
float b[5];
char c[5];
int i;
// Input integer array
printf("Enter 2 integer elements: ");
for (i = 0; i < 2; i++) {
scanf("%d", &a[i]);
}
// Input float array
printf("Enter 2 float elements: ");
for (i = 0; i < 2; i++) {
scanf("%f", &b[i]);
}
// Input character array
printf("Enter 2 characters: ");
for (i = 0; i < 2; i++) {
scanf(" %c", &c[i]);
}
// Display integer array values and addresses
printf("\nInteger Array:\n");
for (i = 0; i < 2; i++) {
printf("Value = %d\tAddress = %p\n", a[i], (void*)&a[i]);
}
// Display float array values and addresses
printf("\nFloat Array:\n");
for (i = 0; i < 2; i++) {
printf("Value = %.2f\tAddress = %p\n", b[i], (void*)&b[i]);
}
// Display character array values and addresses
printf("\nCharacter Array:\n");
for (i = 0; i < 2; i++) {
printf("Value = %c\tAddress = %p\n", c[i], (void*)&c[i]);
}
return 0;
}
