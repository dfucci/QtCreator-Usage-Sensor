#ifndef USERROLES_H
#define USERROLES_H
#include <Qt>
enum CppEditor{
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
} ;

enum BaseEditor{
    cutLine=Qt::UserRole+20,
    deleteLine,
    moveLineUp,
    movelineDown,
    copyLineUp,
    copyLineDown,
    focusInEvent,
    focusOutEvent
} ;

enum Debugger{
    startDebugger = Qt::UserRole+40,
    stopDebugger,
    isError
} ;

enum ProjectExplorer {
    start = Qt::UserRole+50,
    stop
} ;
#endif // USERROLES_H
