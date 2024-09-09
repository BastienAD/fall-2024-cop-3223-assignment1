#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159

/*Bastien Denham
5563725*/

//Prototype
	int proto(void);
		double calculateDistance();
		double calculatePerimeter();
		double calculateArea();
		double calculateWidth();
		double calculateHeight();
		double askForUserInput();

int main(int argc, char **argv)
{
	
	calculateDistance();
	calculatePerimeter();
	calculateArea();
	calculateWidth();
	calculateHeight();

	/*printf("Enter coordinate X1:\n");
    	scanf("%lf", &x1);
    printf("Enter coordinate Y1:\n");
    	scanf("%lf", &y1);
    printf("Enter coordinate X2:\n");
    	scanf("%lf", &x2);
    printf("Enter coordinate Y2:\n");
    	scanf("%lf", &y2);*/
	//relocate

	return 0;
}


		double askForUserInput()
		{
			double value;
			scanf("%lf", &value);
			return value;
		}

	
//Calc Distance
		double calculateDistance()
		{

			double x1, y1, x2, y2;

				printf("Enter coordinate X1:\n");
					x1 = askForUserInput();
				printf("Enter coordinate X2:\n");
					x2 = askForUserInput();
				printf("Enter coordinate Y1:\n");
					y1 = askForUserInput();
				printf("Enter coordinate Y2:\n");
					y2 = askForUserInput();
				
			printf("Point #1 entered: x1= %.2lf; y1= %.2lf\n", x1, y1);
					
			printf("Point #2 entered: x2= %.2lf; y2= %.2lf\n", x2, y2);
					
				double distance = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

			printf("The distance between the two points is %.2lf\n", distance);
			//distance returns 1.4142...
			return 5;
		}

//HELPER FOR DISTANCE
		double getDistance()
		{

			double x1, y1, x2, y2;

				printf("Enter coordinate X1:\n");
					x1 = askForUserInput();
				printf("Enter coordinate X2:\n");
					x2 = askForUserInput();
				printf("Enter coordinate Y1:\n");
					y1 = askForUserInput();
				printf("Enter coordinate Y2:\n");
					y2 = askForUserInput();

				
			double distance = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			//     distance = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			printf("Point #1 entered: x1= %.2lf; y1= %.2lf\n", x1, y1);
				
			printf("Point #2 entered: x2= %.2lf; y2= %.2lf\n", x2, y2);
			return distance;
		}

//Calc Perimeter
		double calculatePerimeter()
		{
			double x1, y1, x2, y2;
			double distance = getDistance();
			double radius = distance / 2.0;
					//why must getDistance torture me
			double perimeter = (2 * PI * radius);
					

				printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
			return 4;
		}



//Calc Area
		double calculateArea()
		{
			double x1, y1, x2, y2;
			double distance = getDistance();
			double radius = distance / 2.0;
			double area = PI * radius * radius;
			
			printf("The area of the city encompassed by your request is %.2lf\n", area);
			return 4;
		}

//Calc Width
		double calculateWidth()
		{
			double x1, y1, x2, y2;
			double distance = getDistance();
			double width = distance;

			printf("The width of the city encompassed by your request is %.2lf\n", width);
			return 4;
		}

//Calc Height
		double calculateHeight()
		{
			double x1, y1, x2, y2;
			double distance = getDistance();
			double height = distance;

			printf("The height of the city encompassed by your request is %.2lf\n", height);
			return 4;
		}
