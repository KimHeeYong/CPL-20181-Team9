#include "stdio.h"
#include "math.h"

int main()
{
	int s=0;
	double v=0;
	double t=0;
	double degree_1=0, degree_2=0;
	double x, y, z;
	int r, g, b;

	FILE *fp1, *fp2;

	fp1 = fopen("output.txt","r");
	fp2 = fopen("3d_value.txt", "w");

	while (!feof(fp1))
	{
		fscanf(fp1,"%lf%d",&degree_1,&s);
		

		if (s < 10) { r = 255, g = 0; }
		else if (s < 20) { r = 255, g = 50; }
		else if (s < 30){r = 255, g = 100;}
		else if(s<40){r = 255, g = 150;}
		else if (s < 50) { r = 255, g = 200; }
		else if (s < 60) { r = 255, g = 255; }
		else if (s < 70){r = 200, g = 255;}
		else if (s < 80){r = 150, g = 255;}
		else if (s < 90){r = 100, g = 200;}
		else if (s < 100) { r = 50, g = 225; }
		else { r = 0, g = 225; }

		//t = s / v;

		x = s * sin(degree_1)*cos(degree_2);
		y = s * sin(degree_1);
		z = s * sin(degree_1)*sin(degree_2);

		fprintf(fp2,"%lf %lf %lf %d %d %d\n",x,y,z,r,g,b);
	}

    return 0;
}

