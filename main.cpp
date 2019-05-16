#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Singleton {

   private:
   Singleton( const Singleton& );
   Singleton& operator=( Singleton& );
    char* name;
    char* razmer;
    char* cvet;
    char* svoystva;
    char* mifolog;
    char* opisaniye;
    char* sposobatak;
    char buffer[50];
    int tail,wings,legs,flag;
    int clegs=0;
    static int acs;
    static bool x;

    Singleton() {
    name=new char[50];
    //name="";
    razmer=new char[50];
    cvet=new char[50];
    svoystva=new char[50];
    mifolog=new char[50];
    opisaniye=new char[50];
    sposobatak=new char[50];

    //razmer="";
    //cvet="";
    //svoystva="";
    //mifolog="";
    //opisaniye="";
    //sposobatak="";
    acs++;
    }


     ~Singleton() {
    delete name;
    delete razmer;
    delete cvet;
    delete svoystva;
    delete mifolog;
    delete opisaniye;
    delete sposobatak;

    }

   public:

    static transformSing(){
    x=!x;
    }


   static Singleton *getInstance() {

      if(x==0){
      static Singleton instance1;
      return &instance1;}


      if(x!=0){
        if(acs==1){
      static Singleton instance2;
      return &instance2;}
            if(acs==2){
      static Singleton instance3;
      return &instance3;}
            if(acs==3){
      static Singleton instance4;
      return &instance4;}
            if(acs==4){
      static Singleton instance5;
      return &instance5;}
      }

   }
   void getcreature(){
    cout << "\n������� �������� �������\n";
    cin >> name;
    cout << "�� ����� �� ���������?\n";
    cin >> mifolog;
	cout << "������ �� �������?\n";
	cin >> razmer;
	cout << "����� � ���� �������?\n";
	cin >> cvet;
	cout << "����� � ���� ������ ��������?\n";
	cin >> opisaniye;
	cout << "����� ������� �������� ��� ������\n";
	cin >> sposobatak;
    cout << "� ���� ���� ����(����)? (1 - ��; 0 - ���)\n";
    cin >> legs;
    if(legs==1){
    cout << "������� � ���� ���(����)?\n";
    cin >>clegs;}
    else clegs=0;
    cout << "� ���� ���� ������? (1 - ��; 0 - ���)\n";
    cin >> wings;
   }

   void fenix(){
    ofstream ofs("text.txt", ios::binary| ios::app);
    strcpy(buffer,name);
    ofs.write(reinterpret_cast<char*>(&buffer), sizeof(buffer));
    strcpy(buffer,razmer);
    ofs.write(reinterpret_cast<char*>(&buffer), sizeof(buffer));
    strcpy(buffer,cvet);
    ofs.write(reinterpret_cast<char*>(&buffer), sizeof(buffer));
    strcpy(buffer,svoystva);
    ofs.write(reinterpret_cast<char*>(&buffer), sizeof(buffer));
    strcpy(buffer,mifolog);
    ofs.write(reinterpret_cast<char*>(&buffer), sizeof(buffer));
    strcpy(buffer,sposobatak);
    ofs.write(reinterpret_cast<char*>(&buffer), sizeof(buffer));
    strcpy(buffer,opisaniye);
    ofs.write(reinterpret_cast<char*>(&buffer), sizeof(buffer));


    ofs.write(reinterpret_cast<char*>(&tail), sizeof(tail));
    ofs.write(reinterpret_cast<char*>(&wings), sizeof(wings));
    ofs.write(reinterpret_cast<char*>(&legs), sizeof(legs));
    ofs.write(reinterpret_cast<char*>(&clegs), sizeof(clegs));
    ofs.close();
    }

     void reincornate(int f, char *nm){
    try
        {
            ifstream ifs("text.txt", ios::binary);
            if (!ifs)
            {
                throw 404;
            }
            else
            {
     while(ifs.read(reinterpret_cast<char*>(&buffer), sizeof(buffer))!=NULL){
     if(f==3&&strcmp(buffer,nm))
       ifs.seekg(316,ios::cur);
     else{
     strcpy(name,buffer);
     ifs.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
     strcpy(razmer,buffer);
     ifs.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
     strcpy(cvet,buffer);
     ifs.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
     strcpy(svoystva,buffer);
     ifs.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
     strcpy(mifolog,buffer);
     ifs.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
     strcpy(sposobatak,buffer);
     ifs.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
     strcpy(opisaniye,buffer);


     ifs.read(reinterpret_cast<char*>(&tail), sizeof(tail));
     ifs.read(reinterpret_cast<char*>(&wings), sizeof(wings));
     ifs.read(reinterpret_cast<char*>(&legs), sizeof(legs));
     ifs.read(reinterpret_cast<char*>(&clegs), sizeof(clegs));
     if(f==1)
     cout<<" \n"<<name;

     if(f==0)
     show();

     if(f==2)
     if(!strcmp(name,nm))
     show();

     if(f==3){
        show();
        break;
     }

     }
     }
     ifs.close();
            }
        }
        catch(int i)
        {
            cout<<"error "<<i<< " - ���� �����������!"<<endl;
        }
     }

     void show(){
    cout << "\n\n��� �������: "<<name;
    cout << "\n���������: "<<mifolog;
	cout << "\n������ �������: "<<razmer;
	cout << "\n�������: "<<cvet;
	cout << "\n������ ��������:"<<opisaniye;
	cout << "\n������� �������� ��� ������: "<<sposobatak;
    cout << "\n������� ���/���? (1 - ����; 0 - ���): "<<legs;
    if(legs==1)
    cout << "\n���������� ���(����): "<<clegs;
    cout << "\n������� �������(1 - ����; 0 - ���): "<<wings<<"\n";
   }
};




