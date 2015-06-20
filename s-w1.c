#include<stdio.h>


int main (void){


char luke, pos, vador, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, debut, fin;
int vie, tour, tourv, x, y, xv, yv, score, bonus;

for(fin=1;fin==1;fin>=0){

x=6;
y=4;
xv=1;
yv=6;
luke='0';
vador='X';
tour=1;
tourv=1;
vie=1;

//sommaire avec description
printf("_________________________________\n");
printf("|           _________           |\n");
printf("|          |         |          |\n");
printf("|          |  -S-W-  |          |\n");
printf("|          |_________|          |\n");
printf("|_______________________________|\n\n\n");
printf("Appuyer sur 'q' pour aller a gauche.\n       -sur 'z' pour aller en haut.\n       -sur 's' pour aller en bas.\n       -sur 'd' pour aller a droite.\n");
printf("\nDark Vador     -> 'X'\nLuke Skywalker -> '0'\nLes Plans de l'Etoile Noire  -> ']'\n\n");
printf("Il vous faut recuperer les plans de l'Etoile Noire, jeune Jedi.\nMais attention, Dark Vador vous recherche, si vous le croisez, ce sera la fin   des espoirs des Rebelles et l'Empire triomphera.\n");
printf("\nAppuyer sur une touche pour commencer,\net que la Force soit avec toi !\n");
debut=getchar();
if(debut=='a'){}
else{}



//debut de la boucle du jeu
do{

//si c est le premier tour alors les positions sont les suivantes
if(tour==1)
{c4=luke;
c21=vador;
bonus=0;
c1=c2=c3=c5=c6=c7=c8=c9=c10=c11=c12=c13=c14=c15=c16=c17=c18=c19=c20=' ';}



//affichage de la grille de jeu

{printf("Votre score est de :%d\n\n",tour);
printf("\n\n\n");
printf("_____________\n");
printf("| | | | | | |\n");
printf("|%c|%c|%c|%c|%c|%c|\n",c1,c2,c3,c4,c5,c6);
printf("|_|_|_|_|_|_|\n");
printf("|/////|_|///|\n");
printf("|/////|%c|///|\n",c7);
printf("|/////|_|///|\n");
printf("|/////|_|///|\n");
printf("|/////|%c|///|\n",c8);
printf("|/////|_|///|\n");
printf("|_|_|_|_|_|_|\n");
printf("|%c|%c|%c|%c|%c|%c|\n",c9,c10,c11,c12,c13,c14);
printf("|_|_|_|_|_|_|\n");
printf("|///|_|/////|\n");
printf("|///|%c|/////|\n",c15);
printf("|///|_|/////|\n");
printf("|_|_|_|_|_|_|\n");
printf("|%c|%c|%c|%c|%c|%c]\n",c16,c17,c18,c19,c20,c21);
printf("|_|_|_|_|_|_|\n");}

pos=getchar();

c1=c2=c3=c4=c5=c6=c7=c8=c9=c10=c11=c12=c13=c14=c15=c16=c17=c18=c19=c20=c21=' ';

//determiner la boucle du tour de DarkVador
tourv++;
{
if(tourv==41)
tourv=1;


//determiner la position de DarkVador en fonction de son tour
if(tourv==1)
c21=vador;
if(tourv==2)
c20=vador;
if(tourv==3)
c19=vador;
if(tourv==4)
c18=vador;
if(tourv==5)
c15=vador;
if(tourv==6)
c11=vador;
if(tourv==7)
c12=vador;
if(tourv==8)
c8=vador;
if(tourv==9)
c7=vador;
if(tourv==10)
c4=vador;
if(tourv==11)
c3=vador;
if(tourv==12)
c2=vador;
if(tourv==13)
c1=vador;
if(tourv==14)
c2=vador;
if(tourv==15)
c3=vador;
if(tourv==16)
c4=vador;
if(tourv==17)
c5=vador;
if(tourv==18)
c6=vador;
if(tourv==19)
c5=vador;
if(tourv==20)
c4=vador;
if(tourv==21)
c7=vador;
if(tourv==22)
c8=vador;
if(tourv==23)
c12=vador;
if(tourv==24)
c13=vador;
if(tourv==25)
c14=vador;
if(tourv==26)
c13=vador;
if(tourv==27)
c12=vador;
if(tourv==28)
c11=vador;
if(tourv==29)
c10=vador;
if(tourv==30)
c9=vador;
if(tourv==31)
c10=vador;
if(tourv==32)
c11=vador;
if(tourv==33)
c15=vador;
if(tourv==34)
c18=vador;
if(tourv==35)
c17=vador;
if(tourv==36)
c16=vador;
if(tourv==37)
c17=vador;
if(tourv==38)
c18=vador;
if(tourv==39)
c19=vador;
if(tourv==40)
c20=vador;

}


//modification de x et de y en fonction de la lettre saisi par le joueur
if(pos=='q')
y--;

if(pos=='d')
y++;

if(pos=='z')
x++;

if(pos=='s')
x--;






//place et eventuellement mort de LukeS pour chaque configuration de x et de y

if(x==7&&y==0){
vie--;
break;}
if(x==7&&y==1){
vie--;
break;}
if(x==7&&y==2){
vie--;
break;}
if(x==7&&y==3){
vie--;
break;}
if(x==7&&y==4){
vie--;
break;}
if(x==7&&y==5){
vie--;
break;}
if(x==7&&y==6){
vie--;
break;}
if(x==7&&y==7){
vie--;
break;}

if(x==6&&y==0){
vie--;
break;}
if(x==6&&y==1)
c1='O';
if(x==6&&y==2)
c2='O';
if(x==6&&y==3)
c3='O';
if(x==6&&y==4)
c4='O';
if(x==6&&y==5)
c5='O';
if(x==6&&y==6)
c6='O';
if(x==6&&y==7){
vie--;
break;}

if(x==5&&y==0){
vie--;
break;}
if(x==5&&y==1){
vie--;
break;}
if(x==5&&y==2){
vie--;
break;}
if(x==5&&y==3){
vie--;
break;}
if(x==5&&y==4)
c7='O';
if(x==5&&y==5){
vie--;
break;}
if(x==5&&y==6){
vie--;
break;}
if(x==5&&y==7){
vie--;
break;}

if(x==4&&y==0){
vie--;
break;}
if(x==4&&y==1){
vie--;
break;}
if(x==4&&y==2){
vie--;
break;}
if(x==4&&y==3){
vie--;
break;}
if(x==4&&y==4)
c8='O';
if(x==4&&y==5){
vie--;
break;}
if(x==4&&y==6){
vie--;
break;}
if(x==4&&y==7){
vie--;
break;}

if(x==3&&y==0){
vie--;
break;}
if(x==3&&y==1)
c9='O';
if(x==3&&y==2)
c10='O';
if(x==3&&y==3)
c11='O';
if(x==3&&y==4)
c12='O';
if(x==3&&y==5)
c13='O';
if(x==3&&y==6)
c14='O';
if(x==3&&y==7){
vie--;
break;}


if(x==2&&y==0){
vie--;
break;}
if(x==2&&y==1){
vie--;
break;}
if(x==2&&y==2){
vie--;
break;}
if(x==2&&y==3)
c15='0';
if(x==2&&y==4){
vie--;
break;}
if(x==2&&y==5){
vie--;
break;}
if(x==2&&y==6){
vie--;
break;}
if(x==2&&y==7){
vie--;
break;}

if(x==1&&y==0){
vie--;
break;}
if(x==1&&y==1)
c16='O';
if(x==1&&y==2)
c17='O';
if(x==1&&y==3)
c18='O';
if(x==1&&y==4)
c19='O';
if(x==1&&y==5)
c20='O';
if(x==1&&y==6)
c21='0';
if(x==1&&y==7){
bonus=50;
vie--;
break;}

if(x==0&&y==0){
vie--;
break;}
if(x==0&&y==1){
vie--;
break;}
if(x==0&&y==2){
vie--;
break;}
if(x==0&&y==3){
vie--;
break;}
if(x==0&&y==4){
vie--;
break;}
if(x==0&&y==5){
vie--;
break;}
if(x==0&&y==6){
vie--;
break;}
if(x==0&&y==7){
vie--;
break;}



//conscience des colisions
//evaluation de la mort ou non de LukeS si la case est deja occupee par DarkV

if(tourv==1&&c21=='O'){
vie--;
break;}
if(tourv==2&&c20=='O'){
vie--;
break;}
if(tourv==3&&c19=='O'){
vie--;
break;}
if(tourv==4&&c18=='O'){
vie--;
break;}
if(tourv==5&&c15=='O'){
vie--;
break;}
if(tourv==6&&c11=='O'){
vie--;
break;}
if(tourv==7&&c12=='O'){
vie--;
break;}
if(tourv==8&&c8=='O'){
vie--;
break;}
if(tourv==9&&c7=='O'){
vie--;
break;}
if(tourv==10&&c4=='O'){
vie--;
break;}
if(tourv==11&&c3=='O'){
vie--;
break;}
if(tourv==12&&c2=='O'){
vie--;
break;}
if(tourv==13&&c1=='O'){
vie--;
break;}
if(tourv==14&&c2=='O'){
vie--;
break;}
if(tourv==15&&c3=='O'){
vie--;
break;}
if(tourv==16&&c4=='O'){
vie--;
break;}
if(tourv==17&&c5=='O'){
vie--;
break;}
if(tourv==18&&c6=='O'){
vie--;
break;}
if(tourv==19&&c5=='O'){
vie--;
break;}
if(tourv==20&&c4=='O'){
vie--;
break;}
if(tourv==21&&c7=='O'){
vie--;
break;}
if(tourv==22&&c8=='O'){
vie--;
break;}
if(tourv==23&&c12=='O'){
vie--;
break;}
if(tourv==24&&c13=='O'){
vie--;
break;}
if(tourv==25&&c14=='O'){
vie--;
break;}
if(tourv==26&&c13=='O'){
vie--;
break;}
if(tourv==27&&c12=='O'){
vie--;
break;}
if(tourv==28&&c11=='O'){
vie--;
break;}
if(tourv==29&&c10=='O'){
vie--;
break;}
if(tourv==30&&c9=='O'){
vie--;
break;}
if(tourv==31&&c10=='O'){
vie--;
break;}
if(tourv==32&&c11=='O'){
vie--;
break;}
if(tourv==33&&c15=='O'){
vie--;
break;}
if(tourv==34&&c18=='O'){
vie--;
break;}
if(tourv==35&&c17=='O'){
vie--;
break;}
if(tourv==36&&c16=='O'){
vie--;
break;}
if(tourv==37&&c17=='O'){
vie--;
break;}
if(tourv==38&&c18=='O'){
vie--;
break;}
if(tourv==39&&c19=='O'){
vie--;
break;}
if(tourv==40&&c20=='O'){
vie--;
break;}
if(tourv==41&&c21=='O'){
vie--;
break;}


tour++;
}while(vie=1);
//fin de la boucle de jeu


//determination du score avec presence ou non du bonus
score=bonus+tour;


//determination de la presence ou non du bonus
//si non alors le joueur a perdu
if(bonus==0)
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nVous avez perdu.\n\nVotre score est de %d\n\n",tour);

//si oui alors le joueur a gagne
if(bonus==50)
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nVous avez recupere les plans de l'Etoile Noire, l'Empire est mis a dure epreuve\nVous etes acclame comme un heros par les Rebelles !\n");



//evaluation du niveau du joueur en fonction du score
if(score<150){
printf("____________________________\n");
printf("|                          |\n");
printf("|-Vous voila Apprenti Jedi-|\n");
printf("|__________________________|\n\n");
printf("Vous pouvez faire mieux, mais c'est un debut !\n\n");}
if(score>150&&score<200){
printf("_____________________________\n");
printf("|                           |\n");
printf("|-Vous voila Chevalier Jedi-|\n");
printf("|___________________________|\n\n");
printf("C'est de mieux en mieux. Faites encore des efforts, vous serez encore meilleur.\n\n");}
if(score>200&&bonus==0){
printf("_____________________________\n");
printf("|                           |\n");
printf("|-Vous voila Chevalier Jedi-|\n");
printf("|___________________________|\n\n");
printf("C'est tres bien, mais vous devez eviter le Seigneur des Sith, ou vous perdrez toujours.\n\n");}
if(score>200&&bonus==50){
printf("____________________________\n");
printf("|                          |\n");
printf("| -Vous voila Maitre Jedi- |\n");
printf("|__________________________|\n\n");
printf("Mes felicitations, vous pouvez joindre le prestigieux Conseil Jedi !\n\n");}

printf("\n\n\nEntrer sur R pour recommencer une partie, sur une autre touche pour quitter S-W.\nR - Recommancer\nAutre touche - Quitter\n");
getchar();

fin=getchar();


if(fin=='R'||fin=='r')
fin=1;


else{
fin=0;}
}
//evaluation de la porsuite ou non de la boucle


//affichage des credits et des mentions legales
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nS-W, v.1.1,\nStudio Amanga,\n2002, tous droits reserves.\n");
system("PAUSE");
return 0;
}
