# include <iostream>
# include <iomanip>	
# include <cmath>
using namespace std;


float max(float a,float b){
	if (a>b){
		return a;
	}
	else if(b>a){
		return b;
	}
}

float majmoo(string soal1)
{
    string soal2,soal4;
    int soal3;
    float price=0;
    if(soal1=="yes")
    {
    	
        cout<<"What\'s your order?\n";
        getline(cin,soal2);
        getline(cin,soal2);
        if(soal2=="1"  || soal2=="Americano" || soal2=="americano")
        {
            price=2;
        }
        else if(soal2=="2"  || soal2=="Latte" || soal2=="latte")
        {
            price=5;
        }
        else if(soal2=="3"  || soal2=="Affogato" || soal2=="affogato")
        {
            price=6;
        }
        else if(soal2=="4"  || soal2=="Dark Coffee"|| soal2=="dark coffee" )
        {
            price=2;
        }
    }
    else if(soal1=="no")
    {
    	
        cout<<"What\'s your order?\n";
        getline(cin,soal2);
        getline(cin,soal2);
        if(soal2=="1"  || soal2=="Americano" || soal2=="americano")
        {
            price=3.5;
        }
        else if(soal2=="2"  || soal2=="Latte" || soal2=="latte")
        {
            price=6;
        }
        else if(soal2=="3"  || soal2=="Affogato" || soal2=="affogato")
        {
            price=7.5;
        }
        else if(soal2=="4"  || soal2=="Dark Coffee"|| soal2=="dark coffee")
        {
            price=3;
        }
    }
    cout<<"How many?\n";
    cin>>soal3;
    while(soal3==0)
    {
        cout<<"Sorry! Not possible.\n";
        cout<<"How many?\n";
        cin>>soal3;
    }
    
    price *= soal3;

    return price;
}




int main(){
	
	string soal1,soal2,soal4;
	cout<<"Welcome to Our Coffee Shop:\n";
	
	cout<<"Are you a freshman?"<<endl;
	cin>>soal1;
	int soal3;
	float sum;
	if(soal1=="yes"){
	cout<<"Discount Menu:"<<endl<<"1.Americano 2 $"<<endl<<"2.Latte 5 $"<<endl<<"3.Affogato 6 $"<<endl<<"4.Dark Coffee 2 $"<<endl;
	sum = majmoo(soal1);
	}
	else if(soal1=="no"){
		cout<<"Original Menu:"<<endl<<"1.Americano 3.5 $"<<endl<<"2.Latte 6 $"<<endl<<"3.Affogato 7.5 $"<<endl<<"4.Dark Coffee 3 $"<<endl;
	
	sum = majmoo(soal1);
	}
    while(true)
    {
        cout<<"Is your order over?\n";
        cin>>soal4;
        if(soal4=="no")
        {
            sum += majmoo(soal1);
        }
        else if(soal4=="yes")
        {
            break;
        }
    }

sum= (sum*109)/100;
sum= (floor(sum*100)/100);	
cout<<"Please Pay "<<sum<<" $"<<endl;
float pardakht1;
cin>>pardakht1;

float baghi= pardakht1-sum;

float kam= sum-pardakht1;
float pardakht2;
	while(true){
		if(pardakht1<0){
			cout<<"Input is not valid!"<<endl;
			cin>>pardakht1;
		}
		else if(pardakht1>0){
			break;
		}	
	}
	
		 
		
		
		 if(pardakht1==sum){
			cout<<"Thank you! Come and visit us Again.";
		}
		else if(pardakht1>sum){
			cout<<"Thank you! Come and visit us Again. Here is your extra money: "<<baghi<<"$";
		}
	
		else if(pardakht1<sum){
		
			cout<<kam<<" $ still remains."<<endl;
			cin>>pardakht2;
			float i=max(pardakht2,kam);
			if(kam==i){
				cout<<"We are sorry, Please leave the Coffee shop.";
			}	
		else if(pardakht2==i){
			cout<<"Ok, See you soon.";
		}
	}}
