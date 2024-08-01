#include<iostream.h>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

class Bank
{
    private:
    int id=0;
    string name="";
    int amount=0;   
    public:
    Bank(int userid,string Name,int Amount=0)
    {
        this->id=userid;
        this->name=Name;
        this->amount= Amount;
    }
    void show_detail()
    {
        cout<<this->id<<"  "<<this->name<<" "<<this->amount<<endl; 
    }
    void add_amount(int Amount)
    {
        if(Amount<=0)
        {
            cout<<"\nenter valid amount"<<endl;
        }
        else
        {
            this->amount+=Amount;
        }
    }
    void withdraw_amount(int Amount)
    {
        if((this->amount-Amount)<0)
        {
            cout<<"\nenter valid amount"<<endl;
        }
        else
        {
            this->amount-=Amount;
        }
    }
    int get_id()
    {
        return this->id;
    }  
    int get_amount()
    {
        return this->amount;
    } 
    string get_name()
    {
        return this->name;
    } 
};

int main()
{
    vector<Bank> manager;
    ifstream fin("record.txt");
    int ac_count;
    fin>>ac_count;
    for (int i=0;i<ac_count;i++)
    {
        int id,amu;
        string c_name;
        fin>>id;
        fin>>c_name;
        fin>>amu;
        manager.push_back(Bank(id,c_name,amu));
        
        
    }
    fin.close();
    int choice;
    string Name;
    int ID, Value,key,count=0,valid=1;

    while(1)
    {
        cout<<"\n              enter your choice"<<endl;
        cout<<"1)  create account"<<endl;
        cout<<"2)  delete account"<<endl;
        cout<<"3)  add amount"<<endl;
        cout<<"4)  withdraw amount"<<endl;
        cout<<"5)  show current status"<<endl;
        cout<<"6)  show current bank status"<<endl;
        cout<<"7)  exit"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                    do{
                        cout<<"\nEnter id ";
                        cin>>ID; 
                        valid=0;
                        for(auto &a: manager)
                        {
                            if(a.get_id()==ID)
                            {
                                cout<<"\nGiven id IS already exists try with another id"<<endl;
                                valid=1;
                            }
                        }

                    }while(valid==1);
                    cout<<"Enter name ";
                    cin>>Name;
                    cout<<"Enter value ";
                    cin>>Value;
                    manager.push_back(Bank(ID,Name,Value)); 
            break;
            case 2: 
                    cout<<"\nEnter customer id ";
                    cin>>ID; 
                    key=1;
                    count=0;  
                    for(auto &a : manager)
                    {            
                        if(a.get_id()==ID)
                        {

                            key=0;
                            manager.erase(manager.begin()+ count);
                            cout<<"\naccount deleted successfully";
                            break;
                        }
                        count++;
                    }
                    if(key)
                    {
                        cout<<"\nInvalid customer ID";
                        cout<<count<<endl;
                    }  
            break;
            case 3:
                    cout<<"\nEnter customer id ";
                    cin>>ID;
                    cout<<"\nEnter Amount ";
                    cin>>Value;
                    key=1;
                    for(auto &a : manager)
                    {
                    if(a.get_id()==ID)
                    {
                        key=0;
                        a.add_amount(Value);
                        a.show_detail();
                        break;
                    }
                    }
                    if(key)
                    {
                        cout<<"\nInvalid customer ID";
                    }         
            break;
            case 4:
                    cout<<"\nEnter customer id ";
                    cin>>ID;
                    cout<<"\nEnter Amount ";
                    cin>>Value;
                    key=1;
                    for(auto &a : manager)
                    {
                        if(a.get_id()==ID)
                        {
                            key=0;
                            a.withdraw_amount(Value);
                            a.show_detail();
                            break;
                        }
                    }
                    if(key)
                    {
                        cout<<"\nInvalid customer ID";
                    }         
            break;
            case 5: 
                    cout<<"\nEnter customer id ";
                    cin>>ID; 
                    key=1;  
                    for(auto &a : manager)
                    {
                        if(a.get_id()==ID)
                        {
                            key=0;
                            a.show_detail();
                            break;
                        }
                    }
                    if(key)
                    {
                        cout<<"\nInvalid customer ID";
                    }  
            break;
            case 6:
                    for(auto &a : manager)
                    {
                        a.show_detail();
                    }
            break;
            case 7:
                    ofstream fout("record.txt");
                    fout<<manager.size();
                    fout<<endl;
                    for (int i=0;i<manager.size(); i++)
                    { 
                        fout<<manager[i].get_id()<<" ";
                        fout<<manager[i].get_name()<<" ";
                        fout<<manager[i].get_amount();
                        fout<<endl;
                    }
                    fout.close();
                    return 0;
            break;           
        }// end of switch
    }//end of while 
    return 0;
}