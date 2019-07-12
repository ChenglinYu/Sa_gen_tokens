#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[5];                                    // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 42;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 78; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER