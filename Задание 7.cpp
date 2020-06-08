#include <iostream>
#include <math.h>
#include <fstream>
#include <time.h>
#include<stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));
	int i,j;
   int mas[2][8], sum[3];
   for(i=0;i<2;i++){
   for(j=0;j<8;j++){
       cout<<"Âגוהטעו mas["<<i+1<<"]["<<j+1<<"]=";
       cin>>mas[i][j];
   }
   }
   for(i=0;i<2;i++){
       sum[i]=0;
       for(j=0;j<8;j++)
           sum[i]+=mas[i][j];
       }
for(i=0;i<2;i++)
    cout<<"Ñףללא סעמכבצא"<<i+1<<'='<<sum[i]<<endl;


	
	
}