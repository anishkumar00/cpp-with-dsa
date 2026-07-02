/*     Question 1 : In a program, input the side of a square. You have to output the area of the square.
Input : n (side)  ->> in this code user cam put the value 
Output: n*n (area)   ->> variable should be above condition
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int area= n*n;
    cout<<"side of the square: "<<area<<endl;
    return 0;
}




/*Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
pen and an eraser. You have to output the total cost of the items back to the user as
their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
problem)*/

#include<iostream>
using namespace std;
int main(){
    int pencilCost, penCost, eraserCost;
    cin>>pencilCost;
    cin>>penCost;
    cin>>eraserCost;
    int total = pencilCost+ penCost+ eraserCost;
    float gst = total + (total*18/100);
    cout<<"total price :"<<total<<endl;
    cout<<"with gst total price: "<<gst<<endl;
    return 0;
}

/*Question 1: Student Result & Percentage Calculator ⭐⭐⭐⭐⭐
Write a C++ program that takes the following input from the user:
Student Name, Roll Number, Marks of 5 subjects (float)

Calculate and display:Total Marks, Average Marks, Percentage (out of 500)
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

    float m1, m2, m3, m4, m5;
    cout<<"enter the marks of all subject: ";
    cin>>m1>>m2>>m3>>m4>>m5;

    float totalmarks = m1+m2+m3+m4+m5;
    float averagemarks = totalmarks /5;
    float percentage= (totalmarks/500)*100;

    cout<<"--------Student result-------"<<endl;
    cout<<"Student name: "<<studentname<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"Total marks: "<<totalmarks<<endl;
    cout<<"Averagemarks: "<<averagemarks<<endl;
    cout<<"percentage: "<<percentage<<"%"<<endl;

    return 0;



}
