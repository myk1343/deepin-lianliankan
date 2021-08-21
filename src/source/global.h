/*
* Copyright (C) 2019 ~ 2021 Uniontech Software Technology Co.,Ltd.
*
* Author:     linxun <linxun@uniontech.com>
*
* Maintainer: zhangdingwen <zhangdingwen@uniontech.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef GLOBAL_H
#define GLOBAL_H

#define ROW 10
#define COLUMN 16

//游戏按钮背景类型
enum GameBtnFlag {
    ButtonNormal = -1,
    ButtonBlank,
    ButtonCow,
    ButtonTiger,
    ButtonRabbit,
    ButtonSnake,
    ButtonHorse,
    ButtonSheep,
    ButtonDog,
    ButtonPig,
    ButtonCat,
    ButtonLion,
    ButtonFox,
    ButtonPanda
};

//游戏按钮大小类型
enum GameBtnSize{
    Default=0,
    Big,
    Mid,
    Small
};

//游戏图标类型
enum GameIconType{
    None=0,
    Sound,
    Begin,
    Reset,
    Hint,
    Home
};

//游戏按钮样式类型
enum GameBtnType {
    TextOnPic = 0,
    OnlyPic,
    IconOnPic,
    NoneType
};

//游戏地图结点
struct GameNode {
    int direction; //移动方向
    int rowIndex; //行
    int columnIndex; //列
    int turnNum; //转弯次数
};

#endif // GLOBAL_H
