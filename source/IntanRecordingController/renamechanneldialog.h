//  ------------------------------------------------------------------------
//
//  This file is part of the Intan Technologies RHD2000 Interface
//  Version 2.04
//  Copyright (C) 2013-2017 Intan Technologies
//
//  ------------------------------------------------------------------------
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published
//  by the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef RENAMECHANNELDIALOG_H
#define RENAMECHANNELDIALOG_H

#include <QDialog>

class QDialogButtonBox;
class QLineEdit;
class QLabel;

class RenameChannelDialog : public QDialog
{
    Q_OBJECT
public:
    explicit RenameChannelDialog(QString channel, QString oldName, QWidget *parent);

    QLineEdit *nameLineEdit;

signals:
    
public slots:

private slots:
    void onLineEditTextChanged();

private:
    QDialogButtonBox *buttonBox;
};

#endif // RENAMECHANNELDIALOG_H
