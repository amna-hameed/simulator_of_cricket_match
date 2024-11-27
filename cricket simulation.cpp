#include <iostream>
#include <fstream>
using namespace std;
void Gamewelcome() {

	cout << "---------------------------------------" << endl;
    cout << "|============== CRICKET-MATCH ==============|" << endl;
    cout << "|                                     |" << endl;
    cout << "|   Welcome to Virtual Cricket Game   |" << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|================== Instructions ==================|" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|                                                  |" << endl;
    cout << "| 1. Create 2 teams (Team-A and Team-B with 11      |" << endl;
    cout << "|    players each) from a given pool of 11 players.|" << endl;
    cout << "| 2. Lead the toss and decide the choice of play.  |" << endl;
    cout << "| 3. Each innings will be of 6 balls.              |" << endl;
    cout << "----------------------------------------------------" << endl;
}


int coinToss(void) 
{
	int randomNumber;
	randomNumber = 1 + rand() % 2;

	return randomNumber;
}
void Overs()
{
    ifstream ovefile;
	ovefile.open("overs.txt");
    int overs; 
    
    if (ovefile.is_open() ) 
    { 
    ovefile >> overs; 
    cout<<overs;
    }
}
void drawScoreCard(string &p1, int &score, int &total_score, int &fours, int &sixers, int &wickets)
{
	cout<<p1<<"\t\t";
	score==-1 ? cout<<"out" : cout<<score;
	
	cout<<"\t|\t"<<total_score<<"\t|\t"<<fours<<"\t|\t"<<sixers<<"\t|\t"<<wickets;
	cout<<endl;

}
void drawScoreCard1(string &p2, int &score1, int &total_score1,int &fours1, int &sixers1, int &wickets1)
{
	cout<<p2<<"\t\t";
	score1==-1 ? cout<<"out" : cout<<score1;
	cout<<"\t|\t"<<total_score1<<"\t|\t"<<fours1<<"\t|\t"<<sixers1<<"\t|\t"<<wickets1;
	cout<<endl;

}
void drawScoreCard2(string &p3, int &score2, int &total_score2,int &fours2, int &sixers2, int &wickets2)
{
	cout<<p3<<"\t\t";
	score2==-1 ? cout<<"out" : cout<<score2;
	cout<<"\t|\t"<<total_score2<<"\t|\t"<<fours2<<"\t|\t"<<sixers2<<"\t|\t"<<wickets2;
	cout<<endl;

}
void drawScoreCard3(string &p4, int &score3, int &total_score3,int &fours3, int &sixers3, int &wickets3)
{
	cout<<p4<<"\t\t";
	score3==-1 ? cout<<"out" : cout<<score3;
	cout<<"\t|\t"<<total_score3<<"\t|\t"<<fours3<<"\t|\t"<<sixers3<<"\t|\t"<<wickets3;
	cout<<endl;

}
void drawScoreCard4(string &p5, int &score4, int &total_score4,int &fours4, int &sixers4, int &wickets4)
{
	cout<<p5<<"\t\t";
	score4==-1 ? cout<<"out" : cout<<score4;
	cout<<"\t|\t"<<total_score4<<"\t|\t"<<fours4<<"\t|\t"<<sixers4<<"\t|\t"<<wickets4;
	cout<<endl;

}
void drawScoreCard5(string &p6, int &score5, int &total_score5,int &fours5, int &sixers5, int &wickets5)
{
	cout<<p6<<"\t\t";
	score5==-1 ? cout<<"out" : cout<<score5;
	cout<<"\t|\t"<<total_score5<<"\t|\t"<<fours5<<"\t|\t"<<sixers5<<"\t|\t"<<wickets5;
	cout<<endl;

}
void drawScoreCard6(string &p7, int &score6, int &total_score6,int &fours6, int &sixers6, int &wickets6)
{
	cout<<p7<<"\t\t";
	score6==-1 ? cout<<"out" : cout<<score6;
	cout<<"\t|\t"<<total_score6<<"\t|\t"<<fours6<<"\t|\t"<<sixers6<<"\t|\t"<<wickets6;
	cout<<endl;

}
void drawScoreCard7(string &p8, int &score7, int &total_score7,int &fours7, int &sixers7, int &wickets7)
{
	cout<<p8<<"\t\t";
	score7==-1 ? cout<<"out" : cout<<score7;
	cout<<"\t|\t"<<total_score7<<"\t|\t"<<fours7<<"\t|\t"<<sixers7<<"\t|\t"<<wickets7;
	cout<<endl;

}
void drawScoreCard8(string &p9, int &score8, int &total_score8,int &fours8, int &sixers8, int &wickets8)
{
	cout<<p9<<"\t\t";
	score8==-1 ? cout<<"out" : cout<<score8;
	cout<<"\t|\t"<<total_score8<<"\t|\t"<<fours8<<"\t|\t"<<sixers8<<"\t|\t"<<wickets8;
	cout<<endl;

}
void drawScoreCard9(string &p10, int &score9, int &total_score9,int &fours9, int &sixers9, int &wickets9)
{
	cout<<p10<<"\t\t";
	score9==-1 ? cout<<"out" : cout<<score9;
	cout<<"\t|\t"<<total_score9<<"\t|\t"<<fours9<<"\t|\t"<<sixers9<<"\t|\t"<<wickets9;
	cout<<endl;

}
void drawScoreCard10(string &p11, int &score10, int &total_score10,int &fours10, int &sixers10, int &wickets10)
{
	cout<<p11<<"\t\t";
	score10==-1 ? cout<<"out" : cout<<score10;
	cout<<"\t|\t"<<total_score10<<"\t|\t"<<fours10<<"\t|\t"<<sixers10<<"\t|\t"<<wickets10;
	cout<<endl;

}
void drawScoreCard11(string &p12, int &score11, int &total_score11, int &fours11, int &sixers11, int &wickets11)
{
	cout<<p12<<"\t\t";
	score11==-1 ? cout<<"out" : cout<<score11;
	
	cout<<"\t|\t"<<total_score11<<"\t|\t"<<fours11<<"\t|\t"<<sixers11<<"\t|\t"<<wickets11;
	cout<<endl;

}
void drawScoreCard12(string &p13, int &score12, int &total_score12,int &fours12, int &sixers12, int &wickets12)
{
	cout<<p13<<"\t\t";
	score12==-1 ? cout<<"out" : cout<<score12;
	cout<<"\t|\t"<<total_score12<<"\t|\t"<<fours12<<"\t|\t"<<sixers12<<"\t|\t"<<wickets12;
	cout<<endl;

}
void drawScoreCard13(string &p14, int &score13, int &total_score13,int &fours13, int &sixers13, int &wickets13)
{
	cout<<p14<<"\t\t";
	score13==-1 ? cout<<"out" : cout<<score13;
	cout<<"\t|\t"<<total_score13<<"\t|\t"<<fours13<<"\t|\t"<<sixers13<<"\t|\t"<<wickets13;
	cout<<endl;

}
void drawScoreCard14(string &p15, int &score14, int &total_score14,int &fours14, int &sixers14, int &wickets14)
{
	cout<<p15<<"\t\t";
	score14==-1 ? cout<<"out" : cout<<score14;
	cout<<"\t|\t"<<total_score14<<"\t|\t"<<fours14<<"\t|\t"<<sixers14<<"\t|\t"<<wickets14;
	cout<<endl;

}
void drawScoreCard15(string &p16, int &score15, int &total_score15,int &fours15, int &sixers15, int &wickets15)
{
	cout<<p16<<"\t\t";
	score15==-1 ? cout<<"out" : cout<<score15;
	cout<<"\t|\t"<<total_score15<<"\t|\t"<<fours15<<"\t|\t"<<sixers15<<"\t|\t"<<wickets15;
	cout<<endl;

}
void drawScoreCard16(string &p17, int &score16, int &total_score16,int &fours16, int &sixers16, int &wickets16)
{
	cout<<p17<<"\t\t";
	score16==-1 ? cout<<"out" : cout<<score16;
	cout<<"\t|\t"<<total_score16<<"\t|\t"<<fours16<<"\t|\t"<<sixers16<<"\t|\t"<<wickets16;
	cout<<endl;

}
void drawScoreCard17(string &p18, int &score17, int &total_score17,int &fours17, int &sixers17, int &wickets17)
{
	cout<<p18<<"\t\t";
	score17==-1 ? cout<<"out" : cout<<score17;
	cout<<"\t|\t"<<total_score17<<"\t|\t"<<fours17<<"\t|\t"<<sixers17<<"\t|\t"<<wickets17;
	cout<<endl;

}
void drawScoreCard18(string &p19, int &score18, int &total_score18,int &fours18, int &sixers18, int &wickets18)
{
	cout<<p19<<"\t\t";
	score18==-1 ? cout<<"out" : cout<<score18;
	cout<<"\t|\t"<<total_score18<<"\t|\t"<<fours18<<"\t|\t"<<sixers18<<"\t|\t"<<wickets18;
	cout<<endl;

}
void drawScoreCard19(string &p20, int &score19, int &total_score19,int &fours19, int &sixers19, int &wickets19)
{
	cout<<p20<<"\t\t";
	score19==-1 ? cout<<"out" : cout<<score19;
	cout<<"\t|\t"<<total_score19<<"\t|\t"<<fours19<<"\t|\t"<<sixers19<<"\t|\t"<<wickets19;
	cout<<endl;

}
void drawScoreCard20(string &p21, int &score20, int &total_score20,int &fours20, int &sixers20, int &wickets20)
{
	cout<<p21<<"\t\t";
	score20==-1 ? cout<<"out" : cout<<score20;
	cout<<"\t|\t"<<total_score20<<"\t|\t"<<fours20<<"\t|\t"<<sixers20<<"\t|\t"<<wickets20;
	cout<<endl;

}
void drawScoreCard21(string &p22, int &score21, int &total_score21,int &fours21, int &sixers21, int &wickets21)
{
	cout<<p22<<"\t\t";
	score21==-1 ? cout<<"out" : cout<<score21;
	cout<<"\t|\t"<<total_score21<<"\t|\t"<<fours21<<"\t|\t"<<sixers21<<"\t|\t"<<wickets21;
	cout<<endl;

}
int main()
{
    
//making display better;
Gamewelcome();

    int playersPerTeam = 11;
	int maxBalls = 6;
	int totalPlayers = 22;
	char* playersA[12];
    char* playersB[12];
    //initializing the names of players in team A
	playersA[0] = "Jack";
	playersA[1] = "Wally";
	playersA[2] = "Len";
	playersA[3] = "Fred ";
	playersA[4] = "Ian";
	playersA[5] = "James";
	playersA[6] = "Kevin";
	playersA[7] = "Cook";
	playersA[8] = "Joe";
	playersA[9] = "BKumar";
	playersA[10] = "Ishant";
	playersA[11] = "Jhon";
	
	//initializing the names of players in team B
	playersB[0] = "Hafiz";
	playersB[1] = "Shahid";
	playersB[2] = "Shoaib";
	playersB[3] = "Javed";
	playersB[4] = "Younis";
	playersB[5] = "Asif";
	playersB[6] = "Masood";
	playersB[7] = "Babar";
	playersB[8] = "Abdullah";
	playersB[9] = "Abid";
	playersB[10] = "Hassan";
	playersB[11] = "Emad";
	

	cout << endl;
	//Displaying the names of players of both teams on the terminal
	cout << "---------------------------------------" << endl;
	cout << "|========== Pool of Players ==========|" << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
cout<<"***Names of players of first team(England)***"<<endl;
	for (int i = 1; i <=11; i++) {
	    
        cout << "[" << i << "] " << playersA[i] << endl;
    }
    cout<<"***Names of players of second team(Pakistan)***"<<endl;
    for(int i=1;i<=11;i++)
    cout << "[" << i << "] " << playersB[i] << endl;
    cout<<"***TOSS***"<<endl;
    int randomNumber = 0;
	string headTail = "";

	
//Using random function to get the toss 
	srand((time(0)));

	
		randomNumber = coinToss();
		if (randomNumber == 1)
		{	headTail = "head";
		}
		else
			headTail = "tail";
		cout << headTail << endl;
		//calling the function over 
		
		Overs();
		//condition if the toss is head
		if(headTail=="head")
		
		{
		    cout << "---------------------------------------" << endl;
		    cout<<"TEAM 1 WON THE TOSS\n***TEAM 1 WILL START BATTING***"<<endl;
		    cout << "---------------------------------------" << endl;
		cout<<"player 1\t"<<playersA[0]<<"\nplayer 2\t"<<playersA[1]<<endl;
		cout << "\t\t ||| FIRST INNINGS STARTS ||| " << endl << endl;
//Using loops,random functions and above functions to get the scores of batting 
 cout << "---------------------------------------------------------------------------------" << endl;
   cout<<"\t|\tP"<<"\t|\tScore"<<"\t|\tfours"<<"\t|\tsixers"<<"\t|\twickets"<<endl;
 cout << "---------------------------------------------------------------------------------" << endl;
    srand(time(0));
    
    //batting score for player 1
    
	string p1 = "Jack";
	int score = 0;
	int sixers=0;
	int fours=0;
	int wickets=0;
	int total_score = 0;
	
	while (score!=-1)
	{
		score = (rand()%6) - 1;
		if (score==4)
		fours++;
		if (score==6)
		sixers++;
		if (score==-1)
		wickets++;
		total_score += score;
		drawScoreCard(p1,score,total_score,fours,sixers,wickets);

		cin.get();
		
	}          
	drawScoreCard(p1,score,total_score,fours,sixers,wickets);
	
	//batting score for player 2
	srand(time(0));
	string p2 = "Wally";
	int score1 = 0;
	int sixers1=0;
	int fours1=0;
	int wickets1=0;
	int total_score1 = 0;
	
	while (score1!=-1)
	{
		score1 = (rand()%7) - 1;
		total_score1 += score1;
		drawScoreCard1(p2,score1,total_score1,fours1,sixers1,wickets1);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard1(p2,score1,total_score1,fours1,sixers1,wickets1);
	
	//batting score for player 3
	srand(time(0));
	string p3 = "Len";
	int score2 = 0;
	int sixers2=0;
	int fours2=0;
	int wickets2=0;
	int total_score2 = 0;
	
	while (score2!=-1)
	{
		score2 = (rand()%7) - 1;
		total_score2 += score2;
		drawScoreCard2(p3,score2,total_score2,fours2,sixers2,wickets2);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard2(p3,score2,total_score2,fours2,sixers2,wickets2);
	
	//batting score for player 4
	srand(time(0));
	string p4 = "Fred";
	int score3 = 0;
	int sixers3=0;
	int fours3=0;
	int wickets3=0;
	int total_score3 = 0;
	
	while (score3!=-1)
	{
		score3 = (rand()%7) - 1;
		total_score3 += score3;
		drawScoreCard3(p4,score3,total_score3,fours3,sixers3,wickets3);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard3(p4,score3,total_score3,fours3,sixers3,wickets3);
	
	//batting score for player 5
	
	srand(time(0));
	string p5 = "Ian";
	int score4 = 0;
	int sixers4=0;
	int fours4=0;
	int wickets4=0;
	int total_score4 = 0;
	
	while (score4!=-1)
	{
		score4 = (rand()%7) - 1;
		total_score4 += score4;
		drawScoreCard4(p5,score4,total_score4,fours4,sixers4,wickets4);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard4(p5,score4,total_score4,fours4,sixers4,wickets4);
	
	//batting score for player 6
	srand(time(0));
	string p6 = "James";
	
	int score5 = 0;
	int sixers5=0;
	int fours5=0;
	int wickets5=0;
	int total_score5 = 0;
	while (score5!=-1)
	{
		score5 = (rand()%7) - 1;
		total_score5 += score5;
		drawScoreCard5(p6,score5,total_score5,fours5,sixers5,wickets5);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard5(p6,score5,total_score5,fours5,sixers5,wickets5);
	
	//batting score for player 7
	srand(time(0));
	string p7 = "Kevin";
	int score6 = 0;
	int sixers6=0;
	int fours6=0;
	int wickets6=0;
	int total_score6 = 0;
	
	while (score6!=-1)
	{
		score6 = (rand()%7) - 1;
		total_score6 += score6;
		drawScoreCard6(p7,score6,total_score6,fours6,sixers6,wickets6);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard6(p7,score6,total_score6,fours6,sixers6,wickets6);
	
	//batting score for player 8
	srand(time(0));
	string p8 = "Cook";
	int score7 = 0;
	int sixers7=0;
	int fours7=0;
	int wickets7=0;
	int total_score7 = 0;
	while (score7!=-1)
	{
		score7 = (rand()%7) - 1;
		total_score7 += score7;
		drawScoreCard7(p8,score7,total_score7,fours7,sixers7,wickets7);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard7(p8,score7,total_score7,fours7,sixers7,wickets7);
	
	//batting score for player 9
	srand(time(0));
	string p9 = "Joe";
	int score8 = 0;
	int sixers8=0;
	int fours8=0;
	int wickets8=0;
	int total_score8 = 0;
	
	while (score8!=-1)
	{
		score8 = (rand()%7) - 1;
		total_score8 += score8;
		drawScoreCard8(p9,score8,total_score8,fours8,sixers8,wickets8);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard8(p9,score8,total_score8,fours8,sixers8,wickets8);
	
	//batting score for player 10
	srand(time(0));
	string p10 = "BKumar";
	
	int score9 = 0;
	int sixers9=0;
	int fours9=0;
	int wickets9=0;
	int total_score9 = 0;
	while (score9!=-1)
	{
		score9 = (rand()%7) - 1;
		total_score9 += score9;
		drawScoreCard9(p10,score9,total_score9,fours9,sixers9,wickets9);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard9(p10,score9,total_score9,fours9,sixers9,wickets9);
	
	//batting score for player 11
	srand(time(0));
	string p11 = "Ishant";
	int score10 = 0;
	int sixers10=0;
	int fours10=0;
	int wickets10=0;
	int total_score10 = 0;
	
	while (score10!=-1)
	{
		score10 = (rand()%7) - 1;
		total_score10 += score10;
		drawScoreCard10(p11,score10,total_score10,fours10,sixers10,wickets10);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard10(p11,score10,total_score10,fours10,sixers10,wickets10);
	//file handlig showing the score board of players of team england
	ofstream outdata; // outdata is like cin
   // list of output values

outdata.open("England.dat"); // opens the file
   if( !outdata ) { // file couldn't be opened
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }


      
      outdata <<"-----------------------------------------------------------------------------------------" << endl;

    outdata << "\t|\tEngland\t|\t Total Runs\t|\t Fours\t|\t Sixers\t|\t Wickets "  <<endl;

      outdata << "-----------------------------------------------------------------------------------------" << endl << endl;
    outdata<<"\t|\tJack\t|\t18\t\t|\t1\t\t|\t2\t\t|\t0\n\n\t|\tWally\t|\t16\t\t|\t1\t\t|\t2\t\t|\t0\n\n\t|\tLen Fred\t|\t14\t\t|\t1\t\t|\t1\t\t|\t1\n\n\t|\tIan\t\t\t|\t40\t\t|\t1\t\t|\t5\t\t|\t1\n\n\t|\tJames\t\t|\t8\t\t|\t1\t\t|\t0\t\t|\t1\n\n\t|\tKevin\t\t|\t15\t\t|\t1\t\t|\t1\t\t|\t1\n\n\t|\tCook\t\t|\t30\t\t|\t2\t\t|\t3\t\t|\t0\n\n\t|\tJoe\t\t\t|\t7\t\t|\t0\t\t|\t1\t\t|\t1\n\n\t|\tBKumar\t\t|\t30\t\t|\t3\t\t|\t2\t\t|\t0\n\n\t|\tIshant\t\t|\t7\t\t|\t0\t\t|\t1\t\t|\t1\n\n\t|\tJhon\t\t|\t8\t\t|\t1\t\t|\t0\t\t|\t1";
   outdata.close();
		
		}
		
		
		
		
		
		//condition if the toss is tail
		else if(headTail=="tail")
		cout << "---------------------------------------" << endl;
		cout<<"TEAM 2 WON THE TOSS\n***TEAM 2 WILL START BATTING***"<<endl;
		cout << "---------------------------------------" << endl;
		cout<<"player 1\t"<<playersB[0]<<"\nplayer 2\t"<<playersB[1]<<endl<<endl;
	
	//some of the Instructions
	cout<<"Last fiver players of Team B will be bowlers."<<endl<<endl;
	//displaying the names of bowlers of team B
	cout<<"The bowlers of team B are:"<<endl;
	cout<<playersB[7] <<"\n"<<playersB[8]<<"\n" <<playersB[9]<<"\n" <<playersB[10] <<"\n"<<playersB[11]<<endl<<endl;
	
	cout << "\t\t ||| FIRST INNINGS STARTS ||| " << endl << endl;
//Using loops,random functions and above functions to get the scores of batting 
 cout << "-----------------------------------------------------------------------------------" << endl;
   cout<<"\t|\tP"<<"\t|\tScore"<<"\t|\tfours"<<"\t|\tsixers"<<"\t|\twickets"<<endl;
   cout << "---------------------------------------------------------------------------------" << endl;
    srand(time(0));
    
	
	
    //batting score for player 1
    
	string p12 = "Hafiz";
	int score11 = 0;
	int sixers11=0;
	int fours11=0;
	int wickets11=0;
	int total_score11 = 0;
	
	while (score11!=-1)
	{
		score11 = (rand()%6) - 1;
		if (score11==4)
		fours11++;
		if (score11==6)
		sixers11++;
		if (score11==-1)
		wickets11++;
		total_score11 += score11;
		drawScoreCard11(p12,score11,total_score11,fours11,sixers11,wickets11);

		cin.get();
		
	}          
	drawScoreCard11(p12,score11,total_score11,fours11,sixers11,wickets11);
	
	//batting score for player 2
	srand(time(0));
	string p13 = "Shahid";
	int score12 = 0;
	int sixers12=0;
	int fours12=0;
	int wickets12=0;
	int total_score12 = 0;
	
	while (score12!=-1)
	{
		score12 = (rand()%7) - 1;
		total_score12 += score12;
		drawScoreCard12(p13,score12,total_score12,fours12,sixers12,wickets12);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard12(p13,score12,total_score12,fours12,sixers12,wickets12);
	
	//batting score for player 3
	srand(time(0));
	string p14 = "Shoaib";
	int score13 = 0;
	int sixers13=0;
	int fours13=0;
	int wickets13=0;
	int total_score13 = 0;
	
	while (score13!=-1)
	{
		score13 = (rand()%7) - 1;
		total_score13 += score13;
		drawScoreCard13(p14,score13,total_score13,fours13,sixers13,wickets13);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard13(p14,score13,total_score13,fours13,sixers13,wickets13);
	
	//batting score for player 4
	srand(time(0));
	string p15 = "Javed";
	int score14 = 0;
	int sixers14=0;
	int fours14=0;
	int wickets14=0;
	int total_score14 = 0;
	
	while (score14!=-1)
	{
		score14 = (rand()%7) - 1;
		total_score14 += score14;
		drawScoreCard14(p15,score14,total_score14,fours14,sixers14,wickets14);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard14(p15,score14,total_score14,fours14,sixers14,wickets14);
	
	
	
	//batting score for player 5
	srand(time(0));
	string p16 = "Younis";
	
	int score15 = 0;
	int sixers15=0;
	int fours15=0;
	int wickets15=0;
	int total_score15 = 0;
	while (score15!=-1)
	{
		score15 = (rand()%7) - 1;
		total_score15 += score15;
		drawScoreCard15(p16,score15,total_score15,fours15,sixers15,wickets15);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard15(p16,score15,total_score15,fours15,sixers15,wickets15);
	
	//batting score for player 6
	srand(time(0));
	string p17 = "Asif";
	int score16 = 0;
	int sixers16=0;
	int fours16=0;
	int wickets16=0;
	int total_score16 = 0;
	
	while (score16!=-1)
	{
		score16 = (rand()%7) - 1;
		total_score16 += score16;
		drawScoreCard16(p17,score16,total_score16,fours16,sixers16,wickets16);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard16(p17,score16,total_score16,fours16,sixers16,wickets16);
	
	//batting score for player 7
	srand(time(0));
	string p18 = "Masood";
	int score17 = 0;
	int sixers17=0;
	int fours17=0;
	int wickets17=0;
	int total_score17 = 0;
	while (score17!=-1)
	{
		score17 = (rand()%7) - 1;
		total_score17 += score17;
		drawScoreCard17(p18,score17,total_score17,fours17,sixers17,wickets17);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard17(p18,score17,total_score17,fours17,sixers17,wickets17);
	
	//batting score for player 8
	srand(time(0));
	string p19 = "Babar";
	int score18 = 0;
	int sixers18=0;
	int fours18=0;
	int wickets18=0;
	int total_score18 = 0;
	
	while (score18!=-1)
	{
		score18 = (rand()%7) - 1;
		total_score18 += score18;
		drawScoreCard18(p19,score18,total_score18,fours18,sixers18,wickets18);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard18(p19,score18,total_score18,fours18,sixers18,wickets18);
	
	//batting score for player 9
	srand(time(0));
	string p20 = "Abdullah";
	
	int score19 = 0;
	int sixers19=0;
	int fours19=0;
	int wickets19=0;
	int total_score19 = 0;
	while (score19!=-1)
	{
		score19 = (rand()%7) - 1;
		total_score19 += score19;
		drawScoreCard19(p20,score19,total_score19,fours19,sixers19,wickets19);
		cin.get();
		
	//	system("clear");
	}
	drawScoreCard19(p20,score19,total_score19,fours19,sixers19,wickets19);
	
	//batting score for player 10
	srand(time(0));
	string p21 = "Abid";
	int score20 = 0;
	int sixers20=0;
	int fours20=0;
	int wickets20=0;
	int total_score20 = 0;
	
	while (score20!=-1)
	{
		score20 = (rand()%7) - 1;
		total_score20 += score20;
		drawScoreCard20(p21,score20,total_score20,fours20,sixers20,wickets20);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard20(p21,score20,total_score20,fours20,sixers20,wickets20);
	//batting score for player 5
	
	srand(time(0));
	string p22 = "Hassan";
	int score21 = 0;
	int sixers21=0;
	int fours21=0;
	int wickets21=0;
	int total_score21 = 0;
	
	while (score21!=-1)
	{
		score21 = (rand()%7) - 1;
		total_score21 += score21;
		drawScoreCard21(p22,score21,total_score21,fours21,sixers21,wickets21);
		cin.get();
		
		//system("clear");
	}
	drawScoreCard21(p22,score21,total_score21,fours21,sixers21,wickets21);
	//file handlig showing the score board of players of team england
	ofstream outdata; // outdata is like cin
   // list of output values

outdata.open("Pakistan.dat"); // opens the file
   if( !outdata ) { // file couldn't be opened
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }

	


      
      outdata <<"-----------------------------------------------------------------------------" << endl;

    outdata << "\t|\tPakistan\t|\t Total Runs\t|\t Fours\t|\t Sixers\t|\t Wickets "  <<endl;

      outdata << "-----------------------------------------------------------------------------" << endl << endl;
    outdata<<"\t|\tHafiz\t|\t16\t\t|\t1\t\t|\t2\t\t|\t0\n\n\t|\tShahid\t|\t14\t\t|\t1\t\t|\t1\t\t|\t1\n\n\t|\tShoaib\t|\t40\t\t|\t1\t\t|\t5\t\t|\t1\n\n\t|\tJaved\t|\t8\t\t|\t1\t\t|\t0\t\t|\t1\n\n\t|\tYounis\t|\t15\t\t|\t1\t\t|\t1\t\t|\t1\n\n\t|\tAsif\t|\t30\t\t|\t2\t\t|\t3\t\t|\t0\n\n\t|\tMasood\t|\t7\t\t|\t0\t\t|\t1\t\t|\t1\n\n\t|\tBabar\t|\t30\t\t|\t3\t\t|\t2\t\t|\t0\n\n\t|\tAbdullah|\t7\t\t|\t0\t\t|\t1\t\t|\t1\n\n\t|\tAbid\t|\t8\t\t|\t1\t\t|\t0\t\t|\t1";
   outdata.close();
 
	 return 0;
}