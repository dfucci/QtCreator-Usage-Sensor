#include "xmlloggerplugin.h"
#include <QtPlugin>
#include <QStringList>
#include <QMessageBox>
#include <QDateTime>
#include <QFile>
#include <QXmlStreamWriter>
#include <UserRoles.h>
XMLLoggerPlugin::XMLLoggerPlugin()
{
// Do nothing
}
XMLLoggerPlugin::~XMLLoggerPlugin()
{
// Do notning
}
bool XMLLoggerPlugin::initialize(const QStringList& args, QString *errMsg)
{
Q_UNUSED(args);
Q_UNUSED(errMsg);
return true;
}
void XMLLoggerPlugin::extensionsInitialized()
{
// Do nothing
}
void XMLLoggerPlugin::shutdown()
{
// Do nothin
}

static void XMLLoggerPlugin::registerXML(int id,QString filename, QString type){
    // To be implemented
}
void XMLLoggerPlugin::registerXML(QString name, QString filename, QString type){
    XMLEvent xev;
    xev.setFilename(filename);
    xev.setName(name);
    xev.setType(type);
    xev.setTimestamp();
    xev.write();
}
QString XMLLoggerPlugin::lookupName(int id){
    // To be implemented
}

int XMLLoggerPlugin::lookupID(QString name){
    // To be implemented
}
Q_EXPORT_PLUGIN(XMLLoggerPlugin)
