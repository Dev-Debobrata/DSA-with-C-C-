# include <stdio.h>

typedef struct employee {
  char name[20];
  float salary;
} employee;

int main() {
  employee e1, e2;
  FILE *fp;

  fp = fopen("files/employee.txt", "w");
  
  printf("Enter name and salary of first employee: ");
  scanf("%s %f", e1.name, &e1.salary);
  printf("Enter name and salary of second employee: ");
  scanf("%s, %f", e2.name, &e2.salary);

  fprintf(fp, "Name: %s\nSalary: %f\nName: %s\nSalary: %f\n", e1.name, e1.salary, e2.name, e2.salary);

  fclose(fp);
  printf("Done!\n");
  return 0;
}