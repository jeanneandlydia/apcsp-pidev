
#include <stdio.h>
#include <math.h>

int main()
{
int i = 1;
        while (i == 1) {
                char input [256];
                float dish;
                printf("Do you want to make chicken noodle soup (1), chow mein (2), or caesar salad (3)?\n");

                fgets (input, 256, stdin);
                sscanf (input, "%f", &dish);

                if (dish == 1)
                {
		  printf("Chicken noodle soup ingredients:");
                  printf("\n 1 can vegtable broth $3\n 4 cans chicken broth $4\n 1/2 pound cooked chicken $4\n 1 cup sliced carrots $2\n 1 1/2 cup egg noodles $3\n 1/2 cup chopped celery $2");
                  printf("\nTotal price: $18");
                  printf("\nTotal number of items: 6\n");
                }
                if (dish == 2)
                {
		  printf("Chow mein ingredients:");
		  printf("\n 12 ounces chow mein noodles $2\n 1/4 cabbage $2\n 2 tablespoons soy sauce $8\n 4 tablespoons oyster sause $9\n 2 tablespoons canola oil $6");
		  printf("\nTotal price: $27");
		  printf("\nTotal number of ingredients: 5\n");
                }
                if (dish == 3)
                {
		  printf("Caesar salad ingredients:");
		  printf("\n 2 heads romaine lettuce $4\n 1/3 cup canola oil $6\n 2 ounhces parmesan cheese $5\n 1 teaspoon Worcestershire sauce $2\n 1 cup garlic-flavored crutons $2");
		  printf("\nTotal price:$19");
		  printf("\nTotal number of ingredients:5\n");
		}

        }


}
