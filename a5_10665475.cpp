#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
struct student {
		int mNumber;
		string name;
		int age;
		string gender;
		double score;
		char grade;
	};
int main(int agrc, char ** argv){
	//User defined Variables
		double totAge;
		double totScore;
		int mCount;
		int fCount;
		

//Array	
student st[5];
ofstream fin;
fin.open("student_record.txt");
fin<<left<<setw(10)<<"Count"<<left<<setw(10)<<"ID Number"<<left<<setw(6)<<"Gender"<<left<<setw(10)<<"Name"<<left<<setw(5)<< "Age"<<left<<setw(10)<<"Score"<<left<<setw(10)<< "Grade"<<endl;

//Loop
for (int m = 0;m<5;m++){
cout<<"Student "<<m+1<<"\t"<<endl;
fin<<left<<setw(10)<<m+1;
cout<<"Enter your Student ID: \n";
cin>>st[m].mNumber;
fin<<left<<setw(10)<<st[m].mNumber;
 
 

cout<<"Enter your Gender:Male or Female \n";
cin>>st[m].gender;
fin<<left<<setw(6)<<st[m].gender;

cout<<"Enter your name: \n";
cin>>st[m].name;
fin<<left<<setw(10)<<st[m].name;
 
 cout<<"Enter your age :\n ";
 cin>>st[m].age;
 fin<<left<<setw(5)<<st[m].age;

cout<<"Enter your score: \n";
cin>>st[m].score;
fin<<left<<setw(10)<<st[m].score;

if(st[m].score>=80 && st[m].score<=100){
	st[5].grade = 'A';
}
else if ( st[m].score>=70 && st[m].score <=79){
	st[m].grade = 'B';
	}
	else if (st[m].score >=60 && st[m].score <=69){
	st[m].grade = 'C';
	}
	else if (st[m].score >=50 && st[m].score <=59){
		st[m].grade= 'D';
	}
	else if (st[m].score >=40 && st[m].score <=49){
		st[m].grade = 'E';
	}
	else if (st[m].score >=0 && st[m].score <=39){
		st[m].grade = 'F';
	}
	else {cout<<"Enter a valid score. \n";}
fin<<left<<setw(10)<<st[m].grade;
cout <<endl;
totAge+=st[m].age;
totScore+=st[m].score;

if(st[m].gender=="male"){
	mCount+=1;
}
else{
	fCount++;
}
fin<<endl;
}
	fin<<"AVERAGE AGE : "<<totAge/5<<endl;
	fin<<"AVERAGE SCORE : "<<totScore/5<<endl;
	fin<<"MALE COUNT : "<<mCount<<endl;	
	fin<<"FEMALE COUNT : "<<fCount<<endl;
	return 0;
}
