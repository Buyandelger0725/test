#include<iostream>
using namespace std;
int main()
{
    float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Nemeh\n";
        cout<<"2. Hasah\n";
        cout<<"3. Urjih\n";
        cout<<"4. Huvaah\n";
        cout<<"5. Garah\n\n";
        cout<<"Hiih uildelee songono uu(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = numOne+numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = numOne-numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = numOne*numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = numOne/numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}
