#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int main(){
    cout<<"\t**Main Menu**\n\n";
    cout<<"\t1: Arithmetic Operations\n";
    cout<<"\t2: Exponential Operations\n";
    cout<<"\t3: Trigonometric Operations\n";
    cout<<"\t4: Factorial Operation\n";
    cout<<"\t5: Logarithmic Operation\n\n";
    int input;
    cout<<"\tChoose One Please : ";
    cin>>input;
    cout<<"\n";

    if(input==1){
        cout<<"\t1: Addition\n";
        cout<<"\t2: Subtraction\n";
        cout<<"\t3: Multiplication\n";
        cout<<"\t4: Division\n";
        cout<<"\t5: To EXIT\n\n";

        int opt,a,b;
        cout<<"\tChoose One Please : ";
        cin>>opt;
        cout<<"\n";
        switch(opt){
            case 1: cout<<"\t**Addition Operation**\n\n";
                    cout<<"\tEnter first number:";
                    cin>>a;
                    cout<<"\tEnter second number:";
                    cin>>b;
                    cout<<"\tResult:"<<a+b;
                    break;
            case 2: cout<<"\t**Subtraction Operation**\n\n";
                    cout<<"\tEnter first number:";
                    cin>>a;
                    cout<<"\tEnter second number:";
                    cin>>b;
                    if(a>b){
                        cout<<"\tResult:"<<a-b;
                    }
                    else{
                        cout<<"\tResult:"<<b-a;
                    }
                    break;
            case 3: cout<<"\t**Multiplication Operation**\n\n";
                    cout<<"\tEnter first number:";
                    cin>>a;
                    cout<<"\tEnter second number:";
                    cin>>b;
                    cout<<"\tResult:"<<a*b;
                    break;
            case 4: cout<<"\t**Division Operation**\n\n";
                    cout<<"\tEnter first number:";
                    cin>>a;
                    cout<<"\tEnter second number:";
                    cin>>b;
                    if(b!=0){
                        cout<<"\tResult:"<<a/b;
                    }
                    else{
                        cout<<"\tINFINITY";
                    }
                    break;
            case 5: cout<<"\t**GOOD BYE**";
                    break;

        }
    }
    if(input==2){
        cout<<"\t1: Power Function\n";
        cout<<"\t2: Square Root Function\n";
        cout<<"\t3: To EXIT\n\n";
        int opt,a,b;
        cout<<"\tChoose One Please : ";
        cin>>opt;
        cout<<"\n";
        switch(opt){
            case 1: cout<<"\t**Power Operation**\n\n";
                    cout<<"\tEnter base value:";
                    cin>>a;
                    cout<<"\tEnter the power:";
                    cin>>b;
                    cout<<"\tResult:"<<pow(a,b);
                    break;
            case 2: cout<<"\t**Square Root Operation**\n\n";
                    cout<<"\tEnter the number:";
                    cin>>a;
                    cout<<"\tResult:"<<sqrt(a);
                    break;
            case 3: cout<<"\t**GOOD BYE**\n";
                    break;
        }

    }
    if(input==3){
        cout<<"\t1: Sine\n";
        cout<<"\t2: Cosine\n";
        cout<<"\t3: Tan\n";
        cout<<"\t4: Sine Inverse\n";
        cout<<"\t5: Cosine Inverse\n";
        cout<<"\t6: Tangent Inverse\n";
        cout<<"\t7: To Exit\n\n";
        int opt,a,b;
        cout<<"\tChoose One Please : ";
        cin>>opt;
        cout<<"\n";

        switch(opt){
            case 1: cout<<"\t**Sine Operation**\n\n";
                    cout<<"\tEnter the angle in degrees:";
                    cin>>a;
                    cout<<"\tResult:"<<sin(a);
                    break;
            case 2: cout<<"\t**Cosine Operation**\n\n";
                    cout<<"\tEnter the angle in degrees:";
                    cin>>a;
                    cout<<"\tResult:"<<cos(a);
                    break;
            case 3: cout<<"\t**Tangent Operation**\n\n";
                    cout<<"\tEnter the angle in degrees:";
                    cin>>a;
                    cout<<"\tResult:"<<tan(a);
                    break;
            case 4: cout<<"\t** Inverse Sine Operation**\n\n";
                    cout<<"\tEnter the angle in degrees:";
                    cin>>a;
                    cout<<"\tResult:"<<1/sin(a);
                    break;
            case 5: cout<<"\t**Inverse Cosine Operation**\n\n";
                    cout<<"\tEnter the angle in degrees:";
                    cin>>a;
                    cout<<"\tResult:"<<1/cos(a);
                    break;
            case 6: cout<<"\t**Inverse Tan Operation**\n\n";
                    cout<<"\tEnter the angle in degrees:";
                    cin>>a;
                    cout<<"\tResult:"<<1/tan(a);
                    break;
            case 7: cout<<"\t**GOOD BYE**\n";
                    break;

        }

    }
    if(input==4){
        int i,fact=1,number;
        cout<<"\t**Factorial Operation**\n\n";
        cout<<"\tEnter any Number:";
        cin>>number;
        for(i=1;i<=number;i++)
        {
            fact=fact*i;
        }
        cout<<"\tFactorial of " <<number<<" is:"<<fact<<endl;
    }

    if(input==5){
        cout<<"\t1: Log to the base 10\n";
        cout<<"\t2: log to the base of any number\n";
        cout<<"\t3: To Exit\n\n";
        int opt,a,b;
        cout<<"\tChoose One Please : ";
        cin>>opt;
        cout<<"\n";

        switch(opt){
            case 1: cout<<"\t**Log to the base 10**\n\n";
                    cout<<"\tEnter the number:";
                    cin>>a;
                    cout<<"\tResult:"<<log10(a);
                    break;
            case 2: cout<<"\t**Log to the base of any number**\n\n";
                    cout<<"\tEnter the number:";
                    cin>>a;
                    cout<<"\tEnter the base:";
                    cin>>b;
                    cout<<"\tResult:"<<log10(a)/log10(b);
                    break;
            case 3: cout<<"\t**GOOD BYE**\n";
                    break;


        }

    }

}
