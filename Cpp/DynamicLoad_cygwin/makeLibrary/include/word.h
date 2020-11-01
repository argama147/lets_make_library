#include "libinterface.h"

class Word : public LibInterface
{
public:
    Word();
    ~Word();
    const char* getWord() override;
};