bool Singleton::x=0;
int Singleton::acs=0;



int main(){
    setlocale(LC_ALL, "Russian");
    Singleton *s = s->getInstance();
    Singleton *s1;
    int button = 1,button2, flag=0,button3=1;
    char nm[50];
	while (button) {
    cout << "\n�������� ��������:\n";
    cout << "|1| - ������� ��������\n";
    cout << "|2| - �������� �������� �� �����\n";
    cout << "|3| - ��������� �������� �� �����\n";
    if(flag==0)
    cout << "|4| - ������� ��� 1 ������ ������ ""��������""\n";
    if(flag==1)
    cout << "|4| - �������� ���������� 2� �������� ��������\n";
    cout << "|0| - �����.\n";
		cin >> button;
		switch (button) {
		case 1:
        s->getcreature();
        s->fenix();
        break;
		case 2:
        cout << "|1| - �������� ��� ����������:\n";
        cout << "|2| - �������� ���������� � ���������� ��������:\n";
        cout << "|0| - �����.\n";
        cin>>button2;
        if(button2==1)
        s->reincornate(0,"");
        if(button2==2){
        cout<<"��������� �������:";
        s->reincornate(1,"");
        cout<<"\n� ��� �� �� ������ ������?\n";
        cin>>nm;
        s->reincornate(2,nm);
        }
        else
        break;
        break;
		case 0:
        break;
        case 3:
        cout<<"��������� �������:";
        s->reincornate(1,"");
        cout<<"\n���� �� �� ������ ���������?\n";
        cin>>nm;
        if(flag!=0){
        cout<<"\n� ����� ������ �� �� ������ ��������� ��������?(1 � ������, 2 - �� ������)\n";
        cin>>button3;
        if(button3==2)
        s1->reincornate(3,nm);
        if(button3==1)
        s1->reincornate(3,nm);
        }
        else
        s->reincornate(3,nm);
        break;
        case 4:
        if(flag==0){
        Singleton::transformSing();
        s1=s1->getInstance();
        flag=1;
        }
        else{
        cout<<"\n���������� 1�� �������:\n";
        s->show();
        cout<<"\n���������� 2�� �������:\n";
        s1->show();
        }
		}
	}
}
