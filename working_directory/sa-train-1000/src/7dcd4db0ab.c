#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[10];        // Tag.BODY
    entity_8 = 39;            // Tag.BODY
    char entity_7[99];        // Tag.BODY
    entity_2 = 5;             // Tag.BODY
    if(entity_1 < entity_2){  // Tag.BODY
    entity_7[entity_8] = 'D'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_1 = 31;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = '8'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER