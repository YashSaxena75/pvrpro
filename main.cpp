#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<fstream.h>
#include<dos.h>
int z1,i,ch,ch1,p1,ch2,p2,nsp,nsg,spl,sgl,srp,srg,srp2,srg2,srp3,srg3,srp4,srg4,a1,b1,tm,cp;
char co;
char pma[13][20];
char gma[13][20];
char pma2[13][20];
char gma2[13][20];
char pma3[13][20];
char gma3[13][20];
char pma4[13][20];
char gma4[13][20];
int pgt[100];
int pgn[100];
class cinema
{
public:
    void pmup();
    void gmup();
    void pmup2();
    void gmup2();
    void pmup3();
    void gmup3();
    void pmup4();
    void gmup4();
    void logo();
    void sname();
    void nseat();
    void sprice();
    void sleft();
    void tret();
    void bill();
    void newf();
    void newb();
    void newb1();
    void gold();
    void plat();
    void upp();
    void upg();
    void ret();
    void upp1();
    void plat2();
    void gold2();
    void newb2();
    void newb21();
    void plat3();
    void gold3();
    void newb3();
    void newb31();
    void plat4();
    void gold4();
    void newb4();
    void newb41();
    void pup();
    void gup();
    void pup2();
    void gup2();
    void pup3();
    void gup3();
    void pup4();
    void gup4();

}c;
void cinema::logo()
{
    cout<<"Enter the time of the show-";
    cout<<endl<<"1. 8:00 AM";
    cout<<endl<<"2. 12:00 PM";
    cout<<endl<<"3. 4:00 PM";
    cout<<endl<<"4. 8:00 PM"<<endl;

}
void cinema::pup()
{
    ifstream pmat;
    pmat.open("Pmat.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            pmat>>pma[z][z1];
            int temp=pma[(int)co-65][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.pup();
            }
        }
    }
}
void cinema::gup()
{
    ifstream gmat;
    gmat.open("Gmat.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            gmat>>gma[z][z1];
            int temp=gma[(int)co-78][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.gup();
            }
        }
    }
}
void cinema::pup2()
{
    ifstream pmat2;
    pmat2.open("Pmat2.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            pmat2>>pma2[z][z1];
            int temp=pma2[(int)co-65][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.pup2();
            }
        }
    }
}
void cinema::gup2()
{
    ifstream gmat2;
    gmat2.open("Gmat2.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            gmat2>>gma2[z][z1];
            int temp=gma2[(int)co-78][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.gup2();
            }
        }
    }
}
void cinema::pup3()
{
    ifstream pmat3;
    pmat3.open("Pmat3.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            pmat3>>pma3[z][z1];
            int temp=pma3[(int)co-65][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.pup3();
            }
        }
    }
}
void cinema::gup3()
{
    ifstream gmat3;
    gmat3.open("Gmat3.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            gmat3>>gma3[z][z1];
            int temp=gma3[(int)co-78][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.gup3();
            }
        }
    }
}
void cinema::pup4()
{
    ifstream pmat4;
    pmat4.open("Pmat4.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            pmat4>>pma4[z][z1];
            int temp=pma4[(int)co-65][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.pup4();
            }
        }
    }
}
void cinema::gup4()
{
    ifstream gmat4;
    gmat4.open("Gmat4.txt");
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            gmat4>>gma4[z][z1];
            int temp=gma4[(int)co-78][cp];
            if((int)temp==66)
            {
                cout<<"The seat which you are trying to book is already booked\nEnter again\n";
                cin>>co;
                cin>>cp;
                c.gup4();
            }
        }
    }
}
void cinema::pmup()
{
    c.pup();
/*ofstream pt;
pt.open("pst,txt",ios::beg);
pt<<co<<"\n";*/
    ofstream pmat;
    pmat.open("Pmat.txt",ios::beg);
    int temp=(int)co-65;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
//cout<<temp<<" "<<cp<<endl<<z<<" "<<z1<<endl;
//delay(10);
            if(temp==z&&cp==z1)
                pmat<<'B';
            else
                pmat<<pma[z][z1];
        }
        pmat<<"\n";
    }
}
void cinema::gmup()
{
    c.gup();
    ofstream gmat;
    gmat.open("Gmat.txt",ios::beg);
    int temp=(int)co-78;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
//cout<<temp<<" "<<cp<<endl<<z<<" "<<z1<<endl;
//delay(10);
            if(temp==z&&cp==z1)
                gmat<<'B';
            else
                gmat<<gma[z][z1];
        }
        gmat<<"\n";
    }
}
void cinema::pmup2()
{
    c.pup2();
    ofstream pmat2;
    pmat2.open("Pmat2.txt",ios::beg);
    int temp=(int)co-65;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
//cout<<temp<<" "<<cp<<endl<<z<<" "<<z1<<endl;
//delay(10);
            if(temp==z&&cp==z1)
                pmat2<<'B';
            else
                pmat2<<pma2[z][z1];
        }
        pmat2<<"\n";
    }
}
void cinema::gmup2()
{
    c.gup2();
    ofstream gmat2;
    gmat2.open("Gmat2.txt",ios::beg);
    int temp=(int)co-78;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
            if(temp==z&&cp==z1)
                gmat2<<'B';
            else
                gmat2<<gma2[z][z1];
        }
        gmat2<<"\n";
    }
}
void cinema::pmup3()
{
    c.pup3();
    ofstream pmat3;
    pmat3.open("Pmat3.txt",ios::beg);
    int temp=(int)co-65;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
//cout<<temp<<" "<<cp<<endl<<z<<" "<<z1<<endl;
//delay(10);
            if(temp==z&&cp==z1)
                pmat3<<'B';
            else
                pmat3<<pma3[z][z1];
        }
        pmat3<<"\n";
    }
}
void cinema::gmup3()
{
    c.gup3();
    ofstream gmat3;
    gmat3.open("Gmat3.txt",ios::beg);
    int temp=(int)co-78;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
//cout<<temp<<" "<<cp<<endl<<z<<" "<<z1<<endl;
//delay(10);
            if(temp==z&&cp==z1)
                gmat3<<'B';
            else
                gmat3<<gma3[z][z1];
        }
        gmat3<<"\n";
    }
}
void cinema::pmup4()
{
    c.pup4();
    ofstream pmat4;
    pmat4.open("Pmat4.txt",ios::beg);
    int temp=(int)co-65;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
//cout<<temp<<" "<<cp<<endl<<z<<" "<<z1<<endl;
//delay(10);
            if(temp==z&&cp==z1)
                pmat4<<'B';
            else
                pmat4<<pma4[z][z1];
        }
        pmat4<<"\n";
    }
}
void cinema::gmup4()
{
    c.gup4();
    ofstream gmat4;
    gmat4.open("Gmat4.txt",ios::beg);
    int temp=(int)co-78;
    for(int z=0;z<13;z++)
    {
        for(int z1=0;z1<20;z1++)
        {
//cout<<temp<<" "<<cp<<endl<<z<<" "<<z1<<endl;
//delay(10);
            if(temp==z&&cp==z1)
                gmat4<<'B';
            else
                gmat4<<gma4[z][z1];
        }
        gmat4<<"\n";
    }
}
void cinema::ret()
{
    int a,b,tm1;
    c.logo();
    cin>>tm1;
    if(tm1==1)
    {
        int re=1;
        while(re)
        {
            ofstream seat;
            seat.open("Seat.txt");
            cout<<"Input the no. of seats for Platinum & Gold";
            cout<<endl<<"Platinum-";
            cin>>a;
            cout<<"Gold-";
            cin>>b;
            clrscr();
            c.logo();
            if(srp+a<=spl&&srp+b<=sgl)
            {
                seat<<srp+a;
                seat<<"\n";
                seat<<srg+b;
                re=0;
            }
            else
                cout<<"Total seats is exceeding the limit of the hall\nEnter again"<<endl;
        }
    }
    else if(tm1==2)
    {
        int re=1;
        while(re)
        {
            ofstream seat2;
            seat2.open("Seat2.txt");
            cout<<"Input the no. of seats for Platinum & Gold";
            cout<<endl<<"Platinum-";
            cin>>a;
            cout<<"Gold-";
            cin>>b;
            clrscr();
            c.logo();
            if(srp2+a<=spl&&srg2+b<=sgl)
            {
                seat2<<srp2+a;
                seat2<<"\n";
                seat2<<srg2+b;
                re=0;
            }
            else
                cout<<"Total seats is exceeding the limit of the hall\nEnter again";
        }
    }
    else if(tm1==3)
    {
        int re=1;
        while(re)
        {
            ofstream seat3;
            seat3.open("Seat3.txt");
            cout<<"Input the no. of seats for Platinum & Gold";
            cout<<endl<<"Platinum-";
            cin>>a;
            cout<<"Gold-";
            cin>>b;
            clrscr();
            c.logo();
            if(srp3+a<=spl&&srg3+b<=sgl)
            {
                seat3<<srp3+a;
                seat3<<"\n";
                seat3<<srg3+b;
                re=0;
            }
            else
                cout<<"Total seats is exceeding the limit of the hall\nEnter again";
        }
    }
    else if(tm1==4)
    {
        int re=1;
        while(re)
        {
            ofstream seat4;
            seat4.open("Seat4.txt");
            cout<<"Input the no. of seats for Platinum & Gold";
            cout<<endl<<"Platinum-";
            cin>>a;
            cout<<"Gold-";
            cin>>b;
            clrscr();
            c.logo();
            if(srp4+a<=spl&&srg4+b<=sgl)
            {
                seat4<<srp4+a;
                seat4<<"\n";
                seat4<<srg4+b;
                re=0;
            }
            else
                cout<<"Total seats is exceeding the limit of the hall\nEnter again";
        }
    }
}
void cinema::upp1()
{
    if(tm==1)
    {
        ofstream seat;
        seat.open("Seat.txt");
        if(ch==1)
        {
            seat<<a1-nsp;
            seat<<"\n";
            seat<<b1;
        }
        else if(ch==2)
        {
            seat<<a1;
            seat<<"\n";
            seat<<b1-nsg;
        }
    }
    else if(tm==2)
    {
        ofstream seat2;
        seat2.open("Seat2.txt");
        if(ch==1)
        {
            seat2<<a1-nsp;
            seat2<<"\n";
            seat2<<b1;
        }
        else if(ch==2)
        {
            seat2<<a1;
            seat2<<"\n";
            seat2<<b1-nsg;
        }
    }
    else if(tm==3)
    {
        ofstream seat3;
        seat3.open("Seat3.txt");
        if(ch==1)
        {
            seat3<<a1-nsp;
            seat3<<"\n";
            seat3<<b1;
        }
        else if(ch==2)
        {
            seat3<<a1;
            seat3<<"\n";
            seat3<<b1-nsg;
        }
    }
    else if(tm==4)
    {
        ofstream seat4;
        seat4.open("Seat4.txt");
        if(ch==1)
        {
            seat4<<a1-nsp;
            seat4<<"\n";
            seat4<<b1;
        }
        else if(ch==2)
        {
            seat4<<a1;
            seat4<<"\n";
            seat4<<b1-nsg;
        }
    }
}
void cinema::upp()
{
    if(tm==1)
    {
        ifstream seat;
        seat.open("Seat.txt",ios::beg);
        seat>>a1;
        seat>>b1;
        c.upp1();
    }
    else if(tm==2)
    {
        ifstream seat2;
        seat2.open("Seat2.txt",ios::beg);
        seat2>>a1;
        seat2>>b1;
        c.upp1();
    }
    else if(tm==3)
    {
        ifstream seat3;
        seat3.open("Seat3.txt",ios::beg);
        seat3>>a1;
        seat3>>b1;
        c.upp1();
    }
    else if(tm==4)
    {
        ifstream seat4;
        seat4.open("Seat4.txt",ios::beg);
        seat4>>a1;
        seat4>>b1;
        c.upp1();
    }
}
void cinema::plat()
{
    /*	int temp;
 int temp1;
 ifstream pmat;
 pmat.open("Pmat.txt");
 for(int z=0;z<13;z++)
 {
 for(int z1=0;z1<20;z1++)
 {
 int zz=(int)pma[z][z1];
 if(zz==66)
 {
 temp=z;
 temp1=z1;
 }
 }
 }
 cout<<(char)temp<<"-";
 cout<<temp1<<", ";
        */
    //	int temp,temp1;
    /*ifstream pt;
    pt.open("st.txt");
    pt>>temp;
    cout<<temp;
    delay(2000);
    ifstream pn;
    pn.open("no.txt");
    pn>>temp1;
    cout<<"\n"<<temp1;
    delay(2000);*/
    /*	for(int i=0;i<nsp;i++)
 {
     int ch4;
     ch4=ch1;
     p1++;
     if(p1>=20)
     {
         int s=ch4;
         s++;
         int pc=s;
         ch1=pc;
         p1-=20;
     }*/
    int t=0;
    for(int i=0;i<nsp;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb();
}
void cinema::gold()
{
    /*	ifstream gt;
 gt.open("gst.txt");
 gt>>ch2;
 ifstream gn;
 gn.open("gno.txt");
 gn>>p2;
 for(int i=0;i<nsg;i++)
 {
     int ch3=ch2;
     p2++;
     if(p2>=20)
     {
         int s=ch3;
         s++;
         int pc=s;
         ch2=pc;
         p2-=20;
     } */
    int t=0;
    for(int i=0;i<nsg;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb1();
}
void cinema::newb()
{
    int p;
    /*	ofstream pt;
  pt.open("pst.txt");
  pt<<ch1;
  ofstream pn;
  pn.open("pno.txt");
  pn<<p1;*/
    ifstream pr;
    pr.open("price.txt");
    pr>>p;
    if(ch==1)
    {
        cout<<endl<<"Total bill-";
        cout<<p*nsp;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<endl<<"[Outside food items are not allowed inside]";
        cout<<endl<<"[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::newb1()
{
    int g;
    ofstream gt;
    gt.open("gst.txt");
    gt<<ch2;
    ofstream gn;
    gn.open("gno.txt");
    gn<<p2;
    ifstream pr;
    pr.open("price.txt");
    pr>>g;
    pr>>g;
    if(ch==2)
    {
        cout<<endl<<"Total bill-";
        cout<<g*nsg;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<"\n[Outside food items are not allowed inside]";
        cout<<"\n[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::plat2()
{
    /*	ifstream pt2;
 pt2.open("pst2.txt");
 pt2>>ch1;
 ifstream pn2;
 pn2.open("pno2.txt");
 pn2>>p1;
 for(int i=0;i<nsp;i++)
 {
     int ch4;
     ch4=ch1;
     p1++;
     if(p1>=20)
     {
         int s=ch4;
         s++;
         int pc=s;
         ch1=pc;
         p1-=20;
     }   */
    int t=0;
    for(int i=0;i<nsp;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb2();
}
void cinema::gold2()
{
    /*	ifstream gt2;
   gt2.open("gst2.txt");
   gt2>>ch2;
   ifstream gn2;
   gn2.open("gno2.txt");
   gn2>>p2;
   for(int i=0;i<nsg;i++)
   {
       int ch3=ch2;
       p2++;
       if(p2>=20)
       {
           int s=ch3;
           s++;
           int pc=s;
           ch2=pc;
           p2-=20;
       }*/
    int t=0;
    for(int i=0;i<nsg;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb21();
}
void cinema::newb2()
{
    int p;
    ofstream pt2;
    pt2.open("pst2.txt");
    pt2<<ch1;
    ofstream pn2;
    pn2.open("pno2.txt");
    pn2<<p1;
    ifstream pr;
    pr.open("price.txt");
    pr>>p;
    if(ch==1)
    {
        cout<<endl<<"Total bill-";
        cout<<p*nsp;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<endl<<"[Outside food items are not allowed inside]";
        cout<<endl<<"[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::newb21()
{
    int g;
    ofstream gt2;
    gt2.open("gst2.txt");
    gt2<<ch2;
    ofstream gn2;
    gn2.open("gno2.txt");
    gn2<<p2;
    ifstream pr;
    pr.open("price.txt");
    pr>>g;
    pr>>g;
    if(ch==2)
    {
        cout<<endl<<"Total bill-";
        cout<<g*nsg;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<"\n[Outside food items are not allowed inside]";
        cout<<"\n[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::plat3()
{
    /*	ifstream pt3;
       pt3.open("pst3.txt");
       pt3>>ch1;
       ifstream pn3;
       pn3.open("pno3.txt");
       pn3>>p1;
       for(int i=0;i<nsp;i++)
       {
           int ch4;
           ch4=ch1;
           p1++;
           if(p1>=20)
           {
               int s=ch4;
               s++;
               int pc=s;
               ch1=pc;
               p1-=20;
           }                    */
    int t=0;
    for(int i=0;i<nsp;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb3();
}
void cinema::gold3()
{
/*	ifstream gt3;
	gt3.open("gst3.txt");
	gt3>>ch2;
	ifstream gn3;
	gn3.open("gno3.txt");
	gn3>>p2;
	for(int i=0;i<nsg;i++)
	{
		int ch3=ch2;
		p2++;
		if(p2>=20)
		{
			int s=ch3;
			s++;
			int pc=s;
			ch2=pc;
			p2-=20;
		}*/
    int t=0;
    for(int i=0;i<nsg;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb31();
}
void cinema::newb3()
{
    int p;
    ofstream pt3;
    pt3.open("pst3.txt");
    pt3<<ch1;
    ofstream pn3;
    pn3.open("pno3.txt");
    pn3<<p1;
    ifstream pr;
    pr.open("price.txt");
    pr>>p;
    if(ch==1)
    {
        cout<<endl<<"Total bill-";
        cout<<p*nsp;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<endl<<"[Outside food items are not allowed inside]";
        cout<<endl<<"[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::newb31()
{
    int g;
    ofstream gt3;
    gt3.open("gst3.txt");
    gt3<<ch2;
    ofstream gn3;
    gn3.open("gno3.txt");
    gn3<<p2;
    ifstream pr;
    pr.open("price.txt");
    pr>>g;
    pr>>g;
    if(ch==2)
    {
        cout<<endl<<"Total bill-";
        cout<<g*nsg;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<"\n[Outside food items are not allowed inside]";
        cout<<"\n[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::plat4()
{
/*	ifstream pt4;
	pt4.open("pst4.txt");
	pt4>>ch1;
	ifstream pn4;
	pn4.open("pno4.txt");
	pn4>>p1;
	for(int i=0;i<nsp;i++)
	{
		int ch4;
		ch4=ch1;
		p1++;
		if(p1>=20)
		{
			int s=ch4;
			s++;
			int pc=s;
			ch1=pc;
			p1-=20;
		}                    */
    int t=0;
    for(int i=0;i<nsp;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb4();
}
void cinema::gold4()
{
    /*	ifstream gt4;
 gt4.open("gst4.txt");
 gt4>>ch2;
 ifstream gn4;
 gn4.open("gno4.txt");
 gn4>>p2;
 for(int i=0;i<nsg;i++)
 {
     int ch3=ch2;
     p2++;
     if(p2>=20)
     {
         int s=ch3;
         s++;
         int pc=s;
         ch2=pc;
         p2-=20;
     }*/
    int t=0;
    for(int i=0;i<nsg;i++)
    {
        cout<<(char)pgt[t]<<"-";
        cout<<pgn[t]<<", ";
        t++;
    }
    c.newb41();
}
void cinema::newb4()
{
    int p;
    ofstream pt4;
    pt4.open("pst4.txt");
    pt4<<ch1;
    ofstream pn4;
    pn4.open("pno4.txt");
    pn4<<p1;
    ifstream pr;
    pr.open("price.txt");
    pr>>p;
    if(ch==1)
    {
        cout<<endl<<"Total bill-";
        cout<<p*nsp;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<endl<<"[Outside food items are not allowed inside]";
        cout<<endl<<"[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::newb41()
{
    int g;
    int g1;
    ofstream gt4;
    gt4.open("gst4.txt");
    gt4<<ch2;
    ofstream gn4;
    gn4.open("gno4.txt");
    gn4<<p2;
    ifstream pr;
    pr.open("price.txt");
    pr>>g;
    pr>>g;
    if(ch==2)
    {
        cout<<endl<<"Total bill-";
        cout<<g*nsg;
        cout<<endl<<"Time for the show-";
        if(tm==1)
            cout<<"8:00 AM";
        else if(tm==2)
            cout<<"12:00 PM";
        else if(tm==3)
            cout<<"4:00 PM";
        else if(tm==4)
            cout<<"8:00 PM";
        cout<<"\n[Outside food items are not allowed inside]";
        cout<<"\n[Kindly reach 15 mins before the show time]";
        cout<<endl<<"_________________________________________________";
    }
}
void cinema::newf()
{
    ofstream pmat;
    pmat.open("Pmat.txt");
    for(int z=0;z<13;z++)
    {
        for(int zz=0;zz<20;zz++)
        {
            pma[z][zz]='U';
            pmat<<pma[z][zz];
        }
        pmat<<"\n";
    }
    ofstream gmat;
    gmat.open("Gmat.txt");
    for(int zz=0;zz<13;zz++)
    {
        for(int zz1=0;zz1<20;zz1++)
        {
            gma[zz][zz1]='U';
            gmat<<gma[zz][zz1];
        }
        gmat<<"\n";
    }
    ofstream pmat2;
    pmat2.open("Pmat2.txt");
    for(int z2=0;z2<13;z2++)
    {
        for(int zz2=0;zz2<20;zz2++)
        {
            pma2[z2][zz2]='U';
            pmat2<<pma2[z2][zz2];
        }
        pmat2<<"\n";
    }
    ofstream gmat2;
    gmat2.open("Gmat2.txt");
    for(int z3=0;z3<13;z3++)
    {
        for(int zz3=0;zz3<20;zz3++)
        {
            gma2[z3][zz3]='U';
            gmat2<<gma2[z3][zz3];
        }
        gmat2<<"\n";
    }
    ofstream pmat3;
    pmat3.open("Pmat3.txt");
    for(int z4=0;z4<13;z4++)
    {
        for(int zz4=0;zz4<20;zz4++)
        {
            pma3[z4][zz4]='U';
            pmat3<<pma3[z4][zz4];
        }
        pmat3<<"\n";
    }
    ofstream gmat3;
    gmat3.open("Gmat3.txt");
    for(int z5=0;z5<13;z5++)
    {
        for(int zz5=0;zz5<20;zz5++)
        {
            gma3[z5][zz5]='U';
            gmat3<<gma3[z5][zz5];
        }
        gmat3<<"\n";
    }
    ofstream pmat4;
    pmat4.open("Pmat4.txt");
    for(int z6=0;z6<13;z6++)
    {
        for(int zz6=0;zz6<20;zz6++)
        {
            pma4[z6][zz6]='U';
            pmat4<<pma4[z6][zz6];
        }
        pmat4<<"\n";
    }

    /*
    ofstream pt;
    pt.open("pst.txt");
    pt<<78;
    ofstream gt;
    gt.open("gst.txt");
    gt<<65;
    ofstream pn;
    pn.open("pno.txt");
    pn<<0;
    ofstream gn;
    gn.open("gno.txt");
    gn<<0;
    ofstream pt2;
    pt2.open("pst2.txt");
    pt2<<78;
    ofstream gt2;
    gt2.open("gst2.txt");
    gt2<<65;
    ofstream pn2;
    pn2.open("pno2.txt");
    pn2<<0;
    ofstream gn2;
    gn2.open("gno2.txt");
    gn2<<0;
    ofstream pt3;
    pt3.open("pst3.txt");
    pt3<<78;
    ofstream gt3;
    gt3.open("gst3.txt");
    gt3<<65;
    ofstream pn3;
    pn3.open("pno3.txt");
    pn3<<0;
    ofstream gn3;
    gn3.open("gno3.txt");
    gn3<<0;  */
}
void cinema::sname()
{
    char shown[30];
    cout<<"Enter the name of the show"<<endl;
    gets(shown);
    ofstream out;
    out.open("myshow.txt",ios::beg);
    out<<shown;
}
void cinema::nseat()
{
    /*c.pup();
    for(int z=0;z<13;z++)
    {
    for(int z1=0;z1<20;z1++)
    {
    cout<<pma[z][z1];
    }
    cout<<"\n";
    }
    c.gup();
    for(int zz=0;zz<13;zz++)
    {
    for(int zz1=0;zz1<20;zz1++)
    {
    cout<<pma[zz][zz1];
    }
    cout<<"\n";
    } */
    ofstream seat;
    seat.open("Seat.txt",ios::beg);
    seat<<100;
    seat<<"\n";
    seat<<100;
    ofstream seat2;
    seat2.open("Seat2.txt");
    seat2<<100;
    seat2<<"\n";
    seat2<<100;
    ofstream seat3;
    seat3.open("Seat3.txt");
    seat3<<100;
    seat3<<"\n";
    seat3<<100;
    ofstream seat4;
    seat4.open("Seat4.txt");
    seat4<<100;
    seat4<<"\n";
    seat4<<100;
}
void cinema::sprice()
{
    int pprice;
    int gprice;
    cout<<"Input price of the Show"<<endl;
    cout<<"Platinum-";
    cin>>pprice;
    cout<<"Gold-";
    cin>>gprice;
    ofstream pr;
    pr.open("price.txt",ios::beg);
    pr<<pprice<<endl;
    pr<<gprice;
}
void cinema::sleft()
{
    cout<<"1. 8:00 AM\n2. 12:00 PM\n3. 4:00 PM\n4. 8:00PM";
    cin>>tm;
    clrscr();
    cout<<"1. Platinum \n2. Gold";
    int temp;
    cin>>temp;
    clrscr();
    cout<<"  0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19\n";
    int a=65;
    if(tm==1)
    {
        if(temp==1)
        {
            c.pup();
            for(int z=0;z<13;z++)
            {
                cout<<(char)a<<" ";
                for(int z1=0;z1<20;z1++)
                {
                    if((int)pma[z][z1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",pma[z][z1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",pma[z][z1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
                a++;
            }
        }
        else if(temp==2)
        {
            c.gup();
            for(int zz=0;zz<13;zz++)
            {
                a=78;
                cout<<(char)a<<" ";
                for(int zz1=0;zz1<20;zz1++)
                {
                    if((int)gma[zz][zz1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",gma[zz][zz1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",gma[zz][zz1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
                a++;
            }
        }
    }
    else if(tm==2)
    {
        if(temp==1)
        {
            c.pup2();
            for(int z=0;z<13;z++)
            {
                cout<<(char)a<<" ";
                for(int z1=0;z1<20;z1++)
                {
                    if((int)pma2[z][z1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",pma2[z][z1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",pma2[z][z1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
                a++;
            }
        }
        else if(temp==2)
        {
            c.gup2();
            for(int zz=0;zz<13;zz++)
            {
                a=78;
                cout<<(char)a<<" ";
                for(int zz1=0;zz1<20;zz1++)
                {
                    if((int)gma2[zz][zz1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",gma2[zz][zz1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",gma2[zz][zz1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
        }
    }
    else if(tm==3)
    {
        if(temp==1)
        {
            c.pup3();
            for(int z=0;z<13;z++)
            {
                cout<<(char)a<<" ";
                for(int z1=0;z1<20;z1++)
                {
                    if((int)pma3[z][z1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",pma3[z][z1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",pma3[z][z1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
                a++;
            }
        }
        else if(temp==2)
        {
            c.gup3();
            for(int zz=0;zz<13;zz++)
            {
                a=78;
                cout<<(char)a<<" ";
                for(int zz1=0;zz1<20;zz1++)
                {
                    if((int)gma3[zz][zz1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",gma3[zz][zz1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",gma3[zz][zz1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
        }
    }
    else if(tm==4)
    {
        if(temp==1)
        {
            c.pup4();
            for(int z=0;z<13;z++)
            {
                cout<<(char)a<<" ";
                for(int z1=0;z1<20;z1++)
                {
                    if((int)pma4[z][z1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",pma4[z][z1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",pma4[z][z1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
                a++;
            }
        }
        else if(temp==2)
        {
            c.gup4();
            for(int zz=0;zz<13;zz++)
            {
                a=78;
                cout<<(char)a<<" ";
                for(int zz1=0;zz1<20;zz1++)
                {
                    if((int)gma4[zz][zz1]==66)
                    {
                        textcolor(4);
                        cprintf("%c",gma4[zz][zz1]);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1);
                        cprintf("%c",gma4[zz][zz1]);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
        }
    }
    /*int sg;
    cout<<"No. of seats left for 8:00 PM"<<endl;
    cout<<"Platinum-";
    ifstream seat;
    seat.open("Seat.txt");
    seat>>sp;
    cout<<sp<<"\n";
    cout<<"Gold-";
    seat>>sg;
    cout<<sg;
    cout<<"\n";
    cout<<"No. of seats left for 12:00 PM"<<endl;
    cout<<"Platinum-";
    ifstream seat2;
    seat2.open("Seat2.txt");
    seat2>>sp;
    cout<<sp<<"\n";
    cout<<"Gold-";
    seat2>>sg;
    cout<<sg;
    cout<<"\n";
    cout<<"No. of seats left for 4:00 PM"<<endl;
    cout<<"Platinum-";
    ifstream seat3;
    seat3.open("Seat3.txt");
    seat3>>sp;
    cout<<sp<<"\n";
    cout<<"Gold-";
    seat3>>sg;
    cout<<sg;
    cout<<"\n";
    cout<<"No. of seats left for 8:00 PM"<<endl;
    cout<<"Platinum-";
    ifstream seat4;
    seat4.open("Seat4.txt");
    seat4>>sp;
    cout<<sp<<"\n";
    cout<<"Gold-";
    seat4>>sg;
    cout<<sg;
    cout<<"\n";*/
}
void cinema::tret()
{
    ifstream seat;
    seat.open("Seat.txt",ios::beg);
    seat>>srp;
    seat>>srg;
    ifstream seat2;
    seat2.open("Seat2.txt",ios::beg);
    seat2>>srp2;
    seat2>>srg2;
    ifstream seat3;
    seat3.open("Seat3.txt",ios::beg);
    seat3>>srp3;
    seat3>>srg3;
    ifstream seat4;
    seat4.open("Seat4.txt",ios::beg);
    seat4>>srp4;
    seat4>>srg4;
    c.ret();
}
void cinema::bill()
{
    clrscr();
    ch=3;
    while(ch>2)
    {
        tm=5;
        while(tm>4||tm==0)
        {
            clrscr();
            cout<<"Enter the time of the show-";
            cout<<endl<<"1. 8:00 AM";
            cout<<endl<<"2. 12:00 PM";
            cout<<endl<<"3. 4:00 PM";
            cout<<endl<<"4. 8:00 PM"<<endl;
            cin>>tm;
        }
        clrscr();
        ch=3;
        while(ch>2||ch==0)
        {
            clrscr();
            cout<<"\nType of seat- \n1. Platinum \n2. Gold\n";
            cin>>ch;
            nsp=nsg=0;
            switch(ch)
            {
                case 1:
                    nsp=0;
                    cout<<"\nNo. of seats you want to book-";
                    cin>>nsp;
                    break;
                case 2:
                    nsg=0;
                    cout<<"\nNo. of seats you want to book-";
                    cin>>nsg;
                    break;
                default:
                    cout<<"\nEnter correct option";
            }
        }
        clrscr();
    }
    int t=0;
    if(tm==1)
    {
        ofstream pt;
        pt.open("st.txt",ios::beg);
        ofstream gt;
        gt.open("gst.txt",ios::beg);
        ofstream pn;
        pn.open("no.txt",ios::beg);
        ofstream gn;
        gn.open("gno.txt",ios::beg);
        for(int z=1;z<=nsp;z++)
        {
            ifstream pmat;
            pmat.open("Pmat.txt");
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            int cha=65;
            for(int z=0;z<13;z++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int z1=0;z1<20;z1++)
                {
                    char a;
                    pmat>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book\n";
            cin>>co;
            cin>>cp;
            c.pmup();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        for(int zz=1;zz<=nsg;zz++)
        {
            ifstream gmat;
            gmat.open("Gmat.txt");
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            int cha=78;
            for(int zz=0;zz<13;zz++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int zz1=0;zz1<20;zz1++)
                {
                    char a;
                    gmat>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book\n";
            cin>>co;
            cin>>cp;
            gt<<co<<"\n";
            gn<<cp<<"\n";
            c.gmup();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        ifstream seat;
        seat.open("Seat.txt");
        int sp1,gp1;
        seat>>sp1;
        seat>>gp1;
        if(sp1==0&&ch==1)
        {
            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        if(gp1==0&&ch==2)
        {
            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        ofstream sea;
        seat.open("Sea.txt");
        sea<<(sp1-nsp);
        sea<<(gp1-nsg);
        ifstream pr;
        pr.open("price.txt");
        int ppr,gpr;
        pr>>ppr;
        pr>>gpr;
        ifstream out;
        out.open("myshow.txt");
        char nms[70];
        out>>nms;
        clrscr();/*
	for(int i=0;i<3;i++)
	{
		cout<<"Printing Bill, Please wait";
		delay(500);
		clrscr();
		cout<<"Printing Bill, Please wait.";
		delay(500);
		clrscr();
		cout<<"Printing Bill, Please wait..";
		delay(500);
		clrscr();
		cout<<"Printing Bill, Please wait...";
		delay(500);
		clrscr();
	}          */
        cout<<"_______________________________________________ \n";
        cout<<"Movie Name\tNo. of seats booked\tPrice"<<endl;
        cout<<nms;
        cout<<"\t\t";
        if(ch==1)
        {
            cout<<nsp<<"\t\t";
            cout<<ppr<<"\t\t";
        }
        else if(ch==2)
        {
            cout<<nsg<<"\t\t";
            cout<<gpr<<"\t\t";
        }
        cout<<"\nSeats name-";
        if(ch==1)
            c.plat();
        else if(ch==2)
            c.gold();
        c.upp();
    }
    else if(tm==2)
    {
        for(int z=1;z<=nsp;z++)
        {
            ifstream pmat2;
            pmat2.open("Pmat2.txt");
            int cha=65;
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            for(int z=0;z<13;z++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int z1=0;z1<20;z1++)
                {
                    char a;
                    pmat2>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book";
            cin>>co;
            cin>>cp;
            c.pmup2();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        for(int zz=1;zz<=nsg;zz++)
        {
            ifstream gmat2;
            gmat2.open("Gmat2.txt");
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            int cha=78;
            for(int zz=0;zz<13;zz++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int zz1=0;zz1<20;zz1++)
                {
                    char a;
                    gmat2>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book";
            cin>>co;
            cin>>cp;
            c.gmup2();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        ifstream seat2;
        seat2.open("Seat2.txt");
        int sp2,gp2;
        seat2>>sp2;
        seat2>>gp2;
        if(sp2==0&&ch==1)
        {
            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        if(gp2==0&&ch==2)
        {
            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        ofstream sea;
        seat2.open("Sea.txt");
        sea<<(sp2-nsp);
        sea<<(gp2-nsg);
        ifstream pr;
        pr.open("price.txt");
        int ppr,gpr;
        pr>>ppr;
        pr>>gpr;
        ifstream out;
        out.open("myshow.txt");
        char nms[70];
        out>>nms;
        clrscr();
        for(int i=0;i<3;i++)
        {
            cout<<"Printing Bill, Please wait";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait.";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait..";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait...";
            delay(500);
            clrscr();
        }
        cout<<"_______________________________________________ \n";
        cout<<"Movie Name\tNo. of seats booked\tPrice"<<endl;
        cout<<nms;
        cout<<"\t\t";
        if(ch==1)
        {
            cout<<nsp<<"\t\t";
            cout<<ppr<<"\t\t";
        }
        else if(ch==2)
        {
            cout<<nsg<<"\t\t";
            cout<<gpr<<"\t\t";
        }
        cout<<"\nSeats name-";
        if(ch==1)
            c.plat2();
        else if(ch==2)
            c.gold2();
        c.upp();
    }
    else if(tm==3)
    {
        for(int z=1;z<=nsp;z++)
        {
            ifstream pmat3;
            pmat3.open("Pmat3.txt");
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            int  cha=65;
            for(int z=0;z<13;z++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int z1=0;z1<20;z1++)
                {
                    char a;
                    pmat3>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book";
            cin>>co;
            cin>>cp;
            c.pmup4();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        for(int zz=1;zz<=nsg;zz++)
        {
            ifstream gmat3;
            gmat3.open("Gmat3.txt");
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            int cha=78;
            for(int zz=0;zz<13;zz++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int zz1=0;zz1<20;zz1++)
                {
                    char a;
                    gmat3>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book";
            cin>>co;
            cin>>cp;
            c.gmup3();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        ifstream seat3;
        seat3.open("Seat3.txt");
        int sp3,gp3;
        seat3>>sp3;
        seat3>>gp3;
        if(sp3==0&&ch==1)
        {
            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        if(gp3==0&&ch==2)
        {
            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        ofstream sea;
        seat3.open("Sea.txt");
        sea<<(sp3-nsp);
        sea<<(gp3-nsg);
        ifstream pr;
        pr.open("price.txt");
        int ppr,gpr;
        pr>>ppr;
        pr>>gpr;
        ifstream out;
        out.open("myshow.txt");
        char nms[70];
        out>>nms;
        clrscr();
        for(int i=0;i<3;i++)
        {
            cout<<"Printing Bill, Please wait";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait.";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait..";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait...";
            delay(500);
            clrscr();
        }
        cout<<"_______________________________________________ \n";
        cout<<"Movie Name\tNo. of seats booked\tPrice"<<endl;
        cout<<nms;
        cout<<"\t\t";
        if(ch==1)
        {
            cout<<nsp<<"\t\t";
            cout<<ppr<<"\t\t";
        }
        else if(ch==2)
        {
            cout<<nsg<<"\t\t";
            cout<<gpr<<"\t\t";
        }
        cout<<"\nSeats name-";
        if(ch==1)
            c.plat3();
        else if(ch==2)
            c.gold3();
        c.upp();
    }
    else if(tm==4)
    {
        for(int z=1;z<=nsp;z++)
        {
            ifstream pmat4;
            pmat4.open("Pmat4.txt");
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            int cha=65;
            for(int z=0;z<13;z++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int z1=0;z1<20;z1++)
                {
                    char a;
                    pmat4>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book";
            cin>>co;
            cin>>cp;
            c.pmup4();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        for(int zz=1;zz<=nsg;zz++)
        {
            ifstream gmat4;
            gmat4.open("Gmat4.txt");
            cout<<"   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
            int cha=78;
            for(int zz=0;zz<13;zz++)
            {
                cout<<(char)cha<<"  ";
                cha++;
                for(int zz1=0;zz1<20;zz1++)
                {
                    char a;
                    gmat4>>a;
                    if((int)a==66)
                    {
                        textcolor(4);
                        cprintf("%c",a);
                        textcolor(7);
                        cout<<"  ";
                    }
                    else
                    {
                        textcolor(1) ;
                        cprintf("%c",a);
                        cout<<"  ";
                    }
                }
                textcolor(7);
                cout<<"\n";
            }
            cout<<"Enter the seat no. which you want to book";
            cin>>co;
            cin>>cp;
            c.gmup4();
            pgt[t]=co;
            pgn[t]=cp;
            t++;
        }
        ifstream seat4;
        seat4.open("Seat4.txt");
        int sp4,gp4;
        seat4>>sp4;
        seat4>>gp4;
        if(sp4==0&&ch==1)
        {

            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        if(gp4==0&&ch==2)
        {
            cout<<"Sorry, This show is Housefull";
            goto xy;
        }
        ofstream sea;
        seat4.open("Sea.txt");
        sea<<(sp4-nsp);
        sea<<(gp4-nsg);
        ifstream pr;
        pr.open("price.txt");
        int ppr,gpr;
        pr>>ppr;
        pr>>gpr;
        ifstream out;
        out.open("myshow.txt");
        char nms[70];
        out>>nms;
        clrscr();
        for(int i=0;i<3;i++)
        {
            cout<<"Printing Bill, Please wait";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait.";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait..";
            delay(500);
            clrscr();
            cout<<"Printing Bill, Please wait...";
            delay(500);
            clrscr();
        }
        cout<<"_______________________________________________ \n";
        cout<<"Movie Name\tNo. of seats booked\tPrice"<<endl;
        cout<<nms;
        cout<<"\t\t";
        if(ch==1)
        {
            cout<<nsp<<"\t\t";
            cout<<ppr<<"\t\t";
        }
        else if(ch==2)
        {
            cout<<nsg<<"\t\t";
            cout<<gpr<<"\t\t";
        }
        cout<<"\nSeats name-";
        if(ch==1)
            c.plat4();
        else if(ch==2)
            c.gold4();
        c.upp();
    }
    xy:
}
void main()
{
    int pa[4]={1};
    clrscr();
    cout<<"\n**********************************************";
    cout<<"\n*                                         TM *";
    cout<<"\n*  PPPPPPPP    V             V    RRRRRRRR   * ";
    cout<<"\n*  P       P    V           V     R       R  * ";
    cout<<"\n*  P       P     V         V      R       R  * ";
    cout<<"\n*  PPPPPPPP       V       V       RRRRRRRR   * ";
    cout<<"\n*  P               V     V        R  R       * ";
    cout<<"\n*  P                V   V         R    R     * ";
    cout<<"\n*  P                  V           R      R   * ";
    cout<<"\n*                                            *";
    cout<<"\n**********************************************\n";
    int log=1;
    xy:
    cout<<""<<endl<<"Please enter your login password to continue"<<endl;
    while(log<4)
    {
        log++;
        for(i=0;i<=3;i++)
        {
            pa[i]=getch();
            putch('*');
        };
        if(pa[0]==49&&pa[1]==50&&pa[2]==51&&pa[3]==52)
        {
            do
            {
                clrscr();
                cout<<"\n**********************************************";
                cout<<"\n*                                         TM *";
                cout<<"\n*  PPPPPPPP    V             V    RRRRRRRR   * ";
                cout<<"\n*  P       P    V           V     R       R  * ";
                cout<<"\n*  P       P     V         V      R       R  * ";
                cout<<"\n*  PPPPPPPP       V       V       RRRRRRRR   * ";
                cout<<"\n*  P               V     V        R  R       * ";
                cout<<"\n*  P                V   V         R    R     * ";
                cout<<"\n*  P                  V           R      R   * ";
                cout<<"\n*                                            *";
                cout<<"\n**********************************************\n";
                cout<<endl<<"Menu-"<<endl;
                cout<<endl<<"1. Input name of the Show";
                cout<<endl<<"2. Input seats";
                cout<<endl<<"3. Input rate of the movie";
                cout<<endl<<"4. Show no. of Seats left";
                cout<<endl<<"5. Add seats [Tickets returned]";
                cout<<endl<<"6. Print bill";
                cout<<endl<<"7. Exit";
                cout<<endl<<"Enter Your Choice(1 to 7): ";
                int wish;
                cin>>wish;
                clrscr();
                switch(wish)
                {
                    case 1:
                        c.sname();
                        break;
                    case 2:
                        /*	{
                     ofstream pt4;
                     pt4.open("pst4.txt");
                     pt4<<78;
                     ofstream gt4;
                     gt4.open("gst4.txt");
                     gt4<<65;
                     ofstream pn4;
                     pn4.open("pno4.txt");
                     pn4<<0;
                     ofstream gn4;
                     gn4.open("gno4.txt");
                     gn4<<0;
                     }*/
                        ofstream gmat4;
                        gmat4.open("Gmat4.txt");
                        for(int z7=0;z7<13;z7++)
                        {
                            for(int zz7=0;zz7<20;zz7++)
                            {
                                gma4[z7][zz7]='U';
                                gmat4<<gma4[z7][zz7];
                            }
                            gmat4<<"\n";
                        }
                        c.newf();
                        c.nseat();
                        break;
                    case 3:
                        c.sprice();
                        break;
                    case 4:
                        c.sleft();
                        break;
                    case 5:
                        c.tret();
                        break;
                    case 6:
                        c.bill();
                        break;
                    case 7:
                    {
                        cout<<endl<<endl<<endl<<endl<<endl;
                        cout<<"  *****************************************************************************";
                        cout<<"	  *	  			   ";
                        textcolor(9);
                        cprintf("DIT University");
                        cout<<"			      *"<<endl;
                        cout<<"  *									      *"<<endl;
                        cout<<"  *	  			     ";
                        textcolor(4);
                        cprintf("Project on");
                        cout<<"				      *"<<endl;
                        cout<<"  *	 		   ";
                        cprintf("Cinema Ticket Booking System");
                        cout<<"			      *"<<endl;
                        cout<<"  *									      *"<<endl;
                        cout<<"  *									      *"<<endl;
                        cout<<"  *									      *"<<endl;
                        cout<<"  *  Submitted To						Submitted By  *"<<endl;
                        cout<<"  *  Ms. Lovepreet kaur Ma'am				    ";
                        textcolor(3);
                        cprintf("1. Harsh Jaiswal");
                        cout<<"  *"<<endl;
                        cout<<"  *  IBM Faculty 					    ";
                        cprintf("2. Tanuj Tayal");
                        cout<<"    *"<<endl;
                        cout<<"  *              					    ";
                        cprintf("3. Ujjawal Yadav");
                        cout<<"  *"<<endl;
                        cout<<"  *              					    ";
                        cprintf("4. Yash Saxena");
                        cout<<"    *"<<endl;
                        cout<<"  *									      *"<<endl;
                        textcolor(5);
                        cout<<"  *****************************************************************************";
                        delay(4000);
                        exit(0);
                    }
                    default:
                        cout<<"Please Enter the Correct Choice!!!";
                }
                cout<<endl<<"Press Any Key To Continue.......";
                getch();
            }while(1);
        }
        else
        {
            clrscr();
            cout<<"\n**********************************************";
            cout<<"\n*                                         TM *";
            cout<<"\n*  PPPPPPPP    V             V    RRRRRRRR   * ";
            cout<<"\n*  P       P    V           V     R       R  * ";
            cout<<"\n*  P       P     V         V      R       R  * ";
            cout<<"\n*  PPPPPPPP       V       V       RRRRRRRR   * ";
            cout<<"\n*  P               V     V        R  R       * ";
            cout<<"\n*  P                V   V         R    R     * ";
            cout<<"\n*  P                  V           R      R   * ";
            cout<<"\n*                                            *";
            cout<<"\n**********************************************\n";
            textcolor(388);
            cprintf("ERROR Please enter your correct login details !!!");
            textcolor(23);
            cprintf("\n");
            if(log==4)
            {
                int x=14,y=14;
                while(!kbhit())
                {
                    clrscr();
                    cout<<"\n**********************************************";
                    cout<<"\n*                                         TM *";
                    cout<<"\n*  PPPPPPPP    V             V    RRRRRRRR   * ";
                    cout<<"\n*  P       P    V           V     R       R  * ";
                    cout<<"\n*  P       P     V         V      R       R  * ";
                    cout<<"\n*  PPPPPPPP       V       V       RRRRRRRR   * ";
                    cout<<"\n*  P               V     V        R  R       * ";
                    cout<<"\n*  P                V   V         R    R     * ";
                    cout<<"\n*  P                  V           R      R   * ";
                    cout<<"\n*                                            *";
                    cout<<"\n**********************************************\n";

                    gotoxy(x,y);
                    cout<<"Please contact the Admin of the Software for correct password";
                    delay(100);
                    x++;
                    if(x>=81)
                        x=0;
                }
                delay(2500);
            }
            goto xy;
        }
    }
}


