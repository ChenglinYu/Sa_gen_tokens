#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_1[47];                                   // Tag.BODY
    entity_7 = 20;                                       // Tag.BODY
    char entity_8[71];                                   // Tag.BODY
    entity_3 = 48;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_9[95];                                   // Tag.BODY
    entity_4 = 75;                                       // Tag.BODY
    if (entity_0 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8[entity_7] = 'h';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 58;                                       // Tag.BODY
    entity_1[entity_4] = 'v';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_6 = 47; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_6] = '9';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER