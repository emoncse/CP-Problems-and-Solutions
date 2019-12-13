##162 - Beggar My Neighbour

//Md. Imran Nazir Emon
//Dept. of Computer Science & Engineering
//University of Asia Pacific
//Email: 18201071@uap-bd.edu

#include<bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define vint vector<int>
#define vstr vector<string>
#define pb push_back
#define SS stringstream
#define HI printf("HI ");
#define PASS printf("PASS");

#define f1(i, a) for(llu i=0; i<(a); i++)
#define f2(i, a) for(int i=1; i<=(a); i++)
#define f3(a, b) for(int i=(a); i<=(b); i++)
#define f4(i, a) for(int i=(a); i>0; i--)
#define test(z, a) for(int z=1; z<=(a); z++)

#define READ freopen("input.txt", "r", stdin)
#define ROUT freopen("output.txt", "w", stdout)

#define nouka "Yes"
#define dhan "No"

typedef double db;
typedef long long ll;
typedef unsigned long long llu;
typedef long long ll;

const db PI = acos(-1.0);
const llu MAX = LONG_MAX;

void fasterIO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int playerOne;
int playerTwo;

void init(){
    playerOne = 0;
    playerTwo = 0;
}
int cardNumberGenerator(char cardNumber){
    if( cardNumber >= '0' && cardNumber <= '9' ) return (int)( '0' - cardNumber );
    else if( cardNumber == 'T' ) return 10;
    else if( cardNumber == 'A' ) return 1;
    else if( cardNumber == 'J' ) return 11;
    else if( cardNumber == 'Q' ) return 12;
    else if( cardNumber == 'K' ) return 13;
}

void numberCalculate(char cardName, char CardNumber){
    if( ch )
}

void decisionMakingArea( char cardName, char cardNumber ){
    if( cardName == 'S' ) numberCalulate( 'S', cardNumber );
    else if( cardName == 'H' )  numberCalulate( 'H', cardNumber );
    else if( cardName == 'D') numberCalculate( 'D', cardNumber );
    else numberCalculate( 'C', cardNumber );
}


int main(){
    //READ;
    //ROUT;
    //fasterIO();

 
    string str[ 4 ];
    for(int index = 0; index < 4; index++){
        getline(cin, str[ index ]);
        for(int idx = 0; idx < str.size(); idx += 2){
            decisionMaking( str[ idx ], str[ idx + 1 ] );
        }
    }
    cout << playerOne << " " << playerTwo << endl;

    return 0;
}
