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

// Function: sub_00444C68
// Address: 0x444c68 - 0x444c98
void sub_00444C68_0x444c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444C68_0x444c68");
#endif

    switch (ctx->pc) {
        case 0x444c80u: goto label_444c80;
        default: break;
    }

    ctx->pc = 0x444c68u;

    // 0x444c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x444c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x444c6c: 0xaf85bf20  sw          $a1, -0x40E0($gp)
    ctx->pc = 0x444c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950688), GPR_U32(ctx, 5));
    // 0x444c70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x444c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x444c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x444c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x444c78: 0xc111504  jal         func_445410
    ctx->pc = 0x444C78u;
    SET_GPR_U32(ctx, 31, 0x444C80u);
    ctx->pc = 0x444C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444C78u;
    // 0x444c7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445410u, 0x444C78u, 0x444C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444C80u;
label_444c80:
    // 0x444c80: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x444c80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x444c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x444c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444c88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x444c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444c8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x444c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444c90: 0x3e00008  jr          $ra
    ctx->pc = 0x444C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C90u;
        // 0x444c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444C98u;
}
