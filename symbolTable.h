/**
 * symbolTable.h
 * Definition of the structure to build a symbol table
 * @author Jose Pablo Ortiz Lack
 */

#ifndef __SYMBOL_TABLE_H__
#define __SYMBOL_TABLE_H__

/**
 * @brief The symbol type
 */
typedef enum tagSymbolType {

    INTEGER,
    FLOAT

} SymbolType;

/**
 * @brief the symbol table structure
 */
typedef struct tagSymbol {

    SymbolType type; //type of symbol
    
    char* identifier; //name of the symbol
    
    union {

        int iValue; //integer value
        float fValue; //float value

    } value; //value of the symbol

    struct tagSymbol *next; //next element of the symbol table

} Symbol;

/**
 * @brief inserts a new integer symbol at the end of the list
 * @param head reference to the head of the table
 * @param type type of symbol to be added
 * @param identifier identifier of the symbol to be added
  * @return  0 if there was an error adding the symbol, 1 if the symbol was added successfully, or 2 if the symbol already exists
 */
int insertSymbol( Symbol **head, char *identifier, SymbolType type);

/**
 * @brief searches a symbol by identifier
 * @param head reference to the head of the table
 * @param identifier identifier of the symbol
 * @return the searched symbol or NULL if there is no symbol with this identifier
 */
Symbol *findSymbol( Symbol **head, char *identifier );


/**
 * @brief updates the value of an integer symbol
 * @param head reference to the head of the table
 * @param identifier identifier of the symbol
 * @param newValue updated value of the symbol
 * @return 0 if the symbol was not found, 1 if the update was sucessful
 */
int setIntegerSymbolValue( Symbol **head, char *identifier, int newValue );

/**
 * @brief updates the value of an integer symbol
 * @param head reference to the head of the table
 * @param identifier identifier of the symbol
 * @param newValue updated value of the symbol
 * @return 0 if the symbol was not found, 1 if the update was sucessful
 */
int setFloatSymbolValue( Symbol **head, char *identifier , float newValue);

/**
 * @brief obtains the value of an integer symbol
 * @param head reference to the head of the table
 * @param identifier identifier of the symbol
 * @return the integer value of the symbol
 */
int getIntegerSymbolValue( Symbol **head, char *identifier );

/**
 * @brief obtains the value of a float symbol
 * @param head reference to the head of the table
 * @param identifier identifier of the symbol
 * @return the float value of the symbol
 */
float getFloatSymbolValue( Symbol **head, char *identifier );

/**
 * @brief obtains the symbol type of a symbol
 * @param head reference to the head of the table
 * @param identifier identifier of the symbol
 * @return the symbol type of the symbol
 */
SymbolType getSymbolType( Symbol **head, char * identifier);

#endif //__SYMBOL_TABLE_H__




