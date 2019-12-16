/**
 * Пазов В.С.
 * String36 (работа со строкой)
 * Даны  строкиS, S1 и S2.
 * Заменить в строке S вхождения
 * строки S1 на строкуS2.
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









// #include <iostream>
// #include <string>
// using namespace std;
 
// int main(){
//     string S, S1, S2;
//     cout << "Enter S: " << endl;
//     getline(cin, S);
//     cout << "Enter S1: " << endl;
//     getline(cin, S1);
//     cout << "Enter S2: " << endl;
//     getline(cin, S2);

//     // http://www.cplusplus.com/reference/string/string/replace/
//     S.string::replace(S.string::find(S1), S1.string::length(), S2);

//     cout << S;
// return 0;
// }