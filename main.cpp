#include <iostream>

using namespace std;

    int loop=0;
    int choise;

    bool b1=false;
    bool b2=false;
    bool b3=false;
    bool b4=false;
    bool b5=false;
    bool b6=false;
    bool b7=false;
    bool b8=false;
    bool b9=false;

    string s1=" ";
    string s2=" ";
    string s3=" ";
    string s4=" ";
    string s5=" ";
    string s6=" ";
    string s7=" ";
    string s8=" ";
    string s9=" ";

void Player1()
{
    cout<<"PLAYER X\n";
    cin>>choise;

    if (choise == 7 && b7 == false){
        s7="X";
        b7=true;
}else if (choise == 7 && b7 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 8 && b8 == false){
        s8="X";
        b8=true;
}else if (choise == 8 && b8 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 9 && b9 == false){
        s9="X";
        b9=true;
}else if (choise == 9 && b9 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 4 && b4 == false){
        s4="X";
        b4=true;
}else if (choise == 4 && b4 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 5 && b5 == false){
        s5="X";
        b5=true;
}else if (choise == 5 && b5 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 6 && b6 == false){
        s6="X";
        b6=true;
}else if (choise == 6 && b6 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 1 && b1 == false){
        s1="X";
        b1=true;
}else if (choise == 1 && b1 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 2 && b2 == false){
        s2="X";
        b2=true;
}else if (choise == 2 && b2 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 3 && b3 == false){
        s3="X";
        b3=true;
}else if (choise == 3 && b3 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise <= 9){
    cout<<
    "-------------------\n"<<
    "|  "<<s7<<"  |  "<<s8<<"  |  "<<s9<<"  |"<<endl<<
    "-------------------\n"<<
    "|  "<<s4<<"  |  "<<s5<<"  |  "<<s6<<"  |"<<endl<<
    "-------------------\n"<<
    "|  "<<s1<<"  |  "<<s2<<"  |  "<<s3<<"  |"<<endl<<
    "-------------------\n"<<endl;
}else{
    cout << "Thats not a valid number!"<<endl;
}
    if (s7 == "X" && s8 == "X" && s9 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s4 == "X" && s5 == "X" && s6 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s1 == "X" && s2 == "X" && s3 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s7 == "X" && s4 == "X" && s1 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s8 == "X" && s5 == "X" && s2 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s9 == "X" && s6 == "X" && s3 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s7 == "X" && s5 == "X" && s3 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s9 == "X" && s5 == "X" && s1 == "X"){
        cout<< endl << endl << endl << "PLAYER X YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
}


void Player2()
{
    cout<< "PLAYER O\n";
    cin>> choise;
    if (choise == 7 && b7 == false){
        s7="O";
        b7=true;
}else if (choise == 7 && b7 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 8 && b8 == false){
        s8="O";
        b8=true;
}else if (choise == 8 && b8 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 9 && b9 == false){
        s9="O";
        b9=true;
}else if (choise == 9 && b9 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 4 && b4 == false){
        s4="O";
        b4=true;
}else if (choise == 4 && b4 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 5 && b5 == false){
        s5="O";
        b5=true;
}else if (choise == 5 && b5 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 6 && b6 == false){
        s6="O";
        b6=true;
}else if (choise == 6 && b6 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 1 && b1 == false){
        s1="O";
        b1=true;
}else if (choise == 1 && b1 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 2 && b2 == false){
        s2="O";
        b2=true;
}else if (choise == 2 && b2 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise == 3 && b3 == false){
        s3="O";
        b3=true;
}else if (choise == 3 && b3 == true){
    cout << "Thats not a valid number!"<<endl;
}
    if (choise <= 9){
    cout<<
    "-------------------\n"<<
    "|  "<<s7<<"  |  "<<s8<<"  |  "<<s9<<"  |"<<endl<<
    "-------------------\n"<<
    "|  "<<s4<<"  |  "<<s5<<"  |  "<<s6<<"  |"<<endl<<
    "-------------------\n"<<
    "|  "<<s1<<"  |  "<<s2<<"  |  "<<s3<<"  |"<<endl<<
    "-------------------\n"<<endl;
}else{
    cout << "Thats not a valid number!"<<endl;
}
    if (s7 == "O" && s8 == "O" && s9 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s4 == "O" && s5 == "O" && s6 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s1 == "O" && s2 == "O" && s3 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s7 == "O" && s4 == "O" && s1 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s8 == "O" && s5 == "O" && s2 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s9 == "O" && s6 == "O" && s3 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s7 == "O" && s5 == "O" && s3 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
    if (s9 == "O" && s5 == "O" && s1 == "O"){
        cout<< endl << endl << endl << "PLAYER O YOU ARE THE WINNER!!!"<< endl;
        loop = 9;
    }
}

int main(){

    cout<< "MORSKI SHAH"<<endl<<endl;
    cout<<
    "-------------------\n"<<
    "|  "<<s7<<"  |  "<<s8<<"  |  "<<s9<<"  |"<<endl<<
    "-------------------\n"<<
    "|  "<<s4<<"  |  "<<s5<<"  |  "<<s6<<"  |"<<endl<<
    "-------------------\n"<<
    "|  "<<s1<<"  |  "<<s2<<"  |  "<<s3<<"  |"<<endl<<
    "-------------------\n"<<endl<<
    "CHOOSE A NUMBER FROM 1 TO 9\n";


    while (loop <=9 ){
    if (loop<=9){
    Player1();
    loop ++;
    if (loop == 9){
        cout<<"DRAW!";
        loop = 10;
    }
}
    if (loop<=9){
    Player2();
    loop++;

}

};
    return 0;
}


