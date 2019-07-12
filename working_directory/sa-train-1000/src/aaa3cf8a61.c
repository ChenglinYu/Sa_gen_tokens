#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_2[81];                                   // Tag.BODY
    char entity_9[14];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_1 = 96;                                       // Tag.BODY
    entity_3 = 0;                                        // Tag.BODY
    entity_9[entity_1] = 'K';                            // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_7 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 71; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_5] = 'Z';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER