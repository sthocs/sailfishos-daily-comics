/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#ifndef JAATAVASPEDE_H
#define JAATAVASPEDE_H

#include "../Comic.h"

class JaatavaSpede : public Comic
{
    Q_OBJECT

public:
    explicit JaatavaSpede(QObject *parent = 0);
    virtual QUrl extractStripImageUrl(QByteArray data);
};

#endif // JAATAVASPEDE_H