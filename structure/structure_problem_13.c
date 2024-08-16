#include<stdio.h>
#include<string.h>
struct player{
    char name[100],country[100];
    int run,wicket,point;
};
int main(){

    // variable and player list and total match

    int a,b,d=0;
    printf("Enter total player list: ");
    scanf("%d",&a);
    printf("Enter total match: ");
    scanf("%d",&b);
    struct player player[a];
    int MOTS[a];
    int j=1;

    // Input player match performance and count it by point

    while(j<=b){
        printf("\nFIND %d MATCH PERROM PLAYER----\n",j);
    for(int i=1;i<=a;i++){
        player[i].point=0;
        printf("Enter your %d player ditails---\n",i);
        printf("%d player name: ",i);
        fflush(stdin);
        gets(player[i].name);
        printf("\n%d player country name: ",i);
        fflush(stdin);
        gets(player[i].country);
        printf("Enter %d player %d match run: ",i,j);
        scanf("%d",&player[i].run);
        if (player[i].run > 75) {
                player[i].point += 20;
                MOTS[i]+=20;
            } else if (player[i].run > 50 && player[i].run<=75) {
                player[i].point += 15;
                MOTS[i]+=15;
            } else if (player[i].run > 25 && player[i].run<=50) {
                player[i].point += 10;
                MOTS[i]+=10;
            } else if (player[i].run >= 0 && player[i].run<=25) {
                player[i].point += 5;
                MOTS[i]+=5;
            }
        printf("Enter %d player %d match wicket: ",i,j);
        scanf("%d",&player[i].wicket);
        if(player[i].wicket>0){
            player[i].point+=12;
            MOTS[i]+=12;
        }
    }

    // output indivitual player point

    for(int k=1;k<=a;k++){
        puts(player[k].name);
        printf("Point : %d\n",player[k].point);
    }

    //check best match performer

    for(int l=1;l<=a;l++){
        for(int m=l+1;m<=a;m++){
            if(player[l].point>player[m].point){
                d=l;
            }
            else if(player[l].point<player[m].point){
                d=m;
            }
        }
    }

    //declear match performer

    printf("%d match MOTM-----",j);
    puts(player[d].name);
    j++;
    }
    d=0;

    // find man of the series performer

    for(int i=1;i<=a;i++){
        for(int j=i+1;j<=a;j++){
            if(MOTS[i]>MOTS[j]){
                d=i;
            }
            else if(MOTS[i]<MOTS[j]){
                d=j;
            }
        }
    }

    //declear man of the series performer
    
    printf("MAN OF THE SERIES IN THIS TOURNAMENT----");
    puts(player[d].name);
    
    return 0;
}