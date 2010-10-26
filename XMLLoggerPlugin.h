#ifndef XMLLOGGERPLUGIN_H
#define XMLLOGGERPLUGIN_H
#include <QtCore/QtPlugin>
#include <extensionsystem/iplugin.h>
#include <QString>
#include <QMessageBox>
#include <QDateTime>
#include <QFile>
#include <QXmlStreamWriter>
#include "xmlevent.h"
class XMLLoggerPlugin : public ExtensionSystem::IPlugin{
    public:
        XMLLoggerPlugin();
        ~XMLLoggerPlugin();
        void extensionsInitialized();
        bool initialize(const QStringList & arguments, QString * errorString);
        void shutdown();
        static void registerXML(int id,QString filename, QString type);
        static void registerXML(QString name, QString filename, QString type);

    private:
        QString lookupName(int id);
        int lookupID(QString name);
        void write(QString name, QString type, QString filename, QString timestamp);
        QString _name, _type, _filename, _timestamp;
    };
#endif // XMLLOGGERPLUGIN_H
