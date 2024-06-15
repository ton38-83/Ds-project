//Railway Management System
#include<iostream>
#include<string>
using namespace std;

class PassengerStack{
    public:
    string arr[5];
    int cnt=-1;
    void push(string s){if (cnt>=-1 && cnt <4){
        cnt++;
        arr[cnt]=s;} 
    else{cout<<"Passenger Stack Full"<<endl;}}
    void pop(){if(cnt>-1 && cnt<5){cnt--;}else{cout<<"Passenger Stack Empty"<<endl;}}
    void print(){if(cnt>-1){for(int i=0;i<=cnt;i++){cout<<"  "<<arr[i];}cout<<endl;}else{cout<<"Empty Stack"<<endl;}
    }
};

class TrainStack{    
    public:
    string arr[5];
    int cnt=-1;
    void push(string s){if (cnt>=-1 && cnt <4){cnt++;arr[cnt]=s;}else{cout<<"Train Stack Full"<<endl;}}
    void pop(){if(cnt>-1 && cnt<5){cnt--;}else{cout<<"Train Stack Full"<<endl;}}
    void print(){if(cnt>-1){for(int i=0;i<=cnt;i++){cout<<"  "<<arr[i];}cout<<endl;}
    else{cout<<"Empty Stack"<<endl;}}
    };


//End of stack implementation
int main(){ 
        char stackoption;
        while(stackoption!='c'){//Stack Menu option
            cout<<"Choose from the following provided stacks: "<<endl<<"A. Passenger"<<endl<<"B. Train"<<endl<<"C. Exit"<<endl;
            cin>>stackoption;
            stackoption=tolower(stackoption);

            if(stackoption=='a'){//Passenger Stack
                int size;
                cout<<"Enter the stack size: "<<endl;
                cin>>size;
                PassengerStack *ps=new PassengerStack[size];//no. of stack objects 
                
                int psopt=0;
                while(psopt!=4){
                    cout<<"Choose the following: "<<endl<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Print"<<endl<<"4. Quit"<<endl;
                    cin>>psopt;
                    cin.ignore();

                    if(psopt==1){//Insert into Passenger Stack

                    for(int i=0;i<size;i++){
                        cout<<endl<<"Enter data for the "<<i+1 <<" stack: "<<endl;
                        for(int j=0;j<5;j++){
                            
                            if(j==0){
                            cout<<"Enter Passenger Id: "<<endl;
                            }
                            else if(j==1){
                            cout<<"Enter Passenger Name: "<<endl;
                            }
                            else if(j==2){
                            cout<<"Enter Passenger Age: "<<endl;
                            }
                            else if(j==3){
                            cout<<"Enter Passenger Seat Number: "<<endl;
                            }
                            else if(j==4){cout<<"Passenger Reservation Status: "<<endl;}
                            string data;
                            
                            getline(cin,data);
                            ps[i].push(data);
                        }
                        
                    }
                    
                    }

                    else if(psopt==2){//Delete into Passenger Stack
                    int delsize;
                    cout<<"Enter the number of stacks to delete: "<<endl;
                    cin>>delsize;
                    for(int i=delsize;i>=0;i--){
                        for(int j=0;j<5;j++){
                            ps[i].pop();}
                           
                    }

                    }

                    else if(psopt==3){//Printing stacks
                    for(int j=0;j<5;j++){
                        switch(j){
                        case 0:
                        cout<<" Id";
                        break;
                        case 1:
                        cout<<" Name";
                        break;
                        case 2:
                        cout<<" Age";
                        break;
                        case 3:
                        cout<<" Seat Number";
                        break;
                        case 4:
                        cout<<" Reservation of status";
                        break;
                        }
                    }
                    cout<<endl;
                    for(int i=0;i<size;i++){
                        ps[i].print();
                    }
                    
                    }

                }
                cout<<"Exit Successful!!"<<endl;
                }//End of pasenger stack

            if(stackoption=='b'){//Train Stack
                int size;
                cout<<"Enter the stack size: "<<endl;cin>>size;
                TrainStack *ts=new TrainStack[size]; 
                int tsopt=0;
                while(tsopt!=4){
                    cout<<"Choose the following: "<<endl<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Print"<<endl<<"4. Quit"<<endl;
                    cin>>tsopt;
                    cin.ignore();

                    if(tsopt==1){//Insert into train stack

                        for(int i=0;i<size;i++){
                        cout<<endl<<"Enter data for the "<<i+1<<"th stack: "<<endl;
                        for(int j=0;j<5;j++){
                            string data;
                            if(j==0){
                            cout<<"Enter Train Number: "<<endl;
                            }
                            else if(j==1){
                            cout<<"Enter Train Name: "<<endl;
                            }
                            else if(j==2){
                            cout<<"Enter Arrival Time: "<<endl;
                            }
                            else if(j==3){
                            cout<<"Enter Departure Time: "<<endl;
                            }
                            else if(j==4){cout<<"Availibity of seats: "<<endl;}
                            getline(cin,data);
                            ts[i].push(data);
                        }
                        
                    }
                    }

                    else if(tsopt==2){//delete train stack
                    int delsize;
                    cout<<"Enter the number of stacks to delete: "<<endl;
                    cin>>delsize;
                    for(int i=delsize;i>=0;i--){//reverse deletion of stacks
                        for(int j=0;j<5;j++){
                            ts[i].pop();}
                           
                    }

                    }

                    else if(tsopt==3){//print train stack
                    for(int j=0;j<5;j++){
                        switch(j){
                        case 0:
                        cout<<" Train_No.";
                        break;
                        case 1:
                        cout<<" Train_Name";
                        break;
                        case 2:
                        cout<<" Arrival Time";
                        break;
                        case 3:
                        cout<<" Departure Time";
                        break;
                        case 4:
                        cout<<" Availibity of Seats";
                        break;
                        }
                    }
                    cout<<endl;
                    for(int i=0;i<size;i++){
                        ts[i].print();
                    }
                    }

                    }
                cout<<"Exit Successful!!"<<endl;
            }//End of Train stack
   
      }
      cout<<"Exit Successful!!"<<endl;

      return 0;
     }


