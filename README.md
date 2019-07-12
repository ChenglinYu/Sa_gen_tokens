本项目参考paper[Towards security defect prediction with AI](https://arxiv.org/pdf/1808.09897.pdfv)和该paper的[code](https://github.com/cmu-sei/sa-bAbI)。 该项目可以**将c源文件转换成tokens.**

# 使用方法


1. 在**working_directory**文件下创建一个**sa-train-1000**文件夹，然后再在该目录下创建一个**src**文件夹
  
```shell
  cd working_directory
```

```shell
  mkdir sa-train-1000
```

```shell
  mkdir src
```

If I have made those directories, you needn't make them again and just keep
your project hierarchy consistent with me.

2. 将需要token化的所有c文件放在 **/working_directory/sa-train-1000/src**文件夹下。
  
3. 在项目根目录的终端中运行如下命令

   ```shell
   docker-compose build
   ```

   ```shell
   ./sa_gen_tokens.sh working_directory/sa-train-1000/
   ```

# 结果

**/working_directory/sa-train-1000/tokens**中将生成对应的tok文件！

例如，**0a5c1430d.c**

```c
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_4[23];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_8 = 4;             // Tag.BODY
    char entity_3[44];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 48;            // Tag.BODY
    entity_1 = 51;            // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    entity_7 = 79;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 39;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_7] = 'k'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
```

对应的token文件**0a5ca1430d.c.tok**如下：

```json
{
    "filename": "/mnt/data/src/0a5ca1430d.c",
    "tokens": [
        {
            "kind": "Keyword",
            "line": 2,
            "sem": "FunctionDecl",
            "text": "int"
        },
        {
            "kind": "Identifier",
            "line": 2,
            "sem": "FunctionDecl",
            "sym": {
                "id": "c:@F@main",
                "kind": "FunctionDecl",
                "type": "int ()"
            },
            "text": "main"
        },
        {
            "kind": "Punctuation",
            "line": 2,
            "sem": "FunctionDecl",
            "text": "("
        },
        {
            "kind": "Punctuation",
            "line": 2,
            "sem": "FunctionDecl",
            "text": ")"
        },
        {
            "kind": "Punctuation",
            "line": 3,
            "sem": "CompoundStmt",
            "text": "{"
        },
        {
            "kind": "Keyword",
            "line": 4,
            "sem": "VarDecl",
            "text": "int"
        },
        {
            "kind": "Identifier",
            "line": 4,
            "sem": "VarDecl",
            "sym": {
                "id": "c:0a5ca1430d.c@133@F@main@entity_8",
                "kind": "VarDecl",
                "type": "int"
            },
            "text": "entity_8"
        },
        {
            "kind": "Punctuation",
            "line": 4,
            "sem": "DeclStmt",
            "text": ";"
        },
        {
            "kind": "Keyword",
            "line": 5,
            "sem": "VarDecl",
            "text": "char"
        },
        {
            "kind": "Identifier",
            "line": 5,
            "sem": "VarDecl",
            "sym": {
                "id": "c:0a5ca1430d.c@175@F@main@entity_4",
                "kind": "VarDecl",
                "type": "char [23]"
            },
            "text": "entity_4"
        },
        {
            "kind": "Punctuation",
            "line": 5,
            "sem": "VarDecl",
            "text": "["
        },
        {
            "kind": "Literal",
            "line": 5,
            "sem": "IntegerLiteral",
            "text": "23"
        },
        {
            "kind": "Punctuation",
            "line": 5,
            "sem": "VarDecl",
            "text": "]"
        },
        {
            "kind": "Punctuation",
            "line": 5,
            "sem": "DeclStmt",
            "text": ";"
        },
        {
            "kind": "Keyword",
            "line": 6,
            "sem": "VarDecl",
            "text": "int"
        },
        {
            "kind": "Identifier",
            "line": 6,
            "sem": "VarDecl",
            "sym": {
                "id": "c:0a5ca1430d.c@217@F@main@entity_1",
                "kind": "VarDecl",
                "type": "int"
            },
            "text": "entity_1"
        },
        {
            "kind": "Punctuation",
            "line": 6,
            "sem": "DeclStmt",
            "text": ";"
        },
        {
            "kind": "Identifier",
            "line": 7,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@133@F@main@entity_8",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 4
                },
                "type": "int"
            },
            "text": "entity_8"
        },
        {
            "kind": "Punctuation",
            "line": 7,
            "sem": "BinaryOperator",
            "text": "="
        },
        {
            "kind": "Literal",
            "line": 7,
            "sem": "IntegerLiteral",
            "text": "4"
        },
        {
            "kind": "Punctuation",
            "line": 7,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Keyword",
            "line": 8,
            "sem": "VarDecl",
            "text": "char"
        },
        {
            "kind": "Identifier",
            "line": 8,
            "sem": "VarDecl",
            "sym": {
                "id": "c:0a5ca1430d.c@301@F@main@entity_3",
                "kind": "VarDecl",
                "type": "char [44]"
            },
            "text": "entity_3"
        },
        {
            "kind": "Punctuation",
            "line": 8,
            "sem": "VarDecl",
            "text": "["
        },
        {
            "kind": "Literal",
            "line": 8,
            "sem": "IntegerLiteral",
            "text": "44"
        },
        {
            "kind": "Punctuation",
            "line": 8,
            "sem": "VarDecl",
            "text": "]"
        },
        {
            "kind": "Punctuation",
            "line": 8,
            "sem": "DeclStmt",
            "text": ";"
        },
        {
            "kind": "Keyword",
            "line": 9,
            "sem": "VarDecl",
            "text": "int"
        },
        {
            "kind": "Identifier",
            "line": 9,
            "sem": "VarDecl",
            "sym": {
                "id": "c:0a5ca1430d.c@343@F@main@entity_7",
                "kind": "VarDecl",
                "type": "int"
            },
            "text": "entity_7"
        },
        {
            "kind": "Punctuation",
            "line": 9,
            "sem": "DeclStmt",
            "text": ";"
        },
        {
            "kind": "Identifier",
            "line": 10,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@343@F@main@entity_7",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 9
                },
                "type": "int"
            },
            "text": "entity_7"
        },
        {
            "kind": "Punctuation",
            "line": 10,
            "sem": "BinaryOperator",
            "text": "="
        },
        {
            "kind": "Literal",
            "line": 10,
            "sem": "IntegerLiteral",
            "text": "48"
        },
        {
            "kind": "Punctuation",
            "line": 10,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Identifier",
            "line": 11,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@217@F@main@entity_1",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 6
                },
                "type": "int"
            },
            "text": "entity_1"
        },
        {
            "kind": "Punctuation",
            "line": 11,
            "sem": "BinaryOperator",
            "text": "="
        },
        {
            "kind": "Literal",
            "line": 11,
            "sem": "IntegerLiteral",
            "text": "51"
        },
        {
            "kind": "Punctuation",
            "line": 11,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Keyword",
            "line": 12,
            "sem": "IfStmt",
            "text": "if"
        },
        {
            "kind": "Punctuation",
            "line": 12,
            "sem": "IfStmt",
            "text": "("
        },
        {
            "kind": "Identifier",
            "line": 12,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@343@F@main@entity_7",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 9
                },
                "type": "int"
            },
            "text": "entity_7"
        },
        {
            "kind": "Punctuation",
            "line": 12,
            "sem": "BinaryOperator",
            "text": "<"
        },
        {
            "kind": "Identifier",
            "line": 12,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@133@F@main@entity_8",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 4
                },
                "type": "int"
            },
            "text": "entity_8"
        },
        {
            "kind": "Punctuation",
            "line": 12,
            "sem": "IfStmt",
            "text": ")"
        },
        {
            "kind": "Punctuation",
            "line": 12,
            "sem": "CompoundStmt",
            "text": "{"
        },
        {
            "kind": "Identifier",
            "line": 13,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@343@F@main@entity_7",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 9
                },
                "type": "int"
            },
            "text": "entity_7"
        },
        {
            "kind": "Punctuation",
            "line": 13,
            "sem": "BinaryOperator",
            "text": "="
        },
        {
            "kind": "Literal",
            "line": 13,
            "sem": "IntegerLiteral",
            "text": "79"
        },
        {
            "kind": "Punctuation",
            "line": 13,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Punctuation",
            "line": 14,
            "sem": "CompoundStmt",
            "text": "}"
        },
        {
            "kind": "Keyword",
            "line": 14,
            "sem": "IfStmt",
            "text": "else"
        },
        {
            "kind": "Punctuation",
            "line": 14,
            "sem": "CompoundStmt",
            "text": "{"
        },
        {
            "kind": "Identifier",
            "line": 15,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@343@F@main@entity_7",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 9
                },
                "type": "int"
            },
            "text": "entity_7"
        },
        {
            "kind": "Punctuation",
            "line": 15,
            "sem": "BinaryOperator",
            "text": "="
        },
        {
            "kind": "Literal",
            "line": 15,
            "sem": "IntegerLiteral",
            "text": "39"
        },
        {
            "kind": "Punctuation",
            "line": 15,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Punctuation",
            "line": 16,
            "sem": "CompoundStmt",
            "text": "}"
        },
        {
            "kind": "Identifier",
            "line": 17,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@175@F@main@entity_4",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 5
                },
                "type": "char [23]"
            },
            "text": "entity_4"
        },
        {
            "kind": "Punctuation",
            "line": 17,
            "sem": "ArraySubscriptExpr",
            "text": "["
        },
        {
            "kind": "Identifier",
            "line": 17,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@217@F@main@entity_1",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 6
                },
                "type": "int"
            },
            "text": "entity_1"
        },
        {
            "kind": "Punctuation",
            "line": 17,
            "sem": "ArraySubscriptExpr",
            "text": "]"
        },
        {
            "kind": "Punctuation",
            "line": 17,
            "sem": "BinaryOperator",
            "text": "="
        },
        {
            "kind": "Literal",
            "line": 17,
            "sem": "CharacterLiteral",
            "text": "'q'"
        },
        {
            "kind": "Punctuation",
            "line": 17,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Identifier",
            "line": 18,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@301@F@main@entity_3",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 8
                },
                "type": "char [44]"
            },
            "text": "entity_3"
        },
        {
            "kind": "Punctuation",
            "line": 18,
            "sem": "ArraySubscriptExpr",
            "text": "["
        },
        {
            "kind": "Identifier",
            "line": 18,
            "sem": "DeclRefExpr",
            "sym": {
                "id": "c:0a5ca1430d.c@343@F@main@entity_7",
                "kind": "VarDecl",
                "ref": {
                    "file": "/mnt/data/src/0a5ca1430d.c",
                    "linenum": 9
                },
                "type": "int"
            },
            "text": "entity_7"
        },
        {
            "kind": "Punctuation",
            "line": 18,
            "sem": "ArraySubscriptExpr",
            "text": "]"
        },
        {
            "kind": "Punctuation",
            "line": 18,
            "sem": "BinaryOperator",
            "text": "="
        },
        {
            "kind": "Literal",
            "line": 18,
            "sem": "CharacterLiteral",
            "text": "'k'"
        },
        {
            "kind": "Punctuation",
            "line": 18,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Keyword",
            "line": 19,
            "sem": "ReturnStmt",
            "text": "return"
        },
        {
            "kind": "Literal",
            "line": 19,
            "sem": "IntegerLiteral",
            "text": "0"
        },
        {
            "kind": "Punctuation",
            "line": 19,
            "sem": "CompoundStmt",
            "text": ";"
        },
        {
            "kind": "Punctuation",
            "line": 20,
            "sem": "CompoundStmt",
            "text": "}"
        }
    ]
}

```

tokenize的过程中**忽略了第一行**。

