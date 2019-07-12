#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_2[37];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_6 = 33;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    if (entity_1 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 11;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 85; entity_5 < entity_1; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_5] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER