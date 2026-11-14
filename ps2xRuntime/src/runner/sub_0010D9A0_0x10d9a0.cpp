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

// Function: sub_0010D9A0
// Address: 0x10d9a0 - 0x10da20
void sub_0010D9A0_0x10d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D9A0_0x10d9a0");
#endif

    switch (ctx->pc) {
        case 0x10d9c8u: goto label_10d9c8;
        case 0x10d9d8u: goto label_10d9d8;
        default: break;
    }

    ctx->pc = 0x10d9a0u;

    // 0x10d9a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10d9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10d9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10d9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10d9b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x10d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x10d9b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x10d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x10d9b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x10d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x10d9bc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x10d9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d9c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10D9C0u;
    {
        const bool branch_taken_0x10d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d9c0) {
            ctx->pc = 0x10D9ECu;
            goto label_10d9ec;
        }
    }
    ctx->pc = 0x10D9C8u;
label_10d9c8:
    // 0x10d9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9cc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d9d0: 0xc04282c  jal         func_10A0B0
    ctx->pc = 0x10D9D0u;
    SET_GPR_U32(ctx, 31, 0x10D9D8u);
    ctx->pc = 0x10A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0B0u, 0x10D9D0u, 0x10D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9D8u;
label_10d9d8:
    // 0x10d9d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d9dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d9e0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x10d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x10d9e4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x10d9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10d9e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x10d9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d9ec:
    // 0x10d9ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d9f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x10D9F0u;
    {
        const bool branch_taken_0x10d9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d9f0) {
            ctx->pc = 0x10D9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d9c8;
        }
    }
    ctx->pc = 0x10D9F8u;
    // 0x10d9f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10d9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10da00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10da00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10da04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10da08: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x10da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10da0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DA14u;
    // 0x10da14: 0x0  nop
    ctx->pc = 0x10da14u;
    // NOP
    // 0x10da18: 0x0  nop
    ctx->pc = 0x10da18u;
    // NOP
    // 0x10da1c: 0x0  nop
    ctx->pc = 0x10da1cu;
    // NOP
    ctx->pc = 0x10da20u;
}
