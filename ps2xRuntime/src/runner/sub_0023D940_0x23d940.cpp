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

// Function: sub_0023D940
// Address: 0x23d940 - 0x23d9c0
void sub_0023D940_0x23d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D940_0x23d940");
#endif

    switch (ctx->pc) {
        case 0x23d968u: goto label_23d968;
        case 0x23d978u: goto label_23d978;
        default: break;
    }

    ctx->pc = 0x23d940u;

    // 0x23d940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23d944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23d948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d950: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23d950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23d954: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23d954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23d958: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x23d958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23d95c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x23d95cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23D960u;
    {
        const bool branch_taken_0x23d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d960) {
            ctx->pc = 0x23D98Cu;
            goto label_23d98c;
        }
    }
    ctx->pc = 0x23D968u;
label_23d968:
    // 0x23d968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d96c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23d96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d970: 0xc08f680  jal         func_23DA00
    ctx->pc = 0x23D970u;
    SET_GPR_U32(ctx, 31, 0x23D978u);
    ctx->pc = 0x23DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA00u, 0x23D970u, 0x23D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D978u;
label_23d978:
    // 0x23d978: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d97c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23d980: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x23d980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x23d984: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x23d984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x23d988: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23d988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d98c:
    // 0x23d98c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d990: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d994: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23D994u;
    {
        const bool branch_taken_0x23d994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d994) {
            ctx->pc = 0x23D968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d968;
        }
    }
    ctx->pc = 0x23D99Cu;
    // 0x23d99c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23d99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23d9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d9ac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23d9acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23D9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D9B8u;
    // 0x23d9b8: 0x0  nop
    ctx->pc = 0x23d9b8u;
    // NOP
    // 0x23d9bc: 0x0  nop
    ctx->pc = 0x23d9bcu;
    // NOP
    ctx->pc = 0x23d9c0u;
}
