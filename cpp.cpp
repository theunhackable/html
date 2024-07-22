
/*
int main(){
    int a = 100 ;
    int b = 27 ;
    float c= a/(b*int1.0) ;
    cout<<c<<endl;

}
18052024 SAALA YE CODE YEHI TAKK HUA, AND I NEED VIDEO NUMBER 4,5 COMPLETED TODAY ITSELF BY 2 PM OR ELSE NO STRESS RELIEF*/

    
/*
int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
        cout<<"neha\n";
    }
    else{
        cout<<"rashmi\n";
    } 
    return0;  
}*/
/*
int main(){
    int n;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
    sum=sum+counter;
    }

    cout<<sum<<endl;

    return 0;
}*/
/*
int main(){
    int n;
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}*/

/*int main(){
    int n;
    cin>>n;
    
    do{
        cout<<n<<endl;
        cin>>n;
    } while(n>0);

    return 0;
}*/

/*int main (){
    int pocketmoney=3000;
    for(int date=1;date<=30;date++){

        if (date%2==0){
            continue;
        }
        if (pocketmoney==0){ 
            break;
        }
        cout<<"go out today!"<<endl;
        pocketmoney=pocketmoney-300;
        
    }
    return 0;
}*/
/*
int main(){
    for (int i=0; i<100; i++)
    {
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }   
}*/

/* main(){
    int n ;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"non prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"prime number"<<endl;
    }
}*/
/*
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isprime = true;

    if (n <=1){
        isprime= false;
    } else {
        for (int i=2;i<= sqrt(n); i++){
            if(n%i==0){
                isprime =false;
                break;
            }
        }
    }
    if (isprime){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"non prime"<<endl;
    }
}*/

/*int main() {
    int a,b;
    cin>>a>>b;

    for(int num=a;num<=b;num++){
        bool isprime = true;
        if (num<2){
            isprime = false;
        }else {

        }
        for (int i=2; i*i<=num; i++){
            if(num%i==0){
                 isprime = false; 
                 break;
            }
        }
    }
    if (isprime){
        cout<<num<<endl;
    }
 }*/

/*
int main() {
    int a, b;
    cin >> a >> b;

    for (int num = a; num <= b; num++) {
        bool isprime = true;
        if (num < 2) {
            isprime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isprime = false;
                    break;
                }
            }
        }
        if (isprime) {
            cout << num << endl;
        }
    }

    return 0;
}*/
/*
int main(){
    char button;
    cout<<"input a character:";
    cin>>button;

    if (button=='a')
    {
        cout<<"hello"<<endl;
    }
    else if (button=='b')
    {
        cout<<"namaste"<<endl;
    }
    else if(button== 'c')
    {
        cout<<"salut"<<endl;
    }
    else if (button=='d')
    {
        cout<<"ciao"<<endl;
    }
    else 
    {
        cout<<"i am still learning more"<<endl;
    }
    return 0;
}*/

/*switch (button)
{
  case 'a':
  cout<<"hello"<<endl;
  break;
  case 'b':
  cout<<"namaste"<<endl;
  break;
  case 'c':
  cout<<"salut"<<endl;
  break;
  case 'd':
  cout<<"hola"<<endl;
  break;
  case 'e':
  cout<<"ciao"<<endl;
  break;

  default:
  cout<<"I am still learning more!"<<endl;
  break;

  return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    char button;
    cout << "Enter a character: ";
    cin >> button;

    switch (button) {
        case 'a':
            cout << "hello" << endl;
            break;
        case 'b':
            cout << "namaste" << endl;
            break;
        case 'c':
            cout << "salut" << endl;
            break;
        case 'd':
            cout << "hola" << endl;
            break;
        case 'e':
            cout << "ciao" << endl;
            break;
        default:
            cout << "I am still learning more!" << endl;
            break;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int num = a; num <= b; num++) {
        bool isprime = true;
        if (num < 2) {
            isprime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isprime = false;
                    break;
                }
            }
        }
        if (isprime) {
            cout << num << endl;
        }
    }

    return 0;
}*/
//impliment a simple calculator using  switch
/*int main(){
    int n1,n2;
    cout<<"input 2 numbers: ";
    cin>>n1>>n2;

    char op;
    cout<<"input an operator";
    cin>>op;

    switch (op){
    case '+':
         cout<<n1+n2<<endl;
         break;
    case '+':
         cout<<n1+n2<<endl;
         break;
    case '-':
         cout<<n1-n2<<endl;
         break;
    case '*':
         cout<<n1*n2<<endl;
         break;     
    case '/':
         cout<<n1/n2<<endl;
         break;  
    default :
    cout<<"enter another operator "<<endl;
        break;       

    }

    return 0;
}*/

/*
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Input 2 numbers: ";
    cin >> n1 >> n2;

    char op;
    cout << "Input an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        if (n2 != 0) {
            cout << n1 / n2 << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
        break;
    default:
        cout << "Enter a valid operator (+, -, *, /)" << endl;
        break;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Input 2 numbers: ";
    cin >> n1 >> n2;

    char op;
    cout << "Input an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        if (n2 != 0) {
            cout << n1 / n2 << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
        break;
    default:
        cout << "Enter a valid operator (+, -, *, /)" << endl;
        break;
    }

    return 0;
}*/


/*#include <iostream>
using namespace std;
int main(){
    int i=1;
    i= i++ + ++i;

    cout<<i<<endl;
    return 0;

}*/

/*#include <iostream>
using namespace std;
int main(){
    int i=1;
    int j=2;
    int k;
    k= i + j + i++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<k<<" "<<endl;
    return 0;
}*/

/*using namespace std;
int main(){
    int i=1 , j=2 , k=3;
    int m = i-- - j-- - k--;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<m<<endl; 
}*/

/*using namespace std;
int main(){
    int i = 10, j=20 , k;
    k= i-- - i++ + --j + --i - j-- + ++i - j++;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    
}*/


/*int main(){
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"divisible by both"<<endl;
    }
    else if(n%2==0){
        cout<<"divisible by only 2"<<endl;
    }
    else if(n%3==0){
        cout<<"divisible by only 3"<<endl;   
    }
    else{
        cout<<"divisible by none"<<endl;
    }    
        
}*/


 // rectangle pattern- rows:5 columns:4 rose print krna h *** pattern question

/*for(int i=1;i<=rows;++i){
    cout<<"*";
    cout<<"*";
    cout<<"*";
    cout<<"*";
    cout<<endl;
}*/

/*int main(){
    int row, col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<= col;j++){
            cout<<"*";
        }
        cout<<endl;
    
    }

}*/

// hollow rectangle pattern rows:5 columns :4

/*int main(){
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++);{
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}*/
#include<iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;  // Read the number of rows and columns

    for (int i = 1; i <= row; i++) {  // Loop over each row
        for (int j = 1; j <= col; j++) {  // Loop over each column
            if (i == 1 || i == row || j == 1 || j == col) {
                cout << "*";  // Print '*' if on the border
            } else {
                cout << " ";  // Print ' ' if inside the border
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}















