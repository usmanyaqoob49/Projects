#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int item, grand, totalquantity;
	int q[9]={0,0,0,0,0,0,0,0,0};
	int Aprice[9]= {80,120,30,220,400,100,110,130,80};
	int total[9]= {0,0,0,0,0,0,0,0,0};
	char ch;
	string Name[8]={};
		cout<<"\t\t\t1. Sugar.....Rs 80 "<<endl;
		cout<<"\t\t\t2. Milk.....Rs 120 "<<endl;
		cout<<"\t\t\t3. Chocolate.....Rs 30 "<<endl;
		cout<<"\t\t\t4. Honey....Rs 220 "<<endl;
		cout<<"\t\t\t5. Mushroom.....Rs 400 "<<endl;
		cout<<"\t\t\t6. Olives.....Rs 100 "<<endl;
		cout<<"\t\t\t7. Yogurt.....Rs 110 "<<endl;
		cout<<"\t\t\t8. Eggs.....Rs 130 "<<endl;
		cout<<"\t\t\t9. Bread.....Rs 80 "<<endl;
		cout<<"\t\t\t10. Exit "<<endl;
		cout<<"\n\n\t\t Please select the thing you want to buy:"<<endl;
	do
	{
		cin>>item;
		switch(item)
		{
			case 1:
				Name[0] = "sugar";
				q[0]++;
				break;
				
			case 2:
				Name[1] = "Milk";
				q[1]++;
				break;
			
			case 3:
				Name[2] = "chocolate";
				q[2]++;
				break;
				
			case 4:
				Name[3] = "honey";
				q[3]++;
				break;
				
			case 5:
				Name[4] = "mushroom";
				q[4]++;
				break;
				
			case 6:
				Name[5] = "Olives";
				q[5]++;
				break;
			
			case 7:
				Name[6] = "Yougurt";
				q[6]++;
				break;
				
			case 8:
				Name[7] = "Eggs";
				q[7]++;
				break;
				
			case 9:
				Name[8] = "Bread";
				q[8]++;
				break;
				
			default:
				break;
		}
		if(item>10)
		cout<<"Wrong entery we have only 9 items!!3"<<endl;
	}
	
		while(item!=10);
	
		
		total[0] =q[0]*Aprice[0];
		total[1] = q[1]*Aprice[1];
		total[2] =q[2]*Aprice[2];
		total[3]=q[3]*Aprice[3];
		total[4] =q[4]*Aprice[4];
		total[5] =q[5]*Aprice[5];
		total[6] =q[6]*Aprice[6];
		total[7]=q[7]*Aprice[7];
		total[8]=q[8]*Aprice[8];
		grand = total[0]+total[1]+total[2]+total[3]+total[4]+total[5]+total[6]+total[7]+total[8];
		totalquantity=q[0]+q[1]+q[2]+q[3]+q[4]+q[5]+q[6]+q[7]+q[8];
		
		cout<<"******************************************************************************"<<endl;
		
		cout<<"Name\t\tQuantity\t\tActual Price\t\tTotal Price"<<endl;
		
		if(q[0]!=0)
		cout<<Name[0]<<"\t\t"<<q[0]<<"\t\t\t"<<Aprice[0]<<"\t\t\t"<<total[0]<<endl;
		if(q[1]!=0)
		cout<<Name[1]<<"\t\t"<<q[1]<<"\t\t\t"<<Aprice[1]<<"\t\t\t"<<total[1]<<endl;	
		if(q[2]!=0)
		cout<<Name[2]<<"\t"<<q[2]<<"\t\t\t"<<Aprice[2]<<"\t\t\t"<<total[2]<<endl;
		if(q[3]!=0)
		cout<<Name[3]<<"\t\t"<<q[3]<<"\t\t\t"<<Aprice[3]<<"\t\t\t"<<total[3]<<endl;
		if(q[4]!=0)
		cout<<Name[4]<<"\t"<<q[4]<<"\t\t\t"<<Aprice[4]<<"\t\t\t"<<total[4]<<endl;
		if(q[5]!=0)
		cout<<Name[5]<<"\t\t"<<q[5]<<"\t\t\t"<<Aprice[5]<<"\t\t\t"<<total[5]<<endl;
		if(q[6]!=0)
		cout<<Name[6]<<"\t\t"<<q[6]<<"\t\t\t"<<Aprice[6]<<"\t\t\t"<<total[6]<<endl;
		if(q[7]!=0)
		cout<<Name[7]<<"\t\t"<<q[7]<<"\t\t\t"<<Aprice[7]<<"\t\t\t"<<total[7]<<endl;	
		if(q[8]!=0)
		cout<<Name[8]<<"\t\t"<<q[8]<<"\t\t\t"<<Aprice[8]<<"\t\t\t"<<total[8]<<endl;
		cout<<"\n\n\t\t\t Grand Total :"<<grand<<endl;
		
		cout<<"\nDo you want to return any thing: Y/N "<<endl;
		cin>>ch;
		while(ch=='Y')
		{
			cout<<"Enter the item key you want to return and press 10 if you want to stop returning: ";
			cin>>item;
			if(item==10)
			break;
		
			if(item==1)
				{
					Name[0] = "sugar";
					q[0]--;
				}
				
			else if(item==2)
				{
					Name[1] = "Milk";
					q[1]--;
				}
			
			else if(item==3)
				{
					Name[2] = "chocolate";
					q[2]--;
				}
				
			else if(item==4)
				{
					Name[3] = "honey";
					q[3]--;
				}
				
			else if(item==5)
				{
					Name[4] = "mushroom";
					q[4]--;
				}
				
			else if(item==6)
				{
					Name[5] = "Olives";
					q[5]--;
				}
			
			else if(item==6)
				{
					Name[6] = "Yougurt";
					q[6]--;
				}
			
			else if(item==6)
				{
					Name[7] = "Eggs";
					q[7]--;
				}
				
			else if(item==6)
				{
					Name[8] = "Bread";
					q[8]--;
				}
				
			else
				{
				}
	}
		total[0] =q[0]*Aprice[0];
		total[1] = q[1]*Aprice[1];
		total[2] =q[2]*Aprice[2];
		total[3]=q[3]*Aprice[3];
		total[4] =q[4]*Aprice[4];
		total[5] =q[5]*Aprice[5];
		total[6] =q[6]*Aprice[6];
		total[7]=q[7]*Aprice[7];
		total[8]=q[8]*Aprice[8];
		grand = total[0]+total[1]+total[2]+total[3]+total[4]+total[5]+total[6]+total[7]+total[8];
		totalquantity=q[0]+q[1]+q[2]+q[3]+q[4]+q[5]+q[6]+q[7]+q[8];
		
		cout<<"\tYour Final Bill after your approval of return is : "<<endl;
		
		cout<<"******************************************************************************"<<endl;
		
		cout<<"Name\t\tQuantity\t\tActual Price\t\tTotal Price"<<endl;
		
		if(q[0]!=0)
		cout<<Name[0]<<"\t\t"<<q[0]<<"\t\t\t"<<Aprice[0]<<"\t\t\t"<<total[0]<<endl;
		if(q[1]!=0)
		cout<<Name[1]<<"\t\t"<<q[1]<<"\t\t\t"<<Aprice[1]<<"\t\t\t"<<total[1]<<endl;	
		if(q[2]!=0)
		cout<<Name[2]<<"\t"<<q[2]<<"\t\t\t"<<Aprice[2]<<"\t\t\t"<<total[2]<<endl;
		if(q[3]!=0)
		cout<<Name[3]<<"\t\t"<<q[3]<<"\t\t\t"<<Aprice[3]<<"\t\t\t"<<total[3]<<endl;
		if(q[4]!=0)
		cout<<Name[4]<<"\t"<<q[4]<<"\t\t\t"<<Aprice[4]<<"\t\t\t"<<total[4]<<endl;
		if(q[5]!=0)
		cout<<Name[5]<<"\t\t"<<q[5]<<"\t\t\t"<<Aprice[5]<<"\t\t\t"<<total[5]<<endl;
		if(q[6]!=0)
		cout<<Name[6]<<"\t\t"<<q[6]<<"\t\t\t"<<Aprice[6]<<"\t\t\t"<<total[6]<<endl;
		if(q[7]!=0)
		cout<<Name[7]<<"\t\t"<<q[7]<<"\t\t\t"<<Aprice[7]<<"\t\t\t"<<total[7]<<endl;	
		if(q[8]!=0)
		cout<<Name[8]<<"\t\t"<<q[8]<<"\t\t\t"<<Aprice[8]<<"\t\t\t"<<total[8]<<endl;
		cout<<"\n\n\t\t\t Grand Total :"<<grand<<endl;
			
		
		return 0;
}

