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

// Function: sub_00227D40
// Address: 0x227d40 - 0x227e40
void sub_00227D40_0x227d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D40_0x227d40");
#endif

    switch (ctx->pc) {
        case 0x227d80u: goto label_227d80;
        case 0x227d90u: goto label_227d90;
        case 0x227db0u: goto label_227db0;
        case 0x227decu: goto label_227dec;
        case 0x227dfcu: goto label_227dfc;
        case 0x227e14u: goto label_227e14;
        case 0x227e2cu: goto label_227e2c;
        default: break;
    }

    ctx->pc = 0x227d40u;

    // 0x227d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227d48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x227d4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x227d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x227d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227d54: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x227D54u;
    {
        const bool branch_taken_0x227d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227d54) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x227D5Cu;
    // 0x227d5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x227d60: 0x24635330  addiu       $v1, $v1, 0x5330
    ctx->pc = 0x227d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21296));
    // 0x227d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227d68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x227d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x227d6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227d70: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x227d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x227d74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x227d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227d78: 0xc089e04  jal         func_227810
    ctx->pc = 0x227D78u;
    SET_GPR_U32(ctx, 31, 0x227D80u);
    ctx->pc = 0x227810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227810u, 0x227D78u, 0x227D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D80u;
label_227d80:
    // 0x227d80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d88: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x227D88u;
    SET_GPR_U32(ctx, 31, 0x227D90u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x227D88u, 0x227D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D90u;
label_227d90:
    // 0x227d90: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x227d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227d94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x227d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227d98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x227d98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x227d9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227D9Cu;
    {
        const bool branch_taken_0x227d9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x227d9c) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x227DA4u;
    // 0x227da4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227da8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x227DA8u;
    SET_GPR_U32(ctx, 31, 0x227DB0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x227DA8u, 0x227DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DB0u;
label_227db0:
    // 0x227db0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227db8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x227DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227DC4u;
    // 0x227dc4: 0x0  nop
    ctx->pc = 0x227dc4u;
    // NOP
    // 0x227dc8: 0x0  nop
    ctx->pc = 0x227dc8u;
    // NOP
    // 0x227dcc: 0x0  nop
    ctx->pc = 0x227dccu;
    // NOP
    // 0x227dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227ddc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x227ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x227de0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x227de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x227de4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x227DE4u;
    SET_GPR_U32(ctx, 31, 0x227DECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x227DE4u, 0x227DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DECu;
label_227dec:
    // 0x227dec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x227decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x227df0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x227df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227df4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x227DF4u;
    SET_GPR_U32(ctx, 31, 0x227DFCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x227DF4u, 0x227DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DFCu;
label_227dfc:
    // 0x227dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e00: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227E00u;
    {
        const bool branch_taken_0x227e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x227e00) {
            ctx->pc = 0x227E18u;
            goto label_227e18;
        }
    }
    ctx->pc = 0x227E08u;
    // 0x227e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e0c: 0xc089f90  jal         func_227E40
    ctx->pc = 0x227E0Cu;
    SET_GPR_U32(ctx, 31, 0x227E14u);
    ctx->pc = 0x227E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E40u, 0x227E0Cu, 0x227E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E14u;
label_227e14:
    // 0x227e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227e18:
    // 0x227e18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227e1c: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x227e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
    // 0x227e20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227e24: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x227E24u;
    SET_GPR_U32(ctx, 31, 0x227E2Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x227E24u, 0x227E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E2Cu;
label_227e2c:
    // 0x227e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227e38: 0x3e00008  jr          $ra
    ctx->pc = 0x227E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E40u;
}
