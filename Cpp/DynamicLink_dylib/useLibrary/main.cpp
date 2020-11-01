#include <iostream>
#include "word.h"

using namespace std;

int main()
{
    Word* word = new Word();
    cout << word->getWord() << endl;
    delete word;
    return 0;
}
