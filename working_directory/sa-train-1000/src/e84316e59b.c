#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_9[88];                                   // Tag.BODY
    entity_0 = 81;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6 = 91;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    char entity_4[5];                                    // Tag.BODY
    if (entity_1 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 96;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 28; entity_5 < entity_1; entity_5++){ // Tag.BODY
    entity_9[entity_6] = 'E';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_4[entity_5] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER