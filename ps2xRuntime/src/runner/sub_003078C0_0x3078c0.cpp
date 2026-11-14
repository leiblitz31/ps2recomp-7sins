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

// Function: sub_003078C0
// Address: 0x3078c0 - 0x307b00
void sub_003078C0_0x3078c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003078C0_0x3078c0");
#endif

    switch (ctx->pc) {
        case 0x3078c0u: goto label_3078c0;
        case 0x3078c4u: goto label_3078c4;
        case 0x3078c8u: goto label_3078c8;
        case 0x3078ccu: goto label_3078cc;
        case 0x3078d0u: goto label_3078d0;
        case 0x3078d4u: goto label_3078d4;
        case 0x3078d8u: goto label_3078d8;
        case 0x3078dcu: goto label_3078dc;
        case 0x3078e0u: goto label_3078e0;
        case 0x3078e4u: goto label_3078e4;
        case 0x3078e8u: goto label_3078e8;
        case 0x3078ecu: goto label_3078ec;
        case 0x3078f0u: goto label_3078f0;
        case 0x3078f4u: goto label_3078f4;
        case 0x3078f8u: goto label_3078f8;
        case 0x3078fcu: goto label_3078fc;
        case 0x307900u: goto label_307900;
        case 0x307904u: goto label_307904;
        case 0x307908u: goto label_307908;
        case 0x30790cu: goto label_30790c;
        case 0x307910u: goto label_307910;
        case 0x307914u: goto label_307914;
        case 0x307918u: goto label_307918;
        case 0x30791cu: goto label_30791c;
        case 0x307920u: goto label_307920;
        case 0x307924u: goto label_307924;
        case 0x307928u: goto label_307928;
        case 0x30792cu: goto label_30792c;
        case 0x307930u: goto label_307930;
        case 0x307934u: goto label_307934;
        case 0x307938u: goto label_307938;
        case 0x30793cu: goto label_30793c;
        case 0x307940u: goto label_307940;
        case 0x307944u: goto label_307944;
        case 0x307948u: goto label_307948;
        case 0x30794cu: goto label_30794c;
        case 0x307950u: goto label_307950;
        case 0x307954u: goto label_307954;
        case 0x307958u: goto label_307958;
        case 0x30795cu: goto label_30795c;
        case 0x307960u: goto label_307960;
        case 0x307964u: goto label_307964;
        case 0x307968u: goto label_307968;
        case 0x30796cu: goto label_30796c;
        case 0x307970u: goto label_307970;
        case 0x307974u: goto label_307974;
        case 0x307978u: goto label_307978;
        case 0x30797cu: goto label_30797c;
        case 0x307980u: goto label_307980;
        case 0x307984u: goto label_307984;
        case 0x307988u: goto label_307988;
        case 0x30798cu: goto label_30798c;
        case 0x307990u: goto label_307990;
        case 0x307994u: goto label_307994;
        case 0x307998u: goto label_307998;
        case 0x30799cu: goto label_30799c;
        case 0x3079a0u: goto label_3079a0;
        case 0x3079a4u: goto label_3079a4;
        case 0x3079a8u: goto label_3079a8;
        case 0x3079acu: goto label_3079ac;
        case 0x3079b0u: goto label_3079b0;
        case 0x3079b4u: goto label_3079b4;
        case 0x3079b8u: goto label_3079b8;
        case 0x3079bcu: goto label_3079bc;
        case 0x3079c0u: goto label_3079c0;
        case 0x3079c4u: goto label_3079c4;
        case 0x3079c8u: goto label_3079c8;
        case 0x3079ccu: goto label_3079cc;
        case 0x3079d0u: goto label_3079d0;
        case 0x3079d4u: goto label_3079d4;
        case 0x3079d8u: goto label_3079d8;
        case 0x3079dcu: goto label_3079dc;
        case 0x3079e0u: goto label_3079e0;
        case 0x3079e4u: goto label_3079e4;
        case 0x3079e8u: goto label_3079e8;
        case 0x3079ecu: goto label_3079ec;
        case 0x3079f0u: goto label_3079f0;
        case 0x3079f4u: goto label_3079f4;
        case 0x3079f8u: goto label_3079f8;
        case 0x3079fcu: goto label_3079fc;
        case 0x307a00u: goto label_307a00;
        case 0x307a04u: goto label_307a04;
        case 0x307a08u: goto label_307a08;
        case 0x307a0cu: goto label_307a0c;
        case 0x307a10u: goto label_307a10;
        case 0x307a14u: goto label_307a14;
        case 0x307a18u: goto label_307a18;
        case 0x307a1cu: goto label_307a1c;
        case 0x307a20u: goto label_307a20;
        case 0x307a24u: goto label_307a24;
        case 0x307a28u: goto label_307a28;
        case 0x307a2cu: goto label_307a2c;
        case 0x307a30u: goto label_307a30;
        case 0x307a34u: goto label_307a34;
        case 0x307a38u: goto label_307a38;
        case 0x307a3cu: goto label_307a3c;
        case 0x307a40u: goto label_307a40;
        case 0x307a44u: goto label_307a44;
        case 0x307a48u: goto label_307a48;
        case 0x307a4cu: goto label_307a4c;
        case 0x307a50u: goto label_307a50;
        case 0x307a54u: goto label_307a54;
        case 0x307a58u: goto label_307a58;
        case 0x307a5cu: goto label_307a5c;
        case 0x307a60u: goto label_307a60;
        case 0x307a64u: goto label_307a64;
        case 0x307a68u: goto label_307a68;
        case 0x307a6cu: goto label_307a6c;
        case 0x307a70u: goto label_307a70;
        case 0x307a74u: goto label_307a74;
        case 0x307a78u: goto label_307a78;
        case 0x307a7cu: goto label_307a7c;
        case 0x307a80u: goto label_307a80;
        case 0x307a84u: goto label_307a84;
        case 0x307a88u: goto label_307a88;
        case 0x307a8cu: goto label_307a8c;
        case 0x307a90u: goto label_307a90;
        case 0x307a94u: goto label_307a94;
        case 0x307a98u: goto label_307a98;
        case 0x307a9cu: goto label_307a9c;
        case 0x307aa0u: goto label_307aa0;
        case 0x307aa4u: goto label_307aa4;
        case 0x307aa8u: goto label_307aa8;
        case 0x307aacu: goto label_307aac;
        case 0x307ab0u: goto label_307ab0;
        case 0x307ab4u: goto label_307ab4;
        case 0x307ab8u: goto label_307ab8;
        case 0x307abcu: goto label_307abc;
        case 0x307ac0u: goto label_307ac0;
        case 0x307ac4u: goto label_307ac4;
        case 0x307ac8u: goto label_307ac8;
        case 0x307accu: goto label_307acc;
        case 0x307ad0u: goto label_307ad0;
        case 0x307ad4u: goto label_307ad4;
        case 0x307ad8u: goto label_307ad8;
        case 0x307adcu: goto label_307adc;
        case 0x307ae0u: goto label_307ae0;
        case 0x307ae4u: goto label_307ae4;
        case 0x307ae8u: goto label_307ae8;
        case 0x307aecu: goto label_307aec;
        case 0x307af0u: goto label_307af0;
        case 0x307af4u: goto label_307af4;
        case 0x307af8u: goto label_307af8;
        case 0x307afcu: goto label_307afc;
        default: break;
    }

    ctx->pc = 0x3078c0u;

