#include <stdio.h>
#include <math.h>
#include <string.h>

struct GroceryList {
	char ingredient[200];
	float price;
};

void printList(struct GroceryList* item)
{
	printf("item: %s\nprice: $%0.2f\n", item->ingredient, item->price);
}

int main()
{
	int numtime, totaltime, actualtime;
	totaltime = 0;
	actualtime = 0;
	/*total time is the number of legitimate items entered into the list, whereas actual time is total number of items entered ever, including those that were removed*/
	struct GroceryList item[50];
	char input[200], ingredient[200], response[200], removeitem[200];
	char add[] = "add";
	char clear[] = "clear";
	char stop[] = "stop";
	char removed[] = "removed";
	float price, totalprice;
	FILE *fp;
	printf("Enter add, remove, or clear to perform the following actions to items on your list. If you are satisfied with your list, enter stop.\n");
	fgets(input, 200, stdin);
	sscanf(input, "%s", response);
	while (strcmp(response, stop)!= 0)
	{
		if (strcmp(response, add) == 0)
		{
			printf("How many items do you want to enter?\n");
			fgets(input, 200, stdin);
			sscanf(input, "%d", &numtime);
			for (int i = 0; i < numtime; i++)
			{
				printf("Enter the item: \n");
				fgets(input, 200, stdin);
				sscanf (input, "%s", ingredient);

				printf("Enter the price of the item: \n");
				fgets(input, 200, stdin);
				sscanf(input, "%f", &price);

				actualtime = actualtime + 1; 

				item[actualtime].price = price;
				totalprice = totalprice + price;
				strcpy(item[actualtime].ingredient, ingredient);
			}

			totaltime = totaltime + numtime;

			printf("Here is your grocery list.\n");
			for (int i = 1; i < (actualtime + 1); i++)
			{
				if (strcmp(item[i].ingredient, removed)!= 0)
				{
					printList(&item[i]);
				}
			}
			printf("total number of items: %d\n", totaltime);
			printf("total cost of items: $%0.2f\n", totalprice);
		}

		else if (strcmp(response, clear) == 0)
		{
			for (int i = 1; i < (actualtime + 1); i++)
                        {
                                totalprice = totalprice - item[i].price;
                                strcpy(item[i].ingredient, removed);
                                item[i].price = 0;
                                totaltime = totaltime - 1;
                        }
			totaltime = 0;
			actualtime = 0;
			printf("The entire grocery list has been cleared.\n");
		}
		else
		{
			printf("Enter the name of the item you want to remove exactly as you entered it.\n");
			fgets(input, 200, stdin);
			sscanf(input, "%s", removeitem);
			for (int i = 1; i < (actualtime + 1); i++)
			{
				if (strcmp(item[i].ingredient, removeitem) == 0)
				{	totalprice = totalprice - item[i].price;
					strcpy(item[i].ingredient, removed);
					item[i].price = 0;
					totaltime = totaltime - 1;
				}
			}
			printf("Here is your grocery list.\n");
                        for (int i = 1; i < (actualtime + 1); i++)
                        {
                                if (strcmp(item[i].ingredient, removed)!= 0)
                                {
                                        printList(&item[i]);
                                }
                        }
			printf("total number of items: %d\n", totaltime);
			printf("total cost of items: $%0.2f\n", totalprice);
		}
		printf("Enter add, remove, or clear to perform the following actions to items on your list. If you are satisfied with your list, enter stop.\n");
        	fgets(input, 200, stdin);
        	sscanf(input, "%s", response);
	}
	for (int i = 1; i < (actualtime + 1); i++)
		{
			if (strcmp(item[i].ingredient, removed) != 0)
	                {
	                	printList(&item[i]);
	                }
	         }
	printf("total number of items: %d\n", totaltime);
	printf("total cost of items: $%0.2f\n", totalprice);

	fp = fopen ("/home/student1/website/student1/resultlist.txt", "w");
	if (fp)
	{
		for (int i = 1; i < (actualtime + 1); i++)
		{
			if(strcmp(item[i].ingredient, removed) != 0)
			{
				fprintf(fp, "item: %s\n", item[i].ingredient);
				fprintf(fp, "price: $%0.2f\n", item[i].price);
			}
		}

	fprintf(fp, "total number of items: %d\n", totaltime);
	fprintf(fp, "total price: $%0.2f\n", totalprice);

	fclose(fp);
	}
}

