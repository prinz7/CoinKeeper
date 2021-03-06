﻿#pragma once

#include <QWidget>
#include "ui_profilechooser.h"

namespace Views
{
    class ProfileChooserView : public QMainWindow {
        Q_OBJECT

    public:
        ProfileChooserView(QWidget* parent = Q_NULLPTR);
        ~ProfileChooserView();
        // Adds an entry into the list of profiles
        void AddProfile(QString s);
        // Removes all entrys of the list of profiles
        void ClearList();
        // Returns the current selected row of the list of profiles
        int GetSelectedRow();
        // Sets the given row as selected in the list
        void SetRowAsSelected(int row);

    signals:
        void ButtonNewProfileClicked();
        void ButtonDeleteProfileClicked();
        void ButtonRefreshListClicked();
        void ButtonOpenProfileClicked();
        void ButtonChangeProfileNameClicked();

    private:
        Ui_MainWindow ui;
    };
}
