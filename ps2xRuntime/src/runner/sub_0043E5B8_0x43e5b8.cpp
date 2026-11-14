#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043E5B8
// Address: 0x43e5b8 - 0x43e950
void sub_0043E5B8_0x43e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E5B8_0x43e5b8");
#endif

    switch (ctx->pc) {
        case 0x43e828u: goto label_43e828;
        case 0x43e868u: goto label_43e868;
        case 0x43e920u: goto label_43e920;
        default: break;
    }

    ctx->pc = 0x43e5b8u;

    // 0x43e5b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x43e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x43e5bc: 0x3c066c0d  lui         $a2, 0x6C0D
    ctx->pc = 0x43e5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27661 << 16));
    // 0x43e5c0: 0x34c603f0  ori         $a2, $a2, 0x3F0
    ctx->pc = 0x43e5c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1008);
    // 0x43e5c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x43e5c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x43e5c8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x43e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x43e5cc: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x43e5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x43e5d0: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x43e5d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x43e5d4: 0x3673000d  ori         $s3, $s3, 0xD
    ctx->pc = 0x43e5d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)13);
    // 0x43e5d8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x43e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x43e5dc: 0x70d31389  pcpyld      $v0, $a2, $s3
    ctx->pc = 0x43e5dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 19)));
    // 0x43e5e0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x43e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x43e5e4: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x43e5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x43e5e8: 0x36730003  ori         $s3, $s3, 0x3
    ctx->pc = 0x43e5e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
    // 0x43e5ec: 0x3c066c03  lui         $a2, 0x6C03
    ctx->pc = 0x43e5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27651 << 16));
    // 0x43e5f0: 0x34c603f9  ori         $a2, $a2, 0x3F9
    ctx->pc = 0x43e5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1017);
    // 0x43e5f4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x43e5f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x43e5f8: 0x70d31b89  pcpyld      $v1, $a2, $s3
    ctx->pc = 0x43e5f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 19)));
    // 0x43e5fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x43e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x43e600: 0x3c133000  lui         $s3, 0x3000
    ctx->pc = 0x43e600u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)12288 << 16));
    // 0x43e604: 0x36734000  ori         $s3, $s3, 0x4000
    ctx->pc = 0x43e604u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16384);
    // 0x43e608: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x43e608u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x43e60c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x43e60cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x43e610: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x43e610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x43e614: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x43e614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x43e618: 0x70d32389  pcpyld      $a0, $a2, $s3
    ctx->pc = 0x43e618u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 19)));
    // 0x43e61c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x43e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x43e620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43e620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e624: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x43e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x43e628: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x43e628u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x43e62c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x43e62cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x43e630: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x43e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x43e634: 0x70533b89  pcpyld      $a3, $v0, $s3
    ctx->pc = 0x43e634u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e638: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x43e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x43e63c: 0x3c136000  lui         $s3, 0x6000
    ctx->pc = 0x43e63cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)24576 << 16));
    // 0x43e640: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x43e640u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x43e644: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x43e644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x43e648: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x43e648u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
    // 0x43e64c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x43e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x43e650: 0x2508d640  addiu       $t0, $t0, -0x29C0
    ctx->pc = 0x43e650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956608));
    // 0x43e654: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x43e654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x43e658: 0x3c0a005e  lui         $t2, 0x5E
    ctx->pc = 0x43e658u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)94 << 16));
    // 0x43e65c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x43e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x43e660: 0x7053f389  pcpyld      $fp, $v0, $s3
    ctx->pc = 0x43e660u;
    SET_GPR_VEC(ctx, 30, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e664: 0x8f83ae10  lw          $v1, -0x51F0($gp)
    ctx->pc = 0x43e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946320)));
    // 0x43e668: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x43e668u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x43e66c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x43e66cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x43e670: 0xc7808074  lwc1        $f0, -0x7F8C($gp)
    ctx->pc = 0x43e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x43e674: 0x254ad5d0  addiu       $t2, $t2, -0x2A30
    ctx->pc = 0x43e674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956496));
    // 0x43e678: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x43e678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43e67c: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x43e67cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
    // 0x43e680: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x43e680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x43e684: 0x256bd5a0  addiu       $t3, $t3, -0x2A60
    ctx->pc = 0x43e684u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956448));
    // 0x43e688: 0x51843  sra         $v1, $a1, 1
    ctx->pc = 0x43e688u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
    // 0x43e68c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x43e68cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x43e690: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x43e690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x43e694: 0x62043  sra         $a0, $a2, 1
    ctx->pc = 0x43e694u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x43e698: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x43e698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x43e69c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x43e69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x43e6a0: 0x70531b89  pcpyld      $v1, $v0, $s3
    ctx->pc = 0x43e6a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e6a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x43e6a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43e6a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x43e6a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x43e6ac: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x43e6acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x43e6b0: 0x3673000a  ori         $s3, $s3, 0xA
    ctx->pc = 0x43e6b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)10);
    // 0x43e6b4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x43e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x43e6b8: 0x7053cb89  pcpyld      $t9, $v0, $s3
    ctx->pc = 0x43e6b8u;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e6bc: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x43e6bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x43e6c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x43e6c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x43e6c4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x43e6c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x43e6c8: 0x3c131500  lui         $s3, 0x1500
    ctx->pc = 0x43e6c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5376 << 16));
    // 0x43e6cc: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e6ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e6d0: 0x36731100  ori         $s3, $s3, 0x1100
    ctx->pc = 0x43e6d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4352);
    // 0x43e6d4: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e6d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e6d8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x43e6d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x43e6dc: 0x7053c389  pcpyld      $t8, $v0, $s3
    ctx->pc = 0x43e6dcu;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e6e0: 0x3c131700  lui         $s3, 0x1700
    ctx->pc = 0x43e6e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5888 << 16));
    // 0x43e6e4: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e6e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e6e8: 0x36731000  ori         $s3, $s3, 0x1000
    ctx->pc = 0x43e6e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4096);
    // 0x43e6ec: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e6ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e6f0: 0x3c1e005e  lui         $fp, 0x5E
    ctx->pc = 0x43e6f0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
    // 0x43e6f4: 0x7053bb89  pcpyld      $s7, $v0, $s3
    ctx->pc = 0x43e6f4u;
    SET_GPR_VEC(ctx, 23, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e6f8: 0x27c4d730  addiu       $a0, $fp, -0x28D0
    ctx->pc = 0x43e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956848));
    // 0x43e6fc: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x43e6fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x43e700: 0x3c131100  lui         $s3, 0x1100
    ctx->pc = 0x43e700u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4352 << 16));
    // 0x43e704: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x43e704u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e708: 0x7262b389  pcpyld      $s6, $s3, $v0
    ctx->pc = 0x43e708u;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 2)));
    // 0x43e70c: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x43e70cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x43e710: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x43e710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x43e714: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x43e714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x43e718: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x43e718u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x43e71c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x43e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x43e720: 0x24c6d750  addiu       $a2, $a2, -0x28B0
    ctx->pc = 0x43e720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956880));
    // 0x43e724: 0x7cde0000  sq          $fp, 0x0($a2)
    ctx->pc = 0x43e724u;
    do { __m128i _value = (GPR_VEC(ctx, 30)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD750u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD750u, _value); } while (0);
    // 0x43e728: 0x7053a389  pcpyld      $s4, $v0, $s3
    ctx->pc = 0x43e728u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e72c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x43e72cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e730: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e734: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x43e734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x43e738: 0x3c130200  lui         $s3, 0x200
    ctx->pc = 0x43e738u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)512 << 16));
    // 0x43e73c: 0x367301e1  ori         $s3, $s3, 0x1E1
    ctx->pc = 0x43e73cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)481);
    // 0x43e740: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e740u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e744: 0x36730300  ori         $s3, $s3, 0x300
    ctx->pc = 0x43e744u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)768);
    // 0x43e748: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e748u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e74c: 0x2465d720  addiu       $a1, $v1, -0x28E0
    ctx->pc = 0x43e74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956832));
    // 0x43e750: 0x70539b89  pcpyld      $s3, $v0, $s3
    ctx->pc = 0x43e750u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x43e754: 0x24e7d740  addiu       $a3, $a3, -0x28C0
    ctx->pc = 0x43e754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956864));
    // 0x43e758: 0x26a3d6b0  addiu       $v1, $s5, -0x2950
    ctx->pc = 0x43e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956720));
    // 0x43e75c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x43e75cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x43e760: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x43e760u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x43e764: 0xe6a4d6b0  swc1        $f4, -0x2950($s5)
    ctx->pc = 0x43e764u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294956720), bits); }
    // 0x43e768: 0x3c0c005e  lui         $t4, 0x5E
    ctx->pc = 0x43e768u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)94 << 16));
    // 0x43e76c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e770: 0x258cd5c0  addiu       $t4, $t4, -0x2A40
    ctx->pc = 0x43e770u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956480));
    // 0x43e774: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x43e774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x43e778: 0x3c0d005e  lui         $t5, 0x5E
    ctx->pc = 0x43e778u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)94 << 16));
    // 0x43e77c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x43e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x43e780: 0x25add5b0  addiu       $t5, $t5, -0x2A50
    ctx->pc = 0x43e780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956464));
    // 0x43e784: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x43e784u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e788: 0x3c0e005e  lui         $t6, 0x5E
    ctx->pc = 0x43e788u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)94 << 16));
    // 0x43e78c: 0x3c0f005e  lui         $t7, 0x5E
    ctx->pc = 0x43e78cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)94 << 16));
    // 0x43e790: 0x25ced590  addiu       $t6, $t6, -0x2A70
    ctx->pc = 0x43e790u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294956432));
    // 0x43e794: 0x7d5e0000  sq          $fp, 0x0($t2)
    ctx->pc = 0x43e794u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 30));
    // 0x43e798: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x43e798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x43e79c: 0x3c1e005e  lui         $fp, 0x5E
    ctx->pc = 0x43e79cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
    // 0x43e7a0: 0xc780807c  lwc1        $f0, -0x7F84($gp)
    ctx->pc = 0x43e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x43e7a4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x43e7a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43e7a8: 0x25efd620  addiu       $t7, $t7, -0x29E0
    ctx->pc = 0x43e7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956576));
    // 0x43e7ac: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x43e7acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x43e7b0: 0x2610d580  addiu       $s0, $s0, -0x2A80
    ctx->pc = 0x43e7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956416));
    // 0x43e7b4: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x43e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x43e7b8: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x43e7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x43e7bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x43e7c0: 0x2631d700  addiu       $s1, $s1, -0x2900
    ctx->pc = 0x43e7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956800));
    // 0x43e7c4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x43e7c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43e7c8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x43e7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x43e7cc: 0x2652d710  addiu       $s2, $s2, -0x28F0
    ctx->pc = 0x43e7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956816));
    // 0x43e7d0: 0x2529d6f0  addiu       $t1, $t1, -0x2910
    ctx->pc = 0x43e7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956784));
    // 0x43e7d4: 0x7d830000  sq          $v1, 0x0($t4)
    ctx->pc = 0x43e7d4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD5C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD5C0u, _value); } while (0);
    // 0x43e7d8: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x43e7d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
    // 0x43e7dc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x43e7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x43e7e0: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x43e7e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43e7e4: 0x7da60000  sq          $a2, 0x0($t5)
    ctx->pc = 0x43e7e4u;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD5B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD5B0u, _value); } while (0);
    // 0x43e7e8: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x43e7e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x43e7ec: 0x7dd90000  sq          $t9, 0x0($t6)
    ctx->pc = 0x43e7ecu;
    do { __m128i _value = (GPR_VEC(ctx, 25)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD590u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD590u, _value); } while (0);
    // 0x43e7f0: 0xe7c2d730  swc1        $f2, -0x28D0($fp)
    ctx->pc = 0x43e7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD730u, _value); } while (0); }
    // 0x43e7f4: 0x7df80000  sq          $t8, 0x0($t7)
    ctx->pc = 0x43e7f4u;
    do { __m128i _value = (GPR_VEC(ctx, 24)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD620u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD620u, _value); } while (0);
    // 0x43e7f8: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x43e7f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x43e7fc: 0xe440d720  swc1        $f0, -0x28E0($v0)
    ctx->pc = 0x43e7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD720u, _value); } while (0); }
    // 0x43e800: 0x7e170000  sq          $s7, 0x0($s0)
    ctx->pc = 0x43e800u;
    do { __m128i _value = (GPR_VEC(ctx, 23)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD580u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD580u, _value); } while (0);
    // 0x43e804: 0x7e360000  sq          $s6, 0x0($s1)
    ctx->pc = 0x43e804u;
    do { __m128i _value = (GPR_VEC(ctx, 22)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD700u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD700u, _value); } while (0);
    // 0x43e808: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x43e808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x43e80c: 0x7e540000  sq          $s4, 0x0($s2)
    ctx->pc = 0x43e80cu;
    do { __m128i _value = (GPR_VEC(ctx, 20)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD710u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD710u, _value); } while (0);
    // 0x43e810: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x43e810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x43e814: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x43e814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x43e818: 0x7d330000  sq          $s3, 0x0($t1)
    ctx->pc = 0x43e818u;
    do { __m128i _value = (GPR_VEC(ctx, 19)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD6F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD6F0u, _value); } while (0);
    // 0x43e81c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x43e81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x43e820: 0xaf80aeec  sw          $zero, -0x5114($gp)
    ctx->pc = 0x43e820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946540), GPR_U32(ctx, 0));
    // 0x43e824: 0x0  nop
    ctx->pc = 0x43e824u;
    // NOP
label_43e828:
    // 0x43e828: 0x8f86aeec  lw          $a2, -0x5114($gp)
    ctx->pc = 0x43e828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946540)));
    // 0x43e82c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x43e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x43e830: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x43e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43e834: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x43e834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x43e838: 0x872818  mult        $a1, $a0, $a3
    ctx->pc = 0x43e838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x43e83c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x43e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x43e840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43e844: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x43e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x43e848: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x43e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x43e84c: 0x2c4201ff  sltiu       $v0, $v0, 0x1FF
    ctx->pc = 0x43e84cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x43e850: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x43E850u;
    {
        const bool branch_taken_0x43e850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E850u;
        // 0x43e854: 0xaf84aeec  sw          $a0, -0x5114($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e850) {
            ctx->pc = 0x43E828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43e828;
        }
    }
    ctx->pc = 0x43E858u;
    // 0x43e858: 0xaf86aeec  sw          $a2, -0x5114($gp)
    ctx->pc = 0x43e858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946540), GPR_U32(ctx, 6));
    // 0x43e85c: 0xaf80aee8  sw          $zero, -0x5118($gp)
    ctx->pc = 0x43e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946536), GPR_U32(ctx, 0));
    // 0x43e860: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x43e860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x43e864: 0x0  nop
    ctx->pc = 0x43e864u;
    // NOP