label_3078c0:
    // 0x3078c0: 0x3c1a0061  lui         $k0, 0x61
    ctx->pc = 0x3078c0u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)97 << 16));
label_3078c4:
    // 0x3078c4: 0x275a3fc0  addiu       $k0, $k0, 0x3FC0
    ctx->pc = 0x3078c4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 16320));
label_3078c8:
    // 0x3078c8: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x3078c8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_3078cc:
    // 0x3078cc: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x3078ccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_3078d0:
    // 0x3078d0: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x3078d0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_3078d4:
    // 0x3078d4: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x3078d4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_3078d8:
    // 0x3078d8: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x3078d8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_3078dc:
    // 0x3078dc: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x3078dcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_3078e0:
    // 0x3078e0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x3078e0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_3078e4:
    // 0x3078e4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x3078e4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_3078e8:
    // 0x3078e8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x3078e8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_3078ec:
    // 0x3078ec: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x3078ecu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_3078f0:
    // 0x3078f0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x3078f0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_3078f4:
    // 0x3078f4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x3078f4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_3078f8:
    // 0x3078f8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x3078f8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_3078fc:
    // 0x3078fc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x3078fcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_307900:
    // 0x307900: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x307900u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_307904:
    // 0x307904: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x307904u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_307908:
    // 0x307908: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x307908u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_30790c:
    // 0x30790c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x30790cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_307910:
    // 0x307910: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x307910u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_307914:
    // 0x307914: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x307914u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_307918:
    // 0x307918: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x307918u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_30791c:
    // 0x30791c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x30791cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_307920:
    // 0x307920: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x307920u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_307924:
    // 0x307924: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x307924u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_307928:
    // 0x307928: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x307928u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_30792c:
    // 0x30792c: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x30792cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_307930:
    // 0x307930: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x307930u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_307934:
    // 0x307934: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x307934u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_307938:
    // 0x307938: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x307938u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_30793c:
    // 0x30793c: 0x1010  mfhi        $v0
    ctx->pc = 0x30793cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_307940:
    // 0x307940: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307944:
    // 0x307944: 0xfc2241c0  sd          $v0, 0x41C0($at)
    ctx->pc = 0x307944u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16832), GPR_U64(ctx, 2));
label_307948:
    // 0x307948: 0x70001010  mfhi1       $v0
    ctx->pc = 0x307948u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_30794c:
    // 0x30794c: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x30794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307950:
    // 0x307950: 0xfc2241c8  sd          $v0, 0x41C8($at)
    ctx->pc = 0x307950u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16840), GPR_U64(ctx, 2));
label_307954:
    // 0x307954: 0x1012  mflo        $v0
    ctx->pc = 0x307954u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_307958:
    // 0x307958: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_30795c:
    // 0x30795c: 0xfc2241d0  sd          $v0, 0x41D0($at)
    ctx->pc = 0x30795cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16848), GPR_U64(ctx, 2));
label_307960:
    // 0x307960: 0x70001012  mflo1       $v0
    ctx->pc = 0x307960u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_307964:
    // 0x307964: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307968:
    // 0x307968: 0xfc2241d8  sd          $v0, 0x41D8($at)
    ctx->pc = 0x307968u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16856), GPR_U64(ctx, 2));
label_30796c:
    // 0x30796c: 0x1028  mfsa        $v0
    ctx->pc = 0x30796cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_307970:
    // 0x307970: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307974:
    // 0x307974: 0xfc2241e0  sd          $v0, 0x41E0($at)
    ctx->pc = 0x307974u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16864), GPR_U64(ctx, 2));
label_307978:
    // 0x307978: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x307978u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_30797c:
    // 0x30797c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x30797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_307980:
    // 0x307980: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x307980u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_307984:
    // 0x307984: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x307984u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_307988:
    // 0x307988: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x307988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_30798c:
    // 0x30798c: 0x25083fc0  addiu       $t0, $t0, 0x3FC0
    ctx->pc = 0x30798cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16320));
label_307990:
    // 0x307990: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x307990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
label_307994:
    // 0x307994: 0xac2641e8  sw          $a2, 0x41E8($at)
    ctx->pc = 0x307994u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16872), GPR_U32(ctx, 6));
label_307998:
    // 0x307998: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x307998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_30799c:
    // 0x30799c: 0x242179c0  addiu       $at, $at, 0x79C0
    ctx->pc = 0x30799cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31168));
