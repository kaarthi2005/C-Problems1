#include <stdio.h>

int main()
{
  int fuel;
  scanf("%d", &fuel);

  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int count = 0;
  int i = 0;

  while (i < n && fuel >= arr[i])
  {
    fuel -= arr[i];
    count++;
    i++;
  }

  printf("Completed Trips: %d\n", count);
  printf("Remaining Fuel: %d\n", fuel);

  return 0;
}