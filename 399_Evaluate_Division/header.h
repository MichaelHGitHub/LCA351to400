#pragma once

#include "..\common\common.h"

void PrepareTestData(vector<TD_VVS_VD_VVS_VD>& testData);

vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries);