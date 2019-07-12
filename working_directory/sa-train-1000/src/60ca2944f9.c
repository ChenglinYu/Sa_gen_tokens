#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_4[78];        // Tag.BODY
    char entity_2[20];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = 31;            // Tag.BODY
    entity_3 = 30;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_3] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 7;             // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_0] = 'T'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER