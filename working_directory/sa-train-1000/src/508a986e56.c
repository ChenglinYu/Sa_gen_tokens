#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_3;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_3 = rand();                                  // Tag.BODY
    char entity_5[2];                                   // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_8 = 54;                                      // Tag.BODY
    if (entity_3 < entity_8){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_3 = 68;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_2 = 9; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_2] = 'R';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER