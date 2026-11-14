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

// Function: sub_002189B0
// Address: 0x2189b0 - 0x218ab0
void sub_002189B0_0x2189b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002189B0_0x2189b0");
#endif

    switch (ctx->pc) {
        case 0x2189d4u: goto label_2189d4;
        case 0x2189e4u: goto label_2189e4;
        case 0x2189f4u: goto label_2189f4;
        case 0x218a0cu: goto label_218a0c;
        case 0x218a18u: goto label_218a18;
        case 0x218a2cu: goto label_218a2c;
        case 0x218a48u: goto label_218a48;
        case 0x218a58u: goto label_218a58;
        case 0x218a70u: goto label_218a70;
        case 0x218a80u: goto label_218a80;
        case 0x218a90u: goto label_218a90;
        case 0x218a9cu: goto label_218a9c;
        default: break;
    }

    ctx->pc = 0x2189b0u;

    // 0x2189b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2189b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2189b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2189b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2189b8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2189b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2189bc: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2189bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2189c0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2189c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2189c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2189c8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2189c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2189cc: 0xc086328  jal         func_218CA0
    ctx->pc = 0x2189CCu;
    SET_GPR_U32(ctx, 31, 0x2189D4u);
    ctx->pc = 0x218CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218CA0u, 0x2189CCu, 0x2189D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189D4u;
label_2189d4:
    // 0x2189d4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2189d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2189d8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2189dc: 0xc0861b8  jal         func_2186E0
    ctx->pc = 0x2189DCu;
    SET_GPR_U32(ctx, 31, 0x2189E4u);
    ctx->pc = 0x2186E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2186E0u, 0x2189DCu, 0x2189E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189E4u;
label_2189e4:
    // 0x2189e4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2189e8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2189e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2189ec: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x2189ECu;
    SET_GPR_U32(ctx, 31, 0x2189F4u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x2189ECu, 0x2189F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189F4u;
label_2189f4:
    // 0x2189f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2189F4u;
    {
        const bool branch_taken_0x2189f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2189f4) {
            ctx->pc = 0x218A34u;
            goto label_218a34;
        }
    }
    ctx->pc = 0x2189FCu;
    // 0x2189fc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x218a00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x218a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218a04: 0xc08630c  jal         func_218C30
    ctx->pc = 0x218A04u;
    SET_GPR_U32(ctx, 31, 0x218A0Cu);
    ctx->pc = 0x218C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C30u, 0x218A04u, 0x218A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A0Cu;
label_218a0c:
    // 0x218a0c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x218a10: 0xc086200  jal         func_218800
    ctx->pc = 0x218A10u;
    SET_GPR_U32(ctx, 31, 0x218A18u);
    ctx->pc = 0x218800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218800u, 0x218A10u, 0x218A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A18u;
label_218a18:
    // 0x218a18: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x218a1c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x218a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218a20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x218a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a24: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x218A24u;
    SET_GPR_U32(ctx, 31, 0x218A2Cu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x218A24u, 0x218A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A2Cu;
label_218a2c:
    // 0x218a2c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x218A2Cu;
    {
        const bool branch_taken_0x218a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218a2c) {
            ctx->pc = 0x218A90u;
            goto label_218a90;
        }
    }
    ctx->pc = 0x218A34u;
label_218a34:
    // 0x218a34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x218a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x218a38: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x218a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218a3c: 0x27869b3c  addiu       $a2, $gp, -0x64C4
    ctx->pc = 0x218a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941500));
    // 0x218a40: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x218A40u;
    SET_GPR_U32(ctx, 31, 0x218A48u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x218A40u, 0x218A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A48u;
label_218a48:
    // 0x218a48: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x218a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x218a4c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x218a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x218a50: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x218A50u;
    SET_GPR_U32(ctx, 31, 0x218A58u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x218A50u, 0x218A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A58u;
label_218a58:
    // 0x218a58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x218a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218a5c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x218a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218a60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x218a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a64: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x218a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x218a68: 0xc0862d4  jal         func_218B50
    ctx->pc = 0x218A68u;
    SET_GPR_U32(ctx, 31, 0x218A70u);
    ctx->pc = 0x218B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218B50u, 0x218A68u, 0x218A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A70u;
label_218a70:
    // 0x218a70: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x218a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x218a74: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x218a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218a78: 0xc0862c4  jal         func_218B10
    ctx->pc = 0x218A78u;
    SET_GPR_U32(ctx, 31, 0x218A80u);
    ctx->pc = 0x218B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218B10u, 0x218A78u, 0x218A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A80u;
label_218a80:
    // 0x218a80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x218a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x218a84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x218a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218a88: 0xc0862ac  jal         func_218AB0
    ctx->pc = 0x218A88u;
    SET_GPR_U32(ctx, 31, 0x218A90u);
    ctx->pc = 0x218AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AB0u, 0x218A88u, 0x218A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A90u;
label_218a90:
    // 0x218a90: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x218a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x218a94: 0xc086200  jal         func_218800
    ctx->pc = 0x218A94u;
    SET_GPR_U32(ctx, 31, 0x218A9Cu);
    ctx->pc = 0x218800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218800u, 0x218A94u, 0x218A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A9Cu;
label_218a9c:
    // 0x218a9c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x218a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x218aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218aa4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x218aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x218aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x218AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218AB0u;
}
