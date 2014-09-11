#include "tasklistmodel.h"

TaskListModel::TaskListModel(QList<QString> & tasks_ref, QObject * parent)
  : QAbstractListModel(parent),
    task_list(tasks_ref)
{
}

QVariant TaskListModel::data(const QModelIndex &index, int role) const
{
  if(role == Qt::DisplayRole)
    if(index.row() < task_list.size())
      return task_list.at(index.row());

  return QVariant();
}

void TaskListModel::ListAppended()
{
  emit layoutChanged();
}
