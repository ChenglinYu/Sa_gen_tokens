#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_4 = 5;             // Tag.BODY
    char entity_0[49];        // Tag.BODY
    entity_2 = 49;            // Tag.BODY
    if(entity_2 < entity_4){  // Tag.BODY
    entity_2 = 90;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 62;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_2] = '4'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER