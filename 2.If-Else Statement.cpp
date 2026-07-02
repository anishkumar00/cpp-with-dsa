/*Write a C++ program that takes two integers from the user and prints the larger number.
take first int = n and second int = m */


#include<iostream>
using namespace std;
int main(){
    int n,m;

    cin>>n>>m;
    if(n>m){
        cout<<n;
    }else{
        cout<<m;

    }
    return 0;

}


/*Write a C++ program to check whether a number entered by the user is Even or Odd.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2 == 0){
        cout<<"it a even number";
    }else{
        cout<<"it a odd number";
    }
    return 0;
}

/*Question 4: Income Tax Calculator Problem Statement

Write a C++ program to calculate the income tax based on the following conditions:

Income less than ₹5 lakh → 0% Tax
Income between ₹5 lakh and ₹10 lakh → 20% Tax
Income greater than ₹10 lakh → 30% Tax */

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the income: ";
    cin>>num;

    if(num<=5){
        cout<<"0% tax";
    }else if(num<=10){
        cout<<"20% tax";
    }else{
        cout<<"30% tax";
    }return 0;

}

/*Question 11: Vowel or Consonant Input a character and check whether it is a vowel or a consonant.*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            cout<<"it a vowel";
        }
        else{
            cout<<"it is not vowel";
        }return 0;

}
