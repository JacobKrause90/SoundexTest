#ifndef FIRSTEXAMPLE_RETWEETCOLLECTION_H
#define FIRSTEXAMPLE_RETWEETCOLLECTION_H

#include "Tweet.h"

class RetweetCollection
{
private:
    unsigned int size_;
public:
    RetweetCollection();
    bool isEmpty() const;
    unsigned int size() const;
    void add(const Tweet& tweet);

};


#endif //FIRSTEXAMPLE_RETWEETCOLLECTION_H
