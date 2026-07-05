/*Question 1: Print a Message 5 Times
Question. Write a C++ program to print "Apna College" 5 times using a for loop.

Theory: A for loop is used when we know how many times a task should be repeated.
            for(initialization; condition; increment/decrement)

}*/


#include<iostream>
using namespace std;
int main(){

    for(int n=1; n<=5; n++){
        cout<<"aaapna collge"<<endl;
    }
    return 0;
}



/*Question 2: Print Numbers from 0 to N
Write a C++ program to input a number N and print all numbers from 0 to N.
*/

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number: ";
cin>>n;
    for(int i=0; i<=n; i++){
        cout<<i<<endl;

    }
    return 0;
}



/*Question 3: Find the Sum of Numbers from 1 to N
Write a C++ program to input a number N and calculate the sum of all numbers from 1 to N.
*/

#include<iostream>
using namespace std;
int main(){    
int n;
cout<<"enter the number: ";
cin>>n;
int sum=0;
    for(int i=0; i<=n; i++){
        sum += i;

    }
    cout<<"sum of the number : "<<sum;

    return 0;

}




/*Topic: While Loop
Question 4: Sum of Digits
Question
Write a C++ program to input an integer and calculate the sum of its digits using a while loop.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum =0;
    while(n>0){
        int lastdigit = n%10;
        sum += lastdigit;
        n=n/10;
    }
    cout<<"sum of the number : "<<sum;


    return 0;
}



/*Question 5: Sum of Odd Digits
Question: Write a C++ program to input a number and calculate the sum of only the odd digits.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum =0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            sum += i;

        }
    }
    cout<<"sum of the odd number: "<<sum;
    return 0;
    }





/*
Question 6: Reverse a Number
Write a C++ program to input a number and print it in reverse order using a while loop.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int rev =0;
    while(n>1){
        int lastdigit = n%10;
        rev = rev *10 +lastdigit;   // this is the formula of the reverse the  number 
        n=n/10;
    }
    cout<<"the reverse number are "<<rev<<endl;
    return 0;
}


/*When do we use a while loop?
Use a while loop when the number of iterations is unknown and depends on a condition.
Examples:
Reverse a number.
Sum of digits.
Check palindrome.
Count digits.
Continue until the user enters 0.*/


/*Comprehensive C++ Practice Question
Student Number Analysis System
Problem Statement

Write a C++ program that performs the following tasks:

Input the student's Name.
Input the student's Roll Number.
Input a positive integer N.
Print all numbers from 1 to N using a for loop.
Calculate and print the sum of all numbers from 1 to N.
Calculate and print the sum of all odd numbers from 1 to N.
Check whether N is Even or Odd.
Reverse the number N using a while loop.
Calculate and print the sum of the digits of N.
Display all the results in a well-formatted output.

*/


#include<iostream>
using namespace std;
int main(){
    string studentname;
    cout<<"enter the student name: ";
    cin>>studentname;

    int rollno;
    cout<<"enter the roll no: ";
    cin>>rollno;

    int n;
    cout<<"enter the positie interger: ";
    cin>>n;

    for(int i=1; n<=1; i++){
        cout<<i;
    }

    // Sum of numbers
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Sum of odd numbers
    int oddSum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            oddSum += i;
        }
    }

    // Even or Odd
    string type;
    if (n % 2 == 0) {
        type = "Even";
    } else {
        type = "Odd";
    }

    // Reverse Number
    int rev = 0;
    int temp = n;

    while (temp > 0) {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }

    // Sum of Digits
    int digitSum = 0;
    temp = n;

    while (temp > 0) {
        int lastDigit = temp % 10;
        digitSum += lastDigit;
        temp = temp / 10;
    }
    cout << "\n\n----------- Student Report -----------" << endl;
    cout << "Student Name      : " << studentname << endl;
    cout << "Roll Number       : " << rollno << endl;
    cout << "Entered Number    : " << n << endl;
    cout << "Number Type       : " << type << endl;
    cout << "Sum (1 to N)      : " << sum << endl;
    cout << "Sum of Odd Numbers: " << oddSum << endl;
    cout << "Reverse Number    : " << rev << endl;
    cout << "Sum of Digits     : " << digitSum << endl;
    return 0;
}