label_43e868:
    // 0x43e868: 0x8f88aee8  lw          $t0, -0x5118($gp)
    ctx->pc = 0x43e868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
    // 0x43e86c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x43e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x43e870: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x43e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e874: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x43e874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x43e878: 0x862818  mult        $a1, $a0, $a2
    ctx->pc = 0x43e878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x43e87c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x43e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x43e880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43e884: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x43e884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x43e888: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x43e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x43e88c: 0x2c4201ff  sltiu       $v0, $v0, 0x1FF
    ctx->pc = 0x43e88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x43e890: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x43E890u;
    {
        const bool branch_taken_0x43e890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E890u;
        // 0x43e894: 0xaf84aee8  sw          $a0, -0x5118($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e890) {
            ctx->pc = 0x43E868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43e868;
        }
    }
    ctx->pc = 0x43E898u;
    // 0x43e898: 0x3c131100  lui         $s3, 0x1100
    ctx->pc = 0x43e898u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4352 << 16));
    // 0x43e89c: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e89cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e8a0: 0x36731100  ori         $s3, $s3, 0x1100
    ctx->pc = 0x43e8a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4352);
    // 0x43e8a4: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x43e8a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x43e8a8: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x43e8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x43e8ac: 0x70d32b89  pcpyld      $a1, $a2, $s3
    ctx->pc = 0x43e8acu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 19)));
    // 0x43e8b0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x43e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x43e8b4: 0x3c131100  lui         $s3, 0x1100
    ctx->pc = 0x43e8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4352 << 16));
    // 0x43e8b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43e8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e8bc: 0x70d33b89  pcpyld      $a3, $a2, $s3
    ctx->pc = 0x43e8bcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 19)));
    // 0x43e8c0: 0x2484d5f0  addiu       $a0, $a0, -0x2A10
    ctx->pc = 0x43e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956528));
    // 0x43e8c4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e8c8: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x43e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x43e8cc: 0x2463d630  addiu       $v1, $v1, -0x29D0
    ctx->pc = 0x43e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
    // 0x43e8d0: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x43e8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x43e8d4: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x43e8d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x43e8d8: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x43e8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x43e8dc: 0x34c603d4  ori         $a2, $a2, 0x3D4
    ctx->pc = 0x43e8dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)980);
    // 0x43e8e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x43e8e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x43e8e4: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x43e8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x43e8e8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x43e8e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x43e8ec: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x43e8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x43e8f0: 0x26a2d610  addiu       $v0, $s5, -0x29F0
    ctx->pc = 0x43e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956560));
    // 0x43e8f4: 0xaf88aee8  sw          $t0, -0x5118($gp)
    ctx->pc = 0x43e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946536), GPR_U32(ctx, 8));
    // 0x43e8f8: 0x70d33389  pcpyld      $a2, $a2, $s3
    ctx->pc = 0x43e8f8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 19)));
    // 0x43e8fc: 0xaea0d610  sw          $zero, -0x29F0($s5)
    ctx->pc = 0x43e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294956560), GPR_U32(ctx, 0));
    // 0x43e900: 0x2445008f  addiu       $a1, $v0, 0x8F
    ctx->pc = 0x43e900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 143));
    // 0x43e904: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x43e904u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x43e908: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x43e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x43e90c: 0x7c46fff0  sq          $a2, -0x10($v0)
    ctx->pc = 0x43e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_VEC(ctx, 6));
    // 0x43e910: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x43e910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x43e914: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x43e914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x43e918: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43E918u;
    SET_GPR_U32(ctx, 31, 0x43E920u);
    ctx->pc = 0x43E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E918u;
    // 0x43e91c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43E918u, 0x43E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E920u;
label_43e920:
    // 0x43e920: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x43e920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x43e924: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x43e924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x43e928: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x43e928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x43e92c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x43e92cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x43e930: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x43e930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x43e934: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x43e934u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x43e938: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x43e938u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x43e93c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x43e93cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x43e940: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x43e940u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x43e944: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x43e944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43e948: 0x3e00008  jr          $ra
    ctx->pc = 0x43E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E948u;
        // 0x43e94c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E950u;
}
