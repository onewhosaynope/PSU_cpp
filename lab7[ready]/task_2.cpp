/**
 * Пазов В.С.
 * String36 (работа с массивом символов)
 * Даны  строкиS, S и S1.
 * Заменить в строке S вхождения
 * строки S на строкуS2.
 */

#include <iostream>
#include <string>

using namespace std;

void replace_all( string &S, const string &S1, const string &S2 )
{
    for (string::size_type pos = 0; ( pos = S.find( S1, pos ) ) != string::npos; pos += S2.size()) {
        S.replace( pos, S1.size(), S2 );
    }
}

int main() 
{
    string S( "Hello world, world, world" );
    string S1( "world" );
    string S2( "mccdlibby" );

    cout << S << endl;

    replace_all( S, S1, S2 );

    cout << S << endl;

    return 0;
}