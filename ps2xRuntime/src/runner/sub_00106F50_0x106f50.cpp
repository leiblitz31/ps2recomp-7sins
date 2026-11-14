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

// Function: sub_00106F50
// Address: 0x106f50 - 0x1071f0
void sub_00106F50_0x106f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106F50_0x106f50");
#endif

    switch (ctx->pc) {
        case 0x106f50u: goto label_106f50;
        case 0x106f54u: goto label_106f54;
        case 0x106f58u: goto label_106f58;
        case 0x106f5cu: goto label_106f5c;
        case 0x106f60u: goto label_106f60;
        case 0x106f64u: goto label_106f64;
        case 0x106f68u: goto label_106f68;
        case 0x106f6cu: goto label_106f6c;
        case 0x106f70u: goto label_106f70;
        case 0x106f74u: goto label_106f74;
        case 0x106f78u: goto label_106f78;
        case 0x106f7cu: goto label_106f7c;
        case 0x106f80u: goto label_106f80;
        case 0x106f84u: goto label_106f84;
        case 0x106f88u: goto label_106f88;
        case 0x106f8cu: goto label_106f8c;
        case 0x106f90u: goto label_106f90;
        case 0x106f94u: goto label_106f94;
        case 0x106f98u: goto label_106f98;
        case 0x106f9cu: goto label_106f9c;
        case 0x106fa0u: goto label_106fa0;
        case 0x106fa4u: goto label_106fa4;
        case 0x106fa8u: goto label_106fa8;
        case 0x106facu: goto label_106fac;
        case 0x106fb0u: goto label_106fb0;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fb8u: goto label_106fb8;
        case 0x106fbcu: goto label_106fbc;
        case 0x106fc0u: goto label_106fc0;
        case 0x106fc4u: goto label_106fc4;
        case 0x106fc8u: goto label_106fc8;
        case 0x106fccu: goto label_106fcc;
        case 0x106fd0u: goto label_106fd0;
        case 0x106fd4u: goto label_106fd4;
        case 0x106fd8u: goto label_106fd8;
        case 0x106fdcu: goto label_106fdc;
        case 0x106fe0u: goto label_106fe0;
        case 0x106fe4u: goto label_106fe4;
        case 0x106fe8u: goto label_106fe8;
        case 0x106fecu: goto label_106fec;
        case 0x106ff0u: goto label_106ff0;
        case 0x106ff4u: goto label_106ff4;
        case 0x106ff8u: goto label_106ff8;
        case 0x106ffcu: goto label_106ffc;
        case 0x107000u: goto label_107000;
        case 0x107004u: goto label_107004;
        case 0x107008u: goto label_107008;
        case 0x10700cu: goto label_10700c;
        case 0x107010u: goto label_107010;
        case 0x107014u: goto label_107014;
        case 0x107018u: goto label_107018;
        case 0x10701cu: goto label_10701c;
        case 0x107020u: goto label_107020;
        case 0x107024u: goto label_107024;
        case 0x107028u: goto label_107028;
        case 0x10702cu: goto label_10702c;
        case 0x107030u: goto label_107030;
        case 0x107034u: goto label_107034;
        case 0x107038u: goto label_107038;
        case 0x10703cu: goto label_10703c;
        case 0x107040u: goto label_107040;
        case 0x107044u: goto label_107044;
        case 0x107048u: goto label_107048;
        case 0x10704cu: goto label_10704c;
        case 0x107050u: goto label_107050;
        case 0x107054u: goto label_107054;
        case 0x107058u: goto label_107058;
        case 0x10705cu: goto label_10705c;
        case 0x107060u: goto label_107060;
        case 0x107064u: goto label_107064;
        case 0x107068u: goto label_107068;
        case 0x10706cu: goto label_10706c;
        case 0x107070u: goto label_107070;
        case 0x107074u: goto label_107074;
        case 0x107078u: goto label_107078;
        case 0x10707cu: goto label_10707c;
        case 0x107080u: goto label_107080;
        case 0x107084u: goto label_107084;
        case 0x107088u: goto label_107088;
        case 0x10708cu: goto label_10708c;
        case 0x107090u: goto label_107090;
        case 0x107094u: goto label_107094;
        case 0x107098u: goto label_107098;
        case 0x10709cu: goto label_10709c;
        case 0x1070a0u: goto label_1070a0;
        case 0x1070a4u: goto label_1070a4;
        case 0x1070a8u: goto label_1070a8;
        case 0x1070acu: goto label_1070ac;
        case 0x1070b0u: goto label_1070b0;
        case 0x1070b4u: goto label_1070b4;
        case 0x1070b8u: goto label_1070b8;
        case 0x1070bcu: goto label_1070bc;
        case 0x1070c0u: goto label_1070c0;
        case 0x1070c4u: goto label_1070c4;
        case 0x1070c8u: goto label_1070c8;
        case 0x1070ccu: goto label_1070cc;
        case 0x1070d0u: goto label_1070d0;
        case 0x1070d4u: goto label_1070d4;
        case 0x1070d8u: goto label_1070d8;
        case 0x1070dcu: goto label_1070dc;
        case 0x1070e0u: goto label_1070e0;
        case 0x1070e4u: goto label_1070e4;
        case 0x1070e8u: goto label_1070e8;
        case 0x1070ecu: goto label_1070ec;
        case 0x1070f0u: goto label_1070f0;
        case 0x1070f4u: goto label_1070f4;
        case 0x1070f8u: goto label_1070f8;
        case 0x1070fcu: goto label_1070fc;
        case 0x107100u: goto label_107100;
        case 0x107104u: goto label_107104;
        case 0x107108u: goto label_107108;
        case 0x10710cu: goto label_10710c;
        case 0x107110u: goto label_107110;
        case 0x107114u: goto label_107114;
        case 0x107118u: goto label_107118;
        case 0x10711cu: goto label_10711c;
        case 0x107120u: goto label_107120;
        case 0x107124u: goto label_107124;
        case 0x107128u: goto label_107128;
        case 0x10712cu: goto label_10712c;
        case 0x107130u: goto label_107130;
        case 0x107134u: goto label_107134;
        case 0x107138u: goto label_107138;
        case 0x10713cu: goto label_10713c;
        case 0x107140u: goto label_107140;
        case 0x107144u: goto label_107144;
        case 0x107148u: goto label_107148;
        case 0x10714cu: goto label_10714c;
        case 0x107150u: goto label_107150;
        case 0x107154u: goto label_107154;
        case 0x107158u: goto label_107158;
        case 0x10715cu: goto label_10715c;
        case 0x107160u: goto label_107160;
        case 0x107164u: goto label_107164;
        case 0x107168u: goto label_107168;
        case 0x10716cu: goto label_10716c;
        case 0x107170u: goto label_107170;
        case 0x107174u: goto label_107174;
        case 0x107178u: goto label_107178;
        case 0x10717cu: goto label_10717c;
        case 0x107180u: goto label_107180;
        case 0x107184u: goto label_107184;
        case 0x107188u: goto label_107188;
        case 0x10718cu: goto label_10718c;
        case 0x107190u: goto label_107190;
        case 0x107194u: goto label_107194;
        case 0x107198u: goto label_107198;
        case 0x10719cu: goto label_10719c;
        case 0x1071a0u: goto label_1071a0;
        case 0x1071a4u: goto label_1071a4;
        case 0x1071a8u: goto label_1071a8;
        case 0x1071acu: goto label_1071ac;
        case 0x1071b0u: goto label_1071b0;
        case 0x1071b4u: goto label_1071b4;
        case 0x1071b8u: goto label_1071b8;
        case 0x1071bcu: goto label_1071bc;
        case 0x1071c0u: goto label_1071c0;
        case 0x1071c4u: goto label_1071c4;
        case 0x1071c8u: goto label_1071c8;
        case 0x1071ccu: goto label_1071cc;
        case 0x1071d0u: goto label_1071d0;
        case 0x1071d4u: goto label_1071d4;
        case 0x1071d8u: goto label_1071d8;
        case 0x1071dcu: goto label_1071dc;
        case 0x1071e0u: goto label_1071e0;
        case 0x1071e4u: goto label_1071e4;
        case 0x1071e8u: goto label_1071e8;
        case 0x1071ecu: goto label_1071ec;
        default: break;
    }

    ctx->pc = 0x106f50u;

