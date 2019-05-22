#include"Singleton.cpp"
#include"head.h"

int main(){
    setlocale(LC_ALL, "Russian");
    Singleton *s = s->getInstance();
    Singleton *s1;
    int button = 1,button2, flag=0,button3=1;
    char nm[50];
	while (button) {
    cout << "\nВыберите действие:\n";
    cout << "|1| - Создать создание\n";
    cout << "|2| - Показать создания из файла\n";
    cout << "|3| - Загрузить создание из файла\n";
    if(flag==0)
    cout << "|4| - Создать еще 1 объект класса ""одиночка""\n";
    if(flag==1)
    cout << "|4| - Показать содержание 2х объектов одиночек\n";
    cout << "|0| - Выход.\n";
		cin >> button;
		switch (button) {
		case 1:
        s->getcreature();
        s->fenix();
        break;
		case 2:
        cout << "|1| - Показать всю информацию:\n";
        cout << "|2| - Показать информацию о конкретном создании:\n";
        cout << "|0| - Выход.\n";
        cin>>button2;
        if(button2==1)
        s->reincornate(0,"");
        if(button2==2){
        cout<<"Доступные монстры:";
        s->reincornate(1,"");
        cout<<"\nО ком вы бы хотели узнать?\n";
        cin>>nm;
        s->reincornate(2,nm);
        }
        else
        break;
        break;
		case 0:
        break;
        case 3:
        cout<<"Доступные монстры:";
        s->reincornate(1,"");
        cout<<"\nКого бы вы хотели загрузить?\n";
        cin>>nm;
        if(flag!=0){
        cout<<"\nВ какой объект вы бы хотели загрузить создание?(1 в первый, 2 - во второй)\n";
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
        cout<<"\nСодержание 1го объекта:\n";
        s->show();
        cout<<"\nСодержание 2го объекта:\n";
        s1->show();
        }
		}
	}
}