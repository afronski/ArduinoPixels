//
//  Array.h
//  Stack allocated array with bounds checking in DEBUG builds
//
//  Created by Hans Robeers on 2015/01/21.
//
//

#ifdef DEBUG
    #include <assert.h>
#endif

template<typename T, int Size>
class Array
{
    T _array[Size];

public:
    inline T& operator[](int idx) {
#ifdef DEBUG
        assert(idx>=0);
        assert(idx<Size);
#endif
        return _array[idx];
    }
};
