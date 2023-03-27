#include <iostream>

using namespace std;

//nilai max bilangan
//int max(int a,int b);

//nilai min bilangan
//int min(int a,int b);

//niali max array
int maxArray(int arr[]);

//nilai min array
int minArray(int arr[]);

//apakah nilai genap?
bool isEven(int a);

//apakah nilai ganjil?
bool isOdd(int a);

int main()
{
    cout << "nilai max " << max(5,7) << endl;
    cout << "nilai min " << min(5,7) << endl;
    int arr[5]={1,2,3,4,5};
    cout << "nilai array max" << maxArray(arr) << endl;
    cout << "nilai array min" << minArray(arr) << endl;
    cout << isEven(2) << endl;
    cout << isOdd(3)  << endl;
    return 0;
}

/*int max(int a,int b){
    int m;
    if(a>b)
    {
        m = a;
    }else
        {
           m = b;
        }
return m;
}*/

//niali min bilangan
/*int min(int a,int b){
    int n;
    if(a<b)
    {
        n = a;
    }else
        {
           n = b;
        }
return n;
}*/

int maxArray(int arr[]){
    int temp = arr[0];
    for(int i; i < 5; i++){
       temp=max(temp,arr[i]);
       }
    return temp;
}

//nilai min array
int minArray(int arr[]){
    int temp = arr[0];
    for(int i; i < 5; i++){
       temp=min(temp,arr[i]);
        }
    return temp;
}

//apakah nilai genap?
bool isEven(int a){
    if ((a%2)==0){
        cout << "Genap ";
    }else isOdd (a);

    return a;
}

//apakah nilai ganjil?
bool isOdd(int a){
    if((a%2)!=0){
        cout << "Ganjil  ";
    }else isEven (a);

    return a;
}
