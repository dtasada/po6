#pragma once

#include <cstdint>

template<typename T> struct v3 {
    T x, y, z;

    // clang-format off
    v3(T x, T y, T z) : x(x), y(y), z(z) {}
    v3(T v) : x(v), y(v), z(v) {}
    v3(void) : v3(0) {}

    v3 operator+(const v3 &rhs) const { return v3(x + rhs.x, y + rhs.y, z + rhs.z); }
    v3 operator-(const v3 &rhs) const { return v3(x - rhs.x, y - rhs.y, z - rhs.z); }
    v3 operator*(const v3 &rhs) const { return v3(x * rhs.x, y * rhs.y, z * rhs.z); }
    v3 operator/(const v3 &rhs) const { return v3(x / rhs.x, y / rhs.y, z / rhs.z); }
    v3 operator+=(const v3 &rhs) { return *this = *this + rhs; }
    v3 operator-=(const v3 &rhs) { return *this = *this - rhs; }
    v3 operator*=(const v3 &rhs) { return *this = *this * rhs; }
    v3 operator/=(const v3 &rhs) { return *this = *this / rhs; }
    v3 operator-(const T &rhs) const { return v3(x - rhs, y - rhs, z - rhs); }
    v3 operator+(const T &rhs) const { return v3(x + rhs, y + rhs, z + rhs); }
    v3 operator*(const T &rhs) const { return v3(x * rhs, y * rhs, z * rhs); }
    v3 operator/(const T &rhs) const { return v3(x / rhs, y / rhs, z / rhs); }
    v3 operator*=(const T &rhs) { return *this = *this * rhs; }
    v3 operator/=(const T &rhs) { return *this = *this / rhs; }
    v3 operator+=(const T &rhs) { return *this = *this + rhs; }
    v3 operator-=(const T &rhs) { return *this = *this - rhs; }
    bool operator==(const v3 &rhs) const { return x == rhs.x && y == rhs.y && z == rhs.z; }
    bool operator!=(const v3 &rhs) const { return !(*this == rhs); }

    // clang-format on

    operator T *() const { return new T[3]{x, y, z}; }

  public:
    float volume() const { return x * y * z; }
};

typedef v3<float>    v3f;
typedef v3<int32_t>  v3i;
typedef v3<uint32_t> v3u;
typedef v3<uint8_t>  rgb;