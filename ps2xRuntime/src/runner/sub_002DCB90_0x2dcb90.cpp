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

// Function: sub_002DCB90
// Address: 0x2dcb90 - 0x2dcbf0
void sub_002DCB90_0x2dcb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCB90_0x2dcb90");
#endif

    switch (ctx->pc) {
        case 0x2dcbb4u: goto label_2dcbb4;
        case 0x2dcbd0u: goto label_2dcbd0;
        default: break;
    }

    ctx->pc = 0x2dcb90u;

    // 0x2dcb90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dcb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dcb94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dcb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dcb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dcb9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2dcb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2dcba0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2dcba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2dcba4: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2dcba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2dcba8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2dcba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcbac: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2DCBACu;
    SET_GPR_U32(ctx, 31, 0x2DCBB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2DCBACu, 0x2DCBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBB4u;
label_2dcbb4:
    // 0x2dcbb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbb8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCBB8u;
    {
        const bool branch_taken_0x2dcbb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcbb8) {
            ctx->pc = 0x2DCBD4u;
            goto label_2dcbd4;
        }
    }
    ctx->pc = 0x2DCBC0u;
    // 0x2dcbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbc4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2dcbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcbc8: 0xc0b72fc  jal         func_2DCBF0
    ctx->pc = 0x2DCBC8u;
    SET_GPR_U32(ctx, 31, 0x2DCBD0u);
    ctx->pc = 0x2DCBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCBF0u, 0x2DCBC8u, 0x2DCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBD0u;
label_2dcbd0:
    // 0x2dcbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcbd4:
    // 0x2dcbd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dcbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcbd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcbdc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dcbdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dcbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCBE8u;
    // 0x2dcbe8: 0x0  nop
    ctx->pc = 0x2dcbe8u;
    // NOP
    // 0x2dcbec: 0x0  nop
    ctx->pc = 0x2dcbecu;
    // NOP
    ctx->pc = 0x2dcbf0u;
}
