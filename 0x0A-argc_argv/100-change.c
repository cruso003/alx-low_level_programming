#include <stdio.h>
#include <stdlib.h>
/**
 * create_change - check the amount of change required
 * @amount: input amount
 * coins: coins denomination
 * numCoins: number of coins
 * result: result of sizeof
 * Return: number of coins
 */
int create_change(int amount)
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int result = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < result; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			numCoins++;
		}
	}
	return (numCoins);
}
/**
 * main - prints the minimun number of coins to make a change for any amount
 * @argc: argument count
 * @argv: argument value
 * minCoins: minimun coins needed
 * Return: 1 if error and 0 otherwise
 */
int main(int argc, char *argv[])
{
	int minCoins;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
	}
	else
	{
		minCoins = create_change(amount);
		printf("%d\n", minCoins);
	}
	return (0);
}
