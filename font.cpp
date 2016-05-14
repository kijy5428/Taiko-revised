#include "font.h"
#include "qfontdatabase.h"

font::font()
{
    int id = QFontDatabase::addApplicationFont("C:/Users/cindy/Desktop/COLLEGE/104-2/pd2/PROJECT/project2/test4/font/font.ttf");
    //int id = QFontDatabase::addApplicationFont(":/font/font/font.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    fontType = new QFont(family);
    fontType->setPointSize(20);
    fontType->setBold(true);
}
