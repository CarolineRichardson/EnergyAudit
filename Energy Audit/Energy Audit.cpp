// Assignment - Week 7 Solution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h" 
#include "math.h" 


void main()
{

//Initialising

float euros;
float cost;
float litres;
float kWhr;
float oilLitres;
float kWhrTotal;
float percentage;


		printf("Welcome to the Energy Auditor\n");
		printf("------------------------------------\n\n");

		// Top Down Approach

		printf("Top Down Approach:\n");
		printf("------------------------------------\n\n");


		// Electricity bill in euros to kWhr equivalent

			printf ("Enter average annual electricity bill (euros): ");
			scanf("%f", &euros);
			cost = euros/0.1524;
			printf ("kWhr Equivalent is %.2f\n\n", cost);

		// Heating cost in euros to kerosene equivalent in litres

			printf("Enter average annual heating cost (euros): ");
			scanf("%f", &euros);
			litres = euros/0.88;
			printf ("Litre Equivalent is %.2f\n\n", litres);

		// Kerosene in litres to kWhr equivalent

			printf("Enter average annual litres of heating oil (oilLitres): ");
			scanf("%f", &oilLitres);
			kWhr = oilLitres * 10.18;
			printf ("kWhr Equivalent is %.2f\n\n", kWhr); 

		// 1 litre of kerosene = 10.18 kWhr - got value from Google search - www.graineco.com

		// Calculate kWhr total for electricity and heating oil

				kWhrTotal = cost + kWhr;
				printf ("kWhr total is %.2f\n\n", kWhrTotal);


		// Compare with average 23,000kWhr

		percentage = ((kWhrTotal/23000)*100);
		printf ("Percentage is %.2f of 23,000\n", percentage);

		printf("------------------------------------\n\n\n"); 



// Bottom Up Approach
 
printf("Bottom Up Approach:\n");
printf("------------------------------------\n");

// Initialising

	int rooms;
	float lightWattage;
	float lightUsage;
	float lightkWhrs;
	float sumkWhrs_lights;

	// Calculate light kWhrs

		printf("Enter number of rooms: ");
		scanf("%d", &rooms);
	
			printf("Enter average wattage of lights (kilowatts): ");
			scanf("%f", &lightWattage);

			printf("Enter average hours used per day: ");
			scanf("%f", &lightUsage);
			
			lightkWhrs = lightWattage*lightUsage;

			sumkWhrs_lights = ((lightkWhrs*rooms)*365.00);


// Calculate tv kWhrs

int tvs;
float tvWattage;
float tvUsage;
float tvkWhrs;
float sumkWhrs_tv;

	printf("Enter number of tvs: ");
	scanf("%d", &tvs);

	printf("Enter wattage of tv (kilowatts): ");
	scanf("%f", &tvWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &tvUsage);

	tvkWhrs = tvWattage*tvUsage;

	sumkWhrs_tv = ((tvkWhrs*tvs)*365.00); 


// Calculate computer kWhrs

int computers;
float computerWattage;
float computerUsage;
float computerkWhrs;
float sumkWhrs_computer;

	printf("Enter number of computers: ");
	scanf("%d", &computers);

	printf("Enter wattage of computers (kilowatts): ");
	scanf("%f", &computerWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &computerUsage);

	computerkWhrs = computerWattage*computerUsage;

	sumkWhrs_computer = ((computerkWhrs*computers)*365.00); 


// Calculate shower kWhrs

float showerWattage;
float showerUsage;
float sumkWhrs_shower;

	printf("Enter wattage of shower (kilowatts): ");
	scanf("%f", &showerWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &showerUsage);

	sumkWhrs_shower = ((showerWattage*showerUsage)*365.00); 


// Calculate washing maching kWhrs

float washingMachineWattage;
float washingMachineUsage;
float sumkWhrs_washingMachine;

	printf("Enter wattage of washing machine (kilowatts): ");
	scanf("%f", &washingMachineWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &washingMachineUsage);

	sumkWhrs_washingMachine = ((washingMachineWattage*washingMachineUsage)*365.00); 


// Calculate tumble dryer kWhrs

float tumbleDryerWattage;
float tumbleDryerUsage;
float sumkWhrs_tumbleDryer;

	printf("Enter wattage of tumble dryer (kilowatts): ");
	scanf("%f", &tumbleDryerWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &tumbleDryerUsage);

	sumkWhrs_tumbleDryer = ((tumbleDryerWattage*tumbleDryerUsage)*365.00); 


// Calculate small electric oven kWhrs

float cookerWattage;
float cookerUsage;
float sumkWhrs_cooker;

	printf("Enter wattage of cooker (kilowatts): ");
	scanf("%f", &cookerWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &cookerUsage);

	sumkWhrs_cooker = ((cookerWattage*cookerUsage)*365.00); 


// Calculate kettle kWhrs

float kettleWattage;
float kettleUsage;
float sumkWhrs_kettle;

	printf("Enter wattage of kettle (kilowatts): ");
	scanf("%f", &kettleWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &kettleUsage);

	sumkWhrs_kettle = ((kettleWattage*kettleUsage)*365.00); 


// Calculate small chest freezer kWhrs

float freezerWattage;
float freezerUsage;
float sumkWhrs_freezer;

	printf("Enter wattage of freezer (kilowatts): ");
	scanf("%f", &freezerWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &freezerUsage);

	sumkWhrs_freezer = ((freezerWattage*freezerUsage)*365.00); 


// Calculate fridge freezer kWhrs

float fridgeFreezerWattage;
float fridgeFreezerUsage;
float sumkWhrs_fridgeFreezer;

	printf("Enter wattage of fridge freezer (kilowatts): ");
	scanf("%f", &fridgeFreezerWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &fridgeFreezerUsage);

	sumkWhrs_fridgeFreezer = ((fridgeFreezerWattage*fridgeFreezerUsage)*365.00); 


// Calculate vacuum cleaner kWhrs

float vacuumCleanerWattage;
float vacuumCleanerUsage;
float sumkWhrs_vacuumCleaner;

	printf("Enter wattage of vacuumCleaner (kilowatts): ");
	scanf("%f", &vacuumCleanerWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &vacuumCleanerUsage);

	sumkWhrs_vacuumCleaner = ((vacuumCleanerWattage*vacuumCleanerUsage)*365.00); 


// Calculate microwave kWhrs

float microwaveWattage;
float microwaveUsage;
float sumkWhrs_microwave;

	printf("Enter wattage of microwave (kilowatts): ");
	scanf("%f", &microwaveWattage);

	printf("Enter average hours of use per day: ");
	scanf("%f", &microwaveUsage);

	printf("\n");

	sumkWhrs_microwave = ((microwaveWattage*microwaveUsage)*365.00);
	

// Calculate total kWhrs for entire house

float totalkWhrs_house;

		totalkWhrs_house = sumkWhrs_shower + sumkWhrs_washingMachine + sumkWhrs_tumbleDryer + sumkWhrs_cooker + sumkWhrs_kettle + 
		sumkWhrs_freezer + sumkWhrs_fridgeFreezer + sumkWhrs_vacuumCleaner + sumkWhrs_microwave + sumkWhrs_lights +
		sumkWhrs_tv + sumkWhrs_computer;

		printf("Total kWhrs per year is %.2f\n\n", totalkWhrs_house); 


// Calculate percentage of electrical kWhrs accounted for 

float percentageAccountedFor;

		percentageAccountedFor = ((totalkWhrs_house/cost)*100);

		printf ("Percentage accounted for is %.2f\n", percentageAccountedFor); 
		

		
}

