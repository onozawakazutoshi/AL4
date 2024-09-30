#pragma once

/// <summary>
/// 2次元ベクトル
/// </summary>
struct Vector2 final {
    float x, y;

    Vector2() : x(0.0f), y(0.0f){}
    Vector2(float _x,float _y) : x(_x), y(_y){}
    Vector2(int _x, int _y) : x(static_cast<float>(_x)), y(static_cast<float> (_y)){}
    Vector2(int _x, float _y) : x(static_cast<float>(_x)), y(_y) {}
    Vector2(float _x, int _y) : x(_x), y(static_cast<float> (_y)){}

    Vector2 operator-() const;
    Vector2 operator+(const Vector2& _vec) const;
    Vector2 operator-(const Vector2& _vec) const;
    Vector2 operator/(const Vector2& _vec) const;
    Vector2 operator*(float _scalar) const;
    Vector2 operator/(float _scalar) const;
    void operator+=(const Vector2& _vec);
    void operator-=(const Vector2& _vec);
    void operator*=(float _scalar);
    void operator/=(float _scalar);

    Vector2 Ceil() const;
}; 