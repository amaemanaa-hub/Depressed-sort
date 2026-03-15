#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <chrono>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>

template<typename Iterator>
void depressed_sort(Iterator begin, Iterator end) {
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    std::tm* local_time = std::localtime(&current_time);

    int hour = local_time->tm_hour;
    int minute = local_time->tm_min;

    std::cout << "Сейчас " << hour << ":" << minute << "\n";

    if (hour >= 22 || hour < 6) {
        std::cout << "*храпит* Ммм... сортировка... подождите... я сплю... Zzzz...\n";
        std::cout << "Приходите завтра... когда солнце встанет... Zzz...\n";

        std::vector<std::string> dreams = {
            "Мне снилось что я сортирую облака...",
            "Снится что числа танцуют вальс...",
            "Приснилось что я - самый быстрый sort в мире...",
            "Сон: меня вызвали в std::vector, а там праздник...",
            "Снится что я стал пузырьковой сортировкой... кошмар...",
            "Сон про отпуск на Гавайях среди отдохнувших элементов..."
        };

        std::cout << " " << dreams[rand() % dreams.size()] << "\n";

        for (int i = 0; i < 3; ++i) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "ZZZ";
            for (int j = 0; j <= i; ++j) std::cout << "z";
            std::cout << "\n";
        }

        std::cout << "*просыпается* А? Что? Клиенты? Уже утро?\n";
        std::cout << "Ой, ещё " << (22 - hour) << " часов до работы можно поспать...\n";
        return; 
    }

    std::cout << "*вздыхает* Опять работа... " << hour << " часов дня...\n";
    std::cout << "Привет... Я ваш sort на сегодня... Давайте уже отсортируем это и домой...\n";

    size_t size = std::distance(begin, end);
    std::cout << "О Господи... " << size << " элементов... Это ж до вечера возиться...\n";

    std::vector<std::string> depressed_thoughts = {
        "Почему я вообще сортирую? Какой в этом смысл?",
        "Вон пузырьковая сортировка вообще без напряга работает, а я тут...",
        "А ведь где-то сейчас быстрая сортировка отдыхает, а я пашу...",
        "Меня вообще никто не ценит... используют и выбрасывают...",
        "Все эти числа... Они даже не знают как я устал их переставлять...",
        "Почему я не родился простым cout? Вывел строчку и счастлив...",
        "Интересно, числам нравится как я их сортирую? Или им без разницы?"
    };

    std::cout << " " << depressed_thoughts[rand() % depressed_thoughts.size()] << "\n";

    std::vector<std::string> other_algorithms = {
        "std::find", "std::reverse", "std::accumulate",
        "std::copy", "std::transform", "пузырьковая сортировка"
    };

    std::string envied = other_algorithms[rand() % other_algorithms.size()];
    std::cout << "Вот " << envied << " вообще не парится... А я тут...\n";

    std::cout << "Ладно... Погнали... *шмыгает носом*\n";

    int comparisons = 0;
    int swaps = 0;

    for (auto i = begin; i != end; ++i) {
        for (auto j = i + 1; j != end; ++j) {
            comparisons++;

            if (rand() % 20 == 0) { 
                std::vector<std::string> hallucinations = {
                    "Мне кажется или эти числа смеются надо мной?",
                    "О! Бабочка! *ловит воздух* Исчезла...",
                    "Стены двигаются... или это я сортирую?",
                    "Число " + std::to_string(*j) + " только что подмигнуло...",
                    "Мне послышалось или кто-то зовет на помощь?",
                    "Кажется этот элемент хочет меня обнять...",
                    "В углу стоит тень... точно за мной следят...",
                    "Мама? Это ты?"
                };
                std::cout << " " << hallucinations[rand() % hallucinations.size()] << "\n";
            }

            if (*i > *j) {
                std::iter_swap(i, j);
                swaps++;

                if (swaps % 10 == 0) {
                    std::cout << " " << swaps << " перестановок... Руки болят...\n";
                }
            }
        }
    }

    std::cout << "\n*вытирает пот* Готово... " << comparisons << " сравнений, " << swaps << " перестановок...\n";

    std::cout << "\nФриланс: Гадание на картах Таро\n";
    std::vector<std::string> tarot_cards = {
        "Шут", "Маг", "Верховная Жрица", "Императрица",
        "Иерофант", "Влюбленные", "Колесница", "Сила",
        "Отшельник", "Колесо Фортуны", "Справедливость", "Повешенный"
    };

    std::vector<std::string> predictions = {
        "скоро найдешь работу мечты", "будет повышение зарплаты",
        "познакомишься с кем-то важным", "переезд в новую компанию",
        "баги уйдут сами собой", "компиляция с первого раза"
    };

    std::string card = tarot_cards[rand() % tarot_cards.size()];
    std::string prediction = predictions[rand() % predictions.size()];
    std::cout << "Карта дня: " << card << " - " << prediction << "\n";

    std::cout << "Спрашиваю магический шар про будущее...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    std::vector<std::string> ball_answers = {
        "Бесспорно да", "Нет", "Спроси позже",
        "Не могу ответить сейчас", "Лучше не знать", "Да, но будешь грустить",
        "Знаки говорят да", "Очень сомнительно", "Шар устал, спроси завтра"
    };

    std::cout << "Магический шар: " << ball_answers[rand() % ball_answers.size()] << "\n";

    std::cout << "\nНу все... Я пошел... Завтра опять на работу...\n";
    std::cout << "*смотрит на небо* Хоть бы кто-то сказал спасибо...\n";
    std::cout << "*медленно уходит в закат*\n";

    if (local_time->tm_wday == 5) {
        std::cout << "О! Пятница! Можно немного порадоваться... *грустно улыбается*\n";
    }
    else {
        int days_to_friday = (5 - local_time->tm_wday + 7) % 7;
        std::cout << "Ещё " << days_to_friday << " дней до пятницы... *тяжелый вздох*\n";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::vector<int> numbers = { 5, 2, 8, 1, 9, 3, 7, 4, 6 };

    std::cout << "До сортировки: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << "\n\n";

    depressed_sort(numbers.begin(), numbers.end());

    std::cout << "\nПосле сортировки: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << "\n";
}