label_3079a0:
    // 0x3079a0: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x3079a0u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_3079a4:
    // 0x3079a4: 0x40f  sync.p
    ctx->pc = 0x3079a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3079a8:
    // 0x3079a8: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x3079a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_3079ac:
    // 0x3079ac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3079acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3079b0:
    // 0x3079b0: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x3079b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_3079b4:
    // 0x3079b4: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x3079b4u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_3079b8:
    // 0x3079b8: 0x40f  sync.p
    ctx->pc = 0x3079b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3079bc:
    // 0x3079bc: 0x42000018  eret
    ctx->pc = 0x3079bcu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_3079c0:
    // 0x3079c0: 0x3c01004f  lui         $at, 0x4F
    ctx->pc = 0x3079c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)79 << 16));
label_3079c4:
    // 0x3079c4: 0x8c210f78  lw          $at, 0xF78($at)
    ctx->pc = 0x3079c4u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3960)));
label_3079c8:
    // 0x3079c8: 0x3c1d0061  lui         $sp, 0x61
    ctx->pc = 0x3079c8u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)97 << 16));
label_3079cc:
    // 0x3079cc: 0x20f809  jalr        $at
label_3079d0:
    if (ctx->pc == 0x3079D0u) {
        ctx->pc = 0x3079D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079CCu;
        // 0x3079d0: 0x27bd3fc0  addiu       $sp, $sp, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3079D4u;
        goto label_3079d4;
    }
    ctx->pc = 0x3079CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x3079D4u);
        ctx->pc = 0x3079D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079CCu;
        // 0x3079d0: 0x27bd3fc0  addiu       $sp, $sp, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3079CCu, 0x3079D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3079D4u;
label_3079d4:
    // 0x3079d4: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x3079d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_3079d8:
    // 0x3079d8: 0xc  syscall     0
    ctx->pc = 0x3079d8u;
    ctx->pc = 0x3079DCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3079dc:
    // 0x3079dc: 0x0  nop
    ctx->pc = 0x3079dcu;
    // NOP
label_3079e0:
    // 0x3079e0: 0x0  nop
    ctx->pc = 0x3079e0u;
    // NOP
label_3079e4:
    // 0x3079e4: 0x0  nop
    ctx->pc = 0x3079e4u;
    // NOP
label_3079e8:
    // 0x3079e8: 0x0  nop
    ctx->pc = 0x3079e8u;
    // NOP
label_3079ec:
    // 0x3079ec: 0x0  nop
    ctx->pc = 0x3079ecu;
    // NOP
label_3079f0:
    // 0x3079f0: 0x0  nop
    ctx->pc = 0x3079f0u;
    // NOP
label_3079f4:
    // 0x3079f4: 0x0  nop
    ctx->pc = 0x3079f4u;
    // NOP
label_3079f8:
    // 0x3079f8: 0x0  nop
    ctx->pc = 0x3079f8u;
    // NOP
label_3079fc:
    // 0x3079fc: 0x0  nop
    ctx->pc = 0x3079fcu;
    // NOP
label_307a00:
    // 0x307a00: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x307a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_307a04:
    // 0x307a04: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x307a04u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_307a08:
    // 0x307a08: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x307a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_307a0c:
    // 0x307a0c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x307a0cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_307a10:
    // 0x307a10: 0x40f  sync.p
    ctx->pc = 0x307a10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_307a14:
    // 0x307a14: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x307a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_307a18:
    // 0x307a18: 0x8c4241e8  lw          $v0, 0x41E8($v0)
    ctx->pc = 0x307a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16872)));
label_307a1c:
    // 0x307a1c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x307a1cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_307a20:
    // 0x307a20: 0x40f  sync.p
    ctx->pc = 0x307a20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_307a24:
    // 0x307a24: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x307a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_307a28:
    // 0x307a28: 0xdc4241c0  ld          $v0, 0x41C0($v0)
    ctx->pc = 0x307a28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16832)));
label_307a2c:
    // 0x307a2c: 0x400011  mthi        $v0
    ctx->pc = 0x307a2cu;
    ctx->hi = GPR_U64(ctx, 2);
label_307a30:
    // 0x307a30: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x307a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_307a34:
    // 0x307a34: 0xdc4241c8  ld          $v0, 0x41C8($v0)
    ctx->pc = 0x307a34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16840)));
