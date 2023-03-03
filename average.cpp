#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char *argv[]){
    double sum = 0;
    float average = 0;
    int count = argc - 1;
    if(argc <= 1){
        cout << "Please input numbers to find average." << endl;
    }
    else{
        for(int i=1;i <argc;i++){
            sum = sum + atoi(argv[i]);
        }
    average = sum/count;
    cout << "---------------------------------" << endl;
    cout << "Average of " << count <<" numbers = " <<average << endl;
    cout << "---------------------------------" << endl;
    }
}