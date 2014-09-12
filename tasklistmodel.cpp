#include "tasklistmodel.h"
#include <iostream>

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

TaskListModelWithIcon::TaskListModelWithIcon(QList<QString> &tasks_ref, const QIcon &icon, QObject *parent)
  : TaskListModel(tasks_ref,parent),
    icon(icon)
{
}

QVariant TaskListModelWithIcon::data(const QModelIndex & index, int role) const
{
  if(role == Qt::DecorationRole){
      return icon;
  }

  return TaskListModel::data(index,role);
}
