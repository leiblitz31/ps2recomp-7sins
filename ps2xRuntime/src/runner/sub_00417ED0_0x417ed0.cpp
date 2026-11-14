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

// Function: sub_00417ED0
// Address: 0x417ed0 - 0x417f10
void sub_00417ED0_0x417ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417ED0_0x417ed0");
#endif

    switch (ctx->pc) {
        case 0x417ee8u: goto label_417ee8;
        default: break;
    }

    ctx->pc = 0x417ed0u;

    // 0x417ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x417ed4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x417ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x417ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x417edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x417edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417ee0: 0xc1075a6  jal         func_41D698
    ctx->pc = 0x417EE0u;
    SET_GPR_U32(ctx, 31, 0x417EE8u);
    ctx->pc = 0x417EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417EE0u;
    // 0x417ee4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D698u, 0x417EE0u, 0x417EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417EE8u;
label_417ee8:
    // 0x417ee8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x417ee8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x417eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417ef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417ef4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x417ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x417EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417EF8u;
        // 0x417efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417F00u;
    // 0x417f00: 0xaf84ad78  sw          $a0, -0x5288($gp)
    ctx->pc = 0x417f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946168), GPR_U32(ctx, 4));
    // 0x417f04: 0x3e00008  jr          $ra
    ctx->pc = 0x417F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F04u;
        // 0x417f08: 0xaf85ad7c  sw          $a1, -0x5284($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417F0Cu;
    // 0x417f0c: 0x0  nop
    ctx->pc = 0x417f0cu;
    // NOP
    ctx->pc = 0x417f10u;
}