label_106f50:
    // 0x106f50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x106f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_106f54:
    // 0x106f54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x106f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_106f58:
    // 0x106f58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x106f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_106f5c:
    // 0x106f5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x106f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_106f60:
    // 0x106f60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x106f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_106f64:
    // 0x106f64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x106f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_106f68:
    // 0x106f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_106f6c:
    // 0x106f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_106f70:
    // 0x106f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_106f74:
    // 0x106f74: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x106f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_106f78:
    // 0x106f78: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x106f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_106f7c:
    // 0x106f7c: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x106f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
label_106f80:
    // 0x106f80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x106f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_106f84:
    // 0x106f84: 0x24a51638  addiu       $a1, $a1, 0x1638
    ctx->pc = 0x106f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5688));
label_106f88:
    // 0x106f88: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x106f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_106f8c:
    // 0x106f8c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x106f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_106f90:
    // 0x106f90: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x106f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_106f94:
    // 0x106f94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x106f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_106f98:
    // 0x106f98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x106f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_106f9c:
    // 0x106f9c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x106f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_106fa0:
    // 0x106fa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_106fa4:
    // 0x106fa4: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_106fa8:
    if (ctx->pc == 0x106FA8u) {
        ctx->pc = 0x106FACu;
        goto label_106fac;
    }
    ctx->pc = 0x106FA4u;
    {
        const bool branch_taken_0x106fa4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x106fa4) {
            ctx->pc = 0x106F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106f90;
        }
    }
    ctx->pc = 0x106FACu;
label_106fac:
    // 0x106fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106fb0:
    // 0x106fb0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x106fb0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_106fb4:
    // 0x106fb4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x106fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_106fb8:
    // 0x106fb8: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
label_106fbc:
    if (ctx->pc == 0x106FBCu) {
        ctx->pc = 0x106FC0u;
        goto label_106fc0;
    }
    ctx->pc = 0x106FB8u;
    {
        const bool branch_taken_0x106fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x106fb8) {
            ctx->pc = 0x106FDCu;
            goto label_106fdc;
        }
    }
    ctx->pc = 0x106FC0u;
label_106fc0:
    // 0x106fc0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x106fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_106fc4:
    // 0x106fc4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x106fc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_106fc8:
    // 0x106fc8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x106fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_106fcc:
    // 0x106fcc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x106fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_106fd0:
    // 0x106fd0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_106fd4:
    if (ctx->pc == 0x106FD4u) {
        ctx->pc = 0x106FD8u;
        goto label_106fd8;
    }
    ctx->pc = 0x106FD0u;
    {
        const bool branch_taken_0x106fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106fd0) {
            ctx->pc = 0x106FDCu;
            goto label_106fdc;
        }
    }
    ctx->pc = 0x106FD8u;
label_106fd8:
    // 0x106fd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x106fd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106fdc:
    // 0x106fdc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_106fe0:
    if (ctx->pc == 0x106FE0u) {
        ctx->pc = 0x106FE4u;
        goto label_106fe4;
    }
    ctx->pc = 0x106FDCu;
    {
        const bool branch_taken_0x106fdc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x106fdc) {
            ctx->pc = 0x106FF0u;
            goto label_106ff0;
        }
    }
    ctx->pc = 0x106FE4u;
label_106fe4:
    // 0x106fe4: 0x27b30098  addiu       $s3, $sp, 0x98
    ctx->pc = 0x106fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_106fe8:
    // 0x106fe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_106fec:
    if (ctx->pc == 0x106FECu) {
        ctx->pc = 0x106FF0u;
        goto label_106ff0;
    }
    ctx->pc = 0x106FE8u;
    {
        const bool branch_taken_0x106fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x106fe8) {
            ctx->pc = 0x106FF4u;
            goto label_106ff4;
        }
    }
    ctx->pc = 0x106FF0u;
label_106ff0:
    // 0x106ff0: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x106ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_106ff4:
    // 0x106ff4: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x106ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106ff8:
    // 0x106ff8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x106ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_106ffc:
    // 0x106ffc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x106ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_107000:
    // 0x107000: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x107000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_107004:
    // 0x107004: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_107008:
    if (ctx->pc == 0x107008u) {
        ctx->pc = 0x10700Cu;
        goto label_10700c;
    }
    ctx->pc = 0x107004u;
    {
        const bool branch_taken_0x107004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107004) {
            ctx->pc = 0x107024u;
            goto label_107024;
        }
    }
    ctx->pc = 0x10700Cu;
label_10700c:
    // 0x10700c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x10700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_107010:
    // 0x107010: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107014:
    // 0x107014: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x107014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_107018:
    // 0x107018: 0x320f809  jalr        $t9
label_10701c:
    if (ctx->pc == 0x10701Cu) {
        ctx->pc = 0x107020u;
        goto label_107020;
    }
    ctx->pc = 0x107018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107020u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107018u, 0x107020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107020u;
label_107020:
    // 0x107020: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x107020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_107024:
    // 0x107024: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x107024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_107028:
    // 0x107028: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x107028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_10702c:
    // 0x10702c: 0xc090590  jal         func_241640
label_107030:
    if (ctx->pc == 0x107030u) {
        ctx->pc = 0x107034u;
        goto label_107034;
    }
    ctx->pc = 0x10702Cu;
    SET_GPR_U32(ctx, 31, 0x107034u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x10702Cu, 0x107034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107034u;
label_107034:
    // 0x107034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107038:
    // 0x107038: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x107038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_10703c:
    // 0x10703c: 0xc09158c  jal         func_245630
label_107040:
    if (ctx->pc == 0x107040u) {
        ctx->pc = 0x107044u;
        goto label_107044;
    }
    ctx->pc = 0x10703Cu;
    SET_GPR_U32(ctx, 31, 0x107044u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x10703Cu, 0x107044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107044u;
label_107044:
    // 0x107044: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x107044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_107048:
    // 0x107048: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x107048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_10704c:
    // 0x10704c: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_107050:
    if (ctx->pc == 0x107050u) {
        ctx->pc = 0x107054u;
        goto label_107054;
    }
    ctx->pc = 0x10704Cu;
    {
        const bool branch_taken_0x10704c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x10704c) {
            ctx->pc = 0x107060u;
            goto label_107060;
        }
    }
    ctx->pc = 0x107054u;
label_107054:
    // 0x107054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107058:
    // 0x107058: 0x1000005a  b           . + 4 + (0x5A << 2)
label_10705c:
    if (ctx->pc == 0x10705Cu) {
        ctx->pc = 0x107060u;
        goto label_107060;
    }
    ctx->pc = 0x107058u;
    {
        const bool branch_taken_0x107058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107058) {
            ctx->pc = 0x1071C4u;
            goto label_1071c4;
        }
    }
    ctx->pc = 0x107060u;
label_107060:
    // 0x107060: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x107060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107064:
    // 0x107064: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x107064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_107068:
    // 0x107068: 0xc119b68  jal         func_466DA0
label_10706c:
    if (ctx->pc == 0x10706Cu) {
        ctx->pc = 0x107070u;
        goto label_107070;
    }
    ctx->pc = 0x107068u;
    SET_GPR_U32(ctx, 31, 0x107070u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x107068u, 0x107070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107070u;
label_107070:
    // 0x107070: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_107074:
    // 0x107074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107078:
    // 0x107078: 0xc0400e0  jal         func_100380
label_10707c:
    if (ctx->pc == 0x10707Cu) {
        ctx->pc = 0x107080u;
        goto label_107080;
    }
    ctx->pc = 0x107078u;
    SET_GPR_U32(ctx, 31, 0x107080u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x107078u, 0x107080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107080u;
label_107080:
    // 0x107080: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107084:
    // 0x107084: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_107088:
    if (ctx->pc == 0x107088u) {
        ctx->pc = 0x10708Cu;
        goto label_10708c;
    }
    ctx->pc = 0x107084u;
    {
        const bool branch_taken_0x107084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x107084) {
            ctx->pc = 0x10709Cu;
            goto label_10709c;
        }
    }
    ctx->pc = 0x10708Cu;
label_10708c:
    // 0x10708c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10708cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107090:
    // 0x107090: 0xc041bb4  jal         func_106ED0
label_107094:
    if (ctx->pc == 0x107094u) {
        ctx->pc = 0x107098u;
        goto label_107098;
    }
    ctx->pc = 0x107090u;
    SET_GPR_U32(ctx, 31, 0x107098u);
    ctx->pc = 0x106ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106ED0u, 0x107090u, 0x107098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107098u;
label_107098:
    // 0x107098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10709c:
    // 0x10709c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10709cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1070a0:
    // 0x1070a0: 0x1010003e  beq         $zero, $s0, . + 4 + (0x3E << 2)
label_1070a4:
    if (ctx->pc == 0x1070A4u) {
        ctx->pc = 0x1070A8u;
        goto label_1070a8;
    }
    ctx->pc = 0x1070A0u;
    {
        const bool branch_taken_0x1070a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1070a0) {
            ctx->pc = 0x10719Cu;
            goto label_10719c;
        }
    }
    ctx->pc = 0x1070A8u;
label_1070a8:
    // 0x1070a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1070a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1070ac:
    // 0x1070ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1070acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1070b0:
    // 0x1070b0: 0xc08ec7c  jal         func_23B1F0
label_1070b4:
    if (ctx->pc == 0x1070B4u) {
        ctx->pc = 0x1070B8u;
        goto label_1070b8;
    }
    ctx->pc = 0x1070B0u;
    SET_GPR_U32(ctx, 31, 0x1070B8u);
    ctx->pc = 0x23B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1F0u, 0x1070B0u, 0x1070B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070B8u;
label_1070b8:
    // 0x1070b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1070b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1070bc:
    // 0x1070bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1070bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_1070c0:
    // 0x1070c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1070c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1070c4:
    // 0x1070c4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1070c8:
    // 0x1070c8: 0x320f809  jalr        $t9
label_1070cc:
    if (ctx->pc == 0x1070CCu) {
        ctx->pc = 0x1070D0u;
        goto label_1070d0;
    }
    ctx->pc = 0x1070C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1070D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070C8u, 0x1070D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1070D0u;
label_1070d0:
    // 0x1070d0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1070d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1070d4:
    // 0x1070d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1070d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1070d8:
    // 0x1070d8: 0x1002001f  beq         $zero, $v0, . + 4 + (0x1F << 2)
label_1070dc:
    if (ctx->pc == 0x1070DCu) {
        ctx->pc = 0x1070E0u;
        goto label_1070e0;
    }
    ctx->pc = 0x1070D8u;
    {
        const bool branch_taken_0x1070d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1070d8) {
            ctx->pc = 0x107158u;
            goto label_107158;
        }
    }
    ctx->pc = 0x1070E0u;
label_1070e0:
    // 0x1070e0: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1070e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1070e4:
    // 0x1070e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1070e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1070e8:
    // 0x1070e8: 0xc041ba4  jal         func_106E90
