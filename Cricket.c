#include<stdio.h>
int main()
{
	struct batsmen;
	{
	char NameOfBatsmen[100], NameOfBowler[100];
	int runs,wickets,overs,extras;
	float EconomyOfBowler, StrikeRateOfBatsmen;
    };
    struct batsmen batsmen1 bowler bowler1;
	scanf("%s",batsmen1.NameCatsmen);
	scanf("%s",bowler1.NameOfBowler);
	scanf("%d",&batsmen1.runs);
	scanf("%d",&bowler1.wickets);
	scanf("%d",&bowler1.overs);
	scanf("%d",&batsmen1.extras);
	scanf("%f",&bowler1.EconomyOfBowler);
	scanf("%f",&batsmen1.StrikeRateOfBatsmen);
	printf("Name of batsmen:%s\n",batsmen1.NameOfBatsmen);
	printf("Name of bowler:%s\n",bowler1.NameOfBowler);
	printf("Runs:%d\n",batsmen1.runs);
	printf("Wickets:%d\n",bowler1.wickets);
	printf("Overs:%d\n",bowler1.overs);
	printf("Extras:%d\n",batsmen1.extras);
	printf("Economy of bowler:%.1f",bowler1.EconomyOfBowler);
	printf("Strike rate of batsmen:%.1f",batsmen1.StrikeRateOfBatsmen);
	return 0;
}
