#include "ourshops.h"
#include "ui_ourshops.h"
#include <QTextBrowser>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>

struct PickupPoint {
    QString name;
    QString address;
    QString schedule;
    QString phoneNumber;
};

std::vector<PickupPoint> pickupPoints = {
    {"Новосибирский музей железнодорожной техники", "Россия, Новосибирск, Разъездная улица, 54/1",
     "ВТ-ВС с 9:00 до 19:00, перерыв 13:00-14:00, ПН - выходной.", "+79134812380"},
    {"Новосибирский государственный краеведческий музей/\"", "р-н Центральный, Красный проспект, 23", "с 09:00 до 21:00", "+73833830533"},
    {"Сибирская берёста\"\"", "Россия, Новосибирск, улица Свердлова, 21",
     "Ежедневно c 10:00 до 20:00, перерывы 13:00-13:30 и 16:00-16:30", "+79293055747"},
    {"Музей истории СО РАН\"\"", " Россия, Новосибирск, Золотодолинская улица, 77",
     "ПН-ВС с 10:00 до 21:00, перерывы 12:00-12:30 и 15:00-15:30", "+79139876543"},
    {"Новосибирский государственный художественный музей", "Красный проспект, 5, улица Свердлова, 10", "с 9:00 до 20:00", "+73815005050"},

};


ourshops::ourshops(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ourshops)
{
    ui->setupUi(this);

    // Создаем виджеты для отображения результатов и ввода текста
    QTextBrowser *resultBrowser = new QTextBrowser(this);
    QLineEdit *searchLineEdit = new QLineEdit(this);
    searchLineEdit->setPlaceholderText("Поиск по музеям");
    // Создаем метку для подсказки поиска
    QLabel *searchLabel = new QLabel("Адреса музеев", this);
    searchLabel->setStyleSheet("border: none; background-color:none;");
    // Создаем компоновщик и устанавливаем его для основного виджета
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(searchLabel);
    layout->addWidget(searchLineEdit);
    layout->addWidget(resultBrowser);

    // Формируем текст для отображения всех магазинов
    QString resultText;
    for (const auto& point : pickupPoints) {
        resultText += "Название: " + point.name + "\n";
        resultText += "Адрес: " + point.address + "\n";
        resultText += "Расписание: " + point.schedule + "\n";
        resultText += "Телефон: " + point.phoneNumber + "\n";
        resultText += "---------------------------------------------------------------------------------\n";
    }
    resultBrowser->setText(resultText);

    // Пример использования функции поиска при вводе текста
    connect(searchLineEdit, &QLineEdit::textChanged, [=](const QString& searchString){
         QString searchStr = searchString.toLower();
        // Фильтрация результатов поиска
        std::vector<PickupPoint> results;
        for (const auto& point : pickupPoints) {
            if (point.name.contains(searchString, Qt::CaseInsensitive) ||
                point.address.contains(searchString, Qt::CaseInsensitive)) {
                results.push_back(point);
            }
        }

        // Формируем текст для отображения результатов
        QString filteredResultText;
        for (const auto& result : results) {
            filteredResultText += "Название: " + result.name + "\n";
            filteredResultText += "Адрес: " + result.address + "\n";
            filteredResultText += "Расписание: " + result.schedule + "\n";
            filteredResultText += "Телефон: " + result.phoneNumber + "\n";
            filteredResultText += "---------------------------\n";
        }

        resultBrowser->setText(filteredResultText);
    });
}

ourshops::~ourshops()
{
    delete ui;
}
