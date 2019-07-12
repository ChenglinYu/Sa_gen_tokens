#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[56];                                   // Tag.BODY
    entity_1 = 33;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 42;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 95; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_9[entity_5] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[23];                                   // Tag.BODY
    entity_4 = 40;                                       // Tag.BODY
    entity_6[entity_4] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER