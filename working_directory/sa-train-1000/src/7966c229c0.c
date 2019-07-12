#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    char entity_5[9];                                   // Tag.BODY
    int entity_4;                                       // Tag.BODY
    int entity_6;                                       // Tag.BODY
    char entity_7[46];                                  // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_2 = rand();                                  // Tag.BODY
    entity_4 = 24;                                      // Tag.BODY
    entity_6 = 33;                                      // Tag.BODY
    if (entity_2 < entity_4){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_2 = 48;                                      // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_6] = 'W';                           // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_3 = 3; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_0;                                       // Tag.BODY
    char entity_9[84];                                  // Tag.BODY
    entity_7[entity_3] = 'V';                           // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 37;                                      // Tag.BODY
    entity_9[entity_0] = 'L';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER