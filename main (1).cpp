#include <iostream>
using namespace std;
int main()
{
string answer,name,address,job,knowledge,interested_working,qualification,offer,skills,strengths,weaknesses;
string failed,challenge, five_years,reason,position,question;
int age;
bool another_company;
long phone;

cout<<"welcome to interview which we will determine if you will work with us or not..\n\n"<<endl;
cout<<"*******************************************\n";
cout<<"we will ask you some a question are you ready??!\n";
cin>>answer;
cout<<"introduce yourself by name,age,address,telephone_number,your qualification and the job you are applying for\n\n\n";
cout<<"your name is : ";cin>>name; cout<<endl;
cout<<"your age is : "; cin>>age; cout<<endl;
cout<<"your address is : "; cin>>address; cout<<endl;
cout<<"your telephone number is : "; cin>>phone; cout<<endl;
cout<<"your qualification is : "; cin>>qualification; cout<<endl;
cout<<"the job you want to apply for is : "; cin>>job; cout<<endl;
cout<<"what do you know about our campany? \n";
cin>>knowledge;
cout<<"why are you interested in working with us?\n ";
cin>>interested_working;
cout<<"what can you offer to our campany\n ";
cin>>offer;  
cout<<"mention 3 skills to you that will make me Give ajob in our campany\n";
 for(int i=1; i<=3 ; i++)
{ cout<<i; cin>>skills; 
  cout<<endl;
}

cout<<"what are your strengths?\n";
cin>>strengths;
cout<<"what are your weaknesses?\n";
cin>>weaknesses;
cout<<"tell me about time you failed \n";
cin>>failed;
cout<<"tell me about a challenge you face and how did you treat with it\n";
cin>>challenge;
cout<<"where do you see yourself after five years ?\n\n";
cin>>five_years;
cout<<"did you work in another campany before?? true or false\n\n";
cin>>another_company;
if(another_company==true)
{ 
    cout<<"why do you want to leave it and join us??\n";
cin>>reason;
    
}
else
{
    cout<<"ok let`s move on to next question\n\n\n\n";
}
cout<<"are you looking for to specific position in our campany\n";
cin>>position;

cout<<"Now,we are done interview Do you have any question?\n";
cin>>question;
cout<<"Well..we will inform you in two day if you will get the job or not\n"<<endl;



























































    return 0;
}

