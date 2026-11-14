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

// Function: sub_00464490
// Address: 0x464490 - 0x4644e0
void sub_00464490_0x464490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464490_0x464490");
#endif

    ctx->pc = 0x464490u;

    // 0x464490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x464490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x464494: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46449c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46449cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4644a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4644a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4644a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4644a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4644a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4644a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4644ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4644acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4644b0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x4644b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4644b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x4644B4u;
    {
        const bool branch_taken_0x4644b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4644b4) {
            ctx->pc = 0x4644C8u;
            goto label_4644c8;
        }
    }
    ctx->pc = 0x4644BCu;
    // 0x4644bc: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x4644bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4644c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4644C0u;
    {
        const bool branch_taken_0x4644c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4644c0) {
            ctx->pc = 0x4644CCu;
            goto label_4644cc;
        }
    }
    ctx->pc = 0x4644C8u;
label_4644c8:
    // 0x4644c8: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x4644c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4644cc:
    // 0x4644cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4644ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4644d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4644d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4644d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4644d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4644d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4644D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4644D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4644E0u;
}
