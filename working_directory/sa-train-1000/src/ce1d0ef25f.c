#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1 = 97;                                       // Tag.BODY
    char entity_6[66];                                   // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 97;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 59; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6[entity_9] = 'J';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[39];                                   // Tag.BODY
    entity_5 = 52;                                       // Tag.BODY
    entity_8[entity_5] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER