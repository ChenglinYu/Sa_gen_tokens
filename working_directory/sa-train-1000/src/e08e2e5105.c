#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    entity_9 = 35;            // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[50];        // Tag.BODY
    entity_2 = 57;            // Tag.BODY
    char entity_7[82];        // Tag.BODY
    entity_6 = 95;            // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    entity_2 = 3;             // Tag.BODY
    entity_5[entity_6] = 'O'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_2 = 24;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_2] = '2'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER