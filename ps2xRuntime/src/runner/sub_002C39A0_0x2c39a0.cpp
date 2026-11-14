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

// Function: sub_002C39A0
// Address: 0x2c39a0 - 0x2c3ab0
void sub_002C39A0_0x2c39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C39A0_0x2c39a0");
#endif

    switch (ctx->pc) {
        case 0x2c39d4u: goto label_2c39d4;
        case 0x2c39ecu: goto label_2c39ec;
        case 0x2c39fcu: goto label_2c39fc;
        case 0x2c3a20u: goto label_2c3a20;
        case 0x2c3a5cu: goto label_2c3a5c;
        case 0x2c3a6cu: goto label_2c3a6c;
        case 0x2c3a88u: goto label_2c3a88;
        default: break;
    }

    ctx->pc = 0x2c39a0u;

    // 0x2c39a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c39a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c39a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c39a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c39a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c39a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c39ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c39acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c39b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c39b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c39b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c39b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c39bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c39bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c39c0: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2c39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2c39c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c39c8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2c39c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c39cc: 0xc09a360  jal         func_268D80
    ctx->pc = 0x2C39CCu;
    SET_GPR_U32(ctx, 31, 0x2C39D4u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C39CCu, 0x2C39D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39D4u;
label_2c39d4:
    // 0x2c39d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c39d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c39d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39dc: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x2c39dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2c39e0: 0x2786a4c8  addiu       $a2, $gp, -0x5B38
    ctx->pc = 0x2c39e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943944));
    // 0x2c39e4: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C39E4u;
    SET_GPR_U32(ctx, 31, 0x2C39ECu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C39E4u, 0x2C39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39ECu;
label_2c39ec:
    // 0x2c39ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c39ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c39f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39f4: 0xc09a364  jal         func_268D90
    ctx->pc = 0x2C39F4u;
    SET_GPR_U32(ctx, 31, 0x2C39FCu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C39F4u, 0x2C39FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39FCu;
label_2c39fc:
    // 0x2c39fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c39fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c3a04: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x2c3a04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c3a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a0c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c3a10: 0x24a5e120  addiu       $a1, $a1, -0x1EE0
    ctx->pc = 0x2c3a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
    // 0x2c3a14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c3a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3a18: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2C3A18u;
    SET_GPR_U32(ctx, 31, 0x2C3A20u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2C3A18u, 0x2C3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A20u;
label_2c3a20:
    // 0x2c3a20: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c3a20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3a24: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2c3a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2c3a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3a2c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3A2Cu;
    {
        const bool branch_taken_0x2c3a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3a2c) {
            ctx->pc = 0x2C3A44u;
            goto label_2c3a44;
        }
    }
    ctx->pc = 0x2C3A34u;
    // 0x2c3a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3a38: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c3a38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3A3Cu;
    {
        const bool branch_taken_0x2c3a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a3c) {
            ctx->pc = 0x2C3A60u;
            goto label_2c3a60;
        }
    }
    ctx->pc = 0x2C3A44u;
label_2c3a44:
    // 0x2c3a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a48: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c3a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c3a4c: 0x24a5e130  addiu       $a1, $a1, -0x1ED0
    ctx->pc = 0x2c3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959408));
    // 0x2c3a50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c3a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3a54: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2C3A54u;
    SET_GPR_U32(ctx, 31, 0x2C3A5Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2C3A54u, 0x2C3A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A5Cu;
label_2c3a5c:
    // 0x2c3a5c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c3a5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c3a60:
    // 0x2c3a60: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c3a64: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2C3A64u;
    SET_GPR_U32(ctx, 31, 0x2C3A6Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C3A64u, 0x2C3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A6Cu;
label_2c3a6c:
    // 0x2c3a6c: 0xafb40074  sw          $s4, 0x74($sp)
    ctx->pc = 0x2c3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 20));
    // 0x2c3a70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a74: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2c3a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c3a78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c3a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a80: 0xc0af050  jal         func_2BC140
    ctx->pc = 0x2C3A80u;
    SET_GPR_U32(ctx, 31, 0x2C3A88u);
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x2C3A80u, 0x2C3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A88u;
label_2c3a88:
    // 0x2c3a88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c3a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3a8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c3a8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3a90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c3a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3a94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3aa4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2c3aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c3aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3AB0u;
}
