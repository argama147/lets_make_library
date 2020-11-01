class Word
{
public:
    ~Word();
    const char* getWord();
};

extern "C" {
    Word* createInstance();
    void deleteInstance(Word* p);
}

typedef Word* create_t();
typedef void destroy_t(Word*);

