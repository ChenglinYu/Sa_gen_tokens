#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_5 = 9;                                        // Tag.BODY
    char entity_1[85];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 34;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 65; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'j';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER