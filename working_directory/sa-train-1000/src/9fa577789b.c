#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_4[13];                                   // Tag.BODY
    entity_0 = 29;                                       // Tag.BODY
    if (entity_9 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 96;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 73; entity_1 < entity_9; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_3[20];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_4[entity_1] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 22;                                       // Tag.BODY
    entity_3[entity_8] = '0';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER