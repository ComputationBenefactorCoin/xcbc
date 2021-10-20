// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef XCBC_QT_XCBCADDRESSVALIDATOR_H
#define XCBC_QT_XCBCADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class XCBCAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit XCBCAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** XCBC address widget validator, checks for a valid xcbc address.
 */
class XCBCAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit XCBCAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // XCBC_QT_XCBCADDRESSVALIDATOR_H
