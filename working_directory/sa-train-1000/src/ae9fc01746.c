#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = 69;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_5[90];                                   // Tag.BODY
    if (entity_2 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 97;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 68; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[32];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 80;                                       // Tag.BODY
    entity_5[entity_9] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_7] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER