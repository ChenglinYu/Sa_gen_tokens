#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    char entity_2[61];        // Tag.BODY
    entity_1 = 26;            // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_4] = 'n'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER