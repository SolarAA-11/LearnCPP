#pragma once

template<typename T>
int forTest() {
    static T t{0};
    return t++;
}