label_307a38:
    // 0x307a38: 0x70400011  mthi1       $v0
    ctx->pc = 0x307a38u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_307a3c:
    // 0x307a3c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x307a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_307a40:
    // 0x307a40: 0xdc4241d0  ld          $v0, 0x41D0($v0)
    ctx->pc = 0x307a40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16848)));
label_307a44:
    // 0x307a44: 0x400013  mtlo        $v0
    ctx->pc = 0x307a44u;
    ctx->lo = GPR_U64(ctx, 2);
label_307a48:
    // 0x307a48: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x307a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_307a4c:
    // 0x307a4c: 0xdc4241d8  ld          $v0, 0x41D8($v0)
    ctx->pc = 0x307a4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16856)));
label_307a50:
    // 0x307a50: 0x70400013  mtlo1       $v0
    ctx->pc = 0x307a50u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_307a54:
    // 0x307a54: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x307a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_307a58:
    // 0x307a58: 0xdc4241e0  ld          $v0, 0x41E0($v0)
    ctx->pc = 0x307a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16864)));
label_307a5c:
    // 0x307a5c: 0x400029  mtsa        $v0
    ctx->pc = 0x307a5cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_307a60:
    // 0x307a60: 0x40f  sync.p
    ctx->pc = 0x307a60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_307a64:
    // 0x307a64: 0x3c1a0061  lui         $k0, 0x61
    ctx->pc = 0x307a64u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)97 << 16));
label_307a68:
    // 0x307a68: 0x275a3fc0  addiu       $k0, $k0, 0x3FC0
    ctx->pc = 0x307a68u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 16320));
label_307a6c:
    // 0x307a6c: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x307a6cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_307a70:
    // 0x307a70: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x307a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_307a74:
    // 0x307a74: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x307a74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_307a78:
    // 0x307a78: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x307a78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_307a7c:
    // 0x307a7c: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x307a7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_307a80:
    // 0x307a80: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x307a80u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_307a84:
    // 0x307a84: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x307a84u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_307a88:
    // 0x307a88: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x307a88u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_307a8c:
    // 0x307a8c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x307a8cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_307a90:
    // 0x307a90: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x307a90u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_307a94:
    // 0x307a94: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x307a94u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_307a98:
    // 0x307a98: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x307a98u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_307a9c:
    // 0x307a9c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x307a9cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_307aa0:
    // 0x307aa0: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x307aa0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_307aa4:
    // 0x307aa4: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x307aa4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_307aa8:
    // 0x307aa8: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x307aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_307aac:
    // 0x307aac: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x307aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_307ab0:
    // 0x307ab0: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x307ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_307ab4:
    // 0x307ab4: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x307ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_307ab8:
    // 0x307ab8: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x307ab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_307abc:
    // 0x307abc: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x307abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_307ac0:
    // 0x307ac0: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x307ac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_307ac4:
    // 0x307ac4: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x307ac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_307ac8:
    // 0x307ac8: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x307ac8u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_307acc:
    // 0x307acc: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x307accu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_307ad0:
    // 0x307ad0: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x307ad0u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_307ad4:
    // 0x307ad4: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x307ad4u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_307ad8:
    // 0x307ad8: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x307ad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_307adc:
    // 0x307adc: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x307adcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_307ae0:
    // 0x307ae0: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x307ae0u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_307ae4:
    // 0x307ae4: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x307ae4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_307ae8:
    // 0x307ae8: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x307ae8u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_307aec:
    // 0x307aec: 0x40f  sync.p
    ctx->pc = 0x307aecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_307af0:
    // 0x307af0: 0x42000018  eret
    ctx->pc = 0x307af0u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_307af4:
    // 0x307af4: 0x0  nop
    ctx->pc = 0x307af4u;
    // NOP
label_307af8:
    // 0x307af8: 0x0  nop
    ctx->pc = 0x307af8u;
    // NOP
label_307afc:
    // 0x307afc: 0x0  nop
    ctx->pc = 0x307afcu;
    // NOP
    ctx->pc = 0x307b00u;
}
