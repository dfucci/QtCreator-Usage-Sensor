#include "xmlevent.h"
#include <QFile>
#include <QXmlStreamWriter>
#include <QDateTime>
XMLEvent::XMLEvent(){}

XMLEvent::~XMLEvent(){}

void XMLEvent::setFilename(QString filename){
    this->_filename=filename;
}

void XMLEvent::setName(QString name){
    this->_name=name;
}

void XMLEvent::setTimestamp(){
    this->_timestamp=QString::number(QDateTime::currentMSecsSinceEpoch());
}

void XMLEvent::setType(QString type){
    this->_type=type;
}

QString XMLEvent::getFilename(){
    return this->_filename;
}

QString XMLEvent::getName(){
    return this->_name;
}

QString XMLEvent::getTimestamp(){
    return this->_timestamp;
}

QString XMLEvent::getType(){
    return this->_type;
}

void XMLEvent::write(){
    QFile file("QtCreatorLog.xml");
      if (!file.open(QIODevice::Append))
      {
       //qDebug() << "impossibile aprire il file";
      }
    QXmlStreamWriter xmlWriter(&file);
    xmlWriter.setAutoFormatting(true);
    xmlWriter.writeStartElement("event");
    xmlWriter.writeTextElement("type", getType());
    xmlWriter.writeTextElement("filename", getFilename());
    xmlWriter.writeTextElement("timestamp", getTimestamp());
    xmlWriter.writeTextElement("data", getName());
    xmlWriter.writeEndElement();
    file.close();
}
