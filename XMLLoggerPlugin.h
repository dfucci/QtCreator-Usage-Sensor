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
class XMLLoggerPlugin : public ExtensionSystem::IPlugin
{
public:
XMLLoggerPlugin();
~XMLLoggerPlugin();
void extensionsInitialized();
bool initialize(const QStringList & arguments, QString * errorString);
void shutdown();
//static void registerXML(){
//    QMessageBox::information(0, "title", "text");
//    //register the file
//}

//static void registerXML(int id,QString filename, QString type){
//    this->_name=XMLLoggerPlugin::lookupName(id);
//    this->_type=type;
//    this->_filename=filename;
//    this->_timestamp=QString::number(QDateTime::currentMSecsSinceEpoch());
//    XMLLoggerPlugin::write(this->_name, this->_type, this->_filename, this->_timestamp);
//}
//static void registerXML(QString name, QString filename, QString type);
static void registerXML(QString name, QString filename, QString type){
   // _name=name;
   // _type=type;
   // _filename=filename;
    // _timestamp=QString::number(QDateTime::currentMSecsSinceEpoch());
    XMLEvent::XMLEvent xev;
    xev.setFilename(filename);
    xev.setName(name);
    xev.setType(type);
    xev.setTimestamp();
    xev.write();
}
/*{
//    _name=name;
//    _type=type;
//    _filename=filename;
    QString timestamp=QString::number(QDateTime::currentMSecsSinceEpoch());
   // XMLLoggerPlugin::write(name, type, filename, timestamp);
    QFile file("QtCreatorLog.xml");
      if (!file.open(QIODevice::Append))
      {
       //qDebug() << "impossibile aprire il file";
      }
    QXmlStreamWriter xmlWriter(&file);
    xmlWriter.setAutoFormatting(true);
    xmlWriter.writeStartElement("event");s
    xmlWriter.writeTextElement("type", type);
    xmlWriter.writeTextElement("filename", filename);
    xmlWriter.writeTextElement("timestamp", timestamp);
    xmlWriter.writeTextElement("data", name);
    xmlWriter.writeEndElement();
    file.close();
}*/
//void registerXML(QString name, QString type, QString filename);
//void registerXML(int id,QString type, QString filename);
private:
QString lookupName(int id);
int lookupID(QString name);
void write(QString name, QString type, QString filename, QString timestamp);
static QString _name, _type, _filename, _timestamp;
};
#endif // XMLLOGGERPLUGIN_H
