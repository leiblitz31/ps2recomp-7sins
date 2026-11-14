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

// Function: sub_0028E560
// Address: 0x28e560 - 0x28e5e0
void sub_0028E560_0x28e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E560_0x28e560");
#endif

    switch (ctx->pc) {
        case 0x28e588u: goto label_28e588;
        case 0x28e598u: goto label_28e598;
        default: break;
    }

    ctx->pc = 0x28e560u;

    // 0x28e560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28e564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28e568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e570: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x28e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x28e574: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28e574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x28e578: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x28e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x28e57c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x28e57cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e580: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E580u;
    {
        const bool branch_taken_0x28e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e580) {
            ctx->pc = 0x28E5ACu;
            goto label_28e5ac;
        }
    }
    ctx->pc = 0x28E588u;
label_28e588:
    // 0x28e588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e58c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x28e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e590: 0xc0a3978  jal         func_28E5E0
    ctx->pc = 0x28E590u;
    SET_GPR_U32(ctx, 31, 0x28E598u);
    ctx->pc = 0x28E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E5E0u, 0x28E590u, 0x28E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E598u;
label_28e598:
    // 0x28e598: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e59c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28e5a0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x28e5a4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28e5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28e5a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28e5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e5ac:
    // 0x28e5ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e5b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28E5B0u;
    {
        const bool branch_taken_0x28e5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e5b0) {
            ctx->pc = 0x28E588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e588;
        }
    }
    ctx->pc = 0x28E5B8u;
    // 0x28e5b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28e5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e5c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e5c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e5c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28e5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28e5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x28E5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E5D4u;
    // 0x28e5d4: 0x0  nop
    ctx->pc = 0x28e5d4u;
    // NOP
    // 0x28e5d8: 0x0  nop
    ctx->pc = 0x28e5d8u;
    // NOP
    // 0x28e5dc: 0x0  nop
    ctx->pc = 0x28e5dcu;
    // NOP
    ctx->pc = 0x28e5e0u;
}
