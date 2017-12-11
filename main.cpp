#include <iostream>
#include<cstring>

using namespace std;
struct studentT
{
    int no;
    char name[20];
    int grade;
    bool flag;
};
int i=0;
studentT studentarray[10010];
void add()
{
    bool flag=0;
    cin>>studentarray[i].no;
    cin>>studentarray[i].name;
    cin>>studentarray[i].grade;


    for(int a=0; a<i; a++)
    {

        if(studentarray[i].no==studentarray[a].no)
        {
            cout<<"FAILED"<<endl;
            i--;
            flag=1;
            break;

        }

    }
    if(flag==0)
        cout<<"SUCCESS"<<endl;
    i++;

}
void display()
{
    if(i>0)
    {
        for(int a=0; a<i; a++)
        {
            cout<<studentarray[a].no<<' '<<studentarray[a].name<<' '<<studentarray[a].grade<<endl;
        }
    }
}
void no()
{
    int no;
    cin>>no;
    for(int a=0; a<i; a++)
    {
        if(no==studentarray[a].no)
        {
            cout<<studentarray[a].no<<' '<<studentarray[a].name<<' '<<studentarray[a].grade<<endl;

            break;
        }
    }
}
void name()
{
    char nam[20];
    cin>>nam;

    for(int a=0; a<i; a++)
    {

        if(strcmp(nam,studentarray[a].name)==0)
        {
            cout<<studentarray[a].no<<studentarray[a].name<<studentarray[a].grade<<endl;
            break;
        }
    }

}
void noup()
{
    int nomax;
    for(int a=0; a<i; a++)
        studentarray[a].flag=0;
    for(int p=0; p<i; p++)
    {
        nomax=0;
        int k=0;
        for(int q=0; q<i; q++)
        {
            if(studentarray[q].no>nomax&&studentarray[q].flag==0)
            {
                nomax=studentarray[q].no;
                k=q;

            }

        }
        cout<<studentarray[k].no<<studentarray[k].name<<studentarray[k].grade<<endl;
        studentarray[k].flag=1;

    }
}
void gradedown()
{
    int grademin;
    for(int a=0; a<i; a++)
        studentarray[a].flag=0;
    for(int p=0; p<i; p++)
    {
        grademin=0;
        int k=0;
        for(int q=0; q<i; q++)
        {
            if(studentarray[q].grade>grademin&&studentarray[q].flag==0)
            {
                grademin=studentarray[q].grade;
                k=q;

            }

        }
        cout<<studentarray[k].no<<studentarray[k].name<<studentarray[k].grade<<endl;
        studentarray[k].flag=1;

    }
}

int main()
{
    int x;

    while(1)

    {
        cin>>x;
        switch(x)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            no();
            break;
        case 4:
            name();
            break;
        case 5:
            noup();
            break;
        case 6:
            gradedown();
            break;
        case 7:
            return 0;
            break;

        }
    }
}
