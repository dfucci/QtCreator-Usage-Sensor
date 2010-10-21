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

//static void XMLLoggerPlugin::registerXML(int id,QString filename, QString type){
//    this->_name=XMLLoggerPlugin::lookupName(id);
//    this->_type=type;
//    this->_filename=filename;
//    this->_timestamp=QString::number(QDateTime::currentMSecsSinceEpoch());
//    XMLLoggerPlugin::write(this->_name, this->_type, this->_filename, this->_timestamp);
//}
//void XMLLoggerPlugin::registerXML(QString name, QString filename, QString type){
//   // _name=name;
//   // _type=type;
//   // _filename=filename;
//    // _timestamp=QString::number(QDateTime::currentMSecsSinceEpoch());
//    XMLEvent xev;
//    xev.setFilename(filename);
//    xev.setName(name);
//    xev.setType(type);
//    xev.setTimestamp();
//    xev.write();
//}
void XMLLoggerPlugin::write(QString name, QString type, QString filename, QString timestamp){
    QFile file("QtCreatorLog.xml");
      if (!file.open(QIODevice::Append))
      {
       //qDebug() << "impossibile aprire il file";
      }
    QXmlStreamWriter xmlWriter(&file);
    xmlWriter.setAutoFormatting(true);
    xmlWriter.writeStartElement("event");
    xmlWriter.writeTextElement("type", type);
    xmlWriter.writeTextElement("filename", filename);
    xmlWriter.writeTextElement("timestamp", timestamp);
    xmlWriter.writeTextElement("data", name);
    xmlWriter.writeEndElement();
    file.close();
}
QString XMLLoggerPlugin::lookupName(int id){

}
Q_EXPORT_PLUGIN(XMLLoggerPlugin)
