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

// Function: sub_00160C70
// Address: 0x160c70 - 0x1613b0
void sub_00160C70_0x160c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160C70_0x160c70");
#endif

    switch (ctx->pc) {
        case 0x160cb8u: goto label_160cb8;
        case 0x160cd0u: goto label_160cd0;
        case 0x160cf0u: goto label_160cf0;
        case 0x160d08u: goto label_160d08;
        case 0x160d24u: goto label_160d24;
        case 0x160d50u: goto label_160d50;
        case 0x160d64u: goto label_160d64;
        case 0x160d7cu: goto label_160d7c;
        case 0x160d90u: goto label_160d90;
        case 0x160da8u: goto label_160da8;
        case 0x160dbcu: goto label_160dbc;
        case 0x160dd4u: goto label_160dd4;
        case 0x160de8u: goto label_160de8;
        case 0x160e00u: goto label_160e00;
        case 0x160e14u: goto label_160e14;
        case 0x160e2cu: goto label_160e2c;
        case 0x160e38u: goto label_160e38;
        case 0x160e4cu: goto label_160e4c;
        case 0x160e64u: goto label_160e64;
        case 0x160e80u: goto label_160e80;
        case 0x160e94u: goto label_160e94;
        case 0x160eacu: goto label_160eac;
        case 0x160ed4u: goto label_160ed4;
        case 0x160eecu: goto label_160eec;
        case 0x160f04u: goto label_160f04;
        case 0x160f1cu: goto label_160f1c;
        case 0x160f34u: goto label_160f34;
        case 0x160f40u: goto label_160f40;
        case 0x160f64u: goto label_160f64;
        case 0x160fb8u: goto label_160fb8;
        case 0x160ffcu: goto label_160ffc;
        case 0x16102cu: goto label_16102c;
        case 0x161040u: goto label_161040;
        case 0x161070u: goto label_161070;
        case 0x161084u: goto label_161084;
        case 0x1610b4u: goto label_1610b4;
        case 0x1610c8u: goto label_1610c8;
        case 0x1610f8u: goto label_1610f8;
        case 0x16110cu: goto label_16110c;
        case 0x16113cu: goto label_16113c;
        case 0x161148u: goto label_161148;
        case 0x16115cu: goto label_16115c;
        case 0x16118cu: goto label_16118c;
        case 0x1611a8u: goto label_1611a8;
        case 0x1611bcu: goto label_1611bc;
        case 0x1611ecu: goto label_1611ec;
        case 0x16122cu: goto label_16122c;
        case 0x16125cu: goto label_16125c;
        case 0x16128cu: goto label_16128c;
        case 0x1612a0u: goto label_1612a0;
        case 0x1612d0u: goto label_1612d0;
        case 0x1612e8u: goto label_1612e8;
        case 0x16131cu: goto label_16131c;
        case 0x161328u: goto label_161328;
        case 0x161368u: goto label_161368;
        default: break;
    }

    ctx->pc = 0x160c70u;

    // 0x160c70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x160c74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x160c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x160c78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x160c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x160c7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x160c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x160c80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x160c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x160c84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x160c88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x160c8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160c90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160c9c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x160c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x160ca0: 0xa3a500c0  sb          $a1, 0xC0($sp)
    ctx->pc = 0x160ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 5));
    // 0x160ca4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x160ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160ca8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x160cac: 0x24a53300  addiu       $a1, $a1, 0x3300
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13056));
    // 0x160cb0: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x160CB0u;
    SET_GPR_U32(ctx, 31, 0x160CB8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x160CB0u, 0x160CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CB8u;
label_160cb8:
    // 0x160cb8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x160cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x160cbc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x160cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160cc0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x160cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x160cc4: 0x24a53310  addiu       $a1, $a1, 0x3310
    ctx->pc = 0x160cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13072));
    // 0x160cc8: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x160CC8u;
    SET_GPR_U32(ctx, 31, 0x160CD0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x160CC8u, 0x160CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CD0u;
label_160cd0:
    // 0x160cd0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x160cd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cd4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160cd8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x160cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cdc: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x160cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x160ce0: 0x24e73390  addiu       $a3, $a3, 0x3390
    ctx->pc = 0x160ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13200));
    // 0x160ce4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x160ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ce8: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x160CE8u;
    SET_GPR_U32(ctx, 31, 0x160CF0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x160CE8u, 0x160CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160CF0u;
label_160cf0:
    // 0x160cf0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x160cf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cf4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x160cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160cf8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x160cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x160cfc: 0x24a535d0  addiu       $a1, $a1, 0x35D0
    ctx->pc = 0x160cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13776));
    // 0x160d00: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x160D00u;
    SET_GPR_U32(ctx, 31, 0x160D08u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x160D00u, 0x160D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D08u;
label_160d08:
    // 0x160d08: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x160d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x160d0c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x160d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160d10: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x160d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d14: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x160d18: 0x24a535e0  addiu       $a1, $a1, 0x35E0
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13792));
    // 0x160d1c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x160D1Cu;
    SET_GPR_U32(ctx, 31, 0x160D24u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x160D1Cu, 0x160D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D24u;
label_160d24:
    // 0x160d24: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d28: 0x93a500c0  lbu         $a1, 0xC0($sp)
    ctx->pc = 0x160d28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x160d2c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x160d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x160d30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d34: 0x14c70091  bne         $a2, $a3, . + 4 + (0x91 << 2)
    ctx->pc = 0x160D34u;
    {
        const bool branch_taken_0x160d34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x160d34) {
            ctx->pc = 0x160F7Cu;
            goto label_160f7c;
        }
    }
    ctx->pc = 0x160D3Cu;
    // 0x160d3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160d40: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160d44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x160d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160d48: 0xc08c910  jal         func_232440
    ctx->pc = 0x160D48u;
    SET_GPR_U32(ctx, 31, 0x160D50u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x160D48u, 0x160D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D50u;
label_160d50:
    // 0x160d50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160d54: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160d58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d5c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160D5Cu;
    SET_GPR_U32(ctx, 31, 0x160D64u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160D5Cu, 0x160D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D64u;
label_160d64:
    // 0x160d64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160d68: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160d6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160d70: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160d74: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160D74u;
    SET_GPR_U32(ctx, 31, 0x160D7Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160D74u, 0x160D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D7Cu;
label_160d7c:
    // 0x160d7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160d80: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160d84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x160d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160d88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160D88u;
    SET_GPR_U32(ctx, 31, 0x160D90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160D88u, 0x160D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D90u;
label_160d90:
    // 0x160d90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160d94: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160d9c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160da0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160DA0u;
    SET_GPR_U32(ctx, 31, 0x160DA8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160DA0u, 0x160DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160DA8u;
label_160da8:
    // 0x160da8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160dac: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160db0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x160db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160db4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160DB4u;
    SET_GPR_U32(ctx, 31, 0x160DBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160DB4u, 0x160DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160DBCu;
label_160dbc:
    // 0x160dbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160dc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160dc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160dc8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160dcc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160DCCu;
    SET_GPR_U32(ctx, 31, 0x160DD4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160DCCu, 0x160DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160DD4u;
label_160dd4:
    // 0x160dd4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160dd8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160ddc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160de0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160DE0u;
    SET_GPR_U32(ctx, 31, 0x160DE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160DE0u, 0x160DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160DE8u;
label_160de8:
    // 0x160de8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160dec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160df4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160df8: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160DF8u;
    SET_GPR_U32(ctx, 31, 0x160E00u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160DF8u, 0x160E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E00u;
label_160e00:
    // 0x160e00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160e04: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160e08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x160e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160e0c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160E0Cu;
    SET_GPR_U32(ctx, 31, 0x160E14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160E0Cu, 0x160E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E14u;
label_160e14:
    // 0x160e14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160e18: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160e1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160e20: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160e24: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160E24u;
    SET_GPR_U32(ctx, 31, 0x160E2Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160E24u, 0x160E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E2Cu;
label_160e2c:
    // 0x160e2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x160e2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160E30u;
    {
        const bool branch_taken_0x160e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e30) {
            ctx->pc = 0x160E68u;
            goto label_160e68;
        }
    }
    ctx->pc = 0x160E38u;
label_160e38:
    // 0x160e38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160e3c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x160e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x160e40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x160e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160E44u;
    SET_GPR_U32(ctx, 31, 0x160E4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160E44u, 0x160E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E4Cu;
label_160e4c:
    // 0x160e4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160e50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160e54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160e58: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160e5c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160E5Cu;
    SET_GPR_U32(ctx, 31, 0x160E64u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160E5Cu, 0x160E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E64u;
label_160e64:
    // 0x160e64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x160e64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_160e68:
    // 0x160e68: 0x2aa20007  slti        $v0, $s5, 0x7
    ctx->pc = 0x160e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x160e6c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x160E6Cu;
    {
        const bool branch_taken_0x160e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160e6c) {
            ctx->pc = 0x160E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160e38;
        }
    }
    ctx->pc = 0x160E74u;
    // 0x160e74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x160e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160E78u;
    {
        const bool branch_taken_0x160e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e78) {
            ctx->pc = 0x160EB0u;
            goto label_160eb0;
        }
    }
    ctx->pc = 0x160E80u;
label_160e80:
    // 0x160e80: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160e84: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x160e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x160e88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e8c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160E8Cu;
    SET_GPR_U32(ctx, 31, 0x160E94u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160E8Cu, 0x160E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E94u;
label_160e94:
    // 0x160e94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160e98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160e9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160ea0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160ea4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160EA4u;
    SET_GPR_U32(ctx, 31, 0x160EACu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160EA4u, 0x160EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EACu;
label_160eac:
    // 0x160eac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x160eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_160eb0:
    // 0x160eb0: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x160eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x160eb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x160EB4u;
    {
        const bool branch_taken_0x160eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160eb4) {
            ctx->pc = 0x160E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160e80;
        }
    }
    ctx->pc = 0x160EBCu;
    // 0x160ebc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160ec0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x160ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x160ec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160ec8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160ecc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160ECCu;
    SET_GPR_U32(ctx, 31, 0x160ED4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160ECCu, 0x160ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160ED4u;
label_160ed4:
    // 0x160ed4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160ed8: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x160ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x160edc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160ee0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160ee4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160EE4u;
    SET_GPR_U32(ctx, 31, 0x160EECu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160EE4u, 0x160EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EECu;
label_160eec:
    // 0x160eec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160ef0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160ef4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160ef8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x160ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160efc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160EFCu;
    SET_GPR_U32(ctx, 31, 0x160F04u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160EFCu, 0x160F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F04u;
label_160f04:
    // 0x160f04: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160f08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160f0c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160f10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x160f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f14: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160F14u;
    SET_GPR_U32(ctx, 31, 0x160F1Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160F14u, 0x160F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F1Cu;
label_160f1c:
    // 0x160f1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160f20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160f24: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160f28: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x160f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f2c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160F2Cu;
    SET_GPR_U32(ctx, 31, 0x160F34u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160F2Cu, 0x160F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F34u;
label_160f34:
    // 0x160f34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x160f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160F38u;
    {
        const bool branch_taken_0x160f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f38) {
            ctx->pc = 0x160F68u;
            goto label_160f68;
        }
    }
    ctx->pc = 0x160F40u;
label_160f40:
    // 0x160f40: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x160f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160f44: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x160f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x160f48: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160f50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160f54: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x160f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x160f58: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x160f5c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160F5Cu;
    SET_GPR_U32(ctx, 31, 0x160F64u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160F5Cu, 0x160F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F64u;
label_160f64:
    // 0x160f64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_160f68:
    // 0x160f68: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x160f68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x160f6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x160F6Cu;
    {
        const bool branch_taken_0x160f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160f6c) {
            ctx->pc = 0x160F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160f40;
        }
    }
    ctx->pc = 0x160F74u;
    // 0x160f74: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x160F74u;
    {
        const bool branch_taken_0x160f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f74) {
            ctx->pc = 0x16137Cu;
            goto label_16137c;
        }
    }
    ctx->pc = 0x160F7Cu;
label_160f7c:
    // 0x160f7c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x160f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160f80: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x160f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x160f84: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x160f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x160f88: 0x146000fc  bnez        $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x160F88u;
    {
        const bool branch_taken_0x160f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160f88) {
            ctx->pc = 0x16137Cu;
            goto label_16137c;
        }
    }
    ctx->pc = 0x160F90u;
    // 0x160f90: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160f94: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x160f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x160f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160f9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x160F9Cu;
    {
        const bool branch_taken_0x160f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f9c) {
            ctx->pc = 0x160FCCu;
            goto label_160fcc;
        }
    }
    ctx->pc = 0x160FA4u;
    // 0x160fa4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160fa8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160fac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x160facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160fb0: 0xc08c910  jal         func_232440
    ctx->pc = 0x160FB0u;
    SET_GPR_U32(ctx, 31, 0x160FB8u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x160FB0u, 0x160FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FB8u;
label_160fb8:
    // 0x160fb8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x160fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160fbc: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x160fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x160fc0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x160fc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x160fc8: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x160fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_160fcc:
    // 0x160fcc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x160fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160fd0: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x160fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x160fd4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x160fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x160fd8: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x160fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x160fdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160fe0: 0x0  nop
    ctx->pc = 0x160fe0u;
    // NOP
    // 0x160fe4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x160fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x160fe8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160fec: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ff4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160FF4u;
    SET_GPR_U32(ctx, 31, 0x160FFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160FF4u, 0x160FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FFCu;
label_160ffc:
    // 0x160ffc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161000: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x161000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161004: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161008: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x161008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x16100c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16100cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161010: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161014: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161018: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x16101c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16101cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161024: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161024u;
    SET_GPR_U32(ctx, 31, 0x16102Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161024u, 0x16102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16102Cu;
label_16102c:
    // 0x16102c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161030: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x161030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x161034: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x161034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161038: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x161038u;
    SET_GPR_U32(ctx, 31, 0x161040u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x161038u, 0x161040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161040u;
label_161040:
    // 0x161040: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161044: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x161044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161048: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16104c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x16104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x161050: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x161050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161054: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x161054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161058: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16105c: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x16105cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x161060: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x161060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161064: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161068: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161068u;
    SET_GPR_U32(ctx, 31, 0x161070u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161068u, 0x161070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161070u;
label_161070:
    // 0x161070: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x161070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161074: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x161074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x161078: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x161078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16107c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x16107Cu;
    SET_GPR_U32(ctx, 31, 0x161084u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16107Cu, 0x161084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161084u;
label_161084:
    // 0x161084: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x161084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161088: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x161088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16108c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16108cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161090: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x161090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x161094: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x161094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161098: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x161098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16109c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16109cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1610a0: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1610a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1610a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1610a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610ac: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1610ACu;
    SET_GPR_U32(ctx, 31, 0x1610B4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1610ACu, 0x1610B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610B4u;
label_1610b4:
    // 0x1610b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1610b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1610b8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1610b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x1610bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1610bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610c0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1610C0u;
    SET_GPR_U32(ctx, 31, 0x1610C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1610C0u, 0x1610C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610C8u;
label_1610c8:
    // 0x1610c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1610c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1610cc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1610ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1610d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1610d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1610d4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1610d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1610d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1610d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1610dc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1610dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1610e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1610e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1610e4: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x1610e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1610e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1610e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1610ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610f0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1610F0u;
    SET_GPR_U32(ctx, 31, 0x1610F8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1610F0u, 0x1610F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610F8u;
label_1610f8:
    // 0x1610f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1610f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1610fc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1610fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x161100: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x161100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161104: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x161104u;
    SET_GPR_U32(ctx, 31, 0x16110Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x161104u, 0x16110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16110Cu;
label_16110c:
    // 0x16110c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16110cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161110: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161114: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161118: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x16111c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16111cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161120: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x161120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161124: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161128: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x16112c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16112cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161130: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161134: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161134u;
    SET_GPR_U32(ctx, 31, 0x16113Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161134u, 0x16113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16113Cu;
label_16113c:
    // 0x16113c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16113cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161140: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x161140u;
    {
        const bool branch_taken_0x161140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161140) {
            ctx->pc = 0x161190u;
            goto label_161190;
        }
    }
    ctx->pc = 0x161148u;
label_161148:
    // 0x161148: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16114c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x161150: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x161150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161154: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x161154u;
    SET_GPR_U32(ctx, 31, 0x16115Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x161154u, 0x16115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16115Cu;
label_16115c:
    // 0x16115c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16115cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161160: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x161160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161164: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161168: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x161168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x16116c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16116cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161170: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x161170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161174: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161178: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x16117c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16117cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161184: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161184u;
    SET_GPR_U32(ctx, 31, 0x16118Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161184u, 0x16118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16118Cu;
label_16118c:
    // 0x16118c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_161190:
    // 0x161190: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x161190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x161194: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x161194u;
    {
        const bool branch_taken_0x161194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161194) {
            ctx->pc = 0x161148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161148;
        }
    }
    ctx->pc = 0x16119Cu;
    // 0x16119c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16119cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1611A0u;
    {
        const bool branch_taken_0x1611a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1611a0) {
            ctx->pc = 0x1611F0u;
            goto label_1611f0;
        }
    }
    ctx->pc = 0x1611A8u;
label_1611a8:
    // 0x1611a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1611ac: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1611acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x1611b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1611b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611b4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1611B4u;
    SET_GPR_U32(ctx, 31, 0x1611BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1611B4u, 0x1611BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1611BCu;
label_1611bc:
    // 0x1611bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1611bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1611c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1611c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1611c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1611c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1611c8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1611c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1611cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1611ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1611d0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1611d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1611d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1611d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1611d8: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x1611d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1611dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1611dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1611e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611e4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1611E4u;
    SET_GPR_U32(ctx, 31, 0x1611ECu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1611E4u, 0x1611ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1611ECu;
label_1611ec:
    // 0x1611ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1611f0:
    // 0x1611f0: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x1611f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1611f4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1611F4u;
    {
        const bool branch_taken_0x1611f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1611f4) {
            ctx->pc = 0x1611A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1611a8;
        }
    }
    ctx->pc = 0x1611FCu;
    // 0x1611fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1611fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161200: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x161200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x161204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161208: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x161208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x16120c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16120cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161210: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x161210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161214: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161218: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x16121c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16121cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161224: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161224u;
    SET_GPR_U32(ctx, 31, 0x16122Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161224u, 0x16122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16122Cu;
label_16122c:
    // 0x16122c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161230: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x161230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x161234: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161238: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x16123c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16123cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161240: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161244: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161248: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x16124c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16124cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161254: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161254u;
    SET_GPR_U32(ctx, 31, 0x16125Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161254u, 0x16125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16125Cu;
label_16125c:
    // 0x16125c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161264: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x161264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x161268: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x161268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16126c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161270: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x161270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161274: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161278: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x16127c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16127cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161284: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161284u;
    SET_GPR_U32(ctx, 31, 0x16128Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161284u, 0x16128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16128Cu;
label_16128c:
    // 0x16128c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161290: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x161290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x161294: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x161294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161298: 0xc08c910  jal         func_232440
    ctx->pc = 0x161298u;
    SET_GPR_U32(ctx, 31, 0x1612A0u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x161298u, 0x1612A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612A0u;
label_1612a0:
    // 0x1612a0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1612a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1612a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1612a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1612a8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1612ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1612acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1612b0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1612b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1612b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1612b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1612bc: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x1612bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1612c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1612c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1612c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612c8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1612C8u;
    SET_GPR_U32(ctx, 31, 0x1612D0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1612C8u, 0x1612D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612D0u;
label_1612d0:
    // 0x1612d0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1612d4: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1612d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1612d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1612d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1612dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612e0: 0xc08c910  jal         func_232440
    ctx->pc = 0x1612E0u;
    SET_GPR_U32(ctx, 31, 0x1612E8u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1612E0u, 0x1612E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612E8u;
label_1612e8:
    // 0x1612e8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1612e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1612ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1612ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1612f0: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x1612f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x1612f4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1612f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1612f8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1612f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1612fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1612fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161300: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x161300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161304: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161308: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x16130c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16130cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161310: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161314: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161314u;
    SET_GPR_U32(ctx, 31, 0x16131Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161314u, 0x16131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16131Cu;
label_16131c:
    // 0x16131c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16131cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161320: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x161320u;
    {
        const bool branch_taken_0x161320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161320) {
            ctx->pc = 0x161370u;
            goto label_161370;
        }
    }
    ctx->pc = 0x161328u;
label_161328:
    // 0x161328: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x161328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16132c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x16132cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x161330: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x161330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161334: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x161334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x161338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16133c: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x16133cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x161340: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x161340u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161344: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x161344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x161348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16134c: 0x8c6500d0  lw          $a1, 0xD0($v1)
    ctx->pc = 0x16134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x161350: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161354: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x161354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x161358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x161358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16135c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16135cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161360: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x161360u;
    SET_GPR_U32(ctx, 31, 0x161368u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x161360u, 0x161368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161368u;
label_161368:
    // 0x161368: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16136c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16136cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161370:
    // 0x161370: 0x2e050005  sltiu       $a1, $s0, 0x5
    ctx->pc = 0x161370u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x161374: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x161374u;
    {
        const bool branch_taken_0x161374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x161374) {
            ctx->pc = 0x161328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161328;
        }
    }
    ctx->pc = 0x16137Cu;
label_16137c:
    // 0x16137c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16137cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161380: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x161380u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161384: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x161384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161388: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x161388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16138c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16138cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x161390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x161394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16139c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16139cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1613a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1613a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1613a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1613a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1613a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1613A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1613A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1613B0u;
}
