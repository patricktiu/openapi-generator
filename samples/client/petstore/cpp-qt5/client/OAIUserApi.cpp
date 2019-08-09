/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUserApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIUserApi::OAIUserApi() : basePath("/v2"),
    host("petstore.swagger.io"),
    timeout(0){

}

OAIUserApi::~OAIUserApi() {

}

OAIUserApi::OAIUserApi(const QString& host, const QString& basePath, const int tout) {
    this->host = host;
    this->basePath = basePath;
    this->timeout = tout;
}

void OAIUserApi::setBasePath(const QString& basePath){
    this->basePath = basePath;
}

void OAIUserApi::setHost(const QString& host){
    this->host = host;
}

void OAIUserApi::setApiTimeOutMs(const int tout){
    timeout = tout;
}

void OAIUserApi::addHeaders(const QString& key, const QString& value){
    defaultHeaders.insert(key, value);
}


void
OAIUserApi::createUser(const OAIUser& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "POST");

    
    QString output = body.asJson();
    input.request_body.append(output);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::createUserCallback);

    worker->execute(&input);
}

void
OAIUserApi::createUserCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit createUserSignal();
        emit createUserSignalFull(worker);
    } else {
        emit createUserSignalE(error_type, error_str);
        emit createUserSignalEFull(worker, error_type, error_str);
    }
}

void
OAIUserApi::createUsersWithArrayInput(const QList<OAIUser>& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user/createWithArray");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "POST");

    
    QJsonDocument doc(::OpenAPI::toJsonValue(body).toArray());
    QByteArray bytes = doc.toJson();
    input.request_body.append(bytes);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::createUsersWithArrayInputCallback);

    worker->execute(&input);
}

void
OAIUserApi::createUsersWithArrayInputCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit createUsersWithArrayInputSignal();
        emit createUsersWithArrayInputSignalFull(worker);
    } else {
        emit createUsersWithArrayInputSignalE(error_type, error_str);
        emit createUsersWithArrayInputSignalEFull(worker, error_type, error_str);
    }
}

void
OAIUserApi::createUsersWithListInput(const QList<OAIUser>& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user/createWithList");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "POST");

    
    QJsonDocument doc(::OpenAPI::toJsonValue(body).toArray());
    QByteArray bytes = doc.toJson();
    input.request_body.append(bytes);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::createUsersWithListInputCallback);

    worker->execute(&input);
}

void
OAIUserApi::createUsersWithListInputCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit createUsersWithListInputSignal();
        emit createUsersWithListInputSignalFull(worker);
    } else {
        emit createUsersWithListInputSignalE(error_type, error_str);
        emit createUsersWithListInputSignalEFull(worker, error_type, error_str);
    }
}

void
OAIUserApi::deleteUser(const QString& username) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user/{username}");
    QString usernamePathParam("{");
    usernamePathParam.append("username").append("}");
    fullPath.replace(usernamePathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(username)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "DELETE");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::deleteUserCallback);

    worker->execute(&input);
}

void
OAIUserApi::deleteUserCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit deleteUserSignal();
        emit deleteUserSignalFull(worker);
    } else {
        emit deleteUserSignalE(error_type, error_str);
        emit deleteUserSignalEFull(worker, error_type, error_str);
    }
}

void
OAIUserApi::getUserByName(const QString& username) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user/{username}");
    QString usernamePathParam("{");
    usernamePathParam.append("username").append("}");
    fullPath.replace(usernamePathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(username)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::getUserByNameCallback);

    worker->execute(&input);
}

void
OAIUserApi::getUserByNameCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIUser output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getUserByNameSignal(output);
        emit getUserByNameSignalFull(worker, output);
    } else {
        emit getUserByNameSignalE(output, error_type, error_str);
        emit getUserByNameSignalEFull(worker, error_type, error_str);
    }
}

void
OAIUserApi::loginUser(const QString& username, const QString& password) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user/login");
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("username"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(username)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("password"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(password)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::loginUserCallback);

    worker->execute(&input);
}

void
OAIUserApi::loginUserCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    QString output;
    ::OpenAPI::fromStringValue(QString(worker->response), output);
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit loginUserSignal(output);
        emit loginUserSignalFull(worker, output);
    } else {
        emit loginUserSignalE(output, error_type, error_str);
        emit loginUserSignalEFull(worker, error_type, error_str);
    }
}

void
OAIUserApi::logoutUser() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user/logout");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::logoutUserCallback);

    worker->execute(&input);
}

void
OAIUserApi::logoutUserCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit logoutUserSignal();
        emit logoutUserSignalFull(worker);
    } else {
        emit logoutUserSignalE(error_type, error_str);
        emit logoutUserSignalEFull(worker, error_type, error_str);
    }
}

void
OAIUserApi::updateUser(const QString& username, const OAIUser& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/user/{username}");
    QString usernamePathParam("{");
    usernamePathParam.append("username").append("}");
    fullPath.replace(usernamePathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(username)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    worker->setTimeOut(timeout);
    OAIHttpRequestInput input(fullPath, "PUT");

    
    QString output = body.asJson();
    input.request_body.append(output);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIUserApi::updateUserCallback);

    worker->execute(&input);
}

void
OAIUserApi::updateUserCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit updateUserSignal();
        emit updateUserSignalFull(worker);
    } else {
        emit updateUserSignalE(error_type, error_str);
        emit updateUserSignalEFull(worker, error_type, error_str);
    }
}


}
