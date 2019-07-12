#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_4[56];                                   // Tag.BODY
    entity_9 = 45;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    if (entity_1 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 33;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 53; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_6[1];                                    // Tag.BODY
    entity_4[entity_0] = 'm';                            // Tag.BUFWRITE_COND_SAFE
    entity_8 = 1;                                        // Tag.BODY
    entity_6[entity_8] = 'B';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER