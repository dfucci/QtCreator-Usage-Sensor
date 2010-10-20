#ifndef USERROLES_H
#define USERROLES_H
#include <Qt>
enum {
    open=Qt::UserRole+1,
    findFunctionDefinition,
    switchDeclarationDefinition,
    jumpToDefinition,
    renameSymbolUnderCursor,
    renameUsages,
    updateFileName,
    jumpToMethod,
    onContentChanged,
    performQuickFix,
    indentBlock,
    findLinkAt
} CppEditor;

enum {
    cutLine=Qt::UserRole+20,
    deleteLine,
    moveLineUp,
    movelineDown,
    copyLineUp,
    copyLineDown,
    focusInEvent,
    focusOutEvent
} BaseEditor2;

enum {
    startDebugger = Qt::UserRole+40,
    stopDebugger,
    isError
} Debugger;

enum {
    start = Qt::UserRole+50,
    stop
} ProjectExplorer;
#endif // USERROLES_H
