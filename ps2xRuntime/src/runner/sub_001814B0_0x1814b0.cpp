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

// Function: sub_001814B0
// Address: 0x1814b0 - 0x181530
void sub_001814B0_0x1814b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001814B0_0x1814b0");
#endif

    switch (ctx->pc) {
        case 0x1814d8u: goto label_1814d8;
        case 0x1814e8u: goto label_1814e8;
        default: break;
    }

    ctx->pc = 0x1814b0u;

    // 0x1814b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1814b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1814b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1814b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1814b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1814b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1814bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1814bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1814c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1814c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1814c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1814c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1814c8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1814c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1814cc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1814d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1814D0u;
    {
        const bool branch_taken_0x1814d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1814d0) {
            ctx->pc = 0x1814FCu;
            goto label_1814fc;
        }
    }
    ctx->pc = 0x1814D8u;
label_1814d8:
    // 0x1814d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1814d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1814dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1814e0: 0xc06054c  jal         func_181530
    ctx->pc = 0x1814E0u;
    SET_GPR_U32(ctx, 31, 0x1814E8u);
    ctx->pc = 0x181530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181530u, 0x1814E0u, 0x1814E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814E8u;
label_1814e8:
    // 0x1814e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1814ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1814f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1814f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1814f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1814f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1814f8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1814f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1814fc:
    // 0x1814fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1814fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181500: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x181500u;
    {
        const bool branch_taken_0x181500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181500) {
            ctx->pc = 0x1814D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1814d8;
        }
    }
    ctx->pc = 0x181508u;
    // 0x181508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18150c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181518: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x181518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18151c: 0x3e00008  jr          $ra
    ctx->pc = 0x18151Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18151Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181524u;
    // 0x181524: 0x0  nop
    ctx->pc = 0x181524u;
    // NOP
    // 0x181528: 0x0  nop
    ctx->pc = 0x181528u;
    // NOP
    // 0x18152c: 0x0  nop
    ctx->pc = 0x18152cu;
    // NOP
    ctx->pc = 0x181530u;
}