label_1070ec:
    if (ctx->pc == 0x1070ECu) {
        ctx->pc = 0x1070F0u;
        goto label_1070f0;
    }
    ctx->pc = 0x1070E8u;
    SET_GPR_U32(ctx, 31, 0x1070F0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1070E8u, 0x1070F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070F0u;
label_1070f0:
    // 0x1070f0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1070f4:
    // 0x1070f4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1070f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1070f8:
    // 0x1070f8: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x1070f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1070fc:
    // 0x1070fc: 0xc041e04  jal         func_107810
label_107100:
    if (ctx->pc == 0x107100u) {
        ctx->pc = 0x107104u;
        goto label_107104;
    }
    ctx->pc = 0x1070FCu;
    SET_GPR_U32(ctx, 31, 0x107104u);
    ctx->pc = 0x107810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107810u, 0x1070FCu, 0x107104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107104u;
label_107104:
    // 0x107104: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x107104u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_107108:
    // 0x107108: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x107108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_10710c:
    // 0x10710c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107110:
    // 0x107110: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_107114:
    if (ctx->pc == 0x107114u) {
        ctx->pc = 0x107118u;
        goto label_107118;
    }
    ctx->pc = 0x107110u;
    {
        const bool branch_taken_0x107110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107110) {
            ctx->pc = 0x107158u;
            goto label_107158;
        }
    }
    ctx->pc = 0x107118u;
label_107118:
    // 0x107118: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x107118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_10711c:
    // 0x10711c: 0xc041b38  jal         func_106CE0
label_107120:
    if (ctx->pc == 0x107120u) {
        ctx->pc = 0x107124u;
        goto label_107124;
    }
    ctx->pc = 0x10711Cu;
    SET_GPR_U32(ctx, 31, 0x107124u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x10711Cu, 0x107124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107124u;
label_107124:
    // 0x107124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107128:
    // 0x107128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10712c:
    // 0x10712c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10712cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107130:
    // 0x107130: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x107130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_107134:
    // 0x107134: 0x320f809  jalr        $t9
label_107138:
    if (ctx->pc == 0x107138u) {
        ctx->pc = 0x10713Cu;
        goto label_10713c;
    }
    ctx->pc = 0x107134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10713Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107134u, 0x10713Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10713Cu;
label_10713c:
    // 0x10713c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x10713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_107140:
    // 0x107140: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x107140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_107144:
    // 0x107144: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x107144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_107148:
    // 0x107148: 0x24a51530  addiu       $a1, $a1, 0x1530
    ctx->pc = 0x107148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5424));
label_10714c:
    // 0x10714c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x10714cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107150:
    // 0x107150: 0xc041b90  jal         func_106E40
label_107154:
    if (ctx->pc == 0x107154u) {
        ctx->pc = 0x107158u;
        goto label_107158;
    }
    ctx->pc = 0x107150u;
    SET_GPR_U32(ctx, 31, 0x107158u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x107150u, 0x107158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107158u;
label_107158:
    // 0x107158: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_10715c:
    if (ctx->pc == 0x10715Cu) {
        ctx->pc = 0x107160u;
        goto label_107160;
    }
    ctx->pc = 0x107158u;
    {
        const bool branch_taken_0x107158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x107158) {
            ctx->pc = 0x10717Cu;
            goto label_10717c;
        }
    }
    ctx->pc = 0x107160u;
label_107160:
    // 0x107160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107164:
    // 0x107164: 0xc041b64  jal         func_106D90
label_107168:
    if (ctx->pc == 0x107168u) {
        ctx->pc = 0x10716Cu;
        goto label_10716c;
    }
    ctx->pc = 0x107164u;
    SET_GPR_U32(ctx, 31, 0x10716Cu);
    ctx->pc = 0x106D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D90u, 0x107164u, 0x10716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10716Cu;
