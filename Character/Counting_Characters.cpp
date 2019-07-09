#include <iostream>
#include <string>
#include <map>

template
<
    typename TYPE,
    std::size_t SIZE
>
std::size_t array_length(const TYPE (&)[SIZE])
{
    return SIZE;
}

using namespace std;

int main(){
    map <char, int> score; //辞書作成
    char tags[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    string str, s;
    while(getline(cin, s)){
        str += s;
    }

    for ( int i = 0; i < array_length(tags); i++ ){
        score[tags[i]] = 0;
    }
 
    for ( int i = 0; i < (int)str.size(); i++ ){
        score[str[i]] += 1;
        if( isupper( str[i] ) != 0 ) {
            score[char(str[i] + 0x20)] += 1;
         }
    }

    for( int i = 0; i < array_length(tags); i++ ) {
            cout << tags[i] << " : " << score[tags[i]]  << endl;
    }

    return 0;
}