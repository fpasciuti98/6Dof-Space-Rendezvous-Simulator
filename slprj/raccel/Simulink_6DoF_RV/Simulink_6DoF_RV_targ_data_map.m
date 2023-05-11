    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 8;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 143;
            section.data(143)  = dumData; %prealloc

                    ;% rtP.FJ2_r4
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.F_D
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.I
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.K_d
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 11;

                    ;% rtP.Tmax
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 20;

                    ;% rtP.U_max_RW
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 21;

                    ;% rtP.U_off_pos
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 22;

                    ;% rtP.U_on_pos
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 23;

                    ;% rtP.Vx_max
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 24;

                    ;% rtP.Z0_RW
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 25;

                    ;% rtP.Zinv
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 37;

                    ;% rtP.alpha
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 49;

                    ;% rtP.beta
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 50;

                    ;% rtP.control
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 51;

                    ;% rtP.den_pos
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 52;

                    ;% rtP.dt_Fx1_PH1
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 54;

                    ;% rtP.fa_control
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 55;

                    ;% rtP.invI
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 56;

                    ;% rtP.mc
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 65;

                    ;% rtP.mu
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 66;

                    ;% rtP.num_pos
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 67;

                    ;% rtP.omega
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 68;

                    ;% rtP.omega_0
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 69;

                    ;% rtP.q0_0
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 72;

                    ;% rtP.q0_des
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 73;

                    ;% rtP.qv_0
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 74;

                    ;% rtP.r0
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 77;

                    ;% rtP.r0_p1Id
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 80;

                    ;% rtP.r_des_fa
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 83;

                    ;% rtP.r_t
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 86;

                    ;% rtP.t_acc_fa
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 87;

                    ;% rtP.v0
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 88;

                    ;% rtP.v_des_fa
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 91;

                    ;% rtP.x0_PH2
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 94;

                    ;% rtP.x0_PH3
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 95;

                    ;% rtP.x_start_dec
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 96;

                    ;% rtP.xf
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 97;

                    ;% rtP.z_start_Fx2_PH1id
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 98;

                    ;% rtP.z_start_Fz2_PH2id
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 99;

                    ;% rtP.Constant_Value
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 100;

                    ;% rtP.Constant1_Value
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 102;

                    ;% rtP.Constant2_Value
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 104;

                    ;% rtP.Gain_Gain
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 105;

                    ;% rtP.Gain1_Gain
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 108;

                    ;% rtP.Gain_Gain_cq40qfuggu
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 111;

                    ;% rtP.Integrator_IC
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 112;

                    ;% rtP.Gain1_Gain_ccpd1tkjyt
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 113;

                    ;% rtP.Gain2_Gain
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 114;

                    ;% rtP.Constant_Value_akmtssrtai
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 115;

                    ;% rtP.Integrator_IC_ctraww5gqx
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 116;

                    ;% rtP.Gain1_Gain_afxu42ye3m
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 117;

                    ;% rtP.Gain_Gain_ijakj545mn
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 120;

                    ;% rtP.Gain1_Gain_biljuf3k5o
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 123;

                    ;% rtP.Gain4_Gain
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 126;

                    ;% rtP.Integrator_IC_ljrtrdz11x
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 127;

                    ;% rtP.Gain5_Gain
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 128;

                    ;% rtP.Gain6_Gain
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 129;

                    ;% rtP.Constant1_Value_bi1r30sqhu
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 130;

                    ;% rtP.Constant1_Value_f2h5tnp2xf
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 131;

                    ;% rtP.Constant2_Value_f5jgk2qlyk
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 133;

                    ;% rtP.Merge_InitialOutput
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 135;

                    ;% rtP.Constant_Value_hb2kygv40x
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 136;

                    ;% rtP.IC_Value
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 139;

                    ;% rtP.Constant_Value_ddfuos2pe2
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 142;

                    ;% rtP.Constant_Value_m3ywocr5li
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 145;

                    ;% rtP.Integrator_IC_prjknul2hl
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 148;

                    ;% rtP.Gain1_Gain_gq54yvmi0s
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 149;

                    ;% rtP.Gain3_Gain
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 150;

                    ;% rtP.Gain_Gain_prfefcrmmw
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 153;

                    ;% rtP.Gain4_Gain_blfbm01fzo
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 154;

                    ;% rtP.Gain2_Gain_mpjajviz45
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 157;

                    ;% rtP.Integrator1_IC
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 158;

                    ;% rtP.Gain5_Gain_mqtmq5anns
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 159;

                    ;% rtP.Gain8_Gain
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 162;

                    ;% rtP.V_fin_Y0
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 165;

                    ;% rtP.start_FA_Y0
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 166;

                    ;% rtP.V_in_Y0
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 167;

                    ;% rtP.Pos_HN_start_Y0
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 168;

                    ;% rtP.V_fin_Y0_blxh2icltu
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 169;

                    ;% rtP.Pos_RB_start_Y0
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 170;

                    ;% rtP.dt_PH2_1_Y0
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 171;

                    ;% rtP.Constant_Value_kvy1ybkwso
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 172;

                    ;% rtP.Merge_InitialOutput_hiywfoi5ir
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 177;

                    ;% rtP.Gain_Gain_ctaqewu5jz
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 178;

                    ;% rtP.Integrator_IC_eclnkc0pcv
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 181;

                    ;% rtP.TransferFcn_A
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 182;

                    ;% rtP.TransferFcn_C
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 183;

                    ;% rtP.TransferFcn1_A
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 184;

                    ;% rtP.TransferFcn1_C
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 185;

                    ;% rtP.TransferFcn2_A
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 186;

                    ;% rtP.TransferFcn2_C
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 187;

                    ;% rtP.TransferFcn3_A
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 188;

                    ;% rtP.TransferFcn3_C
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 189;

                    ;% rtP.Gain_Gain_edw1uflm0w
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 190;

                    ;% rtP.Gain1_Gain_cpvnkp1afm
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 191;

                    ;% rtP.Relay_YOn
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 192;

                    ;% rtP.Relay_YOff
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 193;

                    ;% rtP.Gain1_Gain_htkbkalhuk
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 194;

                    ;% rtP.Relay1_YOn
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 195;

                    ;% rtP.Relay1_YOff
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 196;

                    ;% rtP.Gain2_Gain_b5ows0gery
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 197;

                    ;% rtP.Relay2_YOn
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 198;

                    ;% rtP.Relay2_YOff
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 199;

                    ;% rtP.Gain5_Gain_fhub2uxipx
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 200;

                    ;% rtP.Relay5_YOn
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 201;

                    ;% rtP.Relay5_YOff
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 202;

                    ;% rtP.Gain6_Gain_hjqmux1g1x
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 203;

                    ;% rtP.Relay3_YOn
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 204;

                    ;% rtP.Relay3_YOff
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 205;

                    ;% rtP.Gain9_Gain
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 206;

                    ;% rtP.Relay4_YOn
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 207;

                    ;% rtP.Relay4_YOff
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 208;

                    ;% rtP.Gain10_Gain
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 209;

                    ;% rtP.Gain2_Gain_ojezup1lbz
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 210;

                    ;% rtP.Gain3_Gain_prsrammgq2
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 211;

                    ;% rtP.Integrator_IC_h4ihxe4npk
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 212;

                    ;% rtP.Multiply2_Gain
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 213;

                    ;% rtP.Integrator_IC_agcff5drih
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 214;

                    ;% rtP.Multiply1_Gain
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 215;

                    ;% rtP.Multiply_Gain
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 216;

                    ;% rtP.Integrator_IC_ao15ude1hl
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 217;

                    ;% rtP.Multiply3_Gain
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 218;

                    ;% rtP.Integrator_IC_hgjgntvn4b
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 219;

                    ;% rtP.DelayOneStep_InitialCondition
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 220;

                    ;% rtP.Gain1_Gain_bfynfmcz2f
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 221;

                    ;% rtP.Gain2_Gain_ae0zhht53r
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 222;

                    ;% rtP.Gain3_Gain_hnzra1mcif
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 223;

                    ;% rtP.Gain4_Gain_acmismgbcw
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 224;

                    ;% rtP.Gain_Gain_ccmvafsk2y
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 225;

                    ;% rtP._Value
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 228;

                    ;% rtP.Constant3_Value
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 231;

                    ;% rtP.Constant3_Value_jmxjgvexfd
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 232;

                    ;% rtP.Constant_Value_anaamreu4b
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 233;

                    ;% rtP.Constant1_Value_epzvrriq3n
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 234;

                    ;% rtP.Constant_Value_d4v3rlerh4
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 235;

                    ;% rtP.Constant1_Value_gjp2xt1hsz
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 236;

                    ;% rtP.Constant1_Value_b3b2ibebgt
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 237;

                    ;% rtP.Constant2_Value_lasuau2omr
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 238;

                    ;% rtP.Constant1_Value_pi1m4d02hn
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 239;

                    ;% rtP.Constant6_Value
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 240;

                    ;% rtP.Constant2_Value_gzezhgiiva
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 241;

                    ;% rtP.Constant2_Value_oh1vd01gq3
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 242;

                    ;% rtP.Constant4_Value
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 243;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.Gain_Gain_nn0z0a2s0s
                    section.data(1).logicalSrcIdx = 143;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.k4jqdwwenf.V_in_Y0
                    section.data(1).logicalSrcIdx = 144;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.cxfwoerhvl.V_fin_Y0
                    section.data(1).logicalSrcIdx = 145;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ccf5xwtinim.V_fin_Y0
                    section.data(1).logicalSrcIdx = 146;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.dshipp4zhkp.V_in_Y0
                    section.data(1).logicalSrcIdx = 147;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.dc1zceqmvb.IC_Value
                    section.data(1).logicalSrcIdx = 148;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.dc1zceqmvb.Constant_Value
                    section.data(2).logicalSrcIdx = 149;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.eajtmfyznlk.IC_Value
                    section.data(1).logicalSrcIdx = 150;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.eajtmfyznlk.Constant_Value
                    section.data(2).logicalSrcIdx = 151;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 77;
            section.data(77)  = dumData; %prealloc

                    ;% rtB.nyh5k3mpjz
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.d1v2bd51lt
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.jeiao0vue1
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.ituo4cjnxl
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 9;

                    ;% rtB.g2ic42jckq
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% rtB.itazgvg5vs
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 13;

                    ;% rtB.molhlnljlf
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 14;

                    ;% rtB.otvc3thwzj
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtB.hefr5ndy1s
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 21;

                    ;% rtB.nfrnyxu4q1
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

                    ;% rtB.pfifbx3mae
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 23;

                    ;% rtB.pahzbctuiu
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 24;

                    ;% rtB.gtilgu5sle
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 25;

                    ;% rtB.ay20p5emux
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 28;

                    ;% rtB.bhmplnjiqo
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 31;

                    ;% rtB.lf0heeyhqb
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 32;

                    ;% rtB.dnw2ogces4
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 35;

                    ;% rtB.bxdnivtaee
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 36;

                    ;% rtB.molhlnljlfi
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 37;

                    ;% rtB.ngmy3naosv
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 40;

                    ;% rtB.ne431czr4g
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 41;

                    ;% rtB.hq22sz5nlo
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 42;

                    ;% rtB.c0sejfkafv
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 43;

                    ;% rtB.nxy0ancgi2
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 46;

                    ;% rtB.omuqgegu33
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 47;

                    ;% rtB.jerw4glkjf
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 48;

                    ;% rtB.n5iekj0nsu
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 49;

                    ;% rtB.hj5uunkpfr
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 52;

                    ;% rtB.ct3g5c4k2v
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 53;

                    ;% rtB.lhkxddx2er
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 54;

                    ;% rtB.msccedbjem
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 55;

                    ;% rtB.fbu1x4wjkn
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 56;

                    ;% rtB.eslg1shpjg
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 57;

                    ;% rtB.jrget4nbxe
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 58;

                    ;% rtB.ib0mnrovu0
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 59;

                    ;% rtB.dwocx2mznt
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 60;

                    ;% rtB.gqmnf1wmhg
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 61;

                    ;% rtB.jwfwy4yjci
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 64;

                    ;% rtB.dqejbdzsd2
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 67;

                    ;% rtB.dmedwv4xxx
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 70;

                    ;% rtB.gj0wyz4siq
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 73;

                    ;% rtB.pstrw1koj3
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 76;

                    ;% rtB.njc2k5n4x2
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 79;

                    ;% rtB.irwem5yeaq
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 83;

                    ;% rtB.mabmgihsnd
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 84;

                    ;% rtB.a4fhdaeryk
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 85;

                    ;% rtB.fjbxch0dig
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 86;

                    ;% rtB.amiz1f005p
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 87;

                    ;% rtB.jtngbjl3ja
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 90;

                    ;% rtB.gjgctmesjj
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 91;

                    ;% rtB.lleqa5mxxo
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 92;

                    ;% rtB.mv4f242ju1
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 93;

                    ;% rtB.j1u5mmksou
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 94;

                    ;% rtB.ac1wbfy433
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 95;

                    ;% rtB.ki3h340w2w
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 96;

                    ;% rtB.jk5fp1pkk1
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 97;

                    ;% rtB.n3nqejdod4
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 100;

                    ;% rtB.jp5jusavom
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 101;

                    ;% rtB.kllc0kyxz3
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 104;

                    ;% rtB.amkjg3fw0e
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 107;

                    ;% rtB.baetwki0hc
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 110;

                    ;% rtB.k5pnmgii3x
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 113;

                    ;% rtB.ivzzalfydq
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 116;

                    ;% rtB.iayt0jus2n
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 119;

                    ;% rtB.cxvazbfrvw
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 122;

                    ;% rtB.nzugy1td30
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 125;

                    ;% rtB.ny0ldygyvq
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 128;

                    ;% rtB.iz5r5xtklp
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 131;

                    ;% rtB.gxcw523rog
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 134;

                    ;% rtB.oldgnpofph
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 135;

                    ;% rtB.gdd05xxr4o
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 136;

                    ;% rtB.ami4tmme4t
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 137;

                    ;% rtB.bo5hahfv2q
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 140;

                    ;% rtB.aawzji5g0h
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 141;

                    ;% rtB.p5wqmbc4jk
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 150;

                    ;% rtB.nm5geycoyr
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 153;

                    ;% rtB.hyohzjd1mz
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 154;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtB.aqehawlayk
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.blphcp4v05
                    section.data(2).logicalSrcIdx = 78;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.c51vwh2njw
                    section.data(3).logicalSrcIdx = 79;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.aau4j2zfrw
                    section.data(4).logicalSrcIdx = 80;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.nmajnn4oia
                    section.data(5).logicalSrcIdx = 81;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.ovntti0e41
                    section.data(6).logicalSrcIdx = 82;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.k4jqdwwenf.bf4wrveec1
                    section.data(1).logicalSrcIdx = 83;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.cxfwoerhvl.eioznmeone
                    section.data(1).logicalSrcIdx = 84;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.ccf5xwtinim.eioznmeone
                    section.data(1).logicalSrcIdx = 85;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.dshipp4zhkp.bf4wrveec1
                    section.data(1).logicalSrcIdx = 86;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 13;
        sectIdxOffset = 6;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.pbcntez0ai
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.n05eyz23jc
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 100;

                    ;% rtDW.ed1lo4x4g4
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 103;

                    ;% rtDW.l2gr0ebned
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 106;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtDW.gytj3aqnha.LoggedData
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.m1d1pas2fr.LoggedData
                    section.data(2).logicalSrcIdx = 5;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mq2a0pdpqo.LoggedData
                    section.data(3).logicalSrcIdx = 6;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dnkp0lbjpv.LoggedData
                    section.data(4).logicalSrcIdx = 7;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.nmm4orqthk.LoggedData
                    section.data(5).logicalSrcIdx = 8;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.h2hf3ynspq.LoggedData
                    section.data(6).logicalSrcIdx = 9;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.mlybyagkjn.LoggedData
                    section.data(7).logicalSrcIdx = 10;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.owexu2o3pk.LoggedData
                    section.data(8).logicalSrcIdx = 11;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.eo3pzdmzps.LoggedData
                    section.data(9).logicalSrcIdx = 12;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.cfwscwnjmj.LoggedData
                    section.data(10).logicalSrcIdx = 13;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.n1gwhyv2aa.LoggedData
                    section.data(11).logicalSrcIdx = 14;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.jop32eiyp1.LoggedData
                    section.data(12).logicalSrcIdx = 15;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.alz4rjaoac.LoggedData
                    section.data(13).logicalSrcIdx = 16;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.ay3tfequ2l.LoggedData
                    section.data(14).logicalSrcIdx = 17;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.jb551orsgs.LoggedData
                    section.data(15).logicalSrcIdx = 18;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.iyxztug1kb.LoggedData
                    section.data(16).logicalSrcIdx = 19;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.jzfdbs1xxy.LoggedData
                    section.data(17).logicalSrcIdx = 20;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.pcijbklolg
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtDW.gzz433zqvc
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ednz5qfmky
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jfkviz15ua
                    section.data(3).logicalSrcIdx = 24;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jbuywcm4yv
                    section.data(4).logicalSrcIdx = 25;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jdwdhk453l
                    section.data(5).logicalSrcIdx = 26;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.d0ez1lmmyl
                    section.data(6).logicalSrcIdx = 27;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dztoclg0sz
                    section.data(7).logicalSrcIdx = 28;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.pbbc0xzezp
                    section.data(8).logicalSrcIdx = 29;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.nq0ujzvwsf
                    section.data(9).logicalSrcIdx = 30;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.pj4zmmvnm5
                    section.data(10).logicalSrcIdx = 31;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.c50xvzqtoq
                    section.data(11).logicalSrcIdx = 32;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.iwzi5ohrsh
                    section.data(12).logicalSrcIdx = 33;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.mseu5hqjjq
                    section.data(13).logicalSrcIdx = 34;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.p5iqfnpn2y
                    section.data(14).logicalSrcIdx = 35;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.c2kre5vegc
                    section.data(15).logicalSrcIdx = 36;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.nwewtro2a3
                    section.data(16).logicalSrcIdx = 37;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.irzn0f512g
                    section.data(17).logicalSrcIdx = 38;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.hmqgd4txud
                    section.data(18).logicalSrcIdx = 39;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.jaeylyrgwx
                    section.data(19).logicalSrcIdx = 40;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.m3xjl5v4ek
                    section.data(20).logicalSrcIdx = 41;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.p1dcymrsjg
                    section.data(21).logicalSrcIdx = 42;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.eib1ql3mz5
                    section.data(22).logicalSrcIdx = 43;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.pbo1kim1gy
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.i4cmcy3q2a
                    section.data(2).logicalSrcIdx = 45;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.fzv0yqelnv
                    section.data(3).logicalSrcIdx = 46;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cugzvh30un
                    section.data(4).logicalSrcIdx = 47;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.gcvb3rsm1a
                    section.data(5).logicalSrcIdx = 48;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ck5txcme1q
                    section.data(6).logicalSrcIdx = 49;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.cqohevrabp
                    section.data(7).logicalSrcIdx = 50;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.hebcdzc552
                    section.data(8).logicalSrcIdx = 51;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.k4jqdwwenf.hjmucl1u2i
                    section.data(1).logicalSrcIdx = 52;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.cxfwoerhvl.kc3n40mg45
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ccf5xwtinim.kc3n40mg45
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dshipp4zhkp.hjmucl1u2i
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dc1zceqmvb.f0bl5viy3f
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dc1zceqmvb.nlwa32a5p1
                    section.data(1).logicalSrcIdx = 57;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.eajtmfyznlk.f0bl5viy3f
                    section.data(1).logicalSrcIdx = 58;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.eajtmfyznlk.nlwa32a5p1
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 4003974170;
    targMap.checksum1 = 3916963272;
    targMap.checksum2 = 2956464334;
    targMap.checksum3 = 1460834178;