label_10716c:
    // 0x10716c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107170:
    // 0x107170: 0xc119c5c  jal         func_467170
label_107174:
    if (ctx->pc == 0x107174u) {
        ctx->pc = 0x107178u;
        goto label_107178;
    }
    ctx->pc = 0x107170u;
    SET_GPR_U32(ctx, 31, 0x107178u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x107170u, 0x107178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107178u;
label_107178:
    // 0x107178: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x107178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10717c:
    // 0x10717c: 0x325600ff  andi        $s6, $s2, 0xFF
    ctx->pc = 0x10717cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_107180:
    // 0x107180: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x107180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_107184:
    // 0x107184: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x107184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107188:
    // 0x107188: 0xc041b74  jal         func_106DD0
label_10718c:
    if (ctx->pc == 0x10718Cu) {
        ctx->pc = 0x107190u;
        goto label_107190;
    }
    ctx->pc = 0x107188u;
    SET_GPR_U32(ctx, 31, 0x107190u);
    ctx->pc = 0x106DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DD0u, 0x107188u, 0x107190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107190u;
label_107190:
    // 0x107190: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x107190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_107194:
    // 0x107194: 0x1000000b  b           . + 4 + (0xB << 2)
label_107198:
    if (ctx->pc == 0x107198u) {
        ctx->pc = 0x10719Cu;
        goto label_10719c;
    }
    ctx->pc = 0x107194u;
    {
        const bool branch_taken_0x107194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107194) {
            ctx->pc = 0x1071C4u;
            goto label_1071c4;
        }
    }
    ctx->pc = 0x10719Cu;
label_10719c:
    // 0x10719c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1071a0:
    if (ctx->pc == 0x1071A0u) {
        ctx->pc = 0x1071A4u;
        goto label_1071a4;
    }
    ctx->pc = 0x10719Cu;
    {
        const bool branch_taken_0x10719c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10719c) {
            ctx->pc = 0x1071C0u;
            goto label_1071c0;
        }
    }
    ctx->pc = 0x1071A4u;
label_1071a4:
    // 0x1071a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1071a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1071a8:
    // 0x1071a8: 0xc041b64  jal         func_106D90
label_1071ac:
    if (ctx->pc == 0x1071ACu) {
        ctx->pc = 0x1071B0u;
        goto label_1071b0;
    }
    ctx->pc = 0x1071A8u;
    SET_GPR_U32(ctx, 31, 0x1071B0u);
    ctx->pc = 0x106D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D90u, 0x1071A8u, 0x1071B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071B0u;
label_1071b0:
    // 0x1071b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1071b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1071b4:
    // 0x1071b4: 0xc119c5c  jal         func_467170
label_1071b8:
    if (ctx->pc == 0x1071B8u) {
        ctx->pc = 0x1071BCu;
        goto label_1071bc;
    }
    ctx->pc = 0x1071B4u;
    SET_GPR_U32(ctx, 31, 0x1071BCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1071B4u, 0x1071BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071BCu;
label_1071bc:
    // 0x1071bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1071bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1071c0:
    // 0x1071c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1071c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1071c4:
    // 0x1071c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1071c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1071c8:
    // 0x1071c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1071c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1071cc:
    // 0x1071cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1071ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1071d0:
    // 0x1071d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1071d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1071d4:
    // 0x1071d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1071d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1071d8:
    // 0x1071d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1071d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1071dc:
    // 0x1071dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1071dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1071e0:
    // 0x1071e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1071e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1071e4:
    // 0x1071e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1071e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1071e8:
    // 0x1071e8: 0x3e00008  jr          $ra
label_1071ec:
    if (ctx->pc == 0x1071ECu) {
        ctx->pc = 0x1071F0u;
        goto label_fallthrough_0x1071e8;
    }
    ctx->pc = 0x1071E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1071E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1071e8:
    ctx->pc = 0x1071F0u;
}
