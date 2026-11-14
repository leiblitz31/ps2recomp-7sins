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

// Function: sub_00189FF0
// Address: 0x189ff0 - 0x18a070
void sub_00189FF0_0x189ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189FF0_0x189ff0");
#endif

    switch (ctx->pc) {
        case 0x18a018u: goto label_18a018;
        case 0x18a028u: goto label_18a028;
        default: break;
    }

    ctx->pc = 0x189ff0u;

    // 0x189ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x189ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x189ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a000: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18a000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18a004: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18a004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18a008: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18a008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18a00c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x18a00cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a010: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A010u;
    {
        const bool branch_taken_0x18a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a010) {
            ctx->pc = 0x18A03Cu;
            goto label_18a03c;
        }
    }
    ctx->pc = 0x18A018u;
label_18a018:
    // 0x18a018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a01c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a020: 0xc06284c  jal         func_18A130
    ctx->pc = 0x18A020u;
    SET_GPR_U32(ctx, 31, 0x18A028u);
    ctx->pc = 0x18A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A130u, 0x18A020u, 0x18A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A028u;
label_18a028:
    // 0x18a028: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a02c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a030: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18a030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x18a034: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x18a034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x18a038: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x18a038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a03c:
    // 0x18a03c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a040: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18A040u;
    {
        const bool branch_taken_0x18a040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a040) {
            ctx->pc = 0x18A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a018;
        }
    }
    ctx->pc = 0x18A048u;
    // 0x18a048: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18a048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a04c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a058: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A064u;
    // 0x18a064: 0x0  nop
    ctx->pc = 0x18a064u;
    // NOP
    // 0x18a068: 0x0  nop
    ctx->pc = 0x18a068u;
    // NOP
    // 0x18a06c: 0x0  nop
    ctx->pc = 0x18a06cu;
    // NOP
    ctx->pc = 0x18a070u;
}
