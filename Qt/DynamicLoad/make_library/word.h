#ifndef WORD_H
#define WORD_H

#include "libinterface.h"

class MAKE_LIBRARY_EXPORT Word : public LibInterface
{
public:
    Word();
    ~Word();
    const char* getWord() override;
};

#endif // WORD_H
