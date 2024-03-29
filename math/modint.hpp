#pragma once
/**
 * @brief ModInt
 */
#include <bits/stdc++.h>
#include "template/alias.hpp"

template<std::size_t size>
struct uint_least{
    static_assert(size<=128,"size must be less than or equal to 128");
    using type=typename std::conditional<
        size<=8,std::uint_least8_t,
        typename std::conditional<
            size<=16,std::uint_least16_t,
            typename std::conditional<
                size<=32,std::uint_least32_t,
                typename std::conditional<size<=64,std::uint_least64_t,__uint128_t>::type>::type>::type>::type;
};
template<std::size_t size> using uint_least_t = typename uint_least<size>::type;
namespace internal{
    struct modint_base{};
}//naespace internal
template<typename T>using is_modint = std::is_base_of<internal::modint_base,T>;
template<typename T,T mod>
struct StaticModInt:internal::modint_base{
    static_assert(std::is_integral<T>::value, "T must be integral");
    static_assert(std::is_unsigned<T>::value, "T must be unsgined");
    static_assert(mod>0, "mod must be positive");
    static_assert(mod<=INF<T>, "mod*2 must be less than or equal to T::max()");
  private:
    using large_t = typename uint_least<std::numeric_limits<T>::digits * 2>::type;
    using signed_t = typename std::make_signed<T>::type;
    T val;
  public:
    constexpr StaticModInt():val(0){}
    template<typename U,typename std::enable_if<std::is_integral<U>::value&&std::is_unsigned<U>::value>::type* =nullptr>
    constexpr StaticModInt(U x):val(x%mod){}
    template<typename U,typename std::enable_if<std::is_integral<U>::value&&std::is_signed<U>::value>::type* =nullptr>
    constexpr StaticModInt(U x):val{}{
        x%=static_cast<signed_t>(mod);
        if(x<0)x+=static_cast<signed_t>(mod);
        val=static_cast<T>(x);
    }
    T get()const{return val;}
    static constexpr T get_mod(){return mod;}
    static StaticModInt raw(T v){
        StaticModInt res;
        res.val=v;
        return res;
    }
    StaticModInt inv()const{
        return mod_inv(val,mod);
    }
    StaticModInt& operator++(){
        ++val;
        if(val==mod)val=0;
        return *this;
    }
    StaticModInt operator++(int){
        StaticModInt res=*this;
        ++*this;
        return res;
    }
    StaticModInt& operator--(){
        if(val==0)val=mod;
        --val;
        return *this;
    }
    StaticModInt operator--(int){
        StaticModInt res=*this;
        --*this;
        return res;
    }
    StaticModInt& operator+=(const StaticModInt&x){
        val+=x.val;
        if(val>=mod)val-=mod;
        return *this;
    }
    StaticModInt& operator-=(const StaticModInt&x){
        if(val<x.val)val+=mod;
        val-=x.val;
        return *this;
    }
    StaticModInt& operator*=(const StaticModInt&x){
        val=static_cast<T>((static_cast<large_t>(val)*x.val)%mod);
        return *this;
    }
    StaticModInt& operator/=(const StaticModInt&x){
        return *this*=x.inv();
    }
    friend StaticModInt operator+(const StaticModInt&l,const StaticModInt&r){return StaticModInt(l)+=r;}
    friend StaticModInt operator-(const StaticModInt&l,const StaticModInt&r){return StaticModInt(l)-=r;}
    friend StaticModInt operator*(const StaticModInt&l,const StaticModInt&r){return StaticModInt(l)*=r;}
    friend StaticModInt operator/(const StaticModInt&l,const StaticModInt&r){return StaticModInt(l)/=r;}
    StaticModInt operator+()const{return StaticModInt(*this);}
    StaticModInt operator-()const{return StaticModInt()-*this;}
    friend bool operator==(const StaticModInt&l,const StaticModInt&r){return l.val==r.val;}
    friend bool operator!=(const StaticModInt&l,const StaticModInt&r){return l.val!=r.val;}
    StaticModInt pow(long long a)const{
        StaticModInt v=*this,res=1;
        while(a){
            if(a&1)res*=v;
            v*=v;
            a>>=1;
        }
        return res;
    }
    friend std::ostream &operator<<(std::ostream &os,const StaticModInt&x){
        return os<<x.val;
    }
    friend std::istream &operator>>(std::istream &is,StaticModInt&x){
        long long tmp;
        is>>tmp;
        x=StaticModInt(tmp);
        return is;
    }
};
template<unsigned int p>using ModInt=StaticModInt<unsigned int,p>;
using modint998244353 = ModInt<998244353>;
using modint1000000007 = ModInt<1000000007>;