# C-Compiler Assembler

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Project Structure](#features)
- [To-Do List](#to-do-list)
    - [Parser](#parser)
    - [Lexer](#lexer)

## Introduction
This project is part of the Compiler Development course. It focuses on the assembler component of a C-Compiler, responsible for translating intermediate code into assembly language.

## Features
- Converts Assembly code into machine code "coe files"

## Project Structure
- `lex/`: Source code containing the lexical analyzer

## To-Do List
### Parser
- [x] Create a structure for the symbol table
- [x] Utils functions for searching and adding symbols into symbol table
- [ ] Codify step 1 and 2 of code generation
- [ ] Fill grammar conditions with instructions
### Lexer
- [x] Define identifiable elements and test
- [ ] Return tokens to the parser

