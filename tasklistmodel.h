#ifndef TASKLISTMODEL_H
#define TASKLISTMODEL_H

#include <QAbstractListModel>
#include <QIcon>
#include <QList>
#include <QString>

class TaskListModel : public QAbstractListModel
{

  Q_OBJECT

public:
  TaskListModel(QList<QString> & tasks_ref, QObject * parent);
  virtual ~TaskListModel() {};

  QModelIndex getItemIndex(int row)
  {
    if(row < task_list.size())
            return createIndex(row,0);
    return QModelIndex();
  }

  virtual int rowCount(const QModelIndex &) const
  {
    return task_list.size();
  }

  virtual QVariant data(const QModelIndex &index, int role) const;

  void ListAppended();

private:
  QList<QString> & task_list;

signals:
  void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight);
};

class TaskListModelWithIcon : public TaskListModel
{
  Q_OBJECT

public:
  TaskListModelWithIcon(QList<QString> &tasks_ref, const QIcon & icon, QObject *parent);
  virtual ~TaskListModelWithIcon() {};

public:
  virtual QVariant data(const QModelIndex &index, int role) const;

private:
  QIcon icon;
};


#endif // TASKLISTMODEL_H
