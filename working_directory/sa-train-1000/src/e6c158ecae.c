#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_7[17];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_1 = 42;                                       // Tag.BODY
    if (entity_2 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 27;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 78; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 76;                                       // Tag.BODY
    entity_7[entity_9] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[43];                                   // Tag.BODY
    entity_4[entity_0] = 'K';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER