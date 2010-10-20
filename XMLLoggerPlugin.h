#ifndef XMLLOGGERPLUGIN_H
#define XMLLOGGERPLUGIN_H
#include <QtCore/QtPlugin>
#include <extensionsystem/iplugin.h>
#include <QString>
#include <QMessageBox>
class XMLLoggerPlugin : public ExtensionSystem::IPlugin
{
public:
XMLLoggerPlugin();
~XMLLoggerPlugin();
void extensionsInitialized();
bool initialize(const QStringList & arguments, QString * errorString);
void shutdown();
static void registerXML(){
    QMessageBox::information(0, "title", "text");
    //register the file
}
void registerXML(QString name, QString type, QString filename);
void registerXML(int id,QString type, QString filename);
private:
QString lookupName(int id);
int lookupID(QString name);
void write(QString name, QString type, QString filename, QString timestamp);
QString _name, _type, _filename, _timestamp;
};
#endif // XMLLOGGERPLUGIN_H
