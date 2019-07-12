#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[97];                                   // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_7 = 72;                                       // Tag.BODY
    if (entity_5 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 58;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 61; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'p';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER