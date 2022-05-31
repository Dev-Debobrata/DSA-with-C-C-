# include <stdio.h>

typedef struct account {
  int accountNumber;
  char name[20];
  float balance;
} account;

void displayAccount (account a) {
  printf("Balance of %s with account number %d is %.2f\n", a.name, a.accountNumber, a.balance);
}

int main() {
  account accounts[5];

  for(int i = 0; i < 5; i++) {
    printf("Enter account number, name and balance of account %d: ", i+1);
    scanf("%d %s %f", &accounts[i].accountNumber, accounts[i].name, &accounts[i].balance);
  }

  for(int i = 0; i < 5; i ++) {
    displayAccount(accounts[i]);
  }

  return 0;
}