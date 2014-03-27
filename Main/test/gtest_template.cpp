#include <gtest/gtest.h>
#include <iostream>

using namespace std;

// シンプルなテスト
// テストのカテゴリ、名前は任意（他と重複はしないように）
TEST(TestCategory, EQ){
	// 1つ目のパラメータが想定値
	// 2つ目のパラメータがテスト実行結果

	// 数値用
	ASSERT_EQ(1,1);
	EXPECT_EQ(1,1);

	// 文字列用
	ASSERT_STREQ("arm","arm");
	EXPECT_STREQ("arm","arm");
}

TEST(TestCategory, NE){
	ASSERT_NE(2,5);
	EXPECT_NE(2,5);
	ASSERT_STRNE("arm","ARM");
	EXPECT_STRNE("arm","ARM");
}

TEST(TestCategory, ASSERT){
	// ASSERT_XXは条件を満たさない場合、以降は実行されず、次のテストを実行する
	bool actual = true;
	ASSERT_TRUE(false == actual);
	cout << "pass 1" << endl;
	ASSERT_FALSE(true == actual);
	cout << "pass 2" << endl;

}

TEST(TestCategory, EXPECT){
	// EXPECT_XXは条件を満たさない場合でも次のステップに進む
	bool actual = true;
	EXPECT_TRUE(false == actual);
	cout << "pass 1" << endl;
	EXPECT_FALSE(true == actual);
	cout << "pass 2" << endl;
}

TEST(TestCategory, Decimal){
	// 小数比較
	float f = 2.5;
	EXPECT_FLOAT_EQ(2.5, f);
	double d = 1.25;
	EXPECT_DOUBLE_EQ(1.25, d);
	// 3つ目のパラメータは許容する誤差
	EXPECT_NEAR(1.4142, 1.4141, 0.0001);
}

// テストフィクスチャを利用したテスト
// フィクスチャクラスの定義
class SampleTestCase : public ::testing::Test
{
protected:
	// 各テストケースのの実行前に実施する処理を記述します。
	virtual void SetUp() {
		// テストの前処理
		cout << "前処理" << endl;
	}
	// 各テストケースのの実行後に実施する処理を記述します。
	virtual void TearDown(){
		// テストの後処理
		cout << "後処理" << endl;
	}
};

// 1番目のパラメータはフィクスチャクラスと同じ名前にする
// 2番目はテスト名で任意（他と重複はしないように）
TEST_F(SampleTestCase, TestName1){

}

TEST_F(SampleTestCase, TestName2){
	// 失敗時にメッセージを表示する
	for( int i = 0; i < 5; i++ ){
		EXPECT_TRUE( i < 3 ) << "loop count=" << ::testing::PrintToString(i);
	}

}

// パラメータ化したテスト（上級者向け）
typedef std::tr1::tuple<int, int> testParam;
class ParameteredTestCase : public SampleTestCase, public ::testing::WithParamInterface<testParam>
{
};

TEST_P(ParameteredTestCase, TestName){
	testParam param = GetParam();
	int i1 = std::tr1::get<0>(param);
	int i2 = std::tr1::get<1>(param);
	cout << "(" << i1 << "," << i2 << ")" << endl;
}

INSTANTIATE_TEST_CASE_P(CategoryName, ParameteredTestCase, ::testing::Combine(::testing::Values(0,1), ::testing::Range(1,3)));
INSTANTIATE_TEST_CASE_P(CategoryNameEx, ParameteredTestCase, 
		::testing::Values(
			testParam(2,1),
			testParam(3,8)
		));
