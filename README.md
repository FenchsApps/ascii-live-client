```markdown
# ASCII Live Client 🖥️🎨

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arch Linux](https://img.shields.io/badge/Arch_Linux-Package-blue?logo=arch-linux)](https://aur.archlinux.org/packages/ascii-live-client)

C++ клиент для просмотра ASCII-анимаций с [ascii.live](https://ascii.live) прямо в терминале.

![Пример работы](https://ascii.live/examples/nyan.gif)  
*(Пример анимации `nyan`)*

## 📦 Установка

### Linux (вручную)
```bash
git clone https://github.com/ваш-логин/ascii-live-client.git
cd ascii-live-client
make && sudo make install
```

### Arch Linux (из AUR)
```bash
yay -S ascii-live-client
# или
paru -S ascii-live-client
```

### Зависимости
- `curl` (для загрузки анимаций)
- `g++` (для сборки)

## 🚀 Использование
```bash
ascii_live_client          # Список доступных анимаций
ascii_live_client nyan     # Запуск анимации "nyan"
ascii_live_client dvd      # Запуск анимации "dvd"
```

## 📜 Список анимаций
- `batman`, `dvd`, `spidyswing`, `nyan`, `donut`
- `clock`, `rick`, `bomb`, `earth`, `kitty`  
*(Полный список — в [исходном коде](src/ascii_live_client.cpp))*

## 🛠️ Сборка из исходников
```bash
make          # Сборка
make install  # Установка
make clean    # Очистка
```

## 🤝 Разработка
1. Клонируйте репозиторий:
   ```bash
   git clone https://github.com/FenchsApps/ascii-live-client.git
   ```
2. Внесите изменения и создайте Pull Request.

## 📜 Лицензия
MIT © [FenchsApps](https://github.com/ваш-логин)
```

