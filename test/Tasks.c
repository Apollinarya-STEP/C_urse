#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
void print_m(int array[], int x)
{
	for (int i = 0; i < x; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");
}

// task 1
void task1()
{
	srand(time(NULL));
	int array1[100] = { 0 };
	int array2[100] = { 0 };
	int a = 1;
	int b = 1;

	while (true)
	{
		int ind = 1;
		int array3[100] = { 0 };
		printf("Enter length for first massive ");
		scanf_s("%d", &a);
		printf("Enter length for second massive ");
		scanf_s("%d", &b);
		for (int i = 0; i < a; i++)
		{
			array1[i] = rand() % 10 + 1;
		}
		for (int i = 0; i < b; i++)
		{
			array2[i] = rand() % 10 + 1;
		}
		for (int i = 0; i < a; i++)
		{
			for (int i1 = 0; i1 < b; i1++)
			{
				//printf("i = %d, i1 = %d\n", i , i1);
				if (array1[i] == array2[i1])
				{
					break;
				}
				if (i1 == b - 1)
				{
					for (int i2 = 0; i2 < ind; i2++)
					{
						if (array1[i] == array3[i2])
						{
							//printf("array1[i] = %d  array3[i2] = %d  i = %d  i2 = %d break \n", array1[i], array3[i2], i, i2);
							break;
						}
						if (i2 == ind - 1)
						{
							//printf("array1[i] = %d  i = %d  i2 = %d\n", array1[i], i, i2);
							array3[i2] = array1[i];
							ind++;
							break;
						}
					}
				}
			}
		}
		print_m(array1, a);
		print_m(array2, b);
		print_m(array3, ind - 1);
	}
}



// task 2

void task2()
{
	
}

// task 3
void task3()
{

}

// Task 4

void task4()
{
	
}

/* Task 5



void task5()
{

}
*/