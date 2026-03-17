// === FUN_001ff46c @ 001ff46c (29696B) — TAGS: SWITCH ===

/* WARNING: Type propagation algorithm not settling */

byte * FUN_001ff46c(byte *param_1,byte *param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined5 uVar10;
  undefined7 uVar11;
  char *__ptr;
  undefined6 uVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  undefined2 *puVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  byte *pbVar30;
  char *pcVar31;
  byte *pbVar32;
  void *pvVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  byte *pbVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  byte *pbVar42;
  undefined8 *puVar43;
  byte *pbVar44;
  undefined8 *puVar45;
  void *pvVar46;
  undefined8 *puVar47;
  ulong *puVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  void *pvVar52;
  size_t sVar53;
  short *__dest;
  ulong *puVar54;
  ulong uVar55;
  byte bVar56;
  void *pvVar57;
  long *plVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  byte local_170;
  byte bStack_16f;
  undefined1 uStack_16e;
  undefined5 uStack_16d;
  char cStack_168;
  undefined7 uStack_167;
  byte *local_160;
  byte local_158;
  undefined7 uStack_157;
  char cStack_150;
  undefined7 uStack_14f;
  char *local_148;
  undefined7 uStack_140;
  undefined1 local_139;
  undefined7 uStack_138;
  byte local_130;
  undefined6 uStack_12f;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  void *local_120;
  undefined7 uStack_110;
  undefined1 local_109;
  undefined7 uStack_108;
  undefined7 uStack_100;
  undefined1 local_f9;
  undefined7 uStack_f8;
  byte local_f0;
  undefined6 uStack_ef;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  byte *local_e0;
  byte local_d0;
  undefined6 uStack_cf;
  undefined1 uStack_c9;
  char cStack_c8;
  undefined6 uStack_c7;
  undefined1 uStack_c1;
  byte *local_c0;
  byte local_b0;
  undefined6 uStack_af;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  byte *local_a0;
  undefined8 local_98;
  ulong uStack_90;
  void *local_88;
  byte local_80;
  undefined6 uStack_7f;
  undefined1 uStack_79;
  char cStack_78;
  undefined6 uStack_77;
  undefined1 uStack_71;
  byte *local_70;
  
  lVar4 = tpidr_el0;
  lVar24 = *(long *)(lVar4 + 0x28);
  pbVar17 = param_1;
  if (param_1 == param_2) goto LAB_00204b90;
  bVar56 = *param_1;
  bVar9 = false;
  bVar14 = false;
  pbVar25 = param_1;
  if (bVar56 == 0x4b) {
LAB_001ff500:
    if (bVar56 == 0x4b) {
      pbVar25 = pbVar25 + 1;
    }
    if (pbVar25 == param_1) goto LAB_00204b90;
    bVar3 = *pbVar25;
    lVar18 = *param_3;
    lVar34 = param_3[1];
    pbVar16 = (byte *)FUN_001ff46c(pbVar25,param_2,param_3);
    if (pbVar16 == pbVar25) goto LAB_00204b90;
    lVar29 = *param_3;
    lVar36 = param_3[1];
    puVar45 = (undefined8 *)param_3[5];
    if (bVar3 == 0x46) {
      puVar45 = puVar45 + -4;
      FUN_0020a394(puVar45);
// ... truncated

// === FUN_00218d78 @ 00218d78 (22760B) — TAGS: SWITCH ===

undefined1 * FUN_00218d78(undefined1 *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  undefined7 uVar11;
  undefined8 uVar12;
  undefined7 uVar13;
  char cVar14;
  undefined7 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined6 uVar32;
  undefined2 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined6 uVar50;
  char cVar51;
  char cVar52;
  undefined1 *puVar53;
  void *pvVar54;
  char *pcVar55;
  undefined8 uVar56;
  long lVar57;
  long lVar58;
  ulong uVar59;
  undefined1 *puVar60;
  long lVar61;
  ulong uVar62;
  void *pvVar63;
  ulong uVar64;
  void *__ptr;
  void *pvVar65;
  undefined6 local_78;
  char cStack_72;
  char cStack_71;
  char local_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  undefined2 uStack_6c;
  
  uVar49 = s_operator>>__002d4309._0_8_;
  uVar48 = s_operator>>_002d42fe._0_8_;
  uVar47 = s_operator___002d42f3._0_8_;
  uVar46 = s_operator__002d42e9._0_8_;
  uVar45 = s_operator__002d42df._0_8_;
  uVar44 = s_operator_>_002d42d4._0_8_;
  uVar43 = s_operator___002d42c9._0_8_;
  uVar42 = s_operator___002d42be._0_8_;
  uVar41 = s_operator__002d42b4._0_8_;
  uVar40 = s_operator_>__002d42a8._0_8_;
  uVar39 = s_operator___002d429d._0_8_;
  uVar38 = s_operator__002d4293._0_8_;
  uVar37 = s_operator___002d4288._0_8_;
  uVar36 = s_operator_new_002d427b._0_8_;
  uVar35 = s_operator__002d4271._0_8_;
  uVar34 = s_operator___002d4266._0_8_;
  uVar33 = s_operator_new___002d4257._6_2_;
  uVar32 = s_operator_new___002d4257._0_6_;
  uVar31 = s_operator___002d424c._0_8_;
  uVar30 = s_operator___002d4241._0_8_;
  uVar29 = s_operator___002d4236._0_8_;
  uVar28 = s_operator__002d422c._0_8_;
  uVar27 = s_operator<_002d4222._0_8_;
  uVar26 = s_operator<<__002d4216._0_8_;
  uVar25 = s_operator<<_002d420b._0_8_;
  uVar24 = s_operator<__002d41f4._0_8_;
  uVar23 = s_operator___002d41e9._0_8_;
  uVar22 = s_operator>_002d41df._0_8_;
  uVar21 = s_operator>__002d41d4._0_8_;
  uVar20 = s_operator___002d41c9._0_8_;
  uVar19 = s_operator___002d41be._0_8_;
  uVar18 = s_operator__002d41b4._0_8_;
  uVar17 = s_operator___002d41a9._0_8_;
  uVar16 = s_operator__002d419f._0_8_;
  uVar15 = s_operator_delete_002d418f._8_7_;
  cVar14 = s_operator_delete_002d418f[7];
  uVar13 = s_operator_delete_002d418f._0_7_;
  uVar12 = s_operator__002d4185._0_8_;
  uVar11 = s_operator_delete___002d4173._8_7_;
  cVar1 = s_operator_delete___002d4173[7];
  uVar10 = s_operator_delete___002d4173._0_7_;
  uVar9 = s_operator__002d415f._0_8_;
  uVar8 = s_operator__002d4155._0_8_;
  uVar7 = s_operator___002d414a._0_8_;
  uVar6 = s_operator__002d4140._0_8_;
  uVar5 = s_operator___002d4135._0_8_;
  uVar4 = s_operator__002d412b._0_8_;
  uVar56 = s_operator___002d4120._0_8_;
  lVar3 = tpidr_el0;
  lVar57 = *(long *)(lVar3 + 0x28);
  if (param_2 - (long)param_1 < 2) goto switchD_00218dd4_caseD_62;
  local_78 = (undefined6)s_operator__002d4185._0_8_;
  uVar50 = local_78;
  cStack_72 = SUB81(s_operator__002d4185._0_8_,6);
  cVar51 = cStack_72;
  cStack_71 = SUB81(s_operator__002d4185._0_8_,7);
  cVar52 = cStack_71;
  local_78 = (undefined6)s_operator__002d422c._0_8_;
  cStack_72 = SUB81(s_operator__002d422c._0_8_,6);
  cStack_71 = SUB81(s_operator__002d422c._0_8_,7);
  switch(*param_1) {
  case 0x61:
    switch(param_1[1]) {
    case 0x4e:
      local_70 = 0x26;
      cStack_6f = 0x3d;
      local_78 = (undefined6)s_operator___002d4135._0_8_;
      cStack_72 = SUB81(s_operator___002d4135._0_8_,6);
      cStack_71 = SUB81(s_operator___002d4135._0_8_,7);
      puVar53 = (undefined1 *)param_3[1];
      if (puVar53 < (undefined1 *)param_3[2]) {
// ... truncated

// === FUN_0020efe8 @ 0020efe8 (18996B) — TAGS: SWITCH ===

/* WARNING: Type propagation algorithm not settling */

char * FUN_0020efe8(char *param_1,char *param_2,long *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined7 uVar8;
  undefined2 uVar9;
  undefined7 uVar10;
  bool bVar11;
  bool bVar12;
  uint7 uVar13;
  undefined6 uVar14;
  undefined6 uVar15;
  uint uVar16;
  undefined2 *__ptr;
  undefined2 uVar17;
  undefined4 uVar18;
  bool bVar19;
  char *pcVar20;
  long lVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  undefined2 *puVar27;
  void *pvVar28;
  undefined1 *puVar29;
  uint *puVar30;
  long lVar31;
  undefined2 *puVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 *puVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  void *pvVar45;
  byte *pbVar46;
  ulong uVar47;
  void *pvVar48;
  byte bVar49;
  byte *pbVar50;
  byte *pbVar51;
  long lVar52;
  undefined2 *local_1f8;
  undefined2 *local_1f0;
  char *local_1e0;
  long *local_1d8;
  ulong local_1c8;
  ulong uStack_1c0;
  undefined2 *local_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  undefined2 *local_1a0;
  byte local_190;
  undefined6 uStack_18f;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined2 *local_180;
  undefined7 uStack_170;
  undefined1 local_169;
  undefined7 uStack_168;
  undefined7 uStack_160;
  undefined1 local_159;
  undefined7 uStack_158;
  undefined7 uStack_150;
  undefined1 local_149;
  undefined7 uStack_148;
  undefined7 uStack_140;
  undefined1 local_139;
  undefined7 uStack_138;
  byte local_130;
  undefined6 uStack_12f;
  undefined1 uStack_129;
  uint7 uStack_128;
  undefined1 uStack_121;
  undefined2 *local_120;
  byte local_110;
  undefined6 uStack_10f;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined6 uStack_107;
  undefined1 uStack_101;
  undefined2 *local_100;
  byte local_f0;
  undefined6 uStack_ef;
  char cStack_e9;
  undefined1 uStack_e8;
  undefined6 uStack_e7;
  undefined1 uStack_e1;
  undefined2 *local_e0;
  uint local_d0;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined6 uStack_c7;
  undefined1 uStack_c1;
  undefined2 *local_c0;
  byte local_b0;
  byte bStack_af;
  char cStack_ae;
  char cStack_ad;
  char cStack_ac;
  undefined2 uStack_ab;
  char cStack_a9;
  char cStack_a8;
  undefined2 uStack_a7;
  undefined4 uStack_a5;
  undefined1 uStack_a1;
  undefined2 *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  byte local_80;
  undefined2 uStack_7f;
  undefined4 uStack_7d;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined6 uStack_77;
  undefined1 uStack_71;
  undefined2 *local_70;
  
  lVar34 = tpidr_el0;
  lVar38 = *(long *)(lVar34 + 0x28);
  lVar31 = (long)param_2 - (long)param_1;
  pcVar20 = param_1;
  if (lVar31 < 2) goto switchD_0020f090_caseD_3a;
  pcVar22 = param_1;
  if (lVar31 < 4) {
    bVar19 = false;
LAB_0020f060:
    cVar3 = *pcVar22;
  }
// ... truncated

// === FUN_0021fafc @ 0021fafc (15232B) — TAGS: SWITCH ===

undefined1 * FUN_0021fafc(undefined1 *param_1,undefined1 *param_2,long *param_3)

{
  long lVar1;
  undefined5 uVar2;
  undefined6 uVar3;
  undefined3 uVar4;
  undefined2 uVar5;
  undefined7 uVar6;
  char cVar7;
  undefined7 uVar8;
  undefined3 uVar9;
  undefined7 uVar10;
  char cVar11;
  undefined6 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined6 uVar18;
  undefined2 uVar19;
  undefined6 uVar20;
  undefined2 uVar21;
  char cVar22;
  char cVar23;
  void *pvVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *puVar29;
  undefined4 uVar30;
  long lVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *pvVar34;
  ulong uVar35;
  void *pvVar36;
  void *pvVar37;
  undefined8 uVar38;
  undefined4 local_80;
  undefined4 local_78;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char local_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char acStack_68 [7];
  char local_61;
  undefined7 uStack_60;
  
  uVar21 = s_std__nullptr_t_002d45d9._6_2_;
  uVar20 = s_std__nullptr_t_002d45d9._0_6_;
  uVar19 = s_decltype_auto__002d45ca._6_2_;
  uVar18 = s_decltype_auto__002d45ca._0_6_;
  uVar17 = s_decimal16_002d45c0._0_8_;
  uVar16 = s_decimal32_002d45b6._0_8_;
  uVar15 = s_decimal128_002d45ab._0_8_;
  uVar14 = s_decimal64_002d45a1._0_8_;
  uVar13 = s___float128_002d4592._0_8_;
  uVar33 = s_long_double_002d4586._0_8_;
  uVar12 = s_unsigned_long_long_002d456d._9_6_;
  cVar11 = s_unsigned_long_long_002d456d[7];
  uVar10 = s_unsigned_long_long_002d456d._0_7_;
  uVar9 = s_unsigned_long_002d455f._5_3_;
  uVar2 = s_unsigned_long_002d455f._0_5_;
  uVar38 = s_unsigned_int_002d4552._0_8_;
  uVar8 = s_unsigned___int128_002d40d2._8_7_;
  cVar7 = s_unsigned___int128_002d40d2[7];
  uVar6 = s_unsigned___int128_002d40d2._0_7_;
  uVar5 = s_unsigned_short_002d40bf._6_2_;
  uVar3 = s_unsigned_short_002d40bf._0_6_;
  uVar4 = s_unsigned_char_002d40b1._5_3_;
  lVar1 = tpidr_el0;
  lVar26 = *(long *)(lVar1 + 0x28);
  if (param_1 == param_2) goto switchD_0021fb54_caseD_45;
  cStack_72 = SUB31(s_unsigned_char_002d40b1._5_3_,1);
  cVar22 = cStack_72;
  cStack_71 = SUB31(s_unsigned_char_002d40b1._5_3_,2);
  cVar23 = cStack_71;
  cStack_72 = (char)s_unsigned_char_002d40b1._8_2_;
  cStack_71 = SUB21(s_unsigned_char_002d40b1._8_2_,1);
  switch(*param_1) {
  case 0x44:
    if (param_1 + 1 == param_2) goto switchD_0021fb54_caseD_45;
    switch(param_1[1]) {
    case 0x61:
      puVar25 = (undefined1 *)param_3[1];
      if (puVar25 < (undefined1 *)param_3[2]) {
        *puVar25 = 8;
        puVar25[5] = 0;
        *(undefined4 *)(puVar25 + 1) = 0x6f747561;
        param_1 = param_1 + 2;
        goto LAB_002200a4;
      }
      lVar27 = (long)puVar25 - *param_3 >> 4;
      uVar35 = 0x555555555555555;
      uVar28 = lVar27 * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar28) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar31 = param_3[2] - *param_3 >> 4;
      if ((ulong)(lVar31 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar32 = lVar31 * 0x5555555555555556;
        uVar35 = uVar28;
        if (uVar28 <= uVar32) {
          uVar35 = uVar32;
        }
        if (uVar35 != 0) goto LAB_00222938;
        pvVar24 = (void *)0x0;
      }
      else {
LAB_00222938:
        lVar31 = param_3[3];
        uVar28 = uVar35 * 0x30;
        pvVar24 = *(void **)(lVar31 + 0x1000);
        if ((ulong)((lVar31 + 0x1000) - (long)pvVar24) < uVar28) {
          pvVar24 = malloc(uVar28);
        }
        else {
          *(void **)(lVar31 + 0x1000) = (void *)((long)pvVar24 + uVar28);
        }
      }
      puVar29 = (undefined1 *)((long)pvVar24 + lVar27 * 0x10);
      *puVar29 = 8;
      *(undefined4 *)(puVar29 + 1) = 0x6f747561;
      puVar29[5] = 0;
      *(undefined2 *)(puVar29 + 0xe) = 0;
      *(undefined8 *)(puVar29 + 0x10) = 0;
      *(undefined8 *)(puVar29 + 6) = 0;
      puVar29[0x18] = 0;
      *(undefined8 *)(puVar29 + 0x20) = 0;
      *(undefined8 *)(puVar29 + 0x28) = 0;
      *(undefined8 *)(puVar29 + 0x19) = 0;
      pvVar36 = (void *)*param_3;
      pvVar34 = (void *)param_3[1];
      puVar25 = puVar29 + 0x30;
      pvVar37 = pvVar36;
      if (pvVar34 != pvVar36) {
        do {
          *(undefined8 *)(puVar29 + -0x20) = *(undefined8 *)((long)pvVar34 + -0x20);
          uVar38 = *(undefined8 *)((long)pvVar34 + -0x30);
// ... truncated

// === FUN_00207620 @ 00207620 (8992B) — TAGS: SWITCH ===

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00207620(byte *param_1,byte *param_2,long *param_3,undefined1 *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong *puVar11;
  undefined2 *puVar12;
  void *pvVar13;
  byte *pbVar14;
  undefined4 uVar15;
  uint uVar16;
  byte *pbVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  byte bVar20;
  void *pvVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  void *pvVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  long lVar33;
  undefined8 *puVar34;
  ulong *puVar35;
  void *pvVar36;
  byte *pbVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  long local_a8;
  void *local_a0;
  void *pvStack_98;
  undefined2 *local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((long)param_2 - (long)param_1 < 2) goto LAB_002096e0;
  pbVar14 = param_1 + 1;
  if (*param_1 != 0x4c) {
    pbVar14 = param_1;
  }
  bVar20 = *pbVar14;
  pbVar17 = param_2;
  pbVar8 = param_1;
  pbVar9 = pbVar14;
  if (bVar20 == 0x5a) {
    if ((((pbVar14 != param_2) &&
         (pbVar10 = (byte *)FUN_001fe3d8(pbVar14 + 1,param_2,param_3), pbVar17 = pbVar14,
         pbVar10 != pbVar14 + 1)) && (pbVar10 != param_2)) &&
       ((*pbVar10 == 0x45 && (pbVar37 = pbVar10 + 1, pbVar37 != param_2)))) {
      if (*pbVar37 == 100) {
        pbVar37 = pbVar10 + 2;
        if (pbVar37 != param_2) {
          pbVar1 = pbVar10 + 3;
          if (pbVar10[2] != 0x6e) {
            pbVar1 = pbVar37;
          }
          if (pbVar1 != param_2) {
            if (*pbVar1 == 0x30) {
              pbVar37 = pbVar1 + 1;
            }
            else if (*pbVar1 - 0x31 < 9) {
              do {
                pbVar37 = pbVar1 + 1;
                if (pbVar37 == param_2) goto LAB_002096d0;
                pbVar1 = pbVar37;
              } while (*pbVar37 - 0x30 < 10);
            }
          }
          if ((pbVar37 != param_2) && (*pbVar37 == 0x5f)) {
            pbVar17 = (byte *)FUN_00207620(pbVar37 + 1,param_2,param_3,param_4);
            if (pbVar17 == pbVar37 + 1) goto LAB_00209694;
            lVar32 = param_3[1];
            if (1 < (ulong)((lVar32 - *param_3 >> 4) * -0x5555555555555555)) {
              uVar39 = (ulong)(*(byte *)(lVar32 + -0x18) >> 1);
              lVar33 = lVar32 + -0x17;
              if ((*(byte *)(lVar32 + -0x18) & 1) != 0) {
                uVar39 = *(ulong *)(lVar32 + -0x10);
                lVar33 = *(long *)(lVar32 + -8);
              }
              FUN_0020a048(lVar32 + -0x30,lVar33,uVar39);
              local_90 = *(undefined2 **)(lVar32 + -0x20);
              pvStack_98 = *(void **)(lVar32 + -0x28);
              local_a0 = *(void **)(lVar32 + -0x30);
              *(undefined8 *)(lVar32 + -0x28) = 0;
              *(undefined8 *)(lVar32 + -0x20) = 0;
              *(undefined8 *)(lVar32 + -0x30) = 0;
              lVar32 = param_3[1];
              pbVar10 = (byte *)(lVar32 + -0x30);
              if ((*(byte *)(lVar32 + -0x18) & 1) != 0) {
                free(*(void **)(lVar32 + -8));
              }
              if ((*pbVar10 & 1) != 0) {
                free(*(void **)(lVar32 + -0x20));
              }
              param_3[1] = (long)pbVar10;
              if ((byte *)*param_3 == pbVar10) {
                bVar5 = true;
                pbVar17 = pbVar14;
                pvVar21 = local_a0;
              }
              else {
                FUN_0020a048(lVar32 + -0x60,&DAT_002d4339,2);
                pvVar21 = local_a0;
                pvVar13 = (void *)((ulong)local_a0 >> 1 & 0x7f);
                puVar18 = (undefined2 *)((ulong)&local_a0 | 1);
                if (((ulong)local_a0 & 1) != 0) {
                  pvVar13 = pvStack_98;
                  puVar18 = local_90;
                }
                FUN_0020a048(param_3[1] + -0x30,puVar18,pvVar13);
                bVar5 = false;
              }
              if (((ulong)pvVar21 & 1) != 0) {
                free(local_90);
              }
              if (!bVar5) goto LAB_002096d0;
            }
            goto LAB_002096d4;
          }
        }
      }
      else if (*pbVar37 == 0x73) {
        pbVar9 = pbVar10 + 2;
        pbVar17 = param_2;
        if (pbVar9 != param_2) {
          pbVar17 = pbVar9;
          if (*pbVar9 == 0x5f) {
// ... truncated

// === FUN_00214144 @ 00214144 (5932B) — TAGS: SWITCH ===

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00214144(byte *param_1,byte *param_2,ulong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  byte *pbVar5;
  uint3 uVar6;
  undefined7 uVar7;
  int6 iVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  void *pvVar18;
  byte *pbVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long lVar27;
  void *pvVar28;
  undefined8 uVar29;
  ulong uVar30;
  char cVar31;
  size_t sVar32;
  void *pvVar33;
  byte bVar34;
  long lVar35;
  byte *pbVar36;
  void *pvVar37;
  byte *pbVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 local_110 [2];
  char cStack_10e;
  undefined1 uStack_10d;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  void *local_100;
  byte local_f8;
  undefined6 uStack_f7;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  byte *local_e8;
  byte local_e0;
  undefined6 uStack_df;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  void *local_d0;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  byte local_b0;
  char cStack_af;
  char cStack_ae;
  char cStack_ad;
  char cStack_ac;
  char cStack_ab;
  char cStack_aa;
  char cStack_a9;
  char cStack_a8;
  undefined4 uStack_a7;
  char cStack_a3;
  char cStack_a2;
  char cStack_a1;
  char cStack_a0;
  undefined2 uStack_9f;
  undefined5 uStack_9d;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined1 uStack_77;
  int6 iStack_76;
  void *local_70;
  
  cVar13 = cStack_aa;
  cVar12 = cStack_ab;
  cVar11 = cStack_ac;
  cVar10 = cStack_ad;
  cVar9 = cStack_ae;
  cVar41 = cStack_af;
  lVar4 = tpidr_el0;
  lVar20 = *(long *)(lVar4 + 0x28);
  pbVar21 = param_1;
  if (((long)param_2 - (long)param_1 < 4) || (*param_1 != 0x4c)) goto switchD_002141b8_caseD_54;
  pbVar38 = param_1 + 1;
  cStack_af = (char)s_unsigned_char_002d40b1._2_3_;
  cVar31 = cStack_af;
  cStack_ae = SUB31(s_unsigned_char_002d40b1._2_3_,1);
  cVar39 = cStack_ae;
  cStack_ad = SUB31(s_unsigned_char_002d40b1._2_3_,2);
  cStack_ac = (char)s_unsigned_char_002d40b1._5_3_;
  cStack_ab = SUB31(s_unsigned_char_002d40b1._5_3_,1);
  cStack_aa = SUB31(s_unsigned_char_002d40b1._5_3_,2);
  switch(*pbVar38) {
  case 0x54:
    goto switchD_002141b8_caseD_54;
  default:
    cStack_af = cVar41;
    cStack_ae = cVar9;
    cStack_ad = cVar10;
    cStack_ac = cVar11;
    cStack_ab = cVar12;
    cStack_aa = cVar13;
    pbVar17 = (byte *)FUN_001ff46c(pbVar38,param_2,param_3);
    cVar41 = cStack_af;
    cVar9 = cStack_ae;
    cVar10 = cStack_ad;
    cVar11 = cStack_ac;
    cVar12 = cStack_ab;
    cVar13 = cStack_aa;
    if ((pbVar17 == pbVar38) || (pbVar17 == param_2)) goto switchD_002141b8_caseD_54;
    bVar34 = *pbVar17;
    uVar16 = (uint)bVar34;
    pbVar38 = pbVar17;
    if (uVar16 == 0x45) {
      pbVar21 = pbVar17 + 1;
      goto switchD_002141b8_caseD_54;
    }
    while (uVar16 - 0x30 < 10) {
      pbVar38 = pbVar38 + 1;
      if (param_2 == pbVar38) goto switchD_002141b8_caseD_54;
      bVar34 = *pbVar38;
      uVar16 = (uint)bVar34;
    }
    uVar24 = (long)pbVar38 - (long)pbVar17;
    if (((uVar24 == 0) || (bVar34 != 0x45)) || (uVar30 = param_3[1], *param_3 == uVar30))
    goto switchD_002141b8_caseD_54;
    uVar26 = (ulong)(*(byte *)(uVar30 - 0x18) >> 1);
// ... truncated

// === FUN_0020b264 @ 0020b264 (5572B) — TAGS: SWITCH ===

byte * FUN_0020b264(byte *param_1,byte *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined5 uVar9;
  undefined3 uVar10;
  undefined6 uVar11;
  undefined2 uVar12;
  undefined7 uVar13;
  char cVar14;
  undefined7 uVar15;
  int iVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  void *pvVar20;
  long lVar21;
  ulong uVar22;
  void *pvVar23;
  ulong *puVar24;
  void *pvVar25;
  ulong uVar26;
  void *pvVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  ulong *puVar31;
  undefined8 uVar32;
  undefined5 local_88;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  undefined2 local_80;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  
  uVar15 = s_std__basic_string_002d44f0._8_7_;
  cVar14 = s_std__basic_string_002d44f0[7];
  uVar13 = s_std__basic_string_002d44f0._0_7_;
  uVar12 = s_std__allocator_002d44e1._6_2_;
  uVar11 = s_std__allocator_002d44e1._0_6_;
  uVar10 = s_std__iostream_002d4476._5_3_;
  uVar9 = s_std__iostream_002d4476._0_5_;
  uVar8 = s_std__ostream_002d4429._0_8_;
  uVar7 = s_std__istream_002d43dc._0_8_;
  uVar32 = s_std__string_002d4389._0_8_;
  lVar6 = tpidr_el0;
  lVar17 = *(long *)(lVar6 + 0x28);
  if (((long)param_2 - (long)param_1 < 2) || (*param_1 != 0x53)) goto LAB_0020c7bc;
  bVar4 = param_1[1];
  switch((uint)bVar4) {
  case 0x5f:
    puVar1 = (undefined8 *)param_3[4];
    if (puVar1 != (undefined8 *)param_3[5]) {
      puVar3 = (ulong *)puVar1[1];
      for (puVar2 = (ulong *)*puVar1; puVar2 != puVar3; puVar2 = puVar2 + 6) {
        puVar31 = (ulong *)param_3[1];
        if (puVar31 == (ulong *)param_3[2]) {
          lVar28 = (long)puVar31 - *param_3 >> 4;
          uVar26 = lVar28 * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar26) {
LAB_0020c7f4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar21 = param_3[2] - *param_3 >> 4;
          uVar29 = 0x555555555555555;
          if ((ulong)(lVar21 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
            uVar22 = lVar21 * 0x5555555555555556;
            uVar29 = uVar26;
            if (uVar26 <= uVar22) {
              uVar29 = uVar22;
            }
            if (uVar29 != 0) goto LAB_0020b5b4;
            pvVar27 = (void *)0x0;
          }
          else {
LAB_0020b5b4:
            lVar21 = param_3[3];
            uVar26 = uVar29 * 0x30;
            pvVar27 = *(void **)(lVar21 + 0x1000);
            if ((ulong)((lVar21 + 0x1000) - (long)pvVar27) < uVar26) {
              pvVar27 = malloc(uVar26);
            }
            else {
              *(void **)(lVar21 + 0x1000) = (void *)((long)pvVar27 + uVar26);
            }
          }
          puVar31 = (ulong *)((long)pvVar27 + lVar28 * 0x10);
          puVar31[1] = 0;
          puVar31[2] = 0;
          *puVar31 = 0;
          if ((*puVar2 & 1) == 0) {
            puVar31[2] = puVar2[2];
            uVar26 = *puVar2;
            puVar31[1] = puVar2[1];
            *puVar31 = uVar26;
          }
          else {
            uVar26 = puVar2[1];
            if (0xffffffffffffffef < uVar26) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar23 = (void *)puVar2[2];
            if (uVar26 < 0x17) {
              pvVar20 = (void *)((long)puVar31 + 1);
              *(char *)puVar31 = (char)(uVar26 << 1);
              if (uVar26 != 0) goto LAB_0020b39c;
            }
            else {
              uVar22 = uVar26 + 0x10 & 0xfffffffffffffff0;
              pvVar20 = malloc(uVar22);
              *(ulong *)((long)pvVar27 + lVar28 * 0x10 + 8) = uVar26;
              *(void **)((long)pvVar27 + lVar28 * 0x10 + 0x10) = pvVar20;
              *puVar31 = uVar22 | 1;
LAB_0020b39c:
              memcpy(pvVar20,pvVar23,uVar26);
            }
            *(undefined1 *)((long)pvVar20 + uVar26) = 0;
          }
          puVar24 = (ulong *)((long)pvVar27 + lVar28 * 0x10 + 0x18);
          *puVar24 = 0;
          *(undefined8 *)((long)pvVar27 + lVar28 * 0x10 + 0x20) = 0;
          *(undefined8 *)((long)pvVar27 + lVar28 * 0x10 + 0x28) = 0;
          if ((puVar2[3] & 1) == 0) {
            *(ulong *)((long)pvVar27 + lVar28 * 0x10 + 0x28) = puVar2[5];
            uVar26 = puVar2[3];
            *(ulong *)((long)pvVar27 + lVar28 * 0x10 + 0x20) = puVar2[4];
            *puVar24 = uVar26;
          }
          else {
            uVar26 = puVar2[4];
            if (0xffffffffffffffef < uVar26) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar23 = (void *)puVar2[5];
            if (uVar26 < 0x17) {
              pvVar20 = (void *)((long)pvVar27 + lVar28 * 0x10 + 0x19);
// ... truncated

// === FUN_001fe3d8 @ 001fe3d8 (3900B) — TAGS: SWITCH ===

byte * FUN_001fe3d8(byte *param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  void *pvVar16;
  ulong *puVar17;
  void *__dest;
  undefined1 *__ptr;
  int iVar18;
  uint uVar19;
  long lVar20;
  size_t __size;
  ulong uVar21;
  ulong uVar22;
  void *pvVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  byte *pbVar27;
  ulong uVar28;
  long local_f8;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  byte local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (param_1 == param_2) goto LAB_001feb8c;
  lVar12 = param_3[0xd];
  uVar3 = *(undefined1 *)((long)param_3 + 0x6d);
  uVar1 = (int)lVar12 + 1;
  *(uint *)(param_3 + 0xd) = uVar1;
  if (1 < uVar1) {
    *(undefined1 *)((long)param_3 + 0x6d) = 1;
  }
  uVar4 = *(undefined1 *)((long)param_3 + 0x6c);
  *(undefined1 *)((long)param_3 + 0x6c) = 0;
  bVar5 = *param_1;
  if ((bVar5 == 0x54) || (bVar5 == 0x47)) {
    if (2 < (long)param_2 - (long)param_1) {
      if (bVar5 == 0x47) {
        if (param_1[1] == 0x52) {
          pbVar14 = (byte *)FUN_00207620(param_1 + 2,param_2,param_3,0);
          if ((pbVar14 != param_1 + 2) && (*param_3 != param_3[1])) {
            FUN_00209e58(param_3[1] + -0x30,0,"reference temporary for ",0x18);
            goto LAB_001fec00;
          }
        }
        else if (((param_1[1] == 0x56) &&
                 (pbVar14 = (byte *)FUN_00207620(param_1 + 2,param_2,param_3,0),
                 pbVar14 != param_1 + 2)) && (*param_3 != param_3[1])) {
          FUN_00209e58(param_3[1] + -0x30,0,"guard variable for ",0x13);
LAB_001fec00:
          param_1 = pbVar14;
        }
      }
      else if (bVar5 == 0x54) {
        pbVar25 = param_1 + 1;
        switch(*pbVar25) {
        case 0x43:
          pbVar14 = (byte *)FUN_001ff46c(param_1 + 2,param_2,param_3);
          if ((pbVar14 != param_1 + 2) && (pbVar14 != param_2)) {
            pbVar25 = pbVar14 + 1;
            if (*pbVar14 != 0x6e) {
              pbVar25 = pbVar14;
            }
            if (pbVar25 != param_2) {
              if (*pbVar25 == 0x30) {
                pbVar25 = pbVar25 + 1;
              }
              else {
                if (8 < *pbVar25 - 0x31) break;
                do {
                  pbVar25 = pbVar25 + 1;
                  if (pbVar25 == param_2) goto LAB_001feb80;
                } while (*pbVar25 - 0x30 < 10);
              }
              if (((pbVar25 != pbVar14) && (pbVar25 != param_2)) &&
                 ((*pbVar25 == 0x5f &&
                  ((pbVar14 = (byte *)FUN_001ff46c(pbVar25 + 1,param_2,param_3),
                   pbVar14 != pbVar25 + 1 &&
                   (lVar15 = param_3[1], 1 < (ulong)((lVar15 - *param_3 >> 4) * -0x5555555555555555)
                   )))))) {
                uVar26 = (ulong)(*(byte *)(lVar15 + -0x18) >> 1);
                lVar20 = lVar15 + -0x17;
                if ((*(byte *)(lVar15 + -0x18) & 1) != 0) {
                  uVar26 = *(ulong *)(lVar15 + -0x10);
                  lVar20 = *(long *)(lVar15 + -8);
                }
                puVar17 = (ulong *)FUN_0020a048(lVar15 + -0x30,lVar20,uVar26);
                local_80 = (void *)puVar17[2];
                uStack_88 = puVar17[1];
                local_90 = *puVar17;
                puVar17[1] = 0;
                puVar17[2] = 0;
                *puVar17 = 0;
                lVar15 = param_3[1];
                pbVar25 = (byte *)(lVar15 + -0x30);
                if ((*(byte *)(lVar15 + -0x18) & 1) != 0) {
                  free(*(void **)(lVar15 + -8));
                }
                if ((*pbVar25 & 1) != 0) {
                  free(*(void **)(lVar15 + -0x20));
                }
                param_3[1] = (long)pbVar25;
                if ((byte *)*param_3 == pbVar25) {
                  bVar9 = true;
                  pbVar14 = param_1;
                }
                else {
                  FUN_00209e58(&local_90,0,"construction vtable for ",0x18);
                  local_c0 = local_80;
                  uStack_c8 = uStack_88;
                  local_d0 = local_90;
                  local_90 = 0;
                  uStack_88 = 0;
                  local_80 = (void *)0x0;
                  FUN_0020a048(&local_d0,&DAT_002d3fd3,4);
                  local_a0 = local_c0;
                  uVar24 = uStack_c8;
// ... truncated

// === FUN_00160124 @ 00160124 (2548B) — TAGS: CMD_TABLE ===

void FUN_00160124(uint param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0031c32f & 1) == 0) {
    J2qaFN4xHz(0x31c2e6,0x20,&DAT_0029cbfb,&DAT_0029cbf0,3,0x71);
    DAT_0031c32f = 1;
  }
  if ((DAT_0031c32e & 1) == 0) {
    J2qaFN4xHz(0x31c2d6,0x10,&DAT_0029c910,&DAT_0029cbed,3,0x6f);
    DAT_0031c32e = 1;
  }
  if ((DAT_0031c32d & 1) == 0) {
    HlupqL3ZAR(0x31c2c8,0xe,&DAT_0029cbdf,&DAT_0029cbdd,2,0x39);
    DAT_0031c32d = 1;
  }
  if ((DAT_0031c32c & 1) == 0) {
    pDhsAJkF7h(0x31c2b9,0xf,&DAT_0029cbce,&DAT_0029cbcc,2,0xdf);
    DAT_0031c32c = 1;
  }
  if ((DAT_0031c32b & 1) == 0) {
    pDhsAJkF7h(0x31c2a4,0x15,&DAT_0029cbb7,&DAT_0029cbb4,3,3);
    DAT_0031c32b = 1;
  }
  if ((DAT_0031c32a & 1) == 0) {
    HlupqL3ZAR(0x31c28f,0x15,&DAT_0029cb9f,&DAT_0029cb9d,2,0x9f);
    DAT_0031c32a = 1;
  }
  if ((DAT_0031c329 & 1) == 0) {
    J2qaFN4xHz(0x31c281,0xe,&DAT_0029cb8f,&DAT_0029cb8d,2,0xe5);
    DAT_0031c329 = 1;
  }
  if ((DAT_0031c328 & 1) == 0) {
    HlupqL3ZAR(0x31c272,0xf,&DAT_0029cb7e,&DAT_0029bafb,4,0x49);
    DAT_0031c328 = 1;
  }
  if ((DAT_0031c327 & 1) == 0) {
    J2qaFN4xHz(0x31c25b,0x17,&DAT_0029cb67,&DAT_0029baf7,4,0x81);
    DAT_0031c327 = 1;
  }
  if ((DAT_0031c326 & 1) == 0) {
    J2qaFN4xHz(0x31c246,0x15,&DAT_0029cb52,&DAT_0029baf3,4,0x9f);
    DAT_0031c326 = 1;
  }
  if ((DAT_0031c325 & 1) == 0) {
    pDhsAJkF7h(0x31c234,0x12,&DAT_0029cb40,&DAT_0029cb3d,3,0x1f);
    DAT_0031c325 = 1;
  }
  if ((DAT_0031c324 & 1) == 0) {
    HlupqL3ZAR(0x31c217,0x1d,&DAT_0029cb20,&DAT_0029baef,4,0xed);
    DAT_0031c324 = 1;
  }
  if ((DAT_0031c323 & 1) == 0) {
    pDhsAJkF7h(0x31c209,0xe,&DAT_0029cb12,&DAT_0029cb10,2,0x7d);
    DAT_0031c323 = 1;
  }
  if ((DAT_0031c322 & 1) == 0) {
    HlupqL3ZAR(0x31c1fb,0xe,&DAT_0029cb02,&DAT_0029cb00,2,0x9b);
    DAT_0031c322 = 1;
  }
  if ((DAT_0031c321 & 1) == 0) {
    pDhsAJkF7h(0x31c1ed,0xe,&DAT_0029caf2,&DAT_0029caef,3,0x73);
    DAT_0031c321 = 1;
  }
  if ((DAT_0031c320 & 1) == 0) {
    J2qaFN4xHz(0x31c1e1,0xc,&DAT_0029cae3,&DAT_0029baeb,4,0xa1);
    DAT_0031c320 = 1;
  }
  if ((DAT_0031c31f & 1) == 0) {
    HlupqL3ZAR(0x31c1cd,0x14,&DAT_0029cacf,&DAT_0029cacc,3,0xf3);
    DAT_0031c31f = 1;
  }
  if ((DAT_0031c31e & 1) == 0) {
    J2qaFN4xHz(0x31c1ba,0x13,&DAT_0029cab9,&DAT_0029cab6,3,0xb);
    DAT_0031c31e = 1;
  }
  if ((DAT_0031c31d & 1) == 0) {
    HlupqL3ZAR(0x31c1b0,10,&DAT_0029caac,&DAT_0029caaa,2,0xd9);
    DAT_0031c31d = 1;
  }
  if ((DAT_0031c31c & 1) == 0) {
    HlupqL3ZAR(0x31c19b,0x15,&DAT_0029ca95,&DAT_0029ca92,3,0x45);
    DAT_0031c31c = 1;
  }
  if ((DAT_0031c31b & 1) == 0) {
    J2qaFN4xHz(0x31c186,0x15,&DAT_0029ca7d,&DAT_0029bf2e,4,0xdb);
    DAT_0031c31b = 1;
  }
  if ((DAT_0031c31a & 1) == 0) {
    HlupqL3ZAR(0x31c178,0xe,&DAT_0029ca6f,&DAT_0029b703,4,9);
    DAT_0031c31a = 1;
  }
  if ((DAT_0031c319 & 1) == 0) {
    HlupqL3ZAR(0x31c163,0x15,&DAT_0029ca5a,&DAT_0029ca57,3,0x29);
    DAT_0031c319 = 1;
  }
  if ((DAT_0031c318 & 1) == 0) {
    pDhsAJkF7h(0x31c14a,0x19,&DAT_0029ca3e,&DAT_0029ca3c,2,0x53);
    DAT_0031c318 = 1;
  }
  if ((DAT_0031c317 & 1) == 0) {
    HlupqL3ZAR(0x31c139,0x11,&DAT_0029ca2b,&DAT_0029b6ff,4,0x41);
    DAT_0031c317 = 1;
  }
  if ((DAT_0031c316 & 1) == 0) {
    HlupqL3ZAR(0x31c128,0x11,&DAT_0029ca1a,&DAT_0029ca18,2,0x45);
    DAT_0031c316 = 1;
  }
  if ((DAT_0031c315 & 1) == 0) {
    HlupqL3ZAR(0x31c110,0x18,&DAT_0029ca00,&DAT_0029c9fd,3,0x87);
    DAT_0031c315 = 1;
  }
  if ((DAT_0031c314 & 1) == 0) {
    pDhsAJkF7h(0x31c0f7,0x19,&DAT_0029c9e4,&DAT_0029c9e1,3,0x81);
    DAT_0031c314 = 1;
  }
  if ((DAT_0031c313 & 1) == 0) {
    pDhsAJkF7h(0x31c0dc,0x1b,&DAT_0029c9c6,&DAT_0029c9c3,3,0xdd);
    DAT_0031c313 = 1;
  }
  if ((DAT_0031c312 & 1) == 0) {
    HlupqL3ZAR(0x31c0c8,0x14,&DAT_0029c9af,&DAT_0029b6fb,4,0x97);
    DAT_0031c312 = 1;
  }
  if ((DAT_0031c311 & 1) == 0) {
    HlupqL3ZAR(0x31c0b6,0x12,&DAT_0029c99d,&DAT_0029b6f7,4,0xfd);
    DAT_0031c311 = 1;
  }
  if ((DAT_0031c310 & 1) == 0) {
    HlupqL3ZAR(0x31c0a6,0x10,&DAT_0029c900,&DAT_0029c99a,3,0xb9);
    DAT_0031c310 = 1;
  }
  if ((DAT_0031c30f & 1) == 0) {
    HlupqL3ZAR(0x31c095,0x11,&DAT_0029c989,&DAT_0029b50c,4,0x47);
    DAT_0031c30f = 1;
  }
  if ((DAT_0031c30e & 1) == 0) {
    pDhsAJkF7h(0x31c084,0x11,&DAT_0029c978,&DAT_0029c976,2,0xbb);
    DAT_0031c30e = 1;
  }
  if ((DAT_0031c30d & 1) == 0) {
    J2qaFN4xHz(0x31c080,4,&DAT_0029cbf7,&DAT_0029b508,4,0x43);
    DAT_0031c30d = 1;
// ... truncated

// === FUN_0025d5a0 @ 0025d5a0 (1460B) — TAGS: SWITCH ===

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_0025d5a0(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int local_220 [2];
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200 [64];
  uint uVar13;
  
  local_200[0] = param_4;
  uVar11 = 1;
LAB_0025d5f0:
  pbVar9 = param_1;
  if (param_2 <= pbVar9) {
    if (uVar11 != 0) {
      return local_200[(int)(uVar11 - 1)];
    }
switchD_0025d9ac_caseD_3:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = *pbVar9;
  param_1 = pbVar9 + 1;
  uVar12 = (uint)bVar1;
  uVar13 = (uint)bVar1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (uVar13 == 0x10) {
        param_1 = (byte *)FUN_0025c734(param_1,&local_218);
        uVar4 = local_218;
      }
      else if (uVar13 < 0x11) {
        if (uVar13 == 10) {
          uVar4 = (ulong)*(ushort *)(pbVar9 + 1);
LAB_0025d7fc:
          param_1 = pbVar9 + 3;
        }
        else if (uVar13 < 0xb) {
          if (uVar12 == 6) goto LAB_0025d938;
          if (uVar12 < 7) {
            if (bVar1 != 3) goto switchD_0025d9ac_caseD_3;
            param_1 = pbVar9 + 9;
            uVar4 = *(ulong *)(pbVar9 + 1);
          }
          else {
            param_1 = pbVar9 + 2;
            if (uVar12 == 8) {
              uVar4 = (ulong)pbVar9[1];
            }
            else {
              if (uVar12 != 9) goto switchD_0025d9ac_caseD_3;
              uVar4 = (long)(char)pbVar9[1];
            }
          }
        }
        else {
          if (uVar13 == 0xd) {
            uVar4 = (ulong)*(int *)(pbVar9 + 1);
          }
          else {
            if (0xd < uVar13) {
              param_1 = pbVar9 + 9;
              if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                uVar4 = *(ulong *)(pbVar9 + 1);
                goto LAB_0025db10;
              }
              goto switchD_0025d9ac_caseD_3;
            }
            if (bVar1 == 0xb) {
              uVar4 = (ulong)*(short *)(pbVar9 + 1);
              goto LAB_0025d7fc;
            }
            if (bVar1 != 0xc) goto switchD_0025d9ac_caseD_3;
            uVar4 = (ulong)*(uint *)(pbVar9 + 1);
          }
          param_1 = pbVar9 + 5;
        }
      }
      else if (uVar13 == 0x15) {
        local_210 = (ulong)pbVar9[1];
        param_1 = pbVar9 + 2;
        if ((long)(int)(uVar11 - 1) <= (long)local_210) goto switchD_0025d9ac_caseD_3;
        uVar4 = local_200[(long)(int)(uVar11 - 1) - local_210];
      }
      else {
        if (0x15 < uVar13) {
          if (uVar13 == 0x19) goto LAB_0025d938;
          if (0x19 < uVar13) goto LAB_0025d9fc;
          iVar3 = uVar11 - 1;
          iVar2 = uVar11 - 2;
          if (uVar13 == 0x16) {
            if ((int)uVar11 < 2) goto switchD_0025d9ac_caseD_3;
            uVar4 = local_200[iVar3];
            local_200[iVar3] = local_200[iVar2];
            local_200[iVar2] = uVar4;
          }
          else {
            if ((uVar13 != 0x17) || ((int)uVar11 < 3)) goto switchD_0025d9ac_caseD_3;
            uVar4 = local_200[iVar3];
            uVar10 = local_200[(int)(uVar11 - 3)];
            local_200[iVar3] = local_200[iVar2];
            local_200[iVar2] = uVar10;
            local_200[(int)(uVar11 - 3)] = uVar4;
          }
          goto LAB_0025d5f0;
        }
        if (uVar13 == 0x12) {
          if (uVar11 == 0) goto switchD_0025d9ac_caseD_3;
          iVar3 = uVar11 - 1;
        }
        else {
          if (uVar13 < 0x12) {
            param_1 = (byte *)FUN_0025c75c(param_1,&local_208);
            uVar4 = local_208;
            goto LAB_0025db10;
          }
          if (uVar13 == 0x13) {
            if (uVar11 == 0) goto switchD_0025d9ac_caseD_3;
            uVar11 = uVar11 - 1;
            goto LAB_0025d5f0;
          }
          if ((uVar13 != 0x14) || ((int)uVar11 < 2)) goto switchD_0025d9ac_caseD_3;
          iVar3 = uVar11 - 2;
        }
        uVar4 = local_200[iVar3];
      }
    }
    else {
LAB_0025d938:
      if (uVar11 == 0) goto switchD_0025d9ac_caseD_3;
      uVar11 = uVar11 - 1;
      puVar8 = (ulong *)local_200[(int)uVar11];
      if (uVar12 == 0x1f) {
        uVar4 = -(long)puVar8;
// ... truncated

// === FUN_0025cc84 @ 0025cc84 (1272B) — TAGS: SWITCH ===

void FUN_0025cc84(byte *param_1,byte *param_2,long param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong local_18;
  long local_10;
  long local_8;
  
  puVar4 = &stack0xffffffffffffff70;
  *(undefined8 *)((long)param_4 + 0x620) = 0;
  puVar16 = (undefined1 *)0x0;
  do {
    if ((param_2 <= param_1) ||
       (uVar12 = *(ulong *)((long)param_4 + 0x648),
       (ulong)(*(long *)(param_3 + 0x318) - (*(long *)(param_3 + 0x340) >> 0x3f)) <= uVar12)) {
      return;
    }
    bVar2 = *param_1;
    uVar10 = (ulong)bVar2;
    pbVar5 = param_1 + 1;
    bVar1 = bVar2 & 0xc0;
    if (bVar1 == 0x40) {
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (uVar10 & 0x3f) * *(long *)((long)param_4 + 0x660);
      goto switchD_0025cd58_caseD_0;
    }
    if (bVar1 == 0x80) {
      local_18 = uVar10 & 0x3f;
LAB_0025cdec:
      pbVar5 = (byte *)FUN_0025c734(pbVar5,&local_10);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_10;
LAB_0025cfac:
      if (0x61 < local_18) goto switchD_0025cd58_caseD_0;
      lVar7 = local_18 * 0x10;
      *(undefined4 *)((long)param_4 + lVar7 + 8) = 1;
      lVar9 = lVar9 * lVar11;
      goto LAB_0025d148;
    }
    if (bVar1 == 0xc0) {
      *(undefined4 *)((long)param_4 + (uVar10 & 0x3f) * 0x10 + 8) = 0;
      goto switchD_0025cd58_caseD_0;
    }
    switch(bVar2) {
    case 0:
      break;
    case 1:
      uVar3 = *(undefined1 *)((long)param_4 + 0x670);
      uVar8 = FUN_0025cc0c(uVar3,param_3);
      pbVar5 = (byte *)FUN_0025c79c(uVar3,uVar8,pbVar5,&local_8);
      *(long *)((long)param_4 + 0x648) = local_8;
      break;
    case 2:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)param_1[1] * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 2;
      break;
    case 3:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)*(ushort *)(param_1 + 1) * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 3;
      break;
    case 4:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)*(uint *)(param_1 + 1) * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 5;
      break;
    case 5:
      pbVar5 = (byte *)FUN_0025c734(pbVar5,&local_18);
      goto LAB_0025cdec;
    case 6:
    case 8:
      pbVar5 = (byte *)FUN_0025c734(pbVar5,&local_18);
      if (local_18 < 0x62) {
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 0;
      }
      break;
    case 7:
      pbVar5 = (byte *)FUN_0025c734(pbVar5,&local_18);
      if (local_18 < 0x62) {
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 6;
      }
      break;
    case 9:
      uVar8 = FUN_0025c734(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_0025c734(uVar8,&local_8);
      if (local_18 < 0x62) {
        lVar7 = local_18 * 0x10;
        *(undefined4 *)((long)param_4 + lVar7 + 8) = 2;
        lVar9 = local_8;
        goto LAB_0025d148;
      }
      break;
    case 10:
      if (puVar16 == (undefined1 *)0x0) {
        puVar15 = puVar4 + -0x660;
        puVar4 = puVar4 + -0x660;
      }
      else {
        puVar15 = puVar4;
        puVar4 = puVar16;
        puVar16 = *(undefined1 **)(puVar16 + 0x620);
      }
      pvVar6 = memcpy(puVar4,param_4,0x648);
      *(void **)((long)param_4 + 0x620) = pvVar6;
      puVar4 = puVar15;
      break;
    case 0xb:
      puVar15 = *(undefined1 **)((long)param_4 + 0x620);
      memcpy(param_4,puVar15,0x648);
      *(undefined1 **)(puVar15 + 0x620) = puVar16;
      puVar16 = puVar15;
      break;
    case 0xc:
      uVar8 = FUN_0025c734(pbVar5,&local_10);
      *(long *)((long)param_4 + 0x630) = local_10;
      pbVar5 = (byte *)FUN_0025c734(uVar8,&local_10);
      *(long *)((long)param_4 + 0x628) = local_10;
      goto LAB_0025cf30;
    case 0xd:
      pbVar5 = (byte *)FUN_0025c734(pbVar5,&local_10);
      *(long *)((long)param_4 + 0x630) = local_10;
LAB_0025cf30:
      *(undefined4 *)((long)param_4 + 0x640) = 1;
      break;
    case 0xe:
      pbVar5 = (byte *)FUN_0025c734(pbVar5,&local_10);
      lVar9 = local_10;
      goto LAB_0025cffc;
    case 0xf:
      *(byte **)((long)param_4 + 0x638) = pbVar5;
      *(undefined4 *)((long)param_4 + 0x640) = 2;
      goto LAB_0025d0ac;
    case 0x10:
// ... truncated

// === FUN_00246698 @ 00246698 (1156B) — TAGS: SWITCH ===

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00246698(byte *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  char *__dest;
  uint uVar11;
  undefined1 *puVar12;
  long lVar13;
  int iVar14;
  
  if ((DAT_003584cf & 1) == 0) {
    HlupqL3ZAR(0x3584bd,6,&DAT_002d6118,&DAT_002d6115,3,0xb9);
    DAT_003584cf = 1;
  }
  if ((DAT_003584ce & 1) == 0) {
    HlupqL3ZAR(0x3584b5,8,&DAT_002d6070,&DAT_0029b50c,4,0x47);
    DAT_003584ce = 1;
  }
  if (param_1 == (byte *)0x0) {
LAB_00246930:
    puVar12 = (undefined1 *)0x0;
  }
  else {
    bVar8 = *param_1;
    uVar11 = (uint)bVar8;
    pbVar7 = param_1;
    if (bVar8 != 0) {
      bVar2 = false;
      bVar9 = bVar8;
      do {
        bVar3 = bVar9 < 0x20;
        bVar4 = bVar9 == 0x22;
        bVar5 = bVar9 == 0x5c;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar7;
        bVar2 = (bool)(bVar2 | (bVar3 || (bVar4 || bVar5)));
      } while (bVar9 != 0);
      if (bVar2) {
        iVar14 = 0;
        if (bVar8 != 0) {
          pbVar7 = param_1 + 1;
          do {
            while( true ) {
              iVar1 = iVar14 + 1;
              if (iVar1 == 0) {
                iVar14 = 0;
                goto LAB_002468a0;
              }
              pvVar6 = memchr((void *)0x3584b5,uVar11,8);
              if (pvVar6 == (void *)0x0) break;
              iVar14 = iVar14 + 2;
              uVar11 = (uint)*pbVar7;
              pbVar7 = pbVar7 + 1;
              if (uVar11 == 0) goto LAB_002468a0;
            }
            iVar14 = iVar14 + 6;
            if (0x1f < uVar11) {
              iVar14 = iVar1;
            }
            uVar11 = (uint)*pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (uVar11 != 0);
        }
LAB_002468a0:
        if (param_2 == (long *)0x0) {
          puVar12 = (undefined1 *)(*(code *)PTR_malloc_00316ca0)((long)(iVar14 + 3));
          goto joined_r0x00246994;
        }
        if (*param_2 != 0) {
          iVar14 = iVar14 + *(int *)((long)param_2 + 0xc);
          if (iVar14 + 3 <= (int)param_2[1]) {
            puVar12 = (undefined1 *)(*param_2 + (long)*(int *)((long)param_2 + 0xc));
joined_r0x00246994:
            if (puVar12 == (undefined1 *)0x0) {
              return (undefined1 *)0x0;
            }
            *puVar12 = 0x22;
            bVar8 = *param_1;
            pbVar7 = puVar12 + 1;
joined_r0x002469a8:
            while( true ) {
              if (bVar8 == 0) {
                pbVar7[0] = 0x22;
                pbVar7[1] = 0;
                return puVar12;
              }
              if (((bVar8 < 0x20) || (bVar8 == 0x22)) || (bVar8 == 0x5c)) break;
              pbVar10 = pbVar7 + 1;
              *pbVar7 = bVar8;
              bVar8 = param_1[1];
joined_r0x00246a24:
              pbVar7 = pbVar10;
              param_1 = param_1 + 1;
            }
            *pbVar7 = 0x5c;
            pbVar10 = param_1 + 1;
            switch(*param_1) {
            case 8:
              bVar8 = 0x62;
              break;
            case 9:
              bVar8 = 0x74;
              break;
            case 10:
              pbVar7[1] = 0x6e;
              bVar8 = *pbVar10;
              pbVar7 = pbVar7 + 2;
              param_1 = pbVar10;
              goto joined_r0x002469a8;
            case 0xb:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
              goto switchD_00246a08_caseD_b;
            case 0xc:
              pbVar7[1] = 0x66;
              bVar8 = *pbVar10;
              goto joined_r0x00246ac0;
            case 0xd:
              pbVar7[1] = 0x72;
              bVar8 = *pbVar10;
// ... truncated

// === FUN_00243028 @ 00243028 (1144B) — TAGS: SWITCH ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00243028(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined1 *__src;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  
  if ((DAT_003584c8 & 1) == 0) {
    HlupqL3ZAR(&DAT_0035849b,5,&DAT_002d60f4,&DAT_0029b486,4,0xa9);
    DAT_003584c8 = 1;
  }
  if ((DAT_003584c7 & 1) == 0) {
    pDhsAJkF7h(&DAT_00358495,6,&DAT_002d60ee,&DAT_002d60eb,3,0x9b);
    DAT_003584c7 = 1;
  }
  if ((DAT_003584c6 & 1) == 0) {
    HlupqL3ZAR(&DAT_00358490,5,&DAT_002d60e6,&DAT_002d60e4,2,0xfb);
    DAT_003584c6 = 1;
  }
  if (param_1 == 0) {
LAB_00243210:
    return (undefined4 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 0x1c) & 0xff;
  if (param_4 == (undefined8 *)0x0) {
    switch(uVar2) {
    case 0:
      sVar4 = strlen(&DAT_00358495);
      sVar4 = sVar4 + 1;
      puVar5 = (undefined4 *)(*(code *)PTR_malloc_00316ca0)(sVar4);
      if (puVar5 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      __src = &DAT_00358495;
      break;
    case 1:
      sVar4 = strlen(&DAT_0035849b);
      sVar4 = sVar4 + 1;
      puVar5 = (undefined4 *)(*(code *)PTR_malloc_00316ca0)(sVar4);
      if (puVar5 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      __src = &DAT_0035849b;
      break;
    case 2:
      sVar4 = strlen(&DAT_00358490);
      sVar4 = sVar4 + 1;
      puVar5 = (undefined4 *)(*(code *)PTR_malloc_00316ca0)(sVar4);
      if (puVar5 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      __src = &DAT_00358490;
      break;
    case 3:
      param_4 = (undefined8 *)0x0;
      goto LAB_0024340c;
    case 4:
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      param_4 = (undefined8 *)0x0;
      goto LAB_00243428;
    case 5:
      param_4 = (undefined8 *)0x0;
      goto LAB_0024344c;
    case 6:
      param_4 = (undefined8 *)0x0;
      goto LAB_00243470;
    default:
      goto LAB_00243210;
    }
    memcpy(puVar5,__src,sVar4);
    return puVar5;
  }
  switch(uVar2) {
  case 0:
    pvVar8 = (void *)*param_4;
    if (pvVar8 == (void *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar6 = *(int *)((long)param_4 + 0xc);
    if (*(int *)(param_4 + 1) < iVar6 + 6) {
      uVar2 = iVar6 + 5U | (int)(iVar6 + 5U) >> 1;
      uVar2 = uVar2 | (int)uVar2 >> 2;
      uVar2 = uVar2 | (int)uVar2 >> 4;
      uVar2 = uVar2 | (int)uVar2 >> 8;
      iVar1 = (uVar2 | (int)uVar2 >> 0x10) + 1;
      pvVar8 = (void *)(*(code *)PTR_malloc_00316ca0)((long)iVar1);
      if (pvVar8 == (void *)0x0) {
LAB_00243484:
        (*(code *)PTR_free_00316ca8)(*param_4);
        *(undefined4 *)(param_4 + 1) = 0;
        *param_4 = 0;
        return (undefined4 *)0x0;
      }
      memcpy(pvVar8,(void *)*param_4,(long)*(int *)(param_4 + 1));
      (*(code *)PTR_free_00316ca8)(*param_4);
      iVar6 = *(int *)((long)param_4 + 0xc);
      *(int *)(param_4 + 1) = iVar1;
      *param_4 = pvVar8;
    }
    puVar5 = (undefined4 *)((long)pvVar8 + (long)iVar6);
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar7 = (undefined4 *)&DAT_00358495;
    *(undefined2 *)(puVar5 + 1) = _DAT_00358499;
    goto LAB_00243344;
  case 1:
    pvVar8 = (void *)*param_4;
    if (pvVar8 == (void *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar6 = *(int *)((long)param_4 + 0xc);
    if (*(int *)(param_4 + 1) < iVar6 + 5) {
      uVar2 = iVar6 + 4U | (int)(iVar6 + 4U) >> 1;
      uVar2 = uVar2 | (int)uVar2 >> 2;
      uVar2 = uVar2 | (int)uVar2 >> 4;
      uVar2 = uVar2 | (int)uVar2 >> 8;
      iVar1 = (uVar2 | (int)uVar2 >> 0x10) + 1;
      pvVar8 = (void *)(*(code *)PTR_malloc_00316ca0)((long)iVar1);
      if (pvVar8 == (void *)0x0) goto LAB_00243484;
      memcpy(pvVar8,(void *)*param_4,(long)*(int *)(param_4 + 1));
      (*(code *)PTR_free_00316ca8)(*param_4);
      iVar6 = *(int *)((long)param_4 + 0xc);
      *(int *)(param_4 + 1) = iVar1;
      *param_4 = pvVar8;
    }
    puVar5 = (undefined4 *)((long)pvVar8 + (long)iVar6);
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar7 = (undefined4 *)&DAT_0035849b;
    break;
  case 2:
    pvVar8 = (void *)*param_4;
    if (pvVar8 == (void *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar6 = *(int *)((long)param_4 + 0xc);
    if (*(int *)(param_4 + 1) < iVar6 + 5) {
      uVar2 = iVar6 + 4U | (int)(iVar6 + 4U) >> 1;
      uVar2 = uVar2 | (int)uVar2 >> 2;
// ... truncated

// === FUN_0025d17c @ 0025d17c (1060B) — TAGS: SWITCH ===

undefined8 FUN_0025d17c(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  size_t sVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  char *pcVar17;
  ulong local_18;
  long local_10;
  long local_8;
  char *pcVar18;
  
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(long *)(param_1 + 0x318) == 0) {
    return 5;
  }
  puVar3 = (uint *)FUN_0025fd1c(*(long *)(param_1 + 0x318) +
                                (-1 - (*(long *)(param_1 + 0x340) >> 0x3f)),param_1 + 0x328);
  if (puVar3 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar15 = *(long *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar10 = lVar15 + 0x130;
    param_2[0xc5] = 0x130;
    lVar4 = 8;
    plVar7 = param_2;
    do {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = lVar4;
      lVar4 = lVar4 + 8;
      plVar7 = plVar7 + 2;
    } while (lVar4 != 0x100);
    for (piVar5 = (int *)(lVar15 + 0x250); *piVar5 != 0;
        piVar5 = (int *)((long)piVar5 + (ulong)(uint)piVar5[1])) {
      if (*piVar5 == 0x46508001) {
        plVar7 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar14 = plVar7 + 2;
          *plVar7 = (long)piVar5 + ((-0x3f0 - lVar10) - (long)param_2) + (long)plVar7;
          plVar7 = plVar14;
        } while (plVar14 != param_2 + 0xc0);
      }
    }
    *(undefined1 *)((long)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar15 + 0x230) - lVar10;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(long *)(lVar15 + 0x238) - lVar10;
    param_2[0xcd] = 0x60;
LAB_0025d578:
    uVar11 = 0;
  }
  else {
    puVar16 = (uint *)((long)puVar3 + (4 - (long)(int)puVar3[1]));
    param_2[0xc9] = *(long *)(param_1 + 0x338);
    pcVar18 = (char *)((long)puVar16 + 9);
    sVar6 = strlen(pcVar18);
    plVar14 = (long *)(pcVar18 + sVar6 + 1);
    plVar7 = plVar14;
    if ((*(char *)((long)puVar16 + 9) == 'e') && (*(char *)((long)puVar16 + 10) == 'h')) {
      plVar7 = plVar14 + 1;
      pcVar18 = (char *)((long)puVar16 + 0xb);
      param_2[0xcf] = *plVar14;
    }
    if ((byte)puVar16[2] < 4) {
LAB_0025d354:
      uVar11 = FUN_0025c734(plVar7,&local_18);
      param_2[0xcc] = local_18;
      pbVar8 = (byte *)FUN_0025c75c(uVar11,&local_10);
      param_2[0xcb] = local_10;
      if ((char)puVar16[2] == '\x01') {
        pbVar9 = pbVar8 + 1;
        uVar12 = (ulong)*pbVar8;
      }
      else {
        pbVar9 = (byte *)FUN_0025c734(pbVar8,&local_18);
        uVar12 = local_18;
      }
      param_2[0xcd] = uVar12;
      *(undefined1 *)((long)param_2 + 0x671) = 0xff;
      pbVar8 = (byte *)0x0;
      if (*pcVar18 == 'z') {
        pcVar18 = pcVar18 + 1;
        pbVar9 = (byte *)FUN_0025c734(pbVar9,&local_18);
        *(undefined1 *)((long)param_2 + 0x672) = 1;
        pbVar8 = pbVar9 + local_18;
      }
      while( true ) {
        pcVar17 = pcVar18 + 1;
        cVar2 = *pcVar18;
        if (cVar2 == '\0') break;
        pcVar18 = pcVar17;
        if (cVar2 == 'L') {
          *(byte *)((long)param_2 + 0x671) = *pbVar9;
LAB_0025d410:
          pbVar9 = pbVar9 + 1;
        }
        else {
          if (cVar2 == 'R') {
            *(byte *)(param_2 + 0xce) = *pbVar9;
            goto LAB_0025d410;
          }
          if (cVar2 == 'P') {
            bVar1 = *pbVar9;
            uVar11 = FUN_0025cc0c(bVar1,param_1);
            pbVar9 = (byte *)FUN_0025c79c(bVar1,uVar11,pbVar9 + 1,&local_8);
            param_2[0xca] = local_8;
          }
          else {
            if (cVar2 != 'S') goto LAB_0025d480;
            *(undefined1 *)((long)param_2 + 0x673) = 1;
          }
        }
      }
      if (pbVar8 == (byte *)0x0) {
        pbVar8 = pbVar9;
      }
LAB_0025d480:
      if (pbVar8 != (byte *)0x0) {
        FUN_0025cc84(pbVar8,(long)puVar16 + (ulong)*puVar16 + 4,param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar13 = 0;
        }
        else {
          switch(*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
// ... truncated

// === FUN_00157ae0 @ 00157ae0 (1056B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00157ae0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *__nptr;
  byte *pbVar4;
  long *plVar5;
  int local_64;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  code *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0031bd5a & 1) == 0) {
    HlupqL3ZAR(0x31bd01,8,&DAT_0029c66a,&DAT_0029b48e,4,7);
    DAT_0031bd5a = 1;
  }
  if ((DAT_0031bd59 & 1) == 0) {
    J2qaFN4xHz(0x31bcfb,6,&DAT_0029c611,&DAT_0029b48a,4,0x41);
    DAT_0031bd59 = 1;
  }
  if ((DAT_0031bd58 & 1) == 0) {
    HlupqL3ZAR(0x31bcf0,0xb,&DAT_0029c606,&DAT_0029b486,4,0xa9);
    DAT_0031bd58 = 1;
  }
  lVar3 = FUN_00242634();
  if (lVar3 == 0) {
    _DAT_0031bce8 = 0;
  }
  else {
    lVar3 = FUN_00242634();
    _DAT_0031bce8 = (**(code **)(lVar3 + 8))(1,1,4,0,0);
    if (((_DAT_0031bce8 != 0) && (iVar2 = (**(code **)(_DAT_0031bce8 + 0x38))(), iVar2 != 0)) &&
       (iVar2 = (**(code **)(_DAT_0031bce8 + 0x40))(), iVar2 != 0)) {
      local_64 = 0;
      local_50 = PTR_LAB_0030a338;
      uStack_58 = _UNK_0030a330;
      local_60 = _DAT_0030a328;
      lVar3 = FUN_00242634();
      (**(code **)(lVar3 + 0x10))(1,0x1e,1,0,&local_60,&local_64);
      if (_DAT_0031bce4 != 0) {
        local_50 = (undefined *)DAT_0030a350;
        uStack_58 = _UNK_0030a348;
        local_60 = PTR_LAB_0030a340;
        lVar3 = FUN_00242634();
        (**(code **)(lVar3 + 8))(1,8,2,&local_60,0);
      }
      uStack_58 = 0x31bcf0;
      local_60 = (undefined *)0x0;
      local_50 = (undefined *)0x0;
      pcStack_48 = FUN_00157f88;
      local_40 = 1;
      local_64 = 0;
      lVar3 = FUN_00242634();
      __nptr = (char *)(**(code **)(lVar3 + 0x10))(1,0x20,0xc,0,&local_60,&local_64);
      if ((__nptr != (char *)0x0) && (local_64 == 0)) {
        atof(__nptr);
        FUN_00154830();
        free(__nptr);
      }
      lVar3 = FUN_00242634();
      lVar3 = (**(code **)(lVar3 + 0x10))(1,0x1f,0x12,0,0x31bcfb,0);
      if (lVar3 == 0) {
        uStack_58 = 0x31bd01;
        local_60 = (undefined *)0x0;
        local_50 = (undefined *)0x0;
        pcStack_48 = (code *)&LAB_00157fa8;
        local_40 = 1;
        local_64 = 0;
        lVar3 = FUN_00242634();
        pbVar4 = (byte *)(**(code **)(lVar3 + 0x10))(1,0x20,0xc,0,&local_60,&local_64);
        if ((pbVar4 != (byte *)0x0) && (local_64 == 0)) {
          *DAT_00315a48 = *pbVar4 - 0x30;
        }
        if ((((*DAT_00315a48 != 0) && (plVar5 = (long *)FUN_00155708(3), plVar5 != (long *)0x0)) &&
            (*plVar5 != 0)) && ((int)plVar5[1] != 0)) {
          iVar2 = FUN_00250ef8(*plVar5,0);
          if (iVar2 != 0) {
            if (iVar2 == 3) {
              local_50 = (undefined *)DAT_0030a368;
              uStack_58 = _UNK_0030a360;
              local_60 = PTR_LAB_0030a358;
              lVar3 = FUN_00242634();
              (**(code **)(lVar3 + 8))(1,8,2,&local_60,0);
            }
            else {
              DAT_0031bd0c = 1;
            }
          }
        }
        uStack_58 = _UNK_0030a378;
        local_60 = _DAT_0030a370;
        lVar3 = FUN_00242634();
        (**(code **)(lVar3 + 0x10))(1,0xb,7,0,&local_60,0);
        uStack_58 = _UNK_0030a388;
        local_60 = _DAT_0030a380;
        lVar3 = FUN_00242634();
        (**(code **)(lVar3 + 0x10))(1,0xb,0xd,0,&local_60,0);
        FUN_00157958(_DAT_0031bce8);
        local_50 = (undefined *)DAT_0030a3a0;
        uStack_58 = _UNK_0030a398;
        local_60 = PTR_FUN_0030a390;
        lVar3 = FUN_00242634();
        (**(code **)(lVar3 + 8))(1,8,1,&local_60,0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === FUN_0021efb8 @ 0021efb8 (1040B) — TAGS: SWITCH ===

void FUN_0021efb8(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *__s1;
  char *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  ulong uVar11;
  void *__src;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 uVar15;
  
  bVar1 = (byte)*param_2;
  uVar11 = param_2[1];
  uVar13 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar13 = uVar11;
  }
  switch(uVar13) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((bVar1 & 1) == 0) {
      param_1[2] = param_2[2];
      uVar13 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar13;
      return;
    }
    if (uVar11 < 0xfffffffffffffff0) {
      __src = (void *)param_2[2];
      if (uVar11 < 0x17) {
        __dest = (void *)((long)param_1 + 1);
        *(char *)param_1 = (char)(uVar11 << 1);
        if (uVar11 == 0) goto LAB_0021f254;
      }
      else {
        uVar13 = uVar11 + 0x10 & 0xfffffffffffffff0;
        __dest = malloc(uVar13);
        param_1[1] = uVar11;
        param_1[2] = (ulong)__dest;
        *param_1 = uVar13 | 1;
      }
      memcpy(__dest,__src,uVar11);
LAB_0021f254:
      *(undefined1 *)((long)__dest + uVar11) = 0;
      return;
    }
    goto LAB_0021f3c4;
  default:
    __s1 = (byte *)param_2[2];
    if ((bVar1 & 1) == 0) {
      __s1 = (byte *)((long)param_2 + 1);
    }
    break;
  case 0xb:
    __s1 = (byte *)param_2[2];
    if ((bVar1 & 1) == 0) {
      __s1 = (byte *)((long)param_2 + 1);
    }
    iVar3 = memcmp(__s1,"std::string",0xb);
    if (iVar3 == 0) {
      FUN_0020eea0(param_2,"std::basic_string<char, std::char_traits<char>, std::allocator<char> >",
                   0x46);
      uVar5 = s_std__basic_string_002d44f0._5_8_;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)param_1 = 0x18;
      *(undefined4 *)((long)param_1 + 9) = 0x676e6972;
      *(undefined8 *)((long)param_1 + 1) = uVar5;
      *(undefined1 *)((long)param_1 + 0xd) = 0;
      return;
    }
    break;
  case 0xc:
    __s1 = (byte *)param_2[2];
    if ((bVar1 & 1) == 0) {
      __s1 = (byte *)((long)param_2 + 1);
    }
    iVar3 = memcmp(__s1,"std::istream",0xc);
    if (iVar3 == 0) {
      FUN_0020eea0(param_2,"std::basic_istream<char, std::char_traits<char> >",0x31);
      pcVar4 = "basic_istream";
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
LAB_0021f204:
      uVar7 = *(undefined8 *)(pcVar4 + 5);
      uVar5 = *(undefined8 *)pcVar4;
      *(undefined1 *)param_1 = 0x1a;
      *(undefined8 *)((long)param_1 + 6) = uVar7;
      *(undefined8 *)((long)param_1 + 1) = uVar5;
      *(undefined1 *)((long)param_1 + 0xe) = 0;
      return;
    }
    iVar3 = memcmp(__s1,"std::ostream",0xc);
    if (iVar3 == 0) {
      FUN_0020eea0(param_2,"std::basic_ostream<char, std::char_traits<char> >",0x31);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      pcVar4 = "basic_ostream";
      goto LAB_0021f204;
    }
    break;
  case 0xd:
    __s1 = (byte *)param_2[2];
    if ((bVar1 & 1) == 0) {
      __s1 = (byte *)((long)param_2 + 1);
    }
    iVar3 = memcmp(__s1,"std::iostream",0xd);
    if (iVar3 == 0) {
      FUN_0020eea0(param_2,"std::basic_iostream<char, std::char_traits<char> >",0x32);
      uVar7 = CONCAT62(s_basic_iostream_002d44b7._8_6_,s_basic_iostream_002d44b7._6_2_);
      uVar5 = CONCAT26(s_basic_iostream_002d44b7._6_2_,s_basic_iostream_002d44b7._0_6_);
      param_1[2] = 0;
      *(undefined1 *)param_1 = 0x1c;
      *(undefined8 *)((long)param_1 + 7) = uVar7;
      *(undefined8 *)((long)param_1 + 1) = uVar5;
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      return;
    }
  }
  pbVar12 = __s1 + uVar13;
  if (pbVar12[-1] == 0x3e) {
    if (pbVar12 + -1 != __s1) {
      iVar3 = 1;
      do {
        if (__s1[uVar13 - 2] == 0x3e) {
          iVar3 = iVar3 + 1;
        }
        else if ((__s1[uVar13 - 2] == 0x3c) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
          pbVar12 = __s1 + (uVar13 - 2);
          goto LAB_0021f264;
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 1);
// ... truncated

// === FUN_0026d0dc @ 0026d0dc (1028B) — TAGS: SWITCH ===

/* WARNING: Removing unreachable block (ram,0x0026d28c) */

uint * FUN_0026d0dc(long *param_1,long param_2,long param_3,int param_4,uint *param_5,uint *param_6,
                   uint *param_7,int *param_8)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  if ((((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
     (((param_5 == (uint *)0x0 || (param_6 == (uint *)0x0)) || (param_7 == (uint *)0x0)))) {
    if (param_8 == (int *)0x0) {
      return (uint *)0x0;
    }
    param_5 = (uint *)0x0;
    iVar6 = 1;
  }
  else {
    if (param_4 < 1) {
      iVar6 = 0;
    }
    else {
      lVar15 = *param_1;
      lVar14 = 0;
      lVar1 = param_2 + 0x140;
      do {
        lVar10 = *(long *)(param_3 + lVar14 * 8);
        uVar3 = *(ushort *)(lVar10 + 10);
        uVar13 = uVar3 - 5;
        if (uVar13 < 10) {
          uVar9 = *param_6;
          if ((int)uVar9 < 6) {
            plVar4 = (long *)(param_2 + (long)(int)(uVar9 + 8) * 8 + 0x40);
            if (uVar13 < 10) goto LAB_0026d1f0;
LAB_0026d27c:
            iVar6 = 7;
          }
          else {
            plVar4 = (long *)(*(long *)(param_2 + 0xb0) + (long)(int)(uVar9 * 8 + -0x30) + 0xb0);
            if (9 < uVar13) goto LAB_0026d27c;
LAB_0026d1f0:
            switch((long)&switchD_0026d1f8::switchdataD_002d7210 +
                   (long)(int)(&switchD_0026d1f8::switchdataD_002d7210)[uVar13]) {
            case 0x26d1fc:
              lVar10 = *(long *)param_5;
              param_5 = param_5 + 2;
              goto LAB_0026d364;
            case 0x26d2d8:
              uVar12 = (ulong)*param_5;
              break;
            case 0x26d340:
              uVar12 = (ulong)(byte)*param_5;
              break;
            case 0x26d348:
              uVar12 = (ulong)(char)*param_5;
              break;
            case 0x26d350:
              uVar12 = (ulong)(ushort)*param_5;
              break;
            case 0x26d358:
              uVar12 = (ulong)(short)*param_5;
              break;
            case 0x26d378:
              plVar4 = *(long **)(lVar10 + 0x10);
              if (plVar4 == (long *)0x0) {
                iVar6 = 1;
              }
              else {
                if (*plVar4 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = 0;
                  do {
                    lVar11 = lVar10 + 1;
                    lVar10 = lVar10 + 1;
                  } while (plVar4[lVar11] != 0);
                }
                param_5 = (uint *)FUN_0026d0dc(param_1,param_2,plVar4,lVar10,param_5,param_6);
                uVar9 = *param_6;
                iVar6 = 0;
              }
              goto LAB_0026d368;
            }
            param_5 = param_5 + 1;
            lVar10 = uVar12 << 0x20;
LAB_0026d364:
            iVar6 = 0;
            *plVar4 = lVar10;
          }
LAB_0026d368:
          *param_6 = uVar9 + 1;
joined_r0x0026d3fc:
          if (iVar6 != 0) break;
        }
        else {
          if (uVar3 - 2 < 3) {
            uVar13 = (uint)uVar3;
            if (*(int *)(lVar15 + 0x2d8) != 0) {
              uVar9 = *param_7;
              if (uVar3 == 4) {
                uVar2 = uVar9 + 6;
                if (-1 < (int)(uVar9 + 3)) {
                  uVar2 = uVar9 + 3;
                }
                if ((int)((uVar2 & 0xfffffffc) + 4) < 0x20) goto LAB_0026d2ec;
LAB_0026d248:
                if (uVar13 != 2) {
                  if (uVar13 != 3) {
                    uVar2 = uVar9 + 6;
                    if (-1 < (int)(uVar9 + 3)) {
                      uVar2 = uVar9 + 3;
                    }
                    uVar9 = uVar2 & 0xfffffffc;
                    *param_7 = uVar9;
                    puVar8 = (undefined8 *)
                             (*(long *)(param_2 + 0xb0) +
                              (long)(int)((uVar2 & 0x3ffffffc) * 4 + -0x80) + 0x100);
                    goto LAB_0026d484;
                  }
                  puVar8 = (undefined8 *)
                           (*(long *)(param_2 + 0xb0) + (long)(int)(uVar9 * 4 + -0x80) + 0x100);
                  goto LAB_0026d3d0;
                }
                puVar5 = (uint *)(*(long *)(param_2 + 0xb0) + (long)(int)(uVar9 * 4 + -0x80) + 0x100
                                 );
LAB_0026d2fc:
                *puVar5 = *param_5;
                lVar10 = 4;
              }
              else {
                if (0x1f < (int)(uVar9 + 2)) goto LAB_0026d248;
LAB_0026d2ec:
                if (uVar13 == 2) {
                  puVar5 = (uint *)(lVar1 + (long)(int)(uVar9 + 1) * 4);
// ... truncated

// === FUN_0027164c @ 0027164c (972B) — TAGS: SWITCH ===

uint FUN_0027164c(int *param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code **ppcVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  code *local_b0 [3];
  long local_98;
  undefined8 local_90;
  long *local_88;
  uint local_7c;
  long local_78;
  long local_70;
  long local_68;
  long *plVar7;
  
  local_b0[1] = (code *)param_6;
  local_b0[2] = (code *)param_7;
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  uVar1 = param_1[1];
  plVar9 = (long *)((long)local_b0 - ((ulong)uVar1 * 8 + 0xf & 0xffffffff0));
  local_7c = param_1[7];
  local_b0[0] = param_2;
  local_90 = param_3;
  local_88 = plVar9;
  local_78 = param_4;
  local_70 = param_5;
  if (0 < (int)uVar1) {
    lVar10 = 0;
    uVar14 = 0;
    lVar16 = 0;
    uVar13 = 0;
    do {
      puVar17 = *(ulong **)(*(long *)(param_1 + 2) + lVar10 * 8);
      if (0xf < *(ushort *)((long)puVar17 + 10)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = *puVar17;
      uVar5 = 1 << (ulong)(*(ushort *)((long)puVar17 + 10) & 0x1f);
      uVar11 = (uint)uVar13;
      if ((uVar5 & 0x5fe2) == 0) {
        uVar12 = uVar13;
        if ((uVar5 & 0xa01c) != 0) {
          uVar5 = FUN_00270f80(puVar17);
          if (uVar5 == 0) {
            if (0x10 < uVar15) {
              if (uVar11 < 8) {
                plVar7 = (long *)(local_78 + uVar13 * 8 + 0x80);
                uVar12 = (ulong)(uVar11 + 1);
              }
              else {
                uVar13 = lVar16 - 1U | 7;
                lVar16 = uVar13 + 9;
                plVar7 = (long *)(local_70 + uVar13 + 1);
                uVar12 = 8;
              }
              lVar6 = *plVar7;
              goto LAB_002717d8;
            }
            if (uVar13 + (uVar15 + 7 >> 3) < 9) {
              uVar12 = (ulong)(uVar11 + (int)(uVar15 + 7 >> 3));
              *plVar9 = local_78 + uVar13 * 8 + 0x80;
              goto LAB_002719a8;
            }
            uVar12 = (ulong)(ushort)puVar17[1];
            uVar13 = 8;
            if ((ushort)puVar17[1] < 9) {
              uVar12 = 8;
            }
LAB_002718f0:
            lVar6 = (uVar12 - 1 | lVar16 - 1U) + 1;
            lVar16 = lVar6 + uVar15;
            *plVar9 = local_70 + lVar6;
            uVar12 = uVar13;
          }
          else {
            uVar3 = 4 - (uVar5 & 3);
            if (((local_7c >> 8 & 1) == 0) || (*param_1 != 2)) {
              if (8 < uVar3 + uVar14) {
                uVar2 = (ushort)puVar17[1];
                goto LAB_002718a8;
              }
              uVar15 = (ulong)(uVar3 + (int)uVar14);
              puVar8 = (undefined8 *)(local_78 + uVar14 * 0x10);
              switch(uVar5) {
              case 8:
                *(int *)puVar8 = (int)*puVar8;
                *(int *)((long)puVar8 + 4) = (int)puVar8[2];
                *(int *)(puVar8 + 1) = (int)puVar8[4];
                *(int *)((long)puVar8 + 0xc) = (int)puVar8[6];
                break;
              case 9:
                *(int *)puVar8 = (int)*puVar8;
                *(int *)((long)puVar8 + 4) = (int)puVar8[2];
                *(int *)(puVar8 + 1) = (int)puVar8[4];
                break;
              case 10:
                *(int *)puVar8 = (int)*puVar8;
                *(int *)((long)puVar8 + 4) = (int)puVar8[2];
                break;
              case 0xc:
                *puVar8 = *puVar8;
                puVar8[1] = puVar8[2];
                puVar8[2] = puVar8[4];
                puVar8[3] = puVar8[6];
                break;
              case 0xd:
                *puVar8 = *puVar8;
                puVar8[1] = puVar8[2];
                puVar8[2] = puVar8[4];
                break;
              case 0xe:
                *puVar8 = *puVar8;
                puVar8[1] = puVar8[2];
              }
            }
            else {
              if (8 < uVar3 + uVar13) {
                uVar2 = (ushort)puVar17[1];
                uVar13 = 8;
LAB_002718a8:
                uVar14 = 8;
                uVar12 = (ulong)uVar2;
                if (uVar2 < 9) {
                  uVar12 = 8;
                }
                goto LAB_002718f0;
              }
              uVar15 = (ulong)(uVar3 + uVar11);
              lVar6 = local_78 + uVar13 * 8;
              puVar8 = (undefined8 *)(lVar6 + 0x80);
              uVar13 = uVar15;
              uVar15 = uVar14;
// ... truncated

// === FUN_00288508 @ 00288508 (972B) — TAGS: SWITCH ===

uint FUN_00288508(int *param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code **ppcVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  code *local_b0 [3];
  long local_98;
  undefined8 local_90;
  long *local_88;
  uint local_7c;
  long local_78;
  long local_70;
  long local_68;
  long *plVar7;
  
  local_b0[1] = (code *)param_6;
  local_b0[2] = (code *)param_7;
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  uVar1 = param_1[1];
  plVar9 = (long *)((long)local_b0 - ((ulong)uVar1 * 8 + 0xf & 0xffffffff0));
  local_7c = param_1[7];
  local_b0[0] = param_2;
  local_90 = param_3;
  local_88 = plVar9;
  local_78 = param_4;
  local_70 = param_5;
  if (0 < (int)uVar1) {
    lVar10 = 0;
    uVar14 = 0;
    lVar16 = 0;
    uVar13 = 0;
    do {
      puVar17 = *(ulong **)(*(long *)(param_1 + 2) + lVar10 * 8);
      if (0xf < *(ushort *)((long)puVar17 + 10)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = *puVar17;
      uVar5 = 1 << (ulong)(*(ushort *)((long)puVar17 + 10) & 0x1f);
      uVar11 = (uint)uVar13;
      if ((uVar5 & 0x5fe2) == 0) {
        uVar12 = uVar13;
        if ((uVar5 & 0xa01c) != 0) {
          uVar5 = FUN_00287e24(puVar17);
          if (uVar5 == 0) {
            if (0x10 < uVar15) {
              if (uVar11 < 8) {
                plVar7 = (long *)(local_78 + uVar13 * 8 + 0x80);
                uVar12 = (ulong)(uVar11 + 1);
              }
              else {
                uVar13 = lVar16 - 1U | 7;
                lVar16 = uVar13 + 9;
                plVar7 = (long *)(local_70 + uVar13 + 1);
                uVar12 = 8;
              }
              lVar6 = *plVar7;
              goto LAB_00288694;
            }
            if (uVar13 + (uVar15 + 7 >> 3) < 9) {
              uVar12 = (ulong)(uVar11 + (int)(uVar15 + 7 >> 3));
              *plVar9 = local_78 + uVar13 * 8 + 0x80;
              goto LAB_00288864;
            }
            uVar12 = (ulong)(ushort)puVar17[1];
            uVar13 = 8;
            if ((ushort)puVar17[1] < 9) {
              uVar12 = 8;
            }
LAB_002887ac:
            lVar6 = (uVar12 - 1 | lVar16 - 1U) + 1;
            lVar16 = lVar6 + uVar15;
            *plVar9 = local_70 + lVar6;
            uVar12 = uVar13;
          }
          else {
            uVar3 = 4 - (uVar5 & 3);
            if (((local_7c >> 8 & 1) == 0) || (*param_1 != 2)) {
              if (8 < uVar3 + uVar14) {
                uVar2 = (ushort)puVar17[1];
                goto LAB_00288764;
              }
              uVar15 = (ulong)(uVar3 + (int)uVar14);
              puVar8 = (undefined8 *)(local_78 + uVar14 * 0x10);
              switch(uVar5) {
              case 8:
                *(int *)puVar8 = (int)*puVar8;
                *(int *)((long)puVar8 + 4) = (int)puVar8[2];
                *(int *)(puVar8 + 1) = (int)puVar8[4];
                *(int *)((long)puVar8 + 0xc) = (int)puVar8[6];
                break;
              case 9:
                *(int *)puVar8 = (int)*puVar8;
                *(int *)((long)puVar8 + 4) = (int)puVar8[2];
                *(int *)(puVar8 + 1) = (int)puVar8[4];
                break;
              case 10:
                *(int *)puVar8 = (int)*puVar8;
                *(int *)((long)puVar8 + 4) = (int)puVar8[2];
                break;
              case 0xc:
                *puVar8 = *puVar8;
                puVar8[1] = puVar8[2];
                puVar8[2] = puVar8[4];
                puVar8[3] = puVar8[6];
                break;
              case 0xd:
                *puVar8 = *puVar8;
                puVar8[1] = puVar8[2];
                puVar8[2] = puVar8[4];
                break;
              case 0xe:
                *puVar8 = *puVar8;
                puVar8[1] = puVar8[2];
              }
            }
            else {
              if (8 < uVar3 + uVar13) {
                uVar2 = (ushort)puVar17[1];
                uVar13 = 8;
LAB_00288764:
                uVar14 = 8;
                uVar12 = (ulong)uVar2;
                if (uVar2 < 9) {
                  uVar12 = 8;
                }
                goto LAB_002887ac;
              }
              uVar15 = (ulong)(uVar3 + uVar11);
              lVar6 = local_78 + uVar13 * 8;
              puVar8 = (undefined8 *)(lVar6 + 0x80);
              uVar13 = uVar15;
              uVar15 = uVar14;
// ... truncated

// === FUN_0028d8cc @ 0028d8cc (920B) — TAGS: SWITCH ===

long * FUN_0028d8cc(long *param_1,long param_2,int *param_3,int param_4,int *param_5,int *param_6,
                   int *param_7)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  undefined8 *__ptr_00;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined4 local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_8c = 0;
  if ((((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == (int *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_6 == (int *)0x0)))) {
    iVar4 = 7;
    local_8c = iVar4;
    goto joined_r0x0028dc2c;
  }
  iVar3 = *param_3;
  if (param_4 <= iVar3) {
    iVar4 = 0;
    local_8c = iVar4;
    goto joined_r0x0028dc2c;
  }
LAB_0028d968:
  *param_1 = *param_1 + 1;
  uVar2 = FUN_0028d8a4();
  iVar4 = 0;
  switch(uVar2) {
  case 0:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_DAT_00315fd0;
    break;
  case 1:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_DAT_00315fe0;
    break;
  case 2:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_LAB_00315ca8;
    break;
  case 3:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_LAB_00315b98;
    break;
  case 4:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_DAT_00315cb8;
    break;
  case 5:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_DAT_00315e10;
    break;
  case 6:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_LAB_00315e78;
    break;
  case 7:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_LAB_00315de8;
    break;
  case 8:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_DAT_00315ae8;
    break;
  default:
    iVar4 = 0x1f;
    local_8c = iVar4;
    goto joined_r0x0028dc2c;
  case 0xb:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_DAT_00315b18;
    break;
  case 0xc:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_DAT_00315af0;
    break;
  case 0xd:
  case 0xe:
    *param_3 = iVar3 + 1;
    puVar5 = PTR_LAB_00315e00;
    break;
  case 0x11:
    iVar4 = *param_6;
    *param_6 = iVar4 + 1;
    if ((iVar4 < 0) || ((iVar4 == 0 && (*param_5 == 1)))) goto LAB_0028dc34;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    puVar6 = (undefined1 *)*param_1;
    iVar4 = 0;
    do {
      iVar3 = FUN_0028d8a4(puVar6);
      if (iVar3 == 0x16) {
        *(undefined1 *)((long)&local_88 + (long)iVar4) = *puVar6;
        puVar6 = (undefined1 *)(*param_1 + 1);
        *param_1 = (long)puVar6;
        if (0x1d < iVar4) goto LAB_0028dc34;
        iVar4 = iVar4 + 1;
      }
    } while (iVar3 == 0x16);
    if (iVar4 == 0) goto LAB_0028dc34;
    iVar4 = atoi((char *)&local_88);
    __ptr = malloc(0x800);
    __ptr_00 = malloc(0x18);
    if ((__ptr == (void *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
      free(__ptr);
      free(__ptr_00);
      iVar4 = 5;
      local_8c = iVar4;
      goto joined_r0x0028dc2c;
    }
    memset(__ptr,0,0x800);
    *__ptr_00 = 0;
    __ptr_00[1] = 0;
    *(short *)(__ptr_00 + 1) = (short)iVar4;
    *(undefined2 *)((long)__ptr_00 + 10) = 0xd;
    __ptr_00[2] = __ptr;
    iVar4 = *param_3;
    *param_3 = iVar4 + 1;
    *(undefined8 **)(param_2 + (long)iVar4 * 8) = __ptr_00;
    local_90 = 0;
    *param_5 = 1;
    param_1 = (long *)FUN_0028d8cc(param_1,__ptr,&local_90,0x100,param_5,param_6,&local_8c);
    if (local_8c != 0) {
      __ptr_00[2] = 0;
      free(__ptr);
      free(__ptr_00);
      iVar4 = local_8c;
      if (local_8c == 0) goto LAB_0028dbc0;
      goto switchD_0028d990_caseD_15;
    }
    goto LAB_0028dbc0;
  case 0x12:
    iVar4 = *param_6;
    *param_6 = iVar4 + -1;
    if (iVar4 < 1) {
// ... truncated

// === FUN_00287fcc @ 00287fcc (888B) — TAGS: SWITCH ===

void FUN_00287fcc(int *param_1,undefined8 param_2,undefined1 *param_3,ulong *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *__src;
  ulong *puVar10;
  uint uVar11;
  long lVar12;
  ulong __n;
  undefined1 auStack_d0 [8];
  ulong local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  long local_98;
  undefined1 *local_90;
  uint local_84;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  local_84 = param_1[7];
  local_c8 = **(ulong **)(param_1 + 4);
  local_ac = local_84 & 0xfffffeff;
  if ((local_84 >> 5 & 1) == 0) {
    if (param_3 == (undefined1 *)0x0) {
      local_ac = local_84 & 0x80;
      uVar8 = 0;
    }
    else {
      uVar8 = (ulong)(local_84 >> 2 & 0x10);
    }
  }
  else {
    uVar8 = local_c8;
    if (param_3 != (undefined1 *)0x0) {
      uVar8 = 0;
    }
  }
  lVar1 = -((uint)param_1[6] + uVar8 + 0xf7 & 0xfffffffffffffff0);
  local_90 = auStack_d0 + lVar1;
  iVar2 = param_1[1];
  local_70 = &stack0xfffffffffffffff0 + lVar1;
  local_c0 = local_70 + (uint)param_1[6];
  local_b8 = param_3;
  if (uVar8 != 0) {
    local_b8 = local_c0 + 0x28;
  }
  local_a8 = param_2;
  local_a0 = param_3;
  if (0 < iVar2) {
    lVar9 = 0;
    lVar12 = 0;
    local_78 = &stack0xffffffffffffffb0 + lVar1;
    local_80 = 0;
    uVar8 = 0;
    do {
      puVar10 = *(ulong **)(*(long *)(param_1 + 2) + lVar9 * 8);
      if (0xf < *(ushort *)((long)puVar10 + 10)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __n = *puVar10;
      __src = (ulong *)*param_4;
      uVar11 = (uint)uVar8;
      uVar7 = uVar8;
      switch(*(ushort *)((long)puVar10 + 10)) {
      case 0:
        goto switchD_002880ec_caseD_0;
      case 1:
      case 10:
        uVar6 = (ulong)(int)(uint)*__src;
        break;
      default:
        uVar4 = FUN_00287e24(puVar10);
        if (uVar4 == 0) {
          if (0x10 < __n) {
            __n = 8;
            __src = param_4;
            goto switchD_002880ec_caseD_b;
          }
          if (8 < uVar8 + (__n + 7 >> 3)) {
            uVar7 = (ulong)(ushort)puVar10[1];
            uVar8 = 8;
            if ((ushort)puVar10[1] < 9) {
              uVar7 = 8;
            }
            goto LAB_002883e4;
          }
          uVar7 = (ulong)(uVar11 + (int)(__n + 7 >> 3));
          puVar5 = local_78 + uVar8 * 8;
        }
        else {
          iVar3 = 4 - (uVar4 & 3);
          if (((local_84 >> 8 & 1) == 0) || (*param_1 != 2)) {
            if ((uint)(iVar3 + (int)local_80) < 9) {
                    /* WARNING: Could not recover jumptable at 0x00288290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK_00288294 + (long)(int)(uVar4 - 8) * 0xc))();
              return;
            }
          }
          else if (iVar3 + uVar11 < 9) {
                    /* WARNING: Could not recover jumptable at 0x00288144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_00288148 + (long)(int)(uVar4 - 8) * 0xc))();
            return;
          }
          uVar7 = (ulong)(ushort)puVar10[1];
          local_80 = 8;
          if ((ushort)puVar10[1] < 9) {
            uVar7 = 8;
          }
LAB_002883e4:
          lVar1 = (uVar7 - 1 | lVar12 - 1U) + 1;
          lVar12 = lVar1 + __n;
          puVar5 = local_70 + lVar1;
          uVar7 = uVar8;
        }
        memcpy(puVar5,__src,__n);
        goto switchD_002880ec_caseD_0;
      case 5:
        uVar6 = (ulong)(byte)*__src;
        break;
      case 6:
        uVar6 = (ulong)(char)*__src;
        break;
      case 7:
        uVar6 = (ulong)(ushort)*__src;
        break;
      case 8:
        uVar6 = (ulong)(short)*__src;
        break;
      case 9:
        uVar6 = (ulong)(uint)*__src;
        break;
// ... truncated

// === FUN_00271128 @ 00271128 (864B) — TAGS: SWITCH ===

void FUN_00271128(int *param_1,undefined8 param_2,undefined1 *param_3,ulong *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *__src;
  ulong *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong __n;
  undefined1 auStack_d0 [8];
  ulong local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  uint local_a4;
  undefined8 local_a0;
  long local_98;
  undefined1 *local_90;
  uint local_84;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  
  local_98 = tpidr_el0;
  local_68 = *(long *)(local_98 + 0x28);
  local_84 = param_1[7];
  local_c8 = **(ulong **)(param_1 + 4);
  local_a4 = local_84 & 0xfffffeff;
  if ((local_84 >> 5 & 1) == 0) {
    if (param_3 == (undefined1 *)0x0) {
      local_a4 = local_84 & 0x80;
      uVar8 = 0;
    }
    else {
      uVar8 = (ulong)(local_84 >> 2 & 0x10);
    }
  }
  else {
    uVar8 = local_c8;
    if (param_3 != (undefined1 *)0x0) {
      uVar8 = 0;
    }
  }
  lVar1 = -((uint)param_1[6] + uVar8 + 0xf7 & 0xfffffffffffffff0);
  local_90 = auStack_d0 + lVar1;
  iVar2 = param_1[1];
  local_70 = &stack0xfffffffffffffff0 + lVar1;
  local_b8 = local_70 + (uint)param_1[6];
  local_b0 = param_3;
  if (uVar8 != 0) {
    local_b0 = local_b8 + 0x28;
  }
  local_c0 = param_3;
  local_a0 = param_2;
  if (0 < iVar2) {
    lVar12 = 0;
    lVar11 = 0;
    local_78 = &stack0xffffffffffffffb0 + lVar1;
    local_80 = 0;
    uVar8 = 0;
    do {
      puVar9 = *(ulong **)(*(long *)(param_1 + 2) + lVar12 * 8);
      if (0xf < *(ushort *)((long)puVar9 + 10)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __n = *puVar9;
      __src = (ulong *)*param_4;
      uVar10 = (uint)uVar8;
      uVar7 = uVar8;
      switch(*(ushort *)((long)puVar9 + 10)) {
      case 0:
        goto switchD_00271238_caseD_0;
      case 1:
      case 10:
        uVar6 = (ulong)(int)(uint)*__src;
        break;
      default:
        uVar4 = FUN_00270f80(puVar9);
        if (uVar4 == 0) {
          if (0x10 < __n) {
            __n = 8;
            __src = param_4;
            goto switchD_00271238_caseD_b;
          }
          if (8 < uVar8 + (__n + 7 >> 3)) {
            uVar7 = (ulong)(ushort)puVar9[1];
            uVar8 = 8;
            if ((ushort)puVar9[1] < 9) {
              uVar7 = 8;
            }
            goto LAB_00271530;
          }
          uVar7 = (ulong)(uVar10 + (int)(__n + 7 >> 3));
          puVar5 = local_78 + uVar8 * 8;
        }
        else {
          iVar3 = 4 - (uVar4 & 3);
          if (((local_84 >> 8 & 1) == 0) || (*param_1 != 2)) {
            if ((uint)(iVar3 + (int)local_80) < 9) {
                    /* WARNING: Could not recover jumptable at 0x002713dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK_002713e0 + (long)(int)(uVar4 - 8) * 0xc))();
              return;
            }
          }
          else if (iVar3 + uVar10 < 9) {
                    /* WARNING: Could not recover jumptable at 0x00271290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_00271294 + (long)(int)(uVar4 - 8) * 0xc))();
            return;
          }
          uVar7 = (ulong)(ushort)puVar9[1];
          local_80 = 8;
          if ((ushort)puVar9[1] < 9) {
            uVar7 = 8;
          }
LAB_00271530:
          lVar1 = (uVar7 - 1 | lVar11 - 1U) + 1;
          lVar11 = lVar1 + __n;
          puVar5 = local_70 + lVar1;
          uVar7 = uVar8;
        }
        memcpy(puVar5,__src,__n);
        goto switchD_00271238_caseD_0;
      case 5:
        uVar6 = (ulong)(byte)*__src;
        break;
      case 6:
        uVar6 = (ulong)(char)*__src;
        break;
      case 7:
        uVar6 = (ulong)(ushort)*__src;
        break;
      case 8:
        uVar6 = (ulong)(short)*__src;
        break;
      case 9:
        uVar6 = (ulong)(uint)*__src;
        break;
// ... truncated

// === FUN_0016edcc @ 0016edcc (816B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016edcc(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  time_t tVar9;
  pthread_t __target_thread;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  char acStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  piVar7 = param_1;
  if ((DAT_0031d46a & 1) == 0) {
    piVar7 = (int *)pDhsAJkF7h(0x31d45e,0xb,&DAT_0029d53b,&DAT_0029d538,3,0x9b);
    DAT_0031d46a = 1;
  }
  if ((DAT_0031d469 & 1) == 0) {
    piVar7 = (int *)HlupqL3ZAR(0x31d458,6,&DAT_0029d532,&DAT_0029d530,2,0xfb);
    DAT_0031d469 = 1;
  }
  if (param_1 == (int *)0x0) goto LAB_0016f06c;
  lVar8 = FUN_00242634();
  piVar7 = (int *)(**(code **)(lVar8 + 0x10))(1,6,0x2d,0,0,param_2);
  piVar3 = DAT_00315f40;
  iVar5 = (int)piVar7;
  if ((*DAT_00315f40 == 0) && (*(int *)PTR_DAT_00315d28 != 0)) {
    if (_DAT_0031d450 == (long *)0x0) {
      if (iVar5 == 0) goto LAB_0016f06c;
    }
    else if ((iVar5 == 0) && (*_DAT_0031d450 == 0)) goto LAB_0016f06c;
  }
  tVar9 = time((time_t *)0x0);
  srand((uint)tVar9);
  iVar4 = rand();
  iVar4 = iVar4 % 0x34d9;
  memset(acStack_c8,0,0x80);
  puVar2 = DAT_00315d10;
  if (*piVar3 == 0) {
    if (*(int *)PTR_DAT_00315d28 == 0) {
      iVar5 = (iVar4 + 1) / 0xa3;
      iVar4 = 0xa3;
      goto LAB_0016ef18;
    }
    if ((_DAT_0031d450 != (long *)0x0) && (*_DAT_0031d450 != 0)) {
      iVar5 = (iVar4 + 1) / 0x15b;
      iVar4 = 0x15b;
      goto LAB_0016ef18;
    }
    if (iVar5 != 0) {
      iVar5 = (iVar4 + 1) / 0x1df;
      iVar4 = 0x1df;
      goto LAB_0016ef18;
    }
    lVar8 = 0;
    if (*piVar3 != 0) goto LAB_0016ef28;
LAB_0016ef34:
    sprintf(acStack_c8,(char *)0x31d45e,lVar8);
  }
  else {
    iVar5 = (iVar4 + 1) / 0x53;
    iVar4 = 0x53;
LAB_0016ef18:
    lVar8 = (long)(iVar5 * iVar4);
    if (*piVar3 == 0) goto LAB_0016ef34;
LAB_0016ef28:
    if (((byte)DAT_003168bc >> 6 & 1) == 0) goto LAB_0016ef34;
    iVar5 = snprintf(acStack_c8,0x10,(char *)0x31d458,*DAT_00315d10);
    local_ec = *puVar2;
    local_108 = DAT_0029a210;
    local_100 = 0x18711;
    local_f4 = 0;
    local_fc = 0;
    local_e4 = 0;
    local_d4 = 0;
    local_dc = 0;
    lVar8 = FUN_00242634(iVar5);
    (**(code **)(lVar8 + 0x10))(1,0xe,5,0,&local_108,0);
  }
  __target_thread = pthread_self();
  uVar6 = pthread_setname_np(__target_thread,acStack_c8);
  piVar7 = (int *)(ulong)uVar6;
  if ((*piVar3 == 0) || (((byte)DAT_003168bc >> 5 & 1) != 0)) {
    piVar7 = (int *)(**(code **)(PTR_PTR_00315f88 + (long)*param_1 * 8))(0);
  }
LAB_0016f06c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar7);
  }
  return;
}



// === FUN_00244ffc @ 00244ffc (756B) — TAGS: SWITCH ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00244ffc(long param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if ((DAT_003584c9 & 1) == 0) {
    J2qaFN4xHz(0x3584a0,7,&DAT_002d60f9,&DAT_0029b48a,4,0x41);
    DAT_003584c9 = 1;
  }
  pbVar10 = (byte *)(param_2 + 1);
  pcVar1 = param_2;
  if (*param_2 == '\"') {
    iVar5 = 1;
    bVar7 = *pbVar10;
    pbVar3 = pbVar10;
    while ((bVar7 != 0 && (bVar7 != 0x22))) {
      pbVar9 = pbVar3 + 2;
      if (bVar7 != 0x5c) {
        pbVar9 = pbVar3 + 1;
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar9;
      bVar7 = *pbVar9;
    }
    pbVar3 = (byte *)(*(code *)PTR_malloc_00316ca0)((long)iVar5);
    pcVar1 = _DAT_00358488;
    if (pbVar3 != (byte *)0x0) {
      bVar7 = *pbVar10;
      pbVar9 = pbVar3;
joined_r0x002450d8:
      if ((bVar7 == 0) || (bVar7 == 0x22)) {
        *pbVar9 = 0;
        bVar7 = *pbVar10;
        *(byte **)(param_1 + 0x20) = pbVar3;
        *(undefined4 *)(param_1 + 0x1c) = 4;
        if (bVar7 != 0x22) {
          return pbVar10;
        }
        return pbVar10 + 1;
      }
      pbVar6 = pbVar10 + 1;
      if (bVar7 != 0x5c) {
        *pbVar9 = bVar7;
        bVar7 = *pbVar6;
        goto joined_r0x00245144;
      }
      bVar7 = *pbVar6;
      switch(bVar7) {
      case 0x62:
        bVar7 = 8;
      default:
        *pbVar9 = bVar7;
        pbVar9 = pbVar9 + 1;
LAB_00245128:
        pbVar10 = pbVar6 + 1;
        bVar7 = *pbVar10;
        goto joined_r0x002450d8;
      case 0x66:
        *pbVar9 = 0xc;
        bVar7 = pbVar10[2];
        break;
      case 0x6e:
        *pbVar9 = 10;
        bVar7 = pbVar10[2];
        break;
      case 0x72:
        *pbVar9 = 0xd;
        bVar7 = pbVar10[2];
        goto joined_r0x002451f0;
      case 0x74:
        *pbVar9 = 9;
        bVar7 = pbVar10[2];
joined_r0x002451f0:
        pbVar10 = pbVar10 + 2;
        pbVar9 = pbVar9 + 1;
        goto joined_r0x002450d8;
      case 0x75:
        uVar2 = FUN_002452f0(pbVar10 + 2);
        pbVar6 = pbVar10 + 5;
        if ((uVar2 == 0) || ((uVar2 & 0xfffffc00) == 0xdc00)) goto LAB_00245128;
        if ((uVar2 & 0xfffffc00) == 0xd800) {
          if ((pbVar10[6] == 0x5c) && (pbVar10[7] == 0x75)) {
            uVar4 = FUN_002452f0(pbVar10 + 8);
            pbVar6 = pbVar10 + 0xb;
            if (((uint)(uVar4 >> 10) & 0x3fffff) == 0x37) {
              uVar2 = ((uint)uVar4 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
              goto LAB_00245218;
            }
          }
          goto LAB_00245128;
        }
        if (uVar2 < 0x80) {
          uVar8 = 1;
        }
        else if (uVar2 < 0x800) {
          uVar8 = 2;
        }
        else {
LAB_00245218:
          uVar8 = 3;
          if (0xffff < uVar2) {
            uVar8 = 4;
          }
        }
        uVar4 = (ulong)uVar8;
        pbVar9 = pbVar9 + uVar4;
        switch(uVar8) {
        case 4:
          pbVar9 = pbVar9 + -1;
          *pbVar9 = (byte)uVar2 & 0x3f | 0x80;
          uVar2 = uVar2 >> 6;
        case 3:
          pbVar9 = pbVar9 + -1;
          *pbVar9 = (byte)uVar2 & 0x3f | 0x80;
          uVar2 = uVar2 >> 6;
        case 2:
          pbVar9 = pbVar9 + -1;
          *pbVar9 = (byte)uVar2 & 0x3f | 0x80;
          uVar2 = uVar2 >> 6;
        case 1:
          pbVar9 = pbVar9 + -1;
          *pbVar9 = (byte)uVar2 | *(byte *)(uVar4 + 0x3584a0);
        default:
          pbVar9 = pbVar9 + uVar4;
          pbVar10 = pbVar6 + 1;
          bVar7 = *pbVar10;
        }
        goto joined_r0x002450d8;
      }
      pbVar6 = pbVar10 + 2;
joined_r0x00245144:
      pbVar10 = pbVar6;
      pbVar9 = pbVar9 + 1;
      goto joined_r0x002450d8;
    }
  }
  _DAT_00358488 = pcVar1;
  return (byte *)0x0;
// ... truncated

// === FUN_0028e284 @ 0028e284 (700B) — TAGS: SWITCH ===

uint * FUN_0028e284(long param_1,long param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6
                   ,undefined4 *param_7)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  uVar13 = 7;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != (uint *)0x0)) &&
     ((param_5 != (uint *)0x0 && (param_6 != (uint *)0x0)))) {
    if ((int)param_3 < 1) {
      uVar13 = 0;
    }
    else {
      uVar14 = 0;
      uVar13 = 0;
      lVar1 = param_1 + 0x140;
      do {
        lVar9 = *(long *)(param_2 + uVar14 * 8);
        uVar3 = *(ushort *)(lVar9 + 10);
        uVar12 = uVar3 - 5;
        if (uVar12 < 10) {
          uVar6 = *param_5;
          if ((int)uVar6 < 6) {
            plVar5 = (long *)(param_1 + (long)(int)(uVar6 + 8) * 8 + 0x40);
            if (uVar12 < 10) goto LAB_0028e364;
LAB_0028e3c0:
            uVar13 = 0x1f;
          }
          else {
            plVar5 = (long *)(*(long *)(param_1 + 0xb0) + (long)(int)uVar6 * 8 + 0x80);
            if (9 < uVar12) goto LAB_0028e3c0;
LAB_0028e364:
            switch((long)&switchD_0028e36c::switchdataD_002d81e0 +
                   (long)(int)(&switchD_0028e36c::switchdataD_002d81e0)[uVar12]) {
            case 0x28e370:
              lVar9 = *(long *)param_4;
              param_4 = param_4 + 2;
              goto LAB_0028e47c;
            case 0x28e42c:
              uVar10 = (ulong)*param_4;
              break;
            case 0x28e45c:
              uVar10 = (ulong)(byte)*param_4;
              break;
            case 0x28e464:
              uVar10 = (ulong)(char)*param_4;
              break;
            case 0x28e46c:
              uVar10 = (ulong)(ushort)*param_4;
              break;
            case 0x28e474:
              uVar10 = (ulong)(short)*param_4;
              break;
            case 0x28e48c:
              plVar5 = *(long **)(lVar9 + 0x10);
              if (plVar5 == (long *)0x0) {
                uVar13 = 7;
              }
              else {
                if (*plVar5 == 0) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = 0;
                  do {
                    lVar4 = lVar9 + 1;
                    lVar9 = lVar9 + 1;
                  } while (plVar5[lVar4] != 0);
                }
                param_4 = (uint *)FUN_0028e284(param_1,plVar5,lVar9,param_4,param_5,param_6,param_7)
                ;
                uVar6 = *param_5;
              }
              goto LAB_0028e480;
            }
            param_4 = param_4 + 1;
            lVar9 = uVar10 << 0x20;
LAB_0028e47c:
            *plVar5 = lVar9;
          }
LAB_0028e480:
          uVar6 = uVar6 + 1;
          puVar7 = param_5;
LAB_0028e4fc:
          *puVar7 = uVar6;
        }
        else if (uVar3 - 2 < 3) {
          uVar6 = *param_6;
          if (uVar3 == 4) {
            uVar12 = uVar6 + 6;
            if (-1 < (int)(uVar6 + 3)) {
              uVar12 = uVar6 + 3;
            }
            iVar8 = (uVar12 & 0xfffffffc) + 4;
          }
          else {
            iVar8 = uVar6 + 2;
          }
          uVar12 = (uint)uVar3;
          if (iVar8 < 0x20) {
            if (uVar12 == 3) {
              puVar7 = (uint *)(lVar1 + (long)(int)uVar6 * 4);
LAB_0028e4b8:
              *(undefined8 *)puVar7 = *(undefined8 *)param_4;
              param_4 = param_4 + 2;
            }
            else {
              if (uVar12 != 2) {
                uVar2 = uVar6 + 6;
                if (-1 < (int)(uVar6 + 3)) {
                  uVar2 = uVar6 + 3;
                }
                uVar6 = uVar2 & 0xfffffffc;
                puVar11 = (undefined8 *)(lVar1 + (long)((int)uVar2 >> 2) * 0x10);
                *param_6 = uVar6;
                goto LAB_0028e4e4;
              }
              puVar7 = (uint *)(lVar1 + (long)(int)(uVar6 + 1) * 4);
LAB_0028e450:
              *puVar7 = *param_4;
              param_4 = param_4 + 1;
            }
          }
          else {
            if (uVar3 != 4) {
              puVar7 = (uint *)(*(long *)(param_1 + 0xb0) + (long)(int)uVar6 * 4 + 0x80);
              if (uVar3 != 3) {
                if (uVar3 == 2) goto LAB_0028e450;
                uVar13 = 0x1f;
                goto LAB_0028e4ec;
              }
              goto LAB_0028e4b8;
            }
            uVar2 = uVar6 + 6;
            if (-1 < (int)(uVar6 + 3)) {
// ... truncated

// === FUN_0026c840 @ 0026c840 (696B) — TAGS: SWITCH ===

long FUN_0026c840(long param_1,long param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  void *__ptr;
  undefined8 *__ptr_00;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 local_70;
  int local_6c;
  long local_68;
  
  puVar2 = PTR_LAB_00315c40;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) ||
     ((param_4 == (int *)0x0 || (param_5 == (int *)0x0)))) {
    if (param_6 == (int *)0x0) {
      param_1 = 0;
      goto LAB_0026ca60;
    }
    param_1 = 0;
    iVar4 = 1;
  }
  else {
    iVar6 = *param_3;
    while (iVar6 < 0x100) {
      param_1 = param_1 + 1;
      uVar3 = FUN_0026c77c();
      puVar5 = puVar2;
      iVar4 = 0;
      switch(uVar3) {
      case 0:
        puVar5 = PTR_LAB_00315c50;
        break;
      case 1:
        break;
      case 2:
        puVar5 = PTR_DAT_00315f68;
        break;
      case 3:
        puVar5 = PTR_LAB_00315c68;
        break;
      case 4:
        puVar5 = PTR_LAB_00315f78;
        break;
      case 5:
        puVar5 = PTR_DAT_00315ad0;
        break;
      case 6:
        puVar5 = PTR_DAT_00315f60;
        break;
      case 7:
        puVar5 = PTR_DAT_00315ab0;
        break;
      case 8:
        puVar5 = PTR_LAB_00315dd8;
        break;
      default:
        local_6c = 7;
        iVar4 = local_6c;
        goto switchD_0026c8f0_caseD_16;
      case 0xb:
        puVar5 = PTR_DAT_00315dc0;
        break;
      case 0xc:
        puVar5 = PTR_DAT_00315dd0;
        break;
      case 0xd:
      case 0xe:
        puVar5 = PTR_DAT_00315aa0;
        break;
      case 0x11:
        iVar4 = *param_5;
        *param_5 = iVar4 + 1;
        if ((iVar4 < 0) || ((iVar4 == 0 && (*param_4 == 1)))) goto LAB_0026cac4;
        __ptr = malloc(0x800);
        __ptr_00 = malloc(0x18);
        if ((__ptr == (void *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
          free(__ptr);
          free(__ptr_00);
          local_6c = 2;
          iVar4 = local_6c;
        }
        else {
          memset(__ptr,0,0x800);
          *__ptr_00 = 0;
          __ptr_00[1] = 0;
          *(undefined2 *)((long)__ptr_00 + 10) = 0xd;
          __ptr_00[2] = __ptr;
          iVar4 = *param_3;
          *param_3 = iVar4 + 1;
          *(undefined8 **)(param_2 + (long)iVar4 * 8) = __ptr_00;
          local_70 = 0;
          *param_4 = 1;
          param_1 = FUN_0026c840(param_1,__ptr,&local_70,param_4,param_5,&local_6c);
          iVar4 = local_6c;
          if (local_6c == 0) goto LAB_0026ca38;
        }
        goto joined_r0x0026cabc;
      case 0x12:
        iVar4 = *param_5;
        *param_5 = iVar4 + -1;
        if (0 < iVar4) {
          *param_4 = 2;
          iVar4 = 0;
          goto joined_r0x0026cabc;
        }
LAB_0026cac4:
        local_6c = 4;
        iVar4 = local_6c;
        goto switchD_0026c8f0_caseD_16;
      case 0x15:
        goto switchD_0026c8f0_caseD_15;
      case 0x16:
        goto switchD_0026c8f0_caseD_16;
      }
      *param_3 = iVar6 + 1;
      *(undefined **)(param_2 + (long)iVar6 * 8) = puVar5;
LAB_0026ca38:
      iVar6 = *param_3;
switchD_0026c8f0_caseD_15:
    }
    local_6c = 3;
    iVar4 = local_6c;
switchD_0026c8f0_caseD_16:
joined_r0x0026cabc:
    if (param_6 == (int *)0x0) goto LAB_0026ca60;
  }
  *param_6 = iVar4;
LAB_0026ca60:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



// === FUN_00285d24 @ 00285d24 (648B) — TAGS: SWITCH ===

undefined8 FUN_00285d24(long param_1,ulong *param_2,int param_3,uint *param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  
  if (param_3 < 0) {
    return 7;
  }
  if (param_1 == 0) {
    return 7;
  }
  if (param_2 == (ulong *)0x0) {
    return 7;
  }
  if (param_4 == (uint *)0x0) {
    return 7;
  }
  iVar3 = (int)param_2[2];
  uVar9 = *param_4;
  if (iVar3 - 4U < 0xb) {
    uVar2 = uVar9;
    if ((int)uVar9 < 0) {
      uVar2 = uVar9 + 1;
    }
    if ((int)uVar9 < 0xc) {
      puVar8 = (ulong *)(param_1 + 0x40 + (long)((int)uVar2 >> 1) * 8 + 0x40);
    }
    else {
      puVar8 = (ulong *)(*(long *)(param_1 + 0xb0) + (long)(((int)uVar2 >> 1) << 3) + 0x80);
    }
    iVar4 = 2;
    uVar5 = 0x1f;
    switch(iVar3 - 4U) {
    case 0:
    case 6:
      uVar7 = (ulong)(int)(uint)*puVar8;
      break;
    case 1:
      uVar7 = (ulong)(byte)*puVar8;
      break;
    case 2:
      uVar7 = (ulong)(char)*puVar8;
      break;
    case 3:
      uVar7 = (ulong)(ushort)*puVar8;
      break;
    case 4:
      uVar7 = (ulong)(short)*puVar8;
      break;
    case 5:
      uVar7 = (ulong)(uint)*puVar8;
      break;
    case 7:
    case 8:
    case 10:
      uVar7 = *puVar8;
      break;
    default:
      goto switchD_00285e24_caseD_9;
    }
LAB_00285f84:
    *param_2 = uVar7;
  }
  else if (iVar3 - 1U < 3) {
    if ((param_5 < 1) || (param_3 < param_5)) {
      iVar4 = FUN_0028dcd4(iVar3,uVar9);
      iVar3 = (int)param_2[2];
      if (iVar4 == 0) {
        if (iVar3 == 3) {
          iVar3 = uVar9 + 6;
          if (-1 < (int)(uVar9 + 3)) {
            iVar3 = uVar9 + 3;
          }
          puVar8 = (ulong *)(param_1 + (long)(iVar3 >> 2) * 0x10 + 0x140);
          goto LAB_00285f54;
        }
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_00285f24;
          uVar6 = *(undefined4 *)(param_1 + (long)(int)(uVar9 + 1) * 4 + 0x140);
          goto LAB_00285f18;
        }
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar7 = *(ulong *)(param_1 + (long)((int)uVar9 >> 1) * 8 + 0x140);
      }
      else {
        if (iVar3 == 3) {
          uVar2 = uVar9 + 6;
          if (-1 < (int)(uVar9 + 3)) {
            uVar2 = uVar9 + 3;
          }
          puVar8 = (ulong *)(*(long *)(param_1 + 0xb0) + (long)(int)((uVar2 & 0x3ffffffc) << 2) +
                            0x80);
LAB_00285f54:
          uVar7 = *puVar8;
          uVar5 = 0;
          iVar4 = 4;
          param_2[1] = puVar8[1];
          *param_2 = uVar7;
          goto switchD_00285e24_caseD_9;
        }
        lVar1 = (long)(int)uVar9 * 4 + 0x80;
        if (iVar3 != 2) {
          if (iVar3 != 1) {
LAB_00285f24:
            iVar4 = 2;
            uVar5 = 7;
            goto switchD_00285e24_caseD_9;
          }
          uVar6 = *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar1);
LAB_00285f18:
          *(undefined4 *)param_2 = uVar6;
          goto LAB_00285f8c;
        }
        uVar7 = *(ulong *)(*(long *)(param_1 + 0xb0) + lVar1);
      }
    }
    else {
      if (iVar3 == 3) {
        uVar2 = uVar9 + 6;
        if (-1 < (int)(uVar9 + 3)) {
          uVar2 = uVar9 + 3;
        }
        uVar9 = uVar2 & 0xfffffffc;
      }
      uVar2 = uVar9;
      if ((int)uVar9 < 0) {
        uVar2 = uVar9 + 1;
      }
      if ((int)uVar9 < 0xc) {
        puVar8 = (ulong *)(param_1 + 0x40 + (long)((int)uVar2 >> 1) * 8 + 0x40);
      }
      else {
        puVar8 = (ulong *)(*(long *)(param_1 + 0xb0) + (long)(((int)uVar2 >> 1) << 3) + 0x80);
      }
      if (iVar3 == 3) goto LAB_00285f54;
      if (iVar3 != 2) {
        if (iVar3 != 1) goto LAB_00285f24;
        uVar6 = (undefined4)*puVar8;
        goto LAB_00285f18;
// ... truncated

// === FUN_00265fec @ 00265fec (640B) — TAGS: SWITCH ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00265fec(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  void *__ptr;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  __ptr = (void *)0x0;
  if (((param_1 == 0) || (param_3 == 0)) || (param_4 == (undefined8 *)0x0)) goto LAB_00266150;
  plVar11 = (long *)*param_4;
  if ((plVar11 == (long *)0x0) || (*plVar11 == 0)) {
    __ptr = (void *)0x0;
    goto LAB_00266150;
  }
  lVar10 = param_4[1];
  __ptr = (void *)0x0;
  if ((lVar10 == 0) || ((undefined *)plVar11[4] != PTR_f62jb483n28fnwr4g_00315d58))
  goto LAB_00266150;
  uVar2 = *(uint *)(param_1 + 4);
  iVar7 = *(int *)(param_4 + 2);
  uVar1 = *(uint *)((long)param_4 + 0x14);
  iVar8 = *(int *)(*plVar11 + 0x2d8);
  __ptr = malloc((ulong)uVar2 << 5);
  if (__ptr == (void *)0x0) goto LAB_00266150;
  if (uVar2 != 0) {
    uVar12 = 0;
    pvVar14 = __ptr;
    do {
      iVar6 = FUN_00265b00(pvVar14,*(undefined8 *)(param_3 + uVar12 * 8),
                           *(undefined8 *)(*(long *)(param_1 + 8) + uVar12 * 8),
                           iVar8 != 0 && (iVar7 == 0 || uVar12 < uVar1));
      if (iVar6 != 1) break;
      uVar12 = uVar12 + 1;
      pvVar14 = (void *)((long)pvVar14 + 0x20);
    } while (uVar12 < *(uint *)(param_1 + 4));
  }
  uVar4 = *(undefined2 *)(*(long *)(param_1 + 0x10) + 10);
  iVar7 = (*(code *)plVar11[10])(plVar11);
  if (iVar7 == 0) goto LAB_00266150;
  (*(code *)plVar11[0x14])(plVar11,0);
  uVar3 = *(undefined4 *)(param_1 + 4);
  local_90 = (undefined8 *)0x0;
  if (iVar7 < 0x40) {
    lVar13 = *plVar11;
    local_90 = pthread_getspecific(_DAT_0035b4d4);
    if ((local_90 != (void *)0x0) ||
       (iVar8 = FUN_00264384(&local_90,*(undefined4 *)(lVar13 + 0x7c)), iVar8 == 0)) {
      FUN_00266a68(local_90,__ptr,uVar3);
    }
  }
  iVar8 = d7jf28fnv7cwu6x2(plVar11,lVar10,iVar7);
  if (((iVar8 != 0) ||
      (iVar7 = cv560rhiebbg92ngeiw(plVar11,uVar4,&local_90,iVar7), param_2 == (undefined8 *)0x0)) ||
     (iVar7 != 0)) goto switchD_00266200_default;
  switch(local_80) {
  case 1:
  case 3:
  case 0xb:
  case 0xc:
  case 0xe:
    puVar9 = local_90;
    goto LAB_00266208;
  case 2:
  case 9:
  case 10:
    *(undefined4 *)param_2 = local_90._0_4_;
    break;
  case 4:
    param_2[1] = uStack_88;
    *param_2 = local_90;
    break;
  case 5:
  case 6:
    *(undefined1 *)param_2 = local_90._0_1_;
    break;
  case 7:
  case 8:
    *(undefined2 *)param_2 = local_90._0_2_;
    break;
  case 0xd:
    puVar9 = (undefined8 *)*local_90;
LAB_00266208:
    *param_2 = puVar9;
  }
switchD_00266200_default:
  (*(code *)plVar11[0x14])(plVar11,1);
LAB_00266150:
  free(__ptr);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === FUN_0026cbd0 @ 0026cbd0 (544B) — TAGS: SWITCH ===

/* WARNING: Removing unreachable block (ram,0x0026cc68) */
/* WARNING: Removing unreachable block (ram,0x0026cc90) */
/* WARNING: Removing unreachable block (ram,0x0026cce0) */
/* WARNING: Removing unreachable block (ram,0x0026cc7c) */
/* WARNING: Removing unreachable block (ram,0x0026cca4) */

long FUN_0026cbd0(long param_1,long param_2,long param_3,int param_4,int *param_5)

{
  long lVar1;
  void *__s;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  size_t __size;
  long lVar6;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    if (param_5 == (int *)0x0) {
      param_1 = 0;
      goto LAB_0026cd84;
    }
    param_1 = 0;
    iVar2 = 1;
  }
  else {
    if (param_4 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      lVar6 = 0;
      do {
        lVar3 = *(long *)(param_2 + lVar6 * 8);
        switch(*(undefined2 *)(lVar3 + 10)) {
        case 2:
        case 9:
        case 10:
          *(long *)(param_3 + lVar6 * 8) = param_1;
          param_1 = param_1 + 4;
          break;
        case 3:
        case 0xb:
        case 0xc:
        case 0xe:
          *(long *)(param_3 + lVar6 * 8) = param_1;
          param_1 = param_1 + 8;
          break;
        case 4:
          *(long *)(param_3 + lVar6 * 8) = param_1;
          param_1 = param_1 + 0x10;
          break;
        case 5:
        case 6:
          *(long *)(param_3 + lVar6 * 8) = param_1;
          param_1 = param_1 + 1;
          break;
        case 7:
        case 8:
          *(long *)(param_3 + lVar6 * 8) = param_1;
          param_1 = param_1 + 2;
          break;
        case 0xd:
          plVar4 = *(long **)(lVar3 + 0x10);
          if (plVar4 == (long *)0x0) {
            local_6c = 1;
            iVar2 = 1;
            goto joined_r0x0026cdd0;
          }
          if (*plVar4 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              lVar3 = uVar5 + 1;
              uVar5 = uVar5 + 1;
            } while (plVar4[lVar3] != 0);
          }
          __size = (size_t)(int)((int)uVar5 << 3 | 1);
          __s = malloc(__size);
          if (((int)uVar5 < 1) || (__s == (void *)0x0)) {
            local_6c = 2;
            iVar2 = 2;
            goto joined_r0x0026cdd0;
          }
          memset(__s,0,__size);
          *(void **)(param_3 + lVar6 * 8) = __s;
          param_1 = FUN_0026cbd0(param_1,plVar4,__s,uVar5 & 0xffffffff,&local_6c);
          iVar2 = local_6c;
          if (local_6c != 0) goto joined_r0x0026cdd0;
          break;
        default:
          local_6c = 7;
          iVar2 = 7;
          goto joined_r0x0026cdd0;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < param_4);
    }
joined_r0x0026cdd0:
    if (param_5 == (int *)0x0) goto LAB_0026cd84;
  }
  *param_5 = iVar2;
LAB_0026cd84:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === FUN_0025db54 @ 0025db54 (524B) — TAGS: SWITCH ===

void FUN_0025db54(void *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long alStack_3c0 [31];
  long local_2c8;
  ulong local_80;
  char acStack_68 [31];
  char local_49;
  
  memcpy(alStack_3c0,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
    FUN_0025c9a0(alStack_3c0,*(undefined8 *)((long)param_1 + 0x310),auStack_3d0);
  }
  if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x377) = 0;
  }
  lVar2 = param_2[200];
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  if ((int)lVar2 == 1) {
    lVar2 = FUN_0025c9dc(alStack_3c0,(int)param_2[0xc6]);
    lVar2 = lVar2 + param_2[0xc5];
  }
  else {
    if ((int)lVar2 != 2) {
LAB_0025dc9c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = FUN_0025c734(param_2[199],&local_3c8);
    lVar2 = FUN_0025d5a0(lVar2,lVar2 + local_3c8,alStack_3c0,0);
  }
  *(long *)((long)param_1 + 0x310) = lVar2;
  puVar5 = (undefined1 *)((long)param_1 + 0x358);
  lVar4 = 0;
  plVar6 = param_2;
  do {
    switch((int)plVar6[1]) {
    case 1:
      lVar3 = lVar2 + *plVar6;
      break;
    case 2:
      if (acStack_68[(int)*plVar6] != '\0') {
        lVar3 = FUN_0025c9dc(alStack_3c0);
        goto LAB_0025dc8c;
      }
      lVar3 = alStack_3c0[(int)*plVar6];
      break;
    case 3:
      lVar3 = FUN_0025c734(*plVar6,&local_3c8);
      lVar3 = FUN_0025d5a0(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
      break;
    case 4:
      lVar3 = lVar2 + *plVar6;
      goto LAB_0025dc8c;
    case 5:
      lVar3 = FUN_0025c734(*plVar6,&local_3c8);
      lVar3 = FUN_0025d5a0(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
LAB_0025dc8c:
      if ((byte)(&DAT_00358b60)[lVar4] < 9) {
        *puVar5 = 1;
        goto LAB_0025dd0c;
      }
      goto LAB_0025dc9c;
    default:
      goto switchD_0025dc64_default;
    }
    if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar5 = 0;
    }
LAB_0025dd0c:
    *(long *)((long)param_1 + lVar4 * 8) = lVar3;
switchD_0025dc64_default:
    lVar4 = lVar4 + 1;
    plVar6 = plVar6 + 2;
    puVar5 = puVar5 + 1;
    if (lVar4 == 0x62) {
      uVar1 = *(ulong *)((long)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((long)param_2 + 0x673) != '\0') {
        uVar1 = *(ulong *)((long)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulong *)((long)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}



// === FUN_00266484 @ 00266484 (524B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00266484(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  
  pthread_mutex_lock((pthread_mutex_t *)0x35b3f0);
  if (_DAT_0035b470 == (undefined8 *)0x0) {
    puVar11 = malloc(0x110);
    _DAT_0035b470 = puVar11;
    if (puVar11 == (undefined8 *)0x0) {
      uVar12 = 3;
      goto LAB_00266668;
    }
    *puVar11 = 0;
    puVar10 = PTR_b4fi83hfwk58wa0g_00315fe8;
    puVar9 = PTR_f62jb483n28fnwr4g_00315d58;
    puVar8 = PTR_d6nke82nvejj3zw24_00315cf8;
    puVar7 = PTR_LAB_00315c98;
    puVar6 = PTR_LAB_00315b38;
    puVar5 = PTR_k37cehjjwck197dbc_00315aa8;
    puVar3 = PTR_v7bwk29czmclad10_00315a78;
    puVar2 = PTR_r63nvd2jekkcx4fs3_00315a20;
    puVar1 = PTR_FUN_003159e0;
    puVar11[3] = FUN_002646e4;
    puVar11[4] = puVar9;
    puVar11[5] = &DAT_0026472c;
    puVar11[6] = &LAB_00264734;
    puVar11[9] = puVar10;
    puVar11[10] = puVar2;
    puVar2 = PTR_LAB_00315c78;
    puVar11[0xb] = puVar8;
    puVar11[0xc] = puVar7;
    puVar7 = PTR_d7jf28fnv7cwu6x2_00315db0;
    puVar11[0xd] = &LAB_00264c64;
    puVar11[0xe] = puVar5;
    puVar11[0xf] = &LAB_00264988;
    puVar11[0x10] = puVar3;
    puVar11[7] = &LAB_002647e4;
    puVar11[8] = &LAB_00264af8;
    puVar11[0x11] = &LAB_00264ba4;
    puVar11[0x12] = puVar2;
    puVar5 = PTR_thiwjnfiwoeoiud3_00315ef0;
    puVar11[0x13] = puVar7;
    puVar7 = PTR_LAB_00315fd8;
    puVar2 = PTR_FUN_00315bc8;
    puVar11[2] = puVar6;
    puVar11[1] = puVar1;
    puVar3 = PTR_LAB_00315bd0;
    puVar11[0x16] = &LAB_00264cec;
    puVar11[0x17] = puVar5;
    puVar1 = PTR_LAB_00315a00;
    puVar11[0x18] = puVar2;
    puVar11[0x19] = puVar7;
    uVar4 = DAT_00315a80;
    puVar11[0x15] = &UNK_00264ce0;
    puVar11[0x14] = FUN_00264c6c;
    puVar11[0x1c] = &LAB_00264de8;
    puVar11[0x1d] = uVar4;
    puVar2 = PTR_cv59rhiebbg92ngeik_00315b50;
    puVar11[0x1e] = &LAB_00264f98;
    puVar11[0x1f] = puVar2;
    puVar11[0x1b] = puVar1;
    puVar11[0x1a] = puVar3;
    puVar11[0x20] = &LAB_00265154;
    puVar11[0x21] = &LAB_002651f8;
    _DAT_0035b478 = FUN_00262a84(0x35b360,puVar11);
  }
  uVar12 = _DAT_0035b478;
  *_DAT_0035b470 = param_1;
  *param_1 = uVar12;
  uVar12 = 0;
  *(undefined8 **)(param_1 + 0xc2) = _DAT_0035b470;
LAB_00266668:
  pthread_mutex_unlock((pthread_mutex_t *)0x35b3f0);
  return uVar12;
}



// === FUN_00230f20 @ 00230f20 (504B) — TAGS: SWITCH ===

long * FUN_00230f20(undefined4 param_1,undefined4 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (((param_3 == (long *)0x0) || (*param_3 == 0)) || (iVar5 = (int)param_3[1], iVar5 == 0)) {
switchD_00230f88_default:
    plVar7 = (long *)0x0;
  }
  else {
    switch(param_1) {
    case 1:
      iVar1 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      plVar7 = (long *)FUN_0025097c(((uint)((ulong)((iVar1 >> 2) * 0x18 + 0x1e) * 0xaaaaaaab >> 0x20
                                           ) & 0x7ffffffe) * 2 + 4);
      uVar6 = FUN_00231118(*param_3,(int)param_3[1],*plVar7,*(undefined4 *)((long)plVar7 + 0xc),
                           param_2,param_4);
      break;
    case 2:
      plVar7 = (long *)FUN_0025097c();
      uVar6 = FUN_00231ce0(*param_3,(int)param_3[1],*plVar7,*(undefined4 *)((long)plVar7 + 0xc),
                           param_4);
      break;
    case 3:
      iVar1 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      plVar7 = (long *)FUN_0025097c((iVar1 >> 2) * 0x18 + 0x1d);
      uVar6 = FUN_00232460(*param_3,(int)param_3[1],*plVar7,*(undefined4 *)((long)plVar7 + 0xc),
                           param_2,param_4);
      break;
    case 4:
      plVar7 = (long *)FUN_0025097c();
      pcVar9 = (char *)*param_3;
      uVar6 = 0;
      if (((pcVar9 != (char *)0x0) && (uVar2 = *(uint *)(param_3 + 1), uVar2 != 0)) &&
         (lVar8 = *plVar7, lVar8 != 0)) {
        if (*pcVar9 == '\x01') {
          uVar3 = *(uint *)((long)plVar7 + 0xc);
          iVar5 = FUN_00232cdc(auStack_70);
          if (iVar5 == 1) {
            if (uVar3 < uVar2) {
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_00232de0(pcVar9 + 1,uVar2 - 1,lVar8,uVar3,auStack_70);
            }
            break;
          }
        }
        uVar6 = 0;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 810000;
        }
      }
      break;
    default:
      goto switchD_00230f88_default;
    }
    *(undefined4 *)(plVar7 + 1) = uVar6;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}



// === FUN_0028dd3c @ 0028dd3c (464B) — TAGS: SWITCH ===

long FUN_0028dd3c(long param_1,long param_2,long param_3,uint param_4,undefined4 *param_5)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  size_t __size;
  ulong uVar5;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_6c = 7;
  }
  else if (0 < (int)param_4) {
    uVar5 = 0;
    do {
      lVar2 = *(long *)(param_2 + uVar5 * 8);
      switch(*(undefined2 *)(lVar2 + 10)) {
      case 2:
      case 9:
      case 10:
        *(long *)(param_3 + uVar5 * 8) = param_1;
        param_1 = param_1 + 4;
        break;
      case 3:
      case 0xb:
      case 0xc:
      case 0xe:
        *(long *)(param_3 + uVar5 * 8) = param_1;
        param_1 = param_1 + 8;
        break;
      case 4:
        *(long *)(param_3 + uVar5 * 8) = param_1;
        param_1 = param_1 + 0x10;
        break;
      case 5:
      case 6:
        *(long *)(param_3 + uVar5 * 8) = param_1;
        param_1 = param_1 + 1;
        break;
      case 7:
      case 8:
        *(long *)(param_3 + uVar5 * 8) = param_1;
        param_1 = param_1 + 2;
        break;
      case 0xd:
        plVar3 = *(long **)(lVar2 + 0x10);
        if (plVar3 == (long *)0x0) {
          local_6c = 7;
        }
        else {
          if (*plVar3 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            do {
              lVar2 = uVar4 + 1;
              uVar4 = uVar4 + 1;
            } while (plVar3[lVar2] != 0);
          }
          __size = (size_t)(int)((int)uVar4 << 3 | 1);
          __ptr = malloc(__size);
          if (((int)uVar4 < 1) || (__ptr == (void *)0x0)) {
            local_6c = 5;
            free(__ptr);
          }
          else {
            memset(__ptr,0,__size);
            *(void **)(param_3 + uVar5 * 8) = __ptr;
            param_1 = FUN_0028dd3c(param_1,plVar3,__ptr,uVar4 & 0xffffffff,&local_6c);
          }
        }
        break;
      default:
        local_6c = 0x1f;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_4);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_6c;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



// === cv560rhiebbg92ngeiw @ 00264df0 (424B) — TAGS: SWITCH ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cv560rhiebbg92ngeiw(long *param_1,undefined4 param_2,ulong *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = 5;
  if (((param_1 == (long *)0x0) || (param_3 == (ulong *)0x0)) || (*param_1 == 0)) goto LAB_00264f6c;
  pvVar4 = pthread_getspecific(_DAT_0035b4d4);
  if (pvVar4 == (void *)0x0) {
    local_50 = (void *)0x0;
    if (param_4 < 0x40) {
      lVar7 = *param_1;
      local_50 = pthread_getspecific(_DAT_0035b4d4);
      pvVar4 = local_50;
      if ((local_50 == (void *)0x0) &&
         (uVar3 = FUN_00264384(&local_50,*(undefined4 *)(lVar7 + 0x7c)), pvVar4 = local_50,
         (int)uVar3 != 0)) goto LAB_00264f6c;
      goto LAB_00264e4c;
    }
switchD_00264e90_default:
    uVar3 = 5;
    goto LAB_00264f6c;
  }
LAB_00264e4c:
  puVar6 = *(undefined8 **)((long)pvVar4 + 0x298);
  iVar1 = *(int *)(*param_1 + 0x2d8);
  *(undefined8 *)((long)pvVar4 + 0x80) = *puVar6;
  uVar8 = puVar6[2];
  uVar5 = puVar6[1];
  *(ulong *)((long)pvVar4 + 0x148) = uVar8;
  *(ulong *)((long)pvVar4 + 0x140) = uVar5;
  *(undefined4 *)(param_3 + 2) = param_2;
  switch(param_2) {
  case 1:
  case 0xb:
  case 0xc:
  case 0xe:
    goto switchD_00264e90_caseD_1;
  case 2:
    if (iVar1 != 0) {
      uVar3 = 0;
      *(int *)param_3 = (int)uVar5;
      goto LAB_00264f6c;
    }
  case 9:
    uVar5 = (ulong)*(uint *)((long)pvVar4 + 0x40);
    break;
  case 3:
    if (iVar1 != 0) {
      uVar3 = 0;
      *param_3 = uVar5;
      goto LAB_00264f6c;
    }
    goto switchD_00264e90_caseD_1;
  case 4:
    if (iVar1 != 0) {
      uVar3 = 0;
      param_3[1] = uVar8;
      *param_3 = uVar5;
      goto LAB_00264f6c;
    }
switchD_00264e90_caseD_1:
    uVar5 = *(ulong *)((long)pvVar4 + 0x40);
    break;
  case 5:
    uVar5 = (ulong)*(byte *)((long)pvVar4 + 0x40);
    break;
  case 6:
    uVar5 = (ulong)*(char *)((long)pvVar4 + 0x40);
    break;
  case 7:
    uVar5 = (ulong)*(ushort *)((long)pvVar4 + 0x40);
    break;
  case 8:
    uVar5 = (ulong)*(short *)((long)pvVar4 + 0x40);
    break;
  case 10:
    uVar5 = (ulong)*(int *)((long)pvVar4 + 0x40);
    break;
  case 0xd:
    uVar5 = **(ulong **)((long)pvVar4 + 0x40);
    break;
  default:
    goto switchD_00264e90_default;
  }
  uVar3 = 0;
  *param_3 = uVar5;
LAB_00264f6c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



// === FUN_00285344 @ 00285344 (396B) — TAGS: SWITCH ===

void FUN_00285344(long *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  if ((((param_1 == (long *)0x0) || ((long *)*param_1 == (long *)0x0)) ||
      (lVar3 = *(long *)*param_1, lVar3 == 0)) || ((uint)(*(int *)(lVar3 + 0x44) << 2) < param_2)) {
    uVar2 = 7;
    goto switchD_00285490_caseD_d;
  }
  uVar2 = FUN_0028627c(param_1,&local_60);
  lVar3 = local_60;
  if ((int)uVar2 != 0) goto switchD_00285490_caseD_d;
  lVar4 = *(long *)(local_60 + 0xb0);
  *(long *)(local_60 + 0xb0) = lVar4 + -0x80;
  *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(local_60 + 0x130);
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(local_60 + 0x138);
  *(long *)(local_60 + 0x130) = lVar4;
  *(undefined8 *)(local_60 + 0x138) = *(undefined8 *)(local_60 + 0xb8);
  uVar2 = FUN_00285fac(param_1,local_60,param_3,param_4,param_6);
  if ((int)uVar2 != 0) goto switchD_00285490_caseD_d;
  uVar2 = FUN_00292a94(param_1,param_2,local_60);
  lVar4 = *(long *)(lVar3 + 0x130);
  *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(lVar3 + 0x138);
  *(undefined8 *)(lVar3 + 0x130) = *(undefined8 *)(lVar4 + 0x70);
  uVar5 = *(undefined8 *)(lVar4 + 0x78);
  *(long *)(lVar3 + 0xb0) = lVar4;
  *(undefined8 *)(lVar3 + 0x138) = uVar5;
  if ((((int)uVar2 != 0) || (param_5 == (undefined8 *)0x0)) || (local_60 == 0))
  goto switchD_00285490_caseD_d;
  uVar2 = 0x38;
  switch(*(undefined4 *)(param_5 + 2)) {
  case 1:
    uVar2 = 0;
    *(undefined4 *)param_5 = *(undefined4 *)(local_60 + 0x140);
    break;
  case 2:
    uVar5 = *(undefined8 *)(local_60 + 0x140);
    goto LAB_00285498;
  case 3:
    uVar5 = *(undefined8 *)(local_60 + 0x140);
    uVar2 = 0;
    param_5[1] = *(undefined8 *)(local_60 + 0x148);
    *param_5 = uVar5;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    uVar5 = *(undefined8 *)(local_60 + 0x80);
LAB_00285498:
    uVar2 = 0;
    *param_5 = uVar5;
  }
switchD_00285490_caseD_d:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



// === FUN_00292ccc @ 00292ccc (372B) — TAGS: SWITCH ===

undefined8 FUN_00292ccc(long param_1,long param_2,int *param_3,byte *param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_4 == (byte *)0x0) {
    uVar3 = 7;
switchD_00292da8_caseD_14:
    return uVar3;
  }
  lVar10 = 0;
  bVar1 = false;
LAB_00292d30:
  do {
    pbVar7 = param_4 + 1;
    uVar9 = (ulong)*param_4;
    lVar10 = (long)(int)lVar10;
    while (iVar2 = FUN_00292c90(uVar9), param_4 = pbVar7, iVar2 != 1) {
      if (iVar2 == 3) {
        return 0;
      }
      if ((!bVar1) || (iVar2 != 2)) goto LAB_00292d30;
      uVar4 = 0;
      pbVar8 = pbVar7;
      do {
        lVar5 = uVar4 * 0x3a + uVar9;
        uVar4 = (ulong)(byte)(&DAT_002d867f)[lVar5];
        pbVar7 = pbVar8 + 1;
        uVar9 = (ulong)*pbVar8;
        pbVar8 = pbVar7;
      } while (uVar4 < 9);
      uVar3 = 0x18;
      switch((&DAT_002d867f)[lVar5]) {
      case 9:
      case 0x17:
      case 0x18:
        lVar5 = (long)*param_3;
        puVar6 = PTR_DAT_00315b18;
        break;
      case 10:
      case 0xb:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x15:
      case 0x16:
        lVar5 = (long)*param_3;
        *(long *)(param_2 + lVar5 * 8) = param_5 + lVar10 * 8;
        *(undefined **)(param_1 + lVar5 * 8) = PTR_DAT_00315ae8;
        goto LAB_00292d3c;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x13:
        lVar5 = (long)*param_3;
        puVar6 = PTR_DAT_00315ae8;
        break;
      default:
        goto switchD_00292da8_caseD_14;
      case 0x19:
      case 0x1a:
        lVar5 = (long)*param_3;
        puVar6 = PTR_LAB_00315e00;
      }
      *(undefined **)(param_1 + lVar5 * 8) = puVar6;
      *(long *)(param_2 + lVar5 * 8) = param_5 + lVar10 * 8;
LAB_00292d3c:
      bVar1 = false;
      lVar10 = lVar10 + 1;
      *param_3 = (int)lVar5 + 1;
    }
    bVar1 = true;
  } while( true );
}



// === FUN_001fd21c @ 001fd21c (340B) — TAGS: SWITCH ===

/* WARNING: Type propagation algorithm not settling */

long * FUN_001fd21c(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((~param_2 & 0xff) == 0) {
    return (long *)0x0;
  }
  if (0xc < (param_2 & 0xf)) {
switchD_001fd250_caseD_5:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (uint *)*param_1;
  switch(param_2 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    puVar6 = puVar7 + 2;
    plVar3 = *(long **)puVar7;
    break;
  case 1:
    uVar8 = 0;
    plVar3 = (long *)0x0;
    puVar5 = puVar7;
    do {
      puVar6 = (uint *)((long)puVar5 + 1);
      uVar2 = *puVar5;
      plVar3 = (long *)((ulong)((byte)uVar2 & 0x7f) << (uVar8 & 0x3f) | (ulong)plVar3);
      uVar8 = uVar8 + 7;
      puVar5 = puVar6;
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 2:
    puVar6 = (uint *)((long)puVar7 + 2);
    plVar3 = (long *)(ulong)(ushort)*puVar7;
    break;
  case 3:
    puVar6 = puVar7 + 1;
    plVar3 = (long *)(ulong)*puVar7;
    break;
  default:
    goto switchD_001fd250_caseD_5;
  case 9:
    uVar8 = 0;
    uVar4 = 0;
    puVar5 = puVar7;
    do {
      puVar6 = (uint *)((long)puVar5 + 1);
      bVar1 = (byte)*puVar5;
      uVar4 = (ulong)(bVar1 & 0x7f) << (uVar8 & 0x3f) | uVar4;
      uVar8 = uVar8 + 7;
      puVar5 = puVar6;
    } while ((char)bVar1 < '\0');
    uVar9 = -1L << (uVar8 & 0x3f);
    if (((uint)(uVar8 < 0x40) & (bVar1 & 0x40) >> 6) == 0) {
      uVar9 = 0;
    }
    plVar3 = (long *)(uVar4 | uVar9);
    break;
  case 10:
    puVar6 = (uint *)((long)puVar7 + 2);
    plVar3 = (long *)(long)(short)*puVar7;
    break;
  case 0xb:
    puVar6 = puVar7 + 1;
    plVar3 = (long *)(long)(int)*puVar7;
  }
  uVar2 = param_2 >> 4 & 7;
  if (uVar2 != 0) {
    if (uVar2 != 1) goto switchD_001fd250_caseD_5;
    if (plVar3 == (long *)0x0) goto LAB_001fd2bc;
    plVar3 = (long *)((long)plVar3 + (long)puVar7);
  }
  if (((char)param_2 < '\0') && (plVar3 != (long *)0x0)) {
    plVar3 = (long *)*plVar3;
  }
LAB_001fd2bc:
  *param_1 = puVar6;
  return plVar3;
}



// === FUN_0016e53c @ 0016e53c (332B) — TAGS: CMD_TABLE ===

void FUN_0016e53c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00242634();
  (*(code *)*puVar1)(1,0xe,1,0,FUN_0016e688);
  (*(code *)*puVar1)(1,0xe,2,0,&LAB_0016e770);
  (*(code *)*puVar1)(1,0xe,3,0,PTR_LAB_00315c00);
  (*(code *)*puVar1)(1,0xe,4,0,PTR_FUN_00315ca0);
  (*(code *)*puVar1)(1,0xe,5,0,PTR_FUN_00315a70);
  (*(code *)*puVar1)(1,0xe,6,0,PTR_FUN_00315d98);
  return;
}



// === FUN_002763d0 @ 002763d0 (324B) — TAGS: SWITCH ===

void FUN_002763d0(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined8 *param_5,undefined8 *param_6,code *param_7,
                 undefined8 param_8,undefined8 param_9)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong extraout_x1;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar4;
  ulong extraout_d0;
  ulong extraout_var;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = param_4._8_8_;
  uVar10 = param_4._0_8_;
  uVar9 = param_3._8_8_;
  uVar8 = param_3._0_8_;
  uVar7 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  *param_6 = unaff_x29;
  param_6[1] = unaff_x30;
  param_6[4] = register0x00000008;
  param_6[2] = param_8;
  param_6[3] = param_9;
  if (((uint)param_9 >> 7 & 1) != 0) {
    param_1 = *param_5;
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    uVar9 = param_5[5];
    uVar8 = param_5[4];
    uVar11 = param_5[7];
    uVar10 = param_5[6];
  }
  uVar3 = (*param_7)(param_8,param_1,param_5[0x10],param_5[0x11],param_5[0x12],param_5[0x13],
                     param_5[0x14],param_5[0x15],param_5[0x16],param_5[0x17]);
  puVar1 = (ulong *)param_6[2];
  uVar4 = (undefined4)extraout_d0;
  uVar5 = (undefined4)uVar6;
  switch((uint)param_6[3] & 0x1f) {
  case 0:
    break;
  case 1:
    *puVar1 = uVar3;
    break;
  case 2:
    *puVar1 = uVar3;
    puVar1[1] = extraout_x1;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x27645c);
    (*pcVar2)();
  case 4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x276464);
    (*pcVar2)();
  case 5:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x27646c);
    (*pcVar2)();
  case 6:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x276474);
    (*pcVar2)();
  case 7:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x27647c);
    (*pcVar2)();
  case 8:
    *(undefined4 *)puVar1 = uVar4;
    *(undefined4 *)((long)puVar1 + 4) = uVar5;
    *(int *)(puVar1 + 1) = (int)uVar8;
    *(int *)((long)puVar1 + 0xc) = (int)uVar10;
    break;
  case 9:
    *(undefined4 *)puVar1 = uVar4;
    *(undefined4 *)((long)puVar1 + 4) = uVar5;
    *(int *)(puVar1 + 1) = (int)uVar8;
    break;
  case 10:
    *(undefined4 *)puVar1 = uVar4;
    *(undefined4 *)((long)puVar1 + 4) = uVar5;
    break;
  case 0xb:
    *(undefined4 *)puVar1 = uVar4;
    break;
  case 0xc:
    *puVar1 = extraout_d0;
    puVar1[1] = uVar6;
    puVar1[2] = uVar8;
    puVar1[3] = uVar10;
    break;
  case 0xd:
    *puVar1 = extraout_d0;
    puVar1[1] = uVar6;
    puVar1[2] = uVar8;
    break;
  case 0xe:
    *puVar1 = extraout_d0;
    puVar1[1] = uVar6;
    break;
  case 0xf:
    *puVar1 = extraout_d0;
    break;
  case 0x10:
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
  case 0x11:
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
  case 0x12:
    puVar1[1] = extraout_var;
    *puVar1 = extraout_d0;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    break;
  case 0x13:
    puVar1[1] = extraout_var;
    *puVar1 = extraout_d0;
    break;
  case 0x14:
    *puVar1 = uVar3 & 0xff;
  case 0x15:
    break;
  case 0x16:
    *puVar1 = uVar3 & 0xffff;
  case 0x17:
    break;
  case 0x18:
    *puVar1 = uVar3 & 0xffffffff;
  case 0x19:
    break;
  case 0x1a:
    *puVar1 = (long)(char)uVar3;
  case 0x1b:
    break;
  case 0x1c:
    *puVar1 = (long)(short)uVar3;
  case 0x1d:
    break;
// ... truncated

// === FUN_002889c0 @ 002889c0 (324B) — TAGS: SWITCH ===

void FUN_002889c0(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined8 *param_5,undefined8 *param_6,code *param_7,
                 undefined8 param_8,undefined8 param_9)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong extraout_x1;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar4;
  ulong extraout_d0;
  ulong extraout_var;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = param_4._8_8_;
  uVar10 = param_4._0_8_;
  uVar9 = param_3._8_8_;
  uVar8 = param_3._0_8_;
  uVar7 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  *param_6 = unaff_x29;
  param_6[1] = unaff_x30;
  param_6[4] = register0x00000008;
  param_6[2] = param_8;
  param_6[3] = param_9;
  if (((uint)param_9 >> 7 & 1) != 0) {
    param_1 = *param_5;
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    uVar9 = param_5[5];
    uVar8 = param_5[4];
    uVar11 = param_5[7];
    uVar10 = param_5[6];
  }
  uVar3 = (*param_7)(param_8,param_1,param_5[0x10],param_5[0x11],param_5[0x12],param_5[0x13],
                     param_5[0x14],param_5[0x15],param_5[0x16],param_5[0x17]);
  puVar1 = (ulong *)param_6[2];
  uVar4 = (undefined4)extraout_d0;
  uVar5 = (undefined4)uVar6;
  switch((uint)param_6[3] & 0x1f) {
  case 0:
    break;
  case 1:
    *puVar1 = uVar3;
    break;
  case 2:
    *puVar1 = uVar3;
    puVar1[1] = extraout_x1;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x288a4c);
    (*pcVar2)();
  case 4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x288a54);
    (*pcVar2)();
  case 5:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x288a5c);
    (*pcVar2)();
  case 6:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x288a64);
    (*pcVar2)();
  case 7:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1000,0x288a6c);
    (*pcVar2)();
  case 8:
    *(undefined4 *)puVar1 = uVar4;
    *(undefined4 *)((long)puVar1 + 4) = uVar5;
    *(int *)(puVar1 + 1) = (int)uVar8;
    *(int *)((long)puVar1 + 0xc) = (int)uVar10;
    break;
  case 9:
    *(undefined4 *)puVar1 = uVar4;
    *(undefined4 *)((long)puVar1 + 4) = uVar5;
    *(int *)(puVar1 + 1) = (int)uVar8;
    break;
  case 10:
    *(undefined4 *)puVar1 = uVar4;
    *(undefined4 *)((long)puVar1 + 4) = uVar5;
    break;
  case 0xb:
    *(undefined4 *)puVar1 = uVar4;
    break;
  case 0xc:
    *puVar1 = extraout_d0;
    puVar1[1] = uVar6;
    puVar1[2] = uVar8;
    puVar1[3] = uVar10;
    break;
  case 0xd:
    *puVar1 = extraout_d0;
    puVar1[1] = uVar6;
    puVar1[2] = uVar8;
    break;
  case 0xe:
    *puVar1 = extraout_d0;
    puVar1[1] = uVar6;
    break;
  case 0xf:
    *puVar1 = extraout_d0;
    break;
  case 0x10:
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
  case 0x11:
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
  case 0x12:
    puVar1[1] = extraout_var;
    *puVar1 = extraout_d0;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    break;
  case 0x13:
    puVar1[1] = extraout_var;
    *puVar1 = extraout_d0;
    break;
  case 0x14:
    *puVar1 = uVar3 & 0xff;
  case 0x15:
    break;
  case 0x16:
    *puVar1 = uVar3 & 0xffff;
  case 0x17:
    break;
  case 0x18:
    *puVar1 = uVar3 & 0xffffffff;
  case 0x19:
    break;
  case 0x1a:
    *puVar1 = (long)(char)uVar3;
  case 0x1b:
    break;
  case 0x1c:
    *puVar1 = (long)(short)uVar3;
  case 0x1d:
    break;
// ... truncated

// === FUN_00270e60 @ 00270e60 (288B) — TAGS: SWITCH ===

undefined8 FUN_00270e60(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  puVar5 = *(ulong **)(param_1 + 0x10);
  if (0xf < *(ushort *)((long)puVar5 + 10)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar6 = *(int *)(param_1 + 0x18);
  uVar2 = 0;
  switch(*(ushort *)((long)puVar5 + 10)) {
  case 0:
    break;
  case 1:
  case 10:
    uVar2 = 0x1e;
    break;
  default:
    uVar2 = FUN_00270f80(puVar5);
    if (uVar2 != 0) break;
    uVar4 = *puVar5;
    if (0x10 < uVar4) {
      iVar6 = iVar6 + 8;
      uVar2 = 0x20;
      break;
    }
    if (uVar4 == 0x10) {
      uVar2 = 2;
      break;
    }
    if (uVar4 != 8) {
      uVar2 = 0x42;
      break;
    }
  case 0xb:
  case 0xc:
  case 0xe:
    uVar2 = 1;
    break;
  case 5:
    uVar2 = 0x14;
    break;
  case 6:
    uVar2 = 0x1a;
    break;
  case 7:
    uVar2 = 0x16;
    break;
  case 8:
    uVar2 = 0x1c;
    break;
  case 9:
    uVar2 = 0x18;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = 0;
    do {
      iVar3 = FUN_00270f80(*(undefined8 *)(lVar7 + lVar8 * 8));
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80;
        break;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  *(uint *)(param_1 + 0x18) = (iVar6 - 1U | 0xf) + 1;
  *(uint *)(param_1 + 0x1c) = uVar2;
  return 0;
}



// === FUN_00287d04 @ 00287d04 (288B) — TAGS: SWITCH ===

undefined8 FUN_00287d04(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  puVar5 = *(ulong **)(param_1 + 0x10);
  if (0xf < *(ushort *)((long)puVar5 + 10)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar6 = *(int *)(param_1 + 0x18);
  uVar2 = 0;
  switch(*(ushort *)((long)puVar5 + 10)) {
  case 0:
    break;
  case 1:
  case 10:
    uVar2 = 0x1e;
    break;
  default:
    uVar2 = FUN_00287e24(puVar5);
    if (uVar2 != 0) break;
    uVar4 = *puVar5;
    if (0x10 < uVar4) {
      iVar6 = iVar6 + 8;
      uVar2 = 0x20;
      break;
    }
    if (uVar4 == 0x10) {
      uVar2 = 2;
      break;
    }
    if (uVar4 != 8) {
      uVar2 = 0x42;
      break;
    }
  case 0xb:
  case 0xc:
  case 0xe:
    uVar2 = 1;
    break;
  case 5:
    uVar2 = 0x14;
    break;
  case 6:
    uVar2 = 0x1a;
    break;
  case 7:
    uVar2 = 0x16;
    break;
  case 8:
    uVar2 = 0x1c;
    break;
  case 9:
    uVar2 = 0x18;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = 0;
    do {
      iVar3 = FUN_00287e24(*(undefined8 *)(lVar7 + lVar8 * 8));
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80;
        break;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  *(uint *)(param_1 + 0x18) = (iVar6 - 1U | 0xf) + 1;
  *(uint *)(param_1 + 0x1c) = uVar2;
  return 0;
}



// === FUN_002446a8 @ 002446a8 (284B) — TAGS: SWITCH ===

/* WARNING: Removing unreachable block (ram,0x00244794) */

void FUN_002446a8(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
LAB_002446c8:
    cVar3 = *param_1;
    switch(cVar3) {
    case '\0':
      *pcVar2 = '\0';
      break;
    default:
      param_1 = param_1 + 1;
      pcVar1 = pcVar2 + 1;
      *pcVar2 = cVar3;
      pcVar2 = pcVar1;
      if (cVar3 == '\"') {
        do {
          cVar3 = *param_1;
          if (cVar3 == '\\') {
            pcVar2 = pcVar1 + 1;
            *pcVar1 = '\\';
            param_1 = param_1 + 1;
            cVar3 = *param_1;
          }
          else if ((cVar3 == '\0') || (pcVar2 = pcVar1, cVar3 == '\"')) goto LAB_0024477c;
          param_1 = param_1 + 1;
          pcVar1 = pcVar2 + 1;
          *pcVar2 = cVar3;
        } while( true );
      }
      goto LAB_002446c8;
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      param_1 = param_1 + 1;
      goto LAB_002446c8;
    case '/':
      cVar3 = param_1[1];
      if (cVar3 == '/') {
        cVar3 = '/';
        do {
          if (cVar3 == '\n') break;
          param_1 = param_1 + 1;
          cVar3 = *param_1;
        } while (cVar3 != '\0');
      }
      else if (cVar3 == '*') {
        cVar3 = '/';
        do {
          while (pcVar1 = param_1, cVar3 != '*') {
            if (cVar3 == '\0') goto LAB_00244730;
            param_1 = pcVar1 + 1;
            cVar3 = pcVar1[1];
          }
          cVar3 = pcVar1[1];
          param_1 = pcVar1 + 1;
        } while (cVar3 != '/');
LAB_00244730:
        param_1 = pcVar1 + 2;
      }
      else {
        *pcVar2 = '/';
        param_1 = param_1 + 1;
        pcVar2 = pcVar2 + 1;
      }
      goto LAB_002446c8;
    }
  }
  return;
LAB_0024477c:
  *pcVar1 = cVar3;
  param_1 = param_1 + 1;
  pcVar2 = pcVar1 + 1;
  goto LAB_002446c8;
}



// === FUN_002777bc @ 002777bc (260B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_002777bc(int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  uVar1 = pthread_mutex_lock((pthread_mutex_t *)0x35cd58);
  uVar3 = (ulong)uVar1;
  if (_DAT_0035cd50 == 1) {
LAB_00277830:
    if ((param_1 == 0) && (iVar2 = FUN_002778c0(uVar3), iVar2 != 0)) {
      if (*(int *)(_DAT_0035cd48 + 0x30) == 0) {
        return (long *)0x0;
      }
      plVar7 = *(long **)(_DAT_0035cd48 + 0x28);
      lVar4 = plVar7[2];
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = plVar7[1];
      }
      plVar6 = (long *)plVar7[1];
      if (plVar6 != (long *)0x0) {
        *plVar6 = lVar5;
      }
      if (*(long **)(lVar4 + 0x28) == plVar7) {
        *(long **)(lVar4 + 0x28) = plVar6;
      }
      pthread_mutex_unlock((pthread_mutex_t *)0x35cd58);
      return plVar7;
    }
  }
  else {
    if (_DAT_0035cd50 == 2) goto LAB_002778a0;
    if (PTR_FUN_00315f98 != (undefined *)0x0) {
      _DAT_0035cd48 = 0;
      _DAT_0035cd20 = FUN_00271a18(&DAT_0035cd38,&DAT_0035cd30);
      _DAT_0035cd40 = 0;
      if (_DAT_0035cd38 != 0) {
        _DAT_0035cd40 = (undefined4)(_DAT_0035cd30 / _DAT_0035cd38);
      }
      uVar3 = FUN_002778c0();
      if ((int)uVar3 != 0) {
        _DAT_0035cd50 = 1;
        goto LAB_00277830;
      }
    }
    _DAT_0035cd50 = 2;
  }
LAB_002778a0:
  pthread_mutex_unlock((pthread_mutex_t *)0x35cd58);
  return (long *)0x0;
}



// === FUN_002879cc @ 002879cc (260B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_002879cc(int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  uVar1 = pthread_mutex_lock((pthread_mutex_t *)0x35f3c0);
  uVar3 = (ulong)uVar1;
  if (_DAT_0035f3b8 == 1) {
LAB_00287a40:
    if ((param_1 == 0) && (iVar2 = FUN_00287ad0(uVar3), iVar2 != 0)) {
      if (*(int *)(_DAT_0035f3b0 + 0x30) == 0) {
        return (long *)0x0;
      }
      plVar7 = *(long **)(_DAT_0035f3b0 + 0x28);
      lVar4 = plVar7[2];
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = plVar7[1];
      }
      plVar6 = (long *)plVar7[1];
      if (plVar6 != (long *)0x0) {
        *plVar6 = lVar5;
      }
      if (*(long **)(lVar4 + 0x28) == plVar7) {
        *(long **)(lVar4 + 0x28) = plVar6;
      }
      pthread_mutex_unlock((pthread_mutex_t *)0x35f3c0);
      return plVar7;
    }
  }
  else {
    if (_DAT_0035f3b8 == 2) goto LAB_00287ab0;
    if (PTR_FUN_00315d40 != (undefined *)0x0) {
      _DAT_0035f3b0 = 0;
      _DAT_0035f388 = FUN_002888d4(&DAT_0035f3a0,&DAT_0035f398);
      _DAT_0035f3a8 = 0;
      if (_DAT_0035f3a0 != 0) {
        _DAT_0035f3a8 = (undefined4)(_DAT_0035f398 / _DAT_0035f3a0);
      }
      uVar3 = FUN_00287ad0();
      if ((int)uVar3 != 0) {
        _DAT_0035f3b8 = 1;
        goto LAB_00287a40;
      }
    }
    _DAT_0035f3b8 = 2;
  }
LAB_00287ab0:
  pthread_mutex_unlock((pthread_mutex_t *)0x35f3c0);
  return (long *)0x0;
}



// === FUN_0025c79c @ 0025c79c (240B) — TAGS: SWITCH ===

ulong * FUN_0025c79c(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
    puVar1 = local_8 + 1;
    local_8 = (ulong *)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar1 = param_3 + 1;
      local_8 = (ulong *)*param_3;
      break;
    case 1:
      puVar1 = (ulong *)FUN_0025c734(param_3,&local_8);
      break;
    case 2:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(ulong)(ushort)*param_3;
      break;
    case 3:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(ulong)(uint)*param_3;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 9:
      puVar1 = (ulong *)FUN_0025c75c(param_3,&local_8);
      break;
    case 10:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(long)(short)*param_3;
      break;
    case 0xb:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(long)(int)(uint)*param_3;
    }
    if (local_8 != (ulong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong *)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong *)*local_8;
      }
    }
  }
  *param_4 = (ulong)local_8;
  return puVar1;
}



// === FUN_0025e998 @ 0025e998 (240B) — TAGS: SWITCH ===

ulong * FUN_0025e998(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
    puVar1 = local_8 + 1;
    local_8 = (ulong *)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar1 = param_3 + 1;
      local_8 = (ulong *)*param_3;
      break;
    case 1:
      puVar1 = (ulong *)FUN_0025e680(param_3,&local_8);
      break;
    case 2:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(ulong)(ushort)*param_3;
      break;
    case 3:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(ulong)(uint)*param_3;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 9:
      puVar1 = (ulong *)FUN_0025e6a8(param_3,&local_8);
      break;
    case 10:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(long)(short)*param_3;
      break;
    case 0xb:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(long)(int)(uint)*param_3;
    }
    if (local_8 != (ulong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong *)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong *)*local_8;
      }
    }
  }
  *param_4 = (ulong)local_8;
  return puVar1;
}



// === FUN_00265b00 @ 00265b00 (200B) — TAGS: SWITCH ===

undefined8 FUN_00265b00(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_3 + 10);
  uVar2 = 0xffffffff;
  *(uint *)(param_1 + 2) = (uint)uVar1;
  switch(uVar1) {
  case 0:
    *param_1 = 0;
    break;
  default:
    goto switchD_00265b34_caseD_1;
  case 2:
    if ((param_4 & 1) == 0) {
      *param_1 = (ulong)(uint)*param_2;
      uVar3 = 9;
LAB_00265bbc:
      *(uint *)(param_1 + 2) = uVar3;
    }
    else {
      *(uint *)param_1 = (uint)*param_2;
    }
    break;
  case 3:
    *param_1 = *param_2;
    if ((param_4 & 1) == 0) {
      uVar3 = 0xb;
      goto LAB_00265bbc;
    }
    break;
  case 6:
    *param_1 = (long)(char)*param_2;
  case 5:
    *param_1 = (ulong)(byte)*param_2;
    break;
  case 7:
    *param_1 = (ulong)(ushort)*param_2;
    break;
  case 8:
    *param_1 = (long)(short)*param_2;
    break;
  case 9:
    *param_1 = (ulong)(uint)*param_2;
    break;
  case 10:
    *param_1 = (long)(int)(uint)*param_2;
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    *param_1 = *param_2;
  }
  uVar2 = 1;
switchD_00265b34_caseD_1:
  return uVar2;
}



// === FUN_0026c77c @ 0026c77c (196B) — TAGS: SWITCH ===

undefined8 FUN_0026c77c(undefined1 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(*param_1) {
  case 0:
    return 0x16;
  default:
    uVar1 = 0x18;
switchD_0026c79c_caseD_76:
    return uVar1;
  case 0x2e:
    return 0x17;
  case 0x43:
    return 2;
  case 0x49:
    return 6;
  case 0x4c:
    return 8;
  case 0x53:
    return 4;
  case 0x58:
    return 8;
  case 99:
    return 1;
  case 100:
    return 0xd;
  case 0x66:
    return 0xc;
  case 0x69:
    return 5;
  case 0x6c:
    return 7;
  case 0x70:
    return 0xb;
  case 0x71:
    return 0xe;
  case 0x73:
    return 3;
  case 0x76:
    goto switchD_0026c79c_caseD_76;
  case 0x78:
    return 7;
  case 0x7b:
    return 0x11;
  case 0x7c:
    return 0x15;
  case 0x7d:
    return 0x12;
  }
}



// === FUN_00277710 @ 00277710 (172B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00277710(void)

{
  int iVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)0x35cd58);
  if (_DAT_0035cd50 == 1) {
    uVar2 = 1;
  }
  else if (_DAT_0035cd50 == 2) {
    uVar2 = 0;
  }
  else {
    if (PTR_FUN_00315f98 != (undefined *)0x0) {
      _DAT_0035cd48 = 0;
      _DAT_0035cd20 = FUN_00271a18(&DAT_0035cd38,&DAT_0035cd30);
      _DAT_0035cd40 = 0;
      if (_DAT_0035cd38 != 0) {
        _DAT_0035cd40 = (undefined4)(_DAT_0035cd30 / _DAT_0035cd38);
      }
      iVar1 = FUN_002778c0();
      if (iVar1 != 0) {
        uVar2 = 1;
        _DAT_0035cd50 = 1;
        goto LAB_002777a0;
      }
    }
    uVar2 = 0;
    _DAT_0035cd50 = 2;
  }
LAB_002777a0:
  pthread_mutex_unlock((pthread_mutex_t *)0x35cd58);
  return uVar2;
}



// === FUN_00287920 @ 00287920 (172B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00287920(void)

{
  int iVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)0x35f3c0);
  if (_DAT_0035f3b8 == 1) {
    uVar2 = 1;
  }
  else if (_DAT_0035f3b8 == 2) {
    uVar2 = 0;
  }
  else {
    if (PTR_FUN_00315d40 != (undefined *)0x0) {
      _DAT_0035f3b0 = 0;
      _DAT_0035f388 = FUN_002888d4(&DAT_0035f3a0,&DAT_0035f398);
      _DAT_0035f3a8 = 0;
      if (_DAT_0035f3a0 != 0) {
        _DAT_0035f3a8 = (undefined4)(_DAT_0035f398 / _DAT_0035f3a0);
      }
      iVar1 = FUN_00287ad0();
      if (iVar1 != 0) {
        uVar2 = 1;
        _DAT_0035f3b8 = 1;
        goto LAB_002879b0;
      }
    }
    uVar2 = 0;
    _DAT_0035f3b8 = 2;
  }
LAB_002879b0:
  pthread_mutex_unlock((pthread_mutex_t *)0x35f3c0);
  return uVar2;
}



// === FUN_001c56d4 @ 001c56d4 (128B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c56d4(void)

{
  long lVar1;
  long lVar2;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_44 = 0;
  local_30 = PTR_FUN_00310cf8;
  uStack_38 = _UNK_00310cf0;
  local_40 = _DAT_00310ce8;
  lVar2 = FUN_00242634();
  (**(code **)(lVar2 + 0x10))(1,0x1e,1,0,&local_40,&local_44);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === KEl52mTtCb @ 0013e0d4 (104B) — TAGS: ANTI_DEBUG ===

undefined4 KEl52mTtCb(uint *param_1,uint param_2)

{
  uint local_18;
  uint *local_10;
  
  local_18 = 0;
  local_10 = param_1;
  while( true ) {
    if (param_2 >> 2 <= local_18) {
      return 0;
    }
    if ((*local_10 & 0xffe0001f) == 0xd4200000) break;
    local_10 = local_10 + 1;
    local_18 = local_18 + 1;
  }
  return 1;
}



// === FUN_00261750 @ 00261750 (104B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_00261750(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  do {
    iVar3 = _DAT_00358db8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x358db8,0x10);
    if (bVar2) {
      _DAT_00358db8 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
    pthread_mutexattr_init((pthread_mutexattr_t *)0x358dc0);
    pthread_mutexattr_settype((pthread_mutexattr_t *)0x358dc0,1);
    pthread_mutex_init((pthread_mutex_t *)0x358dc8,(pthread_mutexattr_t *)0x358dc0);
  }
  return &PTR_FUN_00316cc0;
}



// === FUN_00282e78 @ 00282e78 (104B) — TAGS: CMD_TABLE ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_00282e78(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  do {
    iVar3 = _DAT_0035cdd8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x35cdd8,0x10);
    if (bVar2) {
      _DAT_0035cdd8 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
    pthread_mutexattr_init((pthread_mutexattr_t *)0x35cde0);
    pthread_mutexattr_settype((pthread_mutexattr_t *)0x35cde0,1);
    pthread_mutex_init((pthread_mutex_t *)0x35cde8,(pthread_mutexattr_t *)0x35cde0);
  }
  return &PTR_FUN_00319c28;
}


