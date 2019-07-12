#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_6[99];        // Tag.BODY
    entity_0 = 9;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 77;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_2] = 'O'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER