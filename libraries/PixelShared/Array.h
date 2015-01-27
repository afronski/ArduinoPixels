//
//  Array.h
//  Stack allocated array
//      Features:
//          * Bounds checking in DEBUG builds
//          * reset() method
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

    inline const T& operator[](int idx) const {
#ifdef DEBUG
        assert(idx>=0);
        assert(idx<Size);
#endif
        return _array[idx];
    }

    // Call .reset() on each element
    inline void reset() {
        for (int i=0; i<Size; i++)
            _array[i].reset();
    }
};
