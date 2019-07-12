#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_3[13];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0 = 92;                                       // Tag.BODY
    if (entity_9 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 62;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 10; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER