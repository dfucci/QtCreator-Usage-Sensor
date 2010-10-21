#ifndef XMLEVENT_H
#define XMLEVENT_H
#include <QString>
class XMLEvent
{
public:
    XMLEvent();
    ~XMLEvent();
    void write();
    void setName(QString name);
    void setType(QString type);
    void setFilename(QString filename);
    void setTimestamp();
    QString getName();
    QString getType();
    QString getFilename();
    QString getTimestamp();
private:
    QString _name, _type, _filename, _timestamp;
};

#endif // XMLEVENT_H
