#include"Singleton.cpp"
#include"head.h"

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