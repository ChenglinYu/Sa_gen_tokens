#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    char entity_7[32];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_4 = 18;                                       // Tag.BODY
    if (entity_5 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 30;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 93; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER