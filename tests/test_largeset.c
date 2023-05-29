#include "../sort.h"

/**
 * main - test code
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int arr[] = {1932, 7128, 5268, 5984, 6706, 6434, 5516, 548, 6784, 3745, 4047, 9322, 2584, 8752, 7443, 9406, 8294, 3473, 1457, 961, 4795, 7890, 7187, 5816, 2841, 4528, 9355, 7644, 540, 2585, 2528, 4830, 2904, 349, 4887, 335, 8142, 9737, 6407, 1328, 1887, 4551, 7511, 2246, 4337, 4400, 735, 8073, 3223, 2783, 1008, 7542, 9446, 3527, 8074, 9512, 9649, 5323, 4493, 4318, 3190, 5303, 509, 7399, 4947, 7367, 1054, 8755, 6780, 1920, 5029, 4150, 8088, 6338, 292, 4468, 5246, 1119, 2063, 7788, 1846, 8529, 4741, 4253, 9822, 628, 1346, 6356, 9111, 9754, 2196, 4138, 5260, 2180, 7338, 3125, 3694, 2040, 4464, 4573, 5910, 7859, 7191, 6486, 1958, 4162, 3363, 287, 5849, 9288, 3079, 3122, 5493, 8416, 2690, 4038, 5769, 6536, 8712, 7072, 5290, 8371, 2322, 1725, 5705, 69, 3468, 452, 8694, 7968, 6509, 8276, 7561, 353, 7057, 5545, 2777, 3345, 6683, 1239, 3317, 3398, 9809, 8757, 4660, 3600, 5661, 9725, 9991, 2463, 4550, 9656, 5869, 2373, 7096, 1562, 2252, 8668, 5906, 3716, 8718, 8193, 5454, 4722, 2328, 6461, 3663, 9470, 2344, 7540, 810, 4069, 4463, 458, 8798, 1201, 5217, 5858, 613, 5720, 8178, 2689, 7996, 5646, 2209, 8957, 9293, 808, 3571, 7181, 9778, 2320, 9588, 1691, 4591, 5339, 7647, 8155, 5553, 6445, 7576, 5163, 4203, 8302, 2488, 78, 9016, 4342, 2954, 1180, 1672, 479, 9730, 6605, 7873, 1544, 8600, 8522, 8686, 4371, 2354, 6208, 5430, 9369, 9178, 3196, 9962, 7129, 6519, 9644, 4393, 2797, 9066, 4743, 470, 3279, 4474, 2260, 624, 5428, 9251, 4537, 9345, 649, 660, 1718, 5232, 4238, 4174, 7979, 6697, 1644, 6363, 2339, 4245, 7099, 7677, 3319, 3549, 5575, 8565, 8872, 6950, 8978, 559, 1197, 4156, 7002, 5394, 214, 4310, 6812, 513, 8842, 2840, 9876, 845, 8081, 6820, 9974, 4523, 9601, 7473, 2676, 3703, 5709, 8920, 2714, 8824, 184, 5676, 2509, 837, 4481, 8148, 2770, 5503, 9590, 4260, 8918, 348, 8537, 123, 6716, 1700, 8929, 6885, 191, 1338, 1353, 6510, 3903, 7632, 4718, 3983, 4611, 2597, 5194, 3768, 8704, 44, 9618, 7695, 2631, 6794, 6901, 6727, 1840, 1592, 6177, 9394, 5710, 7401, 9131, 5135, 3243, 9899, 9193, 3616, 9113, 5918, 779, 5971, 8264, 3925, 2932, 6512, 4107, 9398, 3751, 4964, 920, 3107, 5337, 4029, 7371, 6433, 407, 9177, 7799, 5185, 5576, 7134, 3708, 1648, 6185, 8675, 9741, 2425, 1933, 4148, 796, 2025, 7101, 5460, 1065, 8175, 1093, 2102, 8744, 7600, 6649, 2915, 6526, 1354, 5642, 2083, 6824, 5188, 9471, 4647, 1425, 8227, 9664, 379, 9368, 3722, 2740, 473, 6933, 7872, 8265, 5341, 1697, 9795, 5028, 8297, 5289, 225, 2848, 2386, 4213, 722, 5542, 3390, 2854, 8342, 5074, 2470, 3230, 7144, 2163, 7282, 2029, 3927, 4171, 7253, 6757, 5968, 4209, 1971, 5003, 1882, 7132, 738, 607, 1608, 1611, 5889, 5347, 1512, 6815, 8809, 5567, 35, 5033, 764, 8841, 9849, 6785, 363, 9260, 8355, 8818, 3191, 7400, 8398, 6064, 1799, 7510, 1669, 1579, 3849, 9860, 9815, 59, 9615, 9337, 4730, 2741, 9753, 261, 8202, 9273, 9263, 255, 290, 1552, 9638, 4766, 4077, 1499, 8423, 8629, 6516, 2394, 1110, 1428, 212, 109, 6579, 9733, 4524, 1621, 8676, 2660, 3202, 5671, 8313, 6026, 8433, 6964, 4627, 627, 8051, 2552, 7092, 875, 3148, 2694, 7831, 5570, 7412, 8250, 2460, 2566, 1863, 7825, 3175, 9182, 2827, 8971, 7939, 7905, 4832, 7447, 2663, 9033, 3602, 4563, 6889, 2520, 7678, 2172, 6219, 6707, 8874, 6267, 2602, 6320, 6962, 3292, 8506, 4271, 8065, 4852, 7791, 8266, 9581, 7817, 9099, 9094, 9174, 2212, 7269, 2132, 3553, 6227, 72, 5237, 6160, 4636, 3188, 5723, 84, 141, 4739, 8011, 4431, 4429, 6069, 1071, 2720, 4857, 5741, 914, 2426, 2381, 7643, 9801, 7047, 7568, 4692, 2595, 315, 5264, 5424, 4037, 4137, 5017, 9873, 4181, 6083, 2626, 9696, 9980, 2473, 6142, 9989, 7019, 5110, 5470, 2120, 6563, 8589, 7452, 6775, 9050, 9763, 6111, 3800, 8113, 4437, 2118, 7366, 7396, 6277, 1460, 7929, 9670, 280, 1967, 9680, 6667, 6866, 520, 8305, 4553, 7660, 7442, 7468, 1252, 7435, 8068, 2960, 7123, 5702, 9794, 7525, 4596, 5543, 5546, 625, 9253, 3472, 6958, 6428, 1773, 2907, 5699, 3848, 2215, 6001, 3199, 5852, 8333, 1063, 2654, 8357, 9913, 2580, 1585, 5086, 7256, 7153, 5022, 2727, 9900, 5382, 6639, 9874, 2268, 6688, 3714, 381, 3718, 1947, 6943, 8646, 3156, 6418, 7718, 9976, 9083, 2390, 917, 8182, 1160, 2712, 4590, 5536, 9444, 7849, 7895, 9046, 4566, 8623, 494, 4774, 7229, 6385, 9072, 9373, 9425, 8242, 4491, 9430, 3682, 1583, 3943, 2066, 130, 9045, 9525, 4263, 9306, 32, 1411, 3836, 4593, 7810, 749, 7067, 2587, 5137, 6922, 9993, 8239, 6467, 7173, 8960, 5895, 6334, 1009, 3386, 6740, 7288, 9663, 246, 7885, 5065, 165, 5660, 2179, 3015, 9611, 5051, 5258, 4511, 3878, 1570, 9946, 2080, 3570, 5586, 7029, 1832, 2361, 5226, 4985, 5839, 7886, 2510, 6871, 1975, 2413, 5449, 12, 7434, 5465, 4932, 7530, 9078, 3767, 5414, 4575, 1780, 5768, 7446, 5834, 5278, 8428, 3385, 2417, 7064, 8888, 57, 9115, 1879, 3393, 6213, 6737, 3358, 916, 1307, 2609, 1885, 7164, 1296, 1315, 8033, 7553, 1472, 1363, 8448, 6416, 4953, 6923, 1293, 3973, 9159, 6141, 8345, 1884, 8310, 9415, 8180, 7963, 2086, 6719, 4731, 1184, 9334, 1981, 1225, 9915, 3898, 284, 7608, 2183, 7652, 4892, 5485, 3126, 5524, 5325, 3830, 894, 5875, 5920, 8944, 4387, 8781, 6493, 4725, 3834, 5808, 4993, 4873, 9904, 95, 6717, 9255, 6764, 8933, 4675, 7310, 8511, 5222, 6604, 6995, 5840, 3364, 5601, 6733, 4373, 4603, 2395, 6653, 3992, 410, 6790, 270, 5184, 8515, 2342, 7902, 4136, 2881, 9520, 7402, 8497, 7133, 7155, 9723, 4415, 4803, 4980, 6109, 7052, 3529, 2078, 719, 553, 8922, 9475, 1985, 2965, 6297, 2391, 3723, 2969, 6658, 2699, 7486, 4700, 3981, 6379, 1783, 8645, 8326, 5871, 2409, 1760, 1287, 8767, 864, 7741, 9557, 221, 4944, 9636, 1802, 4667, 2188, 7595, 7429, 9705, 9357, 150, 2761, 3416, 4775, 609, 3956, 5961, 3735, 6704, 5619, 4217, 1992, 9619, 5681, 2202, 4650, 956, 9642, 4014, 6549, 680, 7044, 9716, 4838, 466, 6712, 4033, 7579, 6091, 1230, 8968, 7634, 7202, 7233, 4079, 4783, 36, 2349, 438, 443, 7491, 71, 1314, 5833, 5152, 5904, 2796, 1064, 9199, 3854, 5868, 3208, 9086, 6816, 8881, 648, 1883, 2801, 5916, 2326, 4851, 5505, 5224, 5112, 1852, 5802, 9370, 4622, 2153, 7684, 38, 1519, 5128, 4300, 3873, 4921, 7813, 807, 6617, 7021, 4826, 4044, 3749, 630, 2655, 3025, 9418, 8552, 5989, 7602, 6229, 2318, 6556, 1677, 4967, 1917, 6372, 8937, 8618, 2061, 8376, 6847, 9281, 7286, 1596, 6759, 2021, 8724, 5461, 8993, 8886, 6684, 3173, 4421, 928, 5191, 4518, 8721, 3688, 9954, 3242, 8270, 1584, 3377, 7585, 3815, 3138, 2721, 8362, 6042, 7026, 5584, 1668, 1046, 3508, 3934, 8939, 4711, 3805, 256, 4455, 691, 1140, 634, 7220, 9271, 2980, 8955, 2806, 2656, 7188, 8298, 968, 4778, 3665, 5095, 5877, 4396, 3423, 6834, 2644, 611, 569, 3996, 8986, 2525, 8272, 1681, 7833, 811, 4242, 4056, 8688, 589, 7870, 7196, 8411, 4859, 3858, 6756, 3050, 2507, 7382, 3864, 6307, 9726, 9087, 1269, 6470, 4259, 1417, 377, 7160, 7439, 9114, 5574, 9320, 5426, 8209, 1337, 6690, 4251, 6725, 7130, 6308, 5722, 2786, 9526, 8566, 8770, 1639, 4687, 4274, 5213, 941, 951, 7411, 8981, 6475, 3639, 2527, 8708, 3739, 1940, 143, 4183, 7531, 2487, 343, 1361, 7040, 3516, 8123, 4168, 8480, 9859, 7206, 2359, 820, 8802, 7460, 6748, 7352, 5432, 6659, 4642, 4972, 9108, 4139, 1540, 9274, 2143, 275, 7745, 7431, 5320, 197, 1606, 4620, 3526, 51, 525, 2874, 9685, 4561, 5263, 9842, 3428, 3226, 2835, 4267, 2807, 5766, 6873, 4829, 777, 2544, 2543, 1828, 213, 8253, 6420, 9922, 9825, 1384, 5478, 4498, 2213, 9029, 6281, 8153, 2265, 2791, 3282, 797, 3794, 1224, 767, 6146, 5743, 9202, 9344, 2781, 9027, 2311, 3379, 9603, 1767, 6830, 4621, 5665, 1451, 3870, 2199, 2950, 2964, 514, 5721, 9359, 926, 271, 7108, 2731, 9493, 1016, 1286, 1217, 8233, 6665, 4536, 5679, 5549, 2440, 8843, 694, 242, 7903, 7324, 7699, 5872, 9497, 8524, 4328, 5228, 771, 4751, 5221, 2884, 463, 1808, 3442, 9692, 2885, 4477, 2464, 8902, 1439, 9317, 2504, 9565, 6237, 5828, 1429, 8633, 9847, 9629, 8794, 4153, 6749, 3164, 8260, 7696, 3835, 5656, 7906, 4782, 9728, 8317, 8118, 9071, 8541, 488, 2912, 4022, 6225, 6133, 2146, 1334, 1807, 9335, 6211, 8736, 8644, 6722, 2466, 4142, 4402, 6271, 3150, 870, 6341, 6638, 9620, 6979, 6668, 1303, 7140, 1998, 8255, 6172, 4734, 8418, 8424, 8315, 263, 1085, 3290, 599, 309, 8057, 683, 7102, 7901, 5314, 384, 1083, 9261, 6839, 551, 1209, 6632, 1214, 677, 1221, 3056, 135, 5583, 8025, 3993, 9893, 877, 4074, 3702, 2077, 5492, 4609, 1233, 8146, 3563, 5785, 2037, 5415, 2374, 5993, 3887, 5515, 4161, 8189, 5053, 3625, 5131, 5195, 5019, 7281, 9516, 6868, 8050, 7674, 5458, 9568, 9149, 3673, 798, 5425, 4391, 342, 7960, 1420, 1095, 9437, 7997, 1906, 8966, 2776, 9805, 9844, 1324, 3636, 2975, 2511, 9901, 5525, 7823, 731, 1242, 55, 1646, 4974, 2598, 6953, 949, 4378, 4345, 6360, 189, 2490, 3381, 1954, 7207, 6413, 5452, 1914, 2792, 4185, 2643, 6323, 5532, 5244, 5618, 4338, 7441, 1702, 3298, 5694, 9596, 1340, 828, 8493, 9927, 2308, 110, 4754, 9158, 6317, 7992, 3123, 5187, 4726, 7240, 2087, 8505, 2639, 1599, 4279, 7743, 5155, 3366, 6465, 4940, 5093, 3224, 1228, 3401, 7085, 3726, 9248, 5366, 5940, 838, 6410, 1461, 156, 3691, 3828, 9689, 7689, 9010, 5162, 1414, 6033, 1573, 7341, 9064, 785, 8992, 7916, 493, 9645, 7249, 2751, 2832, 1842, 4772, 748, 3336, 370, 6606, 8475, 1265, 6389, 6755, 1716, 7928, 7076, 9755, 5233, 9252, 6192, 6711, 5020, 3670, 9630, 1036, 1790, 1926, 1381, 7124, 9736, 9256, 1962, 6856, 4544, 9820, 3004, 966, 3337, 6852, 7224, 1097, 2963, 9015, 2094, 2538, 1229, 4914, 4423, 3118, 2115, 9634, 2859, 1466, 1536, 6966, 5953, 5683, 5282, 5293, 9082, 9542, 6003, 4954, 7919, 7222, 2486, 7184, 6772, 5076, 1196, 1684, 6841, 1557, 4406, 2060, 4145, 5826, 4086, 8096, 3212, 8154, 2317, 1549, 4480, 9865, 555, 4594, 8930, 3136, 3913, 9584, 7254, 4630, 4147, 5693, 4510, 5037, 2680, 1865, 2846, 1258, 4698, 9496, 9461, 461, 1396, 3728, 2970, 8581, 400, 2637, 8995, 4021, 9789, 2546, 6837, 3332, 8527, 747, 48, 6645, 962, 7943, 3404, 2055, 6905, 1853, 5288, 2882, 8773, 6067, 8429, 2377, 1025, 5409, 903, 5960, 6011, 3051, 3412, 8106, 8103, 4076, 8089, 769, 7798, 3498, 8913, 8501, 5771, 1223, 1202, 1203, 8382, 7828, 7232, 3724, 4761, 4853, 8037, 8261, 19, 6893, 9591, 3885, 507, 2788, 762, 2930, 6813, 190, 1522, 6524, 9841, 5717, 5591, 5612, 1982, 4568, 9937, 9059, 8548, 3786, 3704, 2398, 1081, 8121, 4515, 9468, 8378, 5265, 5579, 9240, 568, 2414, 6875, 2367, 7368, 723, 6514, 1797, 2579, 4757, 6441, 9360, 5088, 8648, 5069, 4457, 6963, 13, 8763, 7422, 3525, 9210, 3000, 1835, 3007, 9779, 7487, 9043, 1282, 6099, 7217, 4961, 3321, 1192, 994, 2271, 6770, 5054, 1793, 3680, 41, 2669, 4347, 7861, 8126, 7864, 2150, 1115, 8325, 4194, 3114, 986, 3741, 661, 1645, 6592, 8454, 5689, 5153, 8776, 3618, 5165, 465, 3306, 20, 3850, 2012, 6576, 4009, 7374, 9990, 1537, 2462, 6471, 1489, 9412, 637, 3288, 3668, 5851, 9243, 4178, 977, 1619, 6786, 6038, 6313, 983, 2692, 2396, 1178, 4862, 2338, 3933, 794, 8782, 9960, 3951, 3359, 849, 3566, 1109, 4579, 7081, 7978, 3169, 6290, 5080, 7835, 9372, 4490, 843, 7497, 1113, 3040, 5855, 1169, 5236, 1905, 1122, 7725, 5034, 6400, 9207, 3752, 5994, 7197, 8286, 2237, 5399, 2726, 2978, 5811, 98, 4916, 8790, 5117, 4758, 5533, 7842, 2128, 2173, 6540, 5934, 2258, 592, 1654, 7668, 9534, 8691, 6460, 7418, 2133, 4290, 8801, 2255, 783, 386, 3554, 1849, 7782, 145, 6257, 2371, 395, 874, 1607, 4721, 4119, 6239, 1452, 4407, 5357, 7283, 5786, 374, 2746, 604, 8314, 7769, 8403, 6669, 8064, 1448, 7541, 9011, 9220, 1021, 8134, 6640, 9031, 740, 8658, 6500, 9923, 9435, 7772, 8049, 5987, 3671, 7853, 112, 7080, 7752, 7373, 2725, 5822, 7958, 902, 4924, 2942, 6035, 2109, 6053, 7257, 3986, 1469, 3755, 7682, 3700, 2165, 6432, 8295, 1508, 2450, 7379, 8880, 5631, 200, 5688, 754, 7675, 9561, 4646, 5922, 240, 7350, 3705, 8339, 3215, 358, 2647, 3543, 4488, 4102, 5715, 4861, 1997, 5919, 1114, 1509, 6096, 963, 6139, 7388, 1556, 5370, 7252, 4922, 7415, 8470, 1128, 9968, 840, 2967, 8504, 7032, 2738, 4152, 4527, 8761, 138, 2615, 3650, 9433, 8281, 6298, 6546, 8617, 406, 7137, 1245, 8823, 8870, 9143, 6325, 4419, 5698, 3080, 5625, 5496, 2698, 6048, 855, 1745, 3035, 8224, 9167, 915, 6787, 2297, 3427, 496, 1974, 3157, 4641, 4223, 1231, 6166, 1126, 8158, 8739, 3116, 4535, 4002, 2248, 1127, 8009, 6424, 2435, 4478, 96, 7633, 2147, 987, 3715, 1352, 7189, 6994, 6196, 752, 8575, 4189, 2703, 6085, 5924, 1382, 5186, 8980, 9948, 2419, 5751, 1207, 3220, 2998, 9315, 4040, 978, 8844, 8139, 8124, 3081, 5995, 2266, 9411, 7357, 1090, 511, 111, 7867, 3037, 8990, 787, 9008, 4126, 7580, 8499, 5695, 6448, 5018, 2526, 3545, 4295, 6731, 8915, 306, 6361, 5231, 9340, 2838, 1665, 9555, 9239, 5298, 8777, 1495, 2711, 7001, 6724, 6662, 8215, 1993, 4332, 9885, 4036, 64, 1066, 4451, 7723, 2810, 8530, 761, 9768, 4471, 5444, 524, 2379, 780, 670, 3575, 9428, 2211, 4825, 7261, 390, 8972, 3748, 3266, 4555, 7598, 3067, 6352, 6926, 3959, 3299, 8017, 8698, 5385, 3744, 5770, 1118, 3753, 5068, 7015, 7807, 2356, 8409, 8434, 5411, 9965, 763, 325, 598, 801, 6318, 2925, 8396, 918, 247, 9477, 4045, 9697, 6642, 4696, 7645, 6101, 8477, 9675, 2043, 7523, 3679, 893, 9442, 1678, 3488, 4276, 3147, 5810, 4729, 7756, 5208, 4008, 4175, 9452, 5792, 1695, 3982, 938, 6907, 1812, 3065, 2966, 824, 3103, 8967, 2834, 9708, 1782, 9888, 7152, 2238, 776, 4779, 6626, 1625, 5433, 2873, 4314, 4690, 8407, 6522, 4541, 7204, 3016, 2230, 8205, 2985, 4625, 8523, 6489, 2822, 4929, 6027, 3296, 7663, 5358, 2981, 6892, 8070, 8507, 2944, 499, 6779, 6098, 8873, 6273, 2817, 6762, 4885, 7291, 8274, 9943, 8775, 8631, 9329, 9262, 7375, 3788, 9217, 6595, 6037, 3246, 7041, 7507, 4820, 9961, 7005, 8953, 9426, 2847, 2755, 1834, 3900, 6817, 4516, 3877, 8214, 3465, 3155, 3780, 4845, 9760, 7625, 9123, 6365, 5614, 1302, 8837, 9163, 2977, 6435, 4962, 2833, 1208, 6975, 5266, 4966, 7488, 2894, 5573, 7894, 3937, 9751, 5760, 6393, 7117, 8218, 8159, 2159, 5169, 7667, 9388, 4608, 1446, 4360, 2031, 4876, 8973, 5419, 809, 9583, 2789, 486, 5931, 6838, 62, 9508, 7139, 6368, 4149, 8321, 8877, 3091, 1735, 1391, 7394, 6259, 5363, 8495, 7030, 4662, 2799, 5691, 8473, 5280, 7556, 468, 3977, 8866, 9456, 408, 1467, 5275, 4525, 6829, 8638, 3326, 5056, 8417, 9944, 6506, 1912, 9290, 7738, 132, 8897, 2443, 4059, 980, 7760, 6457, 4414, 3918, 7150, 311, 5863, 7982, 6600, 9019, 9556, 3953, 5373, 9906, 3229, 1375, 3852, 9184, 9718, 5813, 4196, 1410, 5071, 9738, 7519, 2404, 73, 6165, 8969, 522, 7702, 533, 9462, 1284, 3672, 8947, 4445, 3912, 1601, 9970, 4424, 8556, 5482, 3869, 7482, 9761, 6331, 3380, 8516, 7949, 535, 3023, 1142, 2187, 554, 8982, 7986, 8465, 6615, 2360, 6677, 2228, 8701, 7258, 4496, 2972, 6049, 3355, 414, 2903, 8381, 436, 2334, 760, 5945, 3284, 1626, 7851, 5084, 4372, 5204, 367, 39, 985, 8100, 6939, 7914, 8905, 4319, 5025, 7105, 1950, 9116, 1029, 2090, 8456, 1149, 7330, 5451, 4170, 8622, 4278, 3341, 856, 9463, 27, 5379, 1059, 9257, 2732, 9151, 9785, 6066, 1116, 9126, 5468, 7984, 6007, 5509, 6444, 882, 1804, 9829, 1682, 7698, 469, 3539, 3542, 5561, 2293, 2358, 2062, 416, 9712, 1597, 371, 1068, 4432, 4202, 1157, 817, 6232, 376, 6608, 7771, 7062, 2852, 8171, 9397, 6080, 8875, 7856, 4959, 6371, 3197, 7998, 4992, 532, 8684, 6781, 3128, 8899, 4031, 6571, 8186, 2948, 9845, 8544, 4691, 885, 2434, 6909, 8893, 448, 8071, 4221, 1517, 3681, 9145, 2494, 933, 8710, 3533, 9014, 8729, 6415, 8839, 2867, 8028, 23, 1589, 3350, 7480, 2475, 3172, 9854, 405, 4418, 4745, 9013, 6551, 1809, 2085, 8830, 160, 8546, 5242, 1300, 744, 1388, 9200, 3001, 4486, 5230, 9292, 3022, 733, 685, 480, 1542, 6157, 1145, 2149, 612, 4365, 896, 7031, 3237, 7640, 6163, 3528, 339, 1456, 5975, 665, 584, 3729, 8812, 7037, 1125, 9537, 3684, 6144, 5634, 8650, 4244, 8906, 8030, 85, 6560, 3641, 9530, 6797, 4272, 2295, 4239, 6349, 2096, 7534, 9552, 3024, 9756, 7657, 1568, 1757, 7797, 726, 1572, 3957, 1147, 8020, 166, 6045, 5299, 2480, 6189, 2926, 1987, 5367, 8923, 9423, 7182, 2034, 3638, 2824, 3348, 4215, 1057, 1049, 2038, 3368, 6911, 3868, 1818, 5216, 49, 5296, 4723, 9100, 682, 8184, 4948, 2574, 7119, 219, 4811, 561, 1563, 7543, 6819, 5948, 1944, 6051, 7841, 140, 6173, 7838, 4930, 6154, 2556, 693, 2923, 1137, 5504, 3315, 5445, 8896, 3740, 8356, 3585, 4665, 9441, 1547, 5334, 1069, 8234, 144, 4867, 5440, 7586, 586, 9528, 7599, 6103, 5667, 3360, 9797, 7342, 6309, 6278, 3737, 1750, 4540, 3447, 8690, 4390, 8390, 9983, 4167, 4264, 3448, 4728, 7397, 6474, 6621, 7639, 9868, 2423, 6439, 3485, 1667, 8194, 3906, 3649, 3588, 3388, 8312, 170, 7776, 4075, 9474, 6827, 361, 6987, 6989, 2467, 175, 1762, 6611, 2451, 1755, 5304, 3400, 7083, 5507, 3860, 5306, 6936, 8914, 6972, 2866, 721, 7950, 8952, 9877, 2677, 8198, 9291, 5241, 2478, 9112, 3915, 6387, 7169, 2068, 4799, 8738, 9934, 6061, 3594, 164, 3295, 6364, 7272, 5078, 6023, 9735, 4576, 9995, 337, 6392, 8696, 8587, 3269, 249, 709, 1531, 1566, 2181, 3633, 5418, 1618, 3970, 1267, 9367, 3198, 9585, 4122, 267, 4093, 6876, 9309, 6570, 1000, 9767, 979, 1177, 3896, 54, 7296, 6258, 2496, 4714, 644, 4668, 3033, 2074, 6093, 8437, 4128, 7168, 8085, 87, 5121, 7898, 4810, 2818, 4588, 8461, 2121, 6321, 2883, 3845, 4411, 4182, 5390, 3619, 945, 8447, 5005, 8319, 2337, 756, 3135, 7165, 6293, 6384, 1129, 6449, 4425, 6412, 4061, 1698, 7335, 9517, 2093, 3171, 3656, 7837, 9081, 3634, 2182, 460, 7114, 7780, 6217, 2686, 8599, 5519, 4505, 3866, 5571, 3556, 3603, 1344, 3219, 6904, 5294, 6233, 9058, 1534, 7611, 8303, 546, 7277, 3225, 5577, 8018, 4749, 7860, 5489, 4828, 3440, 1161, 2952, 6565, 8117, 8935, 4762, 2277, 5941, 8999, 8613, 2274, 6299, 6238, 3623, 9776, 7462, 2887, 2158, 46, 5880, 8107, 3127, 503, 6598, 1132, 7792, 9986, 7271, 4165, 6965, 9925, 3187, 2899, 425, 992, 1152, 4193, 571, 7834, 3819, 4367, 1948, 5271, 9544, 5368, 4433, 1666, 419, 1272, 9659, 5431, 6404, 9551, 429, 8895, 925, 1657, 8916, 4428, 7255, 9952, 489, 1246, 8854, 8674, 7039, 3761, 344, 5609, 5620, 3102, 9803, 1752, 9827, 2805, 8078, 2900, 4530, 2453, 4817, 459, 8536, 4654, 2513, 998, 1715, 9062, 9655, 1850, 695, 4699, 7566, 1219, 6897, 6671, 3158, 1631, 1630, 3297, 8387, 8864, 4884, 9609, 5350, 4569, 2442, 7527, 2314, 8109, 3911, 6168, 101, 5413, 7722, 2241, 5038, 818, 9947, 60, 9170, 2674, 3523, 2685, 593, 7475, 5472, 8664, 3392, 4112, 1961, 5861, 5531, 6899, 6848, 654, 9957, 6850, 2397, 6333, 4417, 1027, 2262, 4981, 658, 5211, 9356, 3770, 2947, 645, 7433, 4558, 4098, 1079, 7098, 6568, 122, 647, 3287, 4066, 9298, 3944, 973, 9327, 4607, 5782, 9745, 984, 819, 5622, 5911, 9439, 1164, 5136, 6880, 5648, 4084, 1860, 5015, 1983, 6903, 5281, 6188, 3501, 2865, 7569, 2152, 8849, 7346, 194, 6741, 7167, 724, 252, 6181, 4846, 9285, 8066, 6867, 1826, 5335, 7186, 4612, 4534, 8811, 6050, 774, 2332, 1179, 1076, 3294, 9666, 8569, 3791, 1989, 2064, 1402, 5711, 7088, 2222, 7458, 2836, 4631, 1368, 4382, 1642, 3699, 7162, 234, 7976, 4381, 2614, 2198, 178, 1144, 2816, 7917, 2432, 887, 2927, 4103, 7946, 6436, 9694, 4513, 7707, 369, 323, 9939, 2855, 2994, 5206, 8900, 4740, 8133, 6541, 4676, 909, 7194, 6358, 697, 9529, 90, 9851, 7669, 5522, 4392, 8557, 8324, 2242, 858, 7503, 6543, 9434, 4855, 7211, 174, 883, 9052, 8706, 9835, 2591, 9212, 2671, 7827, 8771, 9236, 5732, 5555, 646, 5247, 3236, 259, 7726, 8977, 9883, 389, 216, 412, 9627, 7924, 1342, 9364, 3211, 8496, 2682, 9142, 8252, 7405, 5815, 1966, 3053, 1359, 6464, 3418, 149, 6562, 6300, 4368, 8825, 2126, 4135, 1349, 5479, 5860, 9892, 1172, 3622, 3028, 427, 6357, 7398, 7806, 9164, 3267, 295, 704, 739, 6913, 2785, 4693, 6566, 7623, 7594, 8500, 5115, 2134, 2523, 9346, 846, 636, 4519, 8293, 5879, 9840, 4088, 9507, 7058, 8748, 2050, 4051, 5270, 1743, 3181, 866, 7136, 151, 7501, 7656, 2352, 8358, 8269, 4064, 8135, 4664, 4682, 3349, 5113, 1909, 7363, 1379, 1636, 5024, 492, 5572, 291, 8627, 8630, 7688, 6810, 632, 753, 4673, 4341, 5453, 8909, 4837, 4983, 5864, 8055, 6153, 8758, 1827, 9246, 2709, 9390, 2407, 9546, 3101, 5587, 4632, 8024, 2557, 5512, 104, 137, 8237, 8800, 9810, 6863, 76, 5317, 4910, 635, 603, 7521, 8340, 3177, 6941, 9682, 293, 2167, 8021, 1434, 1535, 558, 4748, 7884, 4512, 8384, 1538, 3916, 4659, 8749, 9228, 7138, 3259, 4004, 3120, 8127, 6336, 4619, 8275, 6647, 7465, 7574, 8038, 9837, 4442, 3293, 2773, 1546, 8682, 3935, 4104, 9674, 8226, 4028, 131, 4500, 8400, 1822, 2459, 5565, 7661, 6713, 4100, 662, 5594, 4844, 6301, 2485, 5130, 2870, 5682, 1280, 5697, 7824, 119, 6135, 3261, 7570, 5867, 9932, 6547, 257, 4023, 1722, 6661, 9226, 9813, 5026, 4710, 3531, 6583, 4053, 1200, 1056, 9124, 7971, 5012, 2017, 1430, 1041, 4268, 7953, 3265, 7977, 6490, 8643, 5842, 4683, 6602, 266, 1294, 9166, 3886, 7413, 1690, 2479, 5105, 8693, 2015, 9643, 7331, 7075, 8685, 7328, 2376, 7514, 6492, 7900, 8542, 7616, 9979, 4204, 1120, 9047, 8521, 8867, 5225, 730, 193, 5040, 4824, 2232, 3320, 7700, 4163, 4943, 6455, 6947, 6286, 2603, 6316, 1497, 4767, 8783, 848, 5650, 5273, 5245, 5060, 5885, 1714, 105, 8459, 5501, 6643, 7428, 6729, 8466, 6295, 5210, 7565, 7552, 5352, 183, 3234, 8720, 952, 4865, 192, 2190, 2186, 2415, 3995, 3082, 4592, 8671, 9890, 2016, 4532, 8173, 5141, 5937, 5118, 203, 8681, 5598, 4439, 4188, 8422, 5988, 2913, 7650, 4898, 4902, 100, 5955, 9722, 318, 5923, 7115, 1815, 238, 7748, 8354, 8673, 575, 3606, 5690, 2489, 3611, 2011, 5908, 8961, 7116, 9308, 4200, 2097, 2672, 1013, 8743, 2000, 3962, 6928, 3972, 7280, 2536, 5062, 8164, 2750, 5502, 4232, 2027, 8043, 9856, 9852, 5102, 3628, 6682, 5170, 4941, 4443, 6828, 3142, 7356, 8163, 7332, 7230, 913, 8723, 3137, 8436, 7665, 4207, 666, 6016, 4986, 9458, 8598, 7157, 2449, 1311, 4291, 7871, 4132, 9391, 457, 477, 4141, 4793, 9531, 3888, 7951, 7423, 6931, 3727, 3940, 1170, 1018, 8029, 5009, 1880, 1153, 1674, 5727, 2117, 3597, 2484, 7498, 2829, 6641, 3678, 948, 1710, 8964, 4984, 1218, 9343, 4312, 6558, 6808, 4258, 7649, 2388, 5529, 4546, 8023, 9225, 8364, 7555, 6240, 3217, 6646, 2438, 6216, 2028, 5340, 3614, 8564, 6619, 5274, 9275, 1851, 5774, 3419, 3720, 2039, 338, 2280, 3452, 6041, 7773, 6874, 2759, 8236, 9628, 25, 2185, 2599, 80, 7686, 2606, 3856, 7051, 8784, 1764, 6614, 401, 5843, 9040, 3480, 6739, 2024, 9579, 2231, 2945, 1515, 2142, 8277, 1335, 2465, 6590, 3218, 5447, 9152, 518, 8662, 2594, 1498, 9910, 6872, 3060, 6127, 2641, 9422, 876, 2961, 3857, 9928, 9492, 1341, 8240, 2958, 4049, 7974, 7302, 2446, 650, 8002, 1969, 7317, 1740, 2760, 9766, 9351, 4293, 6100, 426, 9897, 6118, 9832, 8296, 1550, 3826, 3031, 2936, 8543, 527, 1685, 4509, 2054, 6024, 8769, 7013, 7028, 3557, 3816, 2145, 889, 134, 237, 2420, 3783, 6745, 3249, 4269, 50, 4538, 3180, 1924, 9866, 7630, 2380, 8199, 2531, 4216, 17, 4571, 4671, 9711, 223, 7549, 3787, 6094, 8482, 3657, 7378, 6584, 7857, 2992, 1155, 8611, 9374, 6402, 4604, 1092, 3166, 7554, 6362, 6206, 6249, 4737, 2436, 3093, 6917, 3450, 1696, 33, 674, 3492, 9956, 930, 7059, 3457, 814, 5238, 7995, 136, 7737, 8936, 5467, 1791, 2296, 7276, 891, 9025, 4301, 594, 2839, 7027, 7448, 9543, 9698, 2716, 7778, 989, 471, 1652, 8639, 5058, 6143, 6686, 643, 2876, 9222, 3097, 5197, 4292, 2803, 2850, 2542, 8838, 4878, 8254, 7307, 9215, 5714, 5905, 2653, 5421, 7246, 6423, 8547, 912, 1937, 7770, 1409, 2357, 5662, 1247, 5064, 878, 9853, 4598, 6761, 350, 8410, 3653, 9903, 4770, 8288, 8092, 4436, 3773, 6985, 9703, 3085, 3759, 5403, 832, 6287, 6337, 8359, 3476, 8567, 9399, 449, 579, 5120, 2410, 1492, 7926, 9563, 2668, 9772, 4672, 5517, 3204, 1003, 5429, 7728, 9035, 1867, 2634, 268, 935, 9382, 3839, 5982, 8832, 8131, 5949, 5837, 5013, 8592, 6878, 5457, 5041, 9966, 6793, 5967, 9172, 7515, 8614, 2648, 4413, 1821, 2421, 4918, 7577, 5528, 6935, 5276, 4351, 6353, 8458, 8111, 4870, 6946, 43, 1915, 9469, 6968, 3928, 6555, 6760, 8994, 186, 6184, 5272, 5857, 3445, 2877, 6202, 7880, 3121, 2896, 1683, 6930, 2728, 2071, 9598, 8211, 5315, 727, 6833, 8762, 5192, 6629, 3371, 6450, 1598, 9950, 2286, 7461, 393, 9997, 2771, 2294, 4379, 2828, 8328, 434, 5585, 9301, 6303, 3961, 8005, 8785, 5846, 4732, 9635, 9431, 9055, 4850, 6218, 4073, 5220, 7761, 8361, 1163, 8735, 7742, 3228, 4494, 7376, 4179, 8419, 2658, 3497, 7891, 1171, 8924, 6777, 3162, 5114, 7469, 4791, 6210, 6664, 1482, 7910, 7875, 3087, 2313, 9401, 4405, 8558, 3312, 7733, 2765, 9593, 4190, 4897, 2604, 8641, 6382, 9286, 5664, 6675, 7618, 5592, 873, 1664, 8883, 4934, 8336, 4325, 7148, 340, 5372, 3518, 7887, 423, 8624, 6800, 9843, 6730, 3733, 4957, 8137, 1260, 7653, 9034, 8299, 8853, 5396, 1257, 2696, 5269, 563, 1330, 6523, 5207, 4048, 9080, 7587, 6174, 3984, 2562, 3776, 6242, 7314, 7004, 3061, 9231, 375, 2708, 1973, 9855, 2439, 995, 8834, 6324, 2610, 8258, 9196, 3660, 3988, 1215, 5159, 8941, 2256, 2719, 5729, 6029, 5654, 8940, 8386, 4316, 7033, 827, 7466, 6010, 3043, 6381, 8660, 128, 5752, 3354, 7135, 1502, 5495, 6376, 4501, 9828, 9024, 8406, 341, 5870, 462, 3923, 2617, 2955, 3546, 6858, 1893, 5719, 9405, 9154, 1719, 6347, 2937, 5481, 5111, 502, 9911, 9951, 4187, 4212, 8919, 1136, 872, 5847, 2057, 3938, 1078, 3174, 4666, 445, 3343, 1479, 4623, 4600, 2402, 2997, 4160, 1044, 2880, 1336, 7210, 8904, 8526, 4652, 3643, 1470, 8353, 1558, 9377, 6663, 5933, 3936, 3658, 1067, 1823, 7279, 9919, 5936, 550, 5835, 7658, 7721, 3874, 3273, 6012, 5563, 9323, 7855, 9621, 8754, 3635, 4950, 5506, 6678, 904, 725, 4814, 8772, 4124, 3971, 3978, 7449, 4459, 9455, 9540, 9909, 7691, 4882, 8045, 1530, 6703, 403, 5402, 7290, 4125, 8367, 8257, 6090, 3494, 1291, 1935, 4485, 7754, 567, 4808, 5031, 6589, 2200, 869, 5032, 2573, 3664, 3325, 2138, 6268, 5520, 1770, 2558, 102, 4720, 4089, 77, 5789, 2718, 5182, 3583, 422, 7820, 1758, 633, 2304, 5593, 2497, 7395, 3382, 8069, 4072, 4610, 3642, 9721, 7445, 6036, 4812, 9155, 3481, 9742, 964, 2956, 2570, 1875, 991, 1188, 7993, 3151, 2363, 5173, 8301, 6970, 1011, 3300, 4475, 1348, 7784, 6265, 5014, 1995, 8161, 6845, 5643, 9972, 6180, 5829, 1709, 5044, 8446, 8615, 1433, 9839, 5176, 89, 3260, 8970, 9783, 9617, 4329, 5590, 3565, 834, 9622, 241, 9935, 2516, 9978, 4927, 8469, 781, 8460, 9509, 1532, 4255, 6396, 2393, 6862, 1911, 5098, 7994, 52, 4559, 7945, 1471, 176, 6136, 7764, 9445, 7384, 8907, 1080, 9969, 8659, 9902, 9918, 8597, 7671, 9994, 8820, 7297, 5291, 3178, 1658, 6527, 6860, 3424, 8576, 6588, 3367, 1240, 5183, 6545, 7693, 2141, 5844, 7879, 2607, 5198, 2184, 6262, 8637, 1362, 2559, 1939, 9057, 6430, 8927, 4211, 7348, 4794, 1458, 5626, 6212, 1861, 3907, 8251, 3577, 7712, 3979, 5629, 5175, 1480, 274, 8670, 6247, 528, 29, 2285, 2640, 7420, 7212, 7159, 1210, 8061, 7118, 5052, 3818, 1117, 7606, 7311, 7767, 8714, 4361, 7626, 5896, 5881, 822, 8389, 4257, 844, 6161, 8545, 9920, 5841, 9396, 4589, 8846, 7, 1297, 5738, 9348, 4389, 7321, 6539, 1370, 3262, 1805, 9395, 7604, 9567, 1543, 4681, 3784, 8502, 8246, 526, 3466, 9564, 9287, 4273, 9626, 8039, 6959, 1175, 1058, 7936, 4434, 7143, 639, 1389, 6082, 365, 1930, 6735, 6279, 9186, 1345, 5647, 8471, 4261, 188, 1148, 1612, 9084, 3832, 1613, 5129, 1339, 1753, 6804, 4254, 4750, 385, 6567, 5126, 1047, 6788, 8859, 7127, 8414, 3477, 9592, 910, 9491, 3232, 3991, 4172, 8856, 2289, 4231, 6473, 2659, 161, 2635, 2744, 1037, 5027, 4769, 6694, 8221, 4606, 1688, 7250, 786, 7364, 1904, 6442, 3083, 1424, 6329, 2014, 3086, 1304, 2519, 8128, 8391, 7526, 5544, 2710, 6783, 9878, 8687, 1659, 669, 1186, 7421, 6480, 3140, 5914, 6766, 1965, 2962, 2032, 3054, 300, 1839, 2279, 5464, 4965, 7361, 9338, 4489, 7716, 7200, 2990, 924, 9523, 7225, 7360, 6548, 2613, 6895, 1194, 700, 9773, 3686, 4237, 5386, 9695, 2618, 6758, 2630, 5164, 9924, 2264, 3895, 9188, 4707, 56, 1292, 2898, 6176, 3134, 971, 5108, 8217, 5338, 1837, 1266, 3434, 4657, 3865, 6990, 5085, 6918, 3802, 1380, 1929, 1444, 1876, 3696, 4651, 8894, 3461, 5158, 6228, 5558, 805, 6802, 3586, 9958, 2861, 8503, 4522, 5659, 2008, 6121, 6601, 5756, 4937, 5755, 7485, 1831, 5733, 7927, 7548, 9483, 7260, 8498, 7785, 3395, 2498, 2858, 1088, 3891, 9408, 7177, 4288, 7774, 3538, 7840, 4893, 1819, 1825, 3161, 5049, 6131, 7354, 9727, 2056, 82, 7243, 6700, 6782, 519, 2739, 297, 4694, 162, 2862, 9091, 3329, 5148, 9350, 8397, 544, 5687, 8140, 3772, 8478, 2723, 8256, 7147, 281, 6891, 5856, 1104, 2622, 929, 1074, 8531, 2130, 6769, 2593, 7918, 2299, 5313, 5410, 972, 9223, 236, 1848, 3500, 3881, 2790, 6398, 4416, 578, 4285, 5116, 373, 6414, 8551, 4408, 4218, 2747, 9299, 7528, 1453, 9613, 4827, 7537, 1206, 2804, 4116, 7287, 8683, 5703, 1712, 139, 5423, 187, 9328, 5630, 3540, 9211, 6656, 230, 3989, 4484, 2568, 9195, 7709, 2362, 4321, 3564, 9582, 1431, 6272, 5762, 3778, 886, 5343, 1703, 8435, 2351, 8731, 8042, 3894, 4599, 1514, 7562, 2611, 9267, 1165, 6511, 7216, 7975, 5800, 6147, 250, 6417, 7409, 1504, 5928, 4146, 8577, 4747, 8699, 3920, 5514, 5392, 7221, 2422, 177, 5348, 3469, 9715, 4816, 9235, 8860, 2722, 4586, 5008, 5580, 155, 8380, 5799, 8574, 7347, 1024, 3216, 8654, 4012, 2457, 3285, 6348, 4333, 4760, 6715, 1610, 3846, 3659, 1062, 7274, 91, 7619, 4871, 4222, 1017, 167, 319, 508, 396, 7087, 602, 8483, 2456, 9453, 6327, 4412, 6898, 4842, 1007, 7493, 9476, 9125, 9502, 9734, 6652, 784, 1134, 8911, 8036, 2825, 8013, 3417, 5477, 8932, 4889, 5637, 10000, 7494, 7343, 9171, 4090, 6902, 2819, 9421, 608, 5925, 5249, 210, 1628, 478, 1347, 5100, 9109, 8230, 7925, 8655, 2549, 3504, 1477, 4143, 4733, 702, 1237, 9818, 231, 4099, 4990, 2697, 3932, 2131, 9506, 8208, 1216, 5438, 9971, 8263, 9678, 8453, 3757, 5417, 6305, 4309, 7847, 3687, 2872, 2327, 8138, 6469, 3026, 7247, 5384, 7319, 2424, 1897, 3581, 5530, 9804, 1510, 394, 9385, 8590, 6655, 7161, 4082, 2009, 180, 5780, 4384, 7479, 3280, 4879, 5527, 1711, 1507, 6319, 4854, 9472, 2036, 8072, 1516, 2387, 9574, 8605, 8238, 2195, 4236, 8338, 4164, 34, 5939, 3502, 8083, 2687, 530, 8760, 217, 565, 7193, 3838, 501, 7011, 6374, 5140, 976, 8394, 4020, 1481, 3314, 8309, 706, 8245, 7628, 2993, 9505, 5356, 2448, 4105, 5250, 9650, 3464, 8665, 9135, 2737, 7517, 9038, 537, 745, 8829, 5150, 7907, 8152, 517, 3615, 8287, 4815, 2375, 9553, 1111, 6055, 2943, 9830, 7100, 7550, 9984, 5613, 1156, 4565, 4097, 2233, 5806, 7642, 2427, 3601, 6496, 3515, 8462, 2430, 8402, 5636, 3117, 8991, 9466, 6843, 222, 1015};
	size_t n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);
	printf("\n");
	quick_sort(arr, n);
	printf("\n");
	print_array(arr, n);

	printf("\n\n--------------------\n\nDONE\n");

	return 0;
}