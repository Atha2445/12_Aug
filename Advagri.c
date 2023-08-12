#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main() {
  // Input
  char cropName[50];
  float landArea;
  char soilType[10];
  float soilPh;

  printf("Enter the crop name: ");
  scanf("%s", cropName);

  printf("Enter the land area in acres: ");
  scanf("%f", &landArea);

  printf("Enter the soil type (color): ");
  scanf("%s", soilType);

  printf("Enter the soil pH: ");
  scanf("%f", &soilPh);

  // Output - Seed Type
  printf("\nSeed Type: ");
  if (soilPh >= 6.5 && soilPh <= 7.5 ) {
    printf("High-quality seeds suitable for neutral soil.\n");
  } else if (soilPh < 6.5) {
    printf("High-quality seeds suitable for acidic soil.\n");
  } else {
    printf("High-quality seeds suitable for alkaline soil.\n");
  }





  // Output - Fertilizers and Pesticides
  printf("\nFertilizers and Pesticides: ");
  printf("Based on the soil test, apply fertilizers containing Nitrogen, Phosphorous, and Potassium in the required ratio. Use pesticides only when necessary and follow the instructions for their safe use.\n");

  // Output - Water Required per Day
  printf("\nWater Required per Day: ");
  printf("The approximate water requirement for %s crop is %f inches per day.\n", cropName, landArea * 0.25);

  // Output - Preventions
  printf("\nPreventions: ");
  printf("Be aware of common pests and diseases that affect the %s crop and take preventive measures such as crop rotation, use of resistant varieties, and timely application of pesticides.\n", cropName);

  // Output - Approximate Budget
  printf("\nApproximate Budget: ");
  printf("Based on the prevailing market prices and labor cost, the approximate budget for cultivating %f acres of %s crop is $%.2f.\n", landArea, cropName, landArea * 1000);

  return 0;
}

