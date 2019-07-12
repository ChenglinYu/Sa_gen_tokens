#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[77];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_3 = 76;                                       // Tag.BODY
    entity_4 = 61;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_5[37];                                   // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 28;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 42; entity_7 < entity_1; entity_7++){ // Tag.BODY
    entity_5[entity_4] = 'E';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 15;                                       // Tag.BODY
    entity_6[entity_7] = 'V';                            // Tag.BUFWRITE_COND_SAFE
    char entity_2[59];                                   // Tag.BODY
    entity_2[entity_9] = 'S';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER