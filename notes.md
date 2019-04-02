# 一些思路

```
g++ pp.cpp -o pp -g -std=c++14 -Wall
```

参考：

https://github.com/ppy/osu-api/wiki
https://github.com/zhangtianxiang/osu/tree/master/osu.Game.Rulesets.Catch
https://github.com/zhangtianxiang/catch-the-pp
https://github.com/zhangtianxiang/osu-performance

首要功能：输入map，输出其ctb-star

主要思路：解析.osu文件为map，对其求aim。

pp计算时不依赖map具体内容，只需要其aim、图属性和游戏结果。

最终功能：
- osu!
- taiko
- mania
- ctb
    - 计算一张图的star（指定mods）
    - 计算pp（指定mods）


框架

```
pp
- star.cpp // star入口
- pp.cpp // pp入口
- src // 源码
    - tools.cpp // 基础工具
    - tools_parts // 拆分内容
    - models.cpp // 数据结构
    - models_parts // 拆分内容
    - osu_parser.cpp // 解析文件成为beatmap
    - osu_parser_parts // 拆分内容
    - gamemodes // 模式
        - ctb
            - ctb_mods_beatmap.cpp // 将Beatmap按照mods转为CtbModsBeatmap，初始化时计算aim，这个class将提供属性查询功能和pp计算功能
            - ctb_result.cpp // 将Result按照需求转为CtbResult在计算pp时作为参数传入。
```


使用蛇形命名法，class大驼峰命名法

尽量写为函数，除非需要存储数据，或存储状态进行一系列连续操作写为class