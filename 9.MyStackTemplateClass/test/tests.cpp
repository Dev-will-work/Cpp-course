// 2021 Copyright Dev-will-work
#include "MyStack.h"

#include <gtest/gtest.h>

TEST(MyStackTest, get_double) {
  MyStack<double> st(10);
  st.push(3.5);
  EXPECT_EQ(st.get(), 3.5);
}

TEST(MyStackTest, simple_push_and_get) {
  MyStack<int> st(10);
  st.push(5);
  EXPECT_EQ(st.get(), 5);
}

TEST(MyStackTest, non_empty) {
  MyStack<int> st(10);
  st.push(5);
  EXPECT_EQ(st.isEmpty(), 0);
}

TEST(MyStackTest, empty) {
  MyStack<int> st(10);
  EXPECT_EQ(st.isEmpty(), 1);
}

TEST(MyStackTest, not_full) {
  MyStack<int> st(10);
  st.push(5);
  EXPECT_EQ(st.isFull(), 0);
}

TEST(MyStackTest, full) {
  MyStack<int> st(2);
  st.push(5);
  st.push(15);
  EXPECT_EQ(st.isFull(), 1);
}


TEST(MyStackTest, bad_pop) {
  MyStack<int> st(10);
  EXPECT_EQ(st.pop(), 0);
}

TEST(MyStackTest, simple_pop) {
  MyStack<int> st(10);
  st.push(5);
  EXPECT_EQ(st.pop(), 5);
}

TEST(MyStackTest, push_and_pop) {
  MyStack<int> st(10);
  st.push(5);
  st.pop();
  EXPECT_EQ(st.get(), 0);
}

TEST(MyStackTest, last_get) {
  MyStack<int> st(10);
  for (size_t i = 0; i < 5; i++) {
    st.push(i);
  }
  EXPECT_EQ(st.get(), 4);
}

TEST(MyStackTest, bad_get) {
  MyStack<int> st(10);
  EXPECT_EQ(st.get(), 0);
}

TEST(MyStackTest, simple_copy) {
  MyStack<int> st(10);
  st.push(5);
  MyStack<int> cc(st);
  EXPECT_EQ(cc.pop(), 5);
}

TEST(MyStackTest, empty_copy) {
  MyStack<int> st(10);
  MyStack<int> cc(st);
  EXPECT_EQ(cc.pop(), 0);
}
