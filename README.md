#ENG
# ASCII Live Client 🖥️🎨  

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)  

A C++ client for viewing ASCII animations from [ascii.live](https://ascii.live) directly in your terminal.  

![Example](https://ascii.live/examples/nyan.gif)  
*(Example of the `nyan` animation)*  

## 📦 Installation  

### Linux (Manual)  
```bash  
git clone https://github.com/FenchsApps/ascii-live-client.git  
cd ascii-live-client  
make && sudo make install  
```  


### Dependencies  
- `curl` (for downloading animations)  
- `g++` (for compilation)  

## 🚀 Usage  
```bash  
ascii_live_client          # List available animations  
ascii_live_client nyan     # Play the "nyan" animation  
ascii_live_client dvd      # Play the "dvd" animation  
```  

## 📜 Animation List  
- `batman`, `dvd`, `spidyswing`, `nyan`, `donut`  
- `clock`, `rick`, `bomb`, `earth`, `kitty`  
*(Full list available in the [source code](src/client.cpp))*  

## 🛠️ Building from Source  
```bash  
make          # Compile  
make install  # Install  
make clean    # Clean build files  
```  

## 🤝 Contributing  
1. Clone the repository:  
   ```bash  
   git clone https://github.com/FenchsApps/ascii-live-client.git  
   ```  
2. Make your changes and submit a Pull Request.  

## 📜 License  
MIT © [FenchsApps](https://github.com/FenchsApps)

#RUS


# ASCII Live Client 🖥️🎨

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arch Linux](https://img.shields.io/badge/Arch_Linux-Package-blue?logo=arch-linux)](https://aur.archlinux.org/packages/ascii-live-client)

C++ клиент для просмотра ASCII-анимаций с [ascii.live](https://ascii.live) прямо в терминале.

![Пример работы](https://ascii.live/examples/nyan.gif)  
*(Пример анимации `nyan`)*

## 📦 Установка

### Linux (вручную)
```bash
git clone https://github.com/FenchsApps/ascii-live-client.git
cd ascii-live-client
make && sudo make install

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
*(Полный список — в [исходном коде](src/client.cpp))*

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
MIT © [FenchsApps](https://github.com/FenchsApps)
```

