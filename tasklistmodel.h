#ifndef TASKLISTMODEL_H
#define TASKLISTMODEL_H

#include <QAbstractListModel>
#include <QList>
#include <QString>

class TaskListModel : public QAbstractListModel
{

  Q_OBJECT

public:
  TaskListModel(QList<QString> & tasks_ref, QObject * parent);

  int rowCount(const QModelIndex & parent = QModelIndex()) const
  {
    return task_list.size();
  }

  QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

  void ListAppended();

private:
  QList<QString> & task_list;

signals:
  void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight);
};

#endif // TASKLISTMODEL_H
