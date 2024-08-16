#pragma once

#include <random>
#include <chrono>

namespace Random {

    inline std::mt19937 generate() {
        std::random_device rd{};

        auto firstSeed = static_cast<std::seed_seq::result_type>(
            std::chrono::high_resolution_clock::now().time_since_epoch().count()
            );
        std::seed_seq seedSeq{firstSeed, rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};
        return std::mt19937{seedSeq};
    }


    inline std::mt19937 generator{ generate() };

    inline int get(int min, int max) {
        std::uniform_int_distribution die{min, max};
        return die(generator);
    }

    template<typename T>
    T get(T min, T max) {
        std::uniform_real_distribution<T> dist{min, max};
        return dist(generator);
    }

    template<typename R, typename S, typename T>
    R get(S min, T max) {
        return get<R>(static_cast<R>(min), static_cast<R>(max));
    }
    
}
