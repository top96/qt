#include "qhideevent.h"
#include <QString>
#include <QVariant>
#include <QUrl>
#include <QModelIndex>
#include <QHideEvent>
#include "_cgo_export.h"

class MyQHideEvent: public QHideEvent {
public:
};

QtObjectPtr QHideEvent_NewQHideEvent(){
	return new QHideEvent();
}
