/** This program is a simple experiment to illustrate the use of a recommendation system. We will recommend a student
 ** the "Hardware" or "Software" track based on how well he scored in his past modules, how much he enjoyed studying for
 ** them, as well as how well his peers enjoyed studying for them as well
 **/

#include <stdio.h>
#include <math.h>

int main (void) {

	double cg1001_gpa, cg1001_rank, cg1001_mean = 4.10, cg1001_score;
	double cg1108_gpa, cg1108_rank, cg1108_mean = 3.92, cg1108_score;
	double cg2271_gpa, cg2271_rank, cg2271_mean = 3.10, cg2271_score;
	double cg2023_gpa, cg2023_rank, cg2023_mean = 3.42, cg2023_score;
	double cs1010_gpa, cs1010_rank, cs1010_mean = 4.22, cs1010_score;
	double cs1020_gpa, cs1020_rank, cs1020_mean = 4.11, cs1020_score;
	double cs1231_gpa, cs1231_rank, cs1231_mean = 2.45, cs1231_score;
	double cs2103t_gpa, cs2103t_rank, cs2103t_mean = 3.26, cs2103t_score;
	double hardware_score, software_score;

	printf("\nWelcome to NUS Computer Engineering track recommendation!\n\n");
	printf("Below is a list of core modules you have taken so far, divided into hardware and software.\n");
	printf("Hardware:                          Software:\n");
	printf("CG1001				   CS1010\n");
	printf("CG1108				   CS1020\n");
	printf("CG2271			           CS1231\n");
	printf("CG2023			           CS2103T\n\n");

	printf("Below is a table showing the average 'enjoyment level' of each\n"); 
	printf("module, taken from a survey of previous NUS Computer Engineering students for the past 10 years.\n");
	printf("The data that we have collected below will also have a part to play in suggesting a track for you to specialise in.\n");
	printf("CG1001: 4.10			   CS1010: 4.22\n");
	printf("CG1108: 3.92                       CS1020: 4.11\n");
	printf("CG2271: 3.10                       CS1231: 2.45\n");
	printf("CG2023: 3.42 			   CS2104T: 3.26\n\n");

	printf("Please enter your GPA for each module (1.0 to 5.0), followed by a rank of 1.0 - 5.0 on how well you liked the module (individual 'enjoyment level')\n");
	printf("with 1 being the least and 5 the most.\n\n");
	printf("For example, CG1001: 3.7 4.2\n\n");

	printf("CG1001: ");
	scanf("%lf %lf", &cg1001_gpa, &cg1001_rank);
	cg1001_score = (cg1001_gpa * cg1001_rank * cg1001_mean) /3;

	printf("CG1108: ");
	scanf("%lf %lf", &cg1108_gpa, &cg1108_rank); 
	cg1108_score = (cg1108_gpa * cg1108_rank * cg1108_mean) /3;

	printf("CG2271: ");
	scanf("%lf %lf", &cg2271_gpa, &cg2271_rank);
	cg2271_score = (cg2271_gpa * cg2271_rank * cg2271_mean) /3;

	printf("CG2023: ");
	scanf("%lf %lf", &cg2023_gpa, &cg2023_rank);
	cg2023_score = (cg2023_gpa * cg2023_rank * cg2023_mean) /3;

	printf("CS1010: ");
	scanf("%lf %lf", &cs1010_gpa, &cs1010_rank);
	cs1010_score = (cs1010_gpa * cs1010_rank * cs1010_mean) /3;


	printf("CS1020: ");
	scanf("%lf %lf", &cs1020_gpa, &cs1020_rank);
	cs1020_score = (cs1020_gpa * cs1020_rank * cs1020_mean) /3;


	printf("CS1231: ");
	scanf("%lf %lf", &cs1231_gpa, &cs1231_rank);
	cs1231_score = (cs1231_gpa * cs1231_rank * cs1231_mean) /3;

	printf("CS2103T: ");
	scanf("%lf %lf", &cs2103t_gpa, &cs2103t_rank);
	cs2103t_score = (cs2103t_gpa * cs2103t_rank * cs2103t_mean) /3;

	hardware_score = cg1001_score + cg1108_score + cg2271_score + cg2023_score;

	software_score = cs1010_score + cs1020_score + cs1231_score + cs2103t_score;

	if (hardware_score > software_score){
		printf("\n It seems that overall, you prefer Hardware-related modules, as did your peers. We recommended you to explore and specialise in the Hardware track!\n");
	}else if (hardware_score < software_score){
		printf("\n It seems that overall, you prefer Software-related modues, as did your peers. We recommend you to explore and specialise in the Software track!\n");
	}else{
		printf("\n It seems that both Hardware-related and Software-related modules are just as preferred! Maybe consider exploring and specialising in both!\n");
	}

} 
