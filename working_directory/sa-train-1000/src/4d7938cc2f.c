#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[77];                                   // Tag.BODY
    entity_7 = 61;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[19];                                   // Tag.BODY
    entity_0 = 10;                                       // Tag.BODY
    entity_6[entity_0] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_3 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 60;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 24; entity_1 < entity_3; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER