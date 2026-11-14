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

// Function: sub_0019D940
// Address: 0x19d940 - 0x19d9c0
void sub_0019D940_0x19d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D940_0x19d940");
#endif

    switch (ctx->pc) {
        case 0x19d968u: goto label_19d968;
        case 0x19d978u: goto label_19d978;
        default: break;
    }

    ctx->pc = 0x19d940u;

    // 0x19d940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19d944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d950: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19d950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19d954: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19d954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19d958: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x19d958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x19d95c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x19d95cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19D960u;
    {
        const bool branch_taken_0x19d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d960) {
            ctx->pc = 0x19D98Cu;
            goto label_19d98c;
        }
    }
    ctx->pc = 0x19D968u;
label_19d968:
    // 0x19d968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d96c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x19d96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d970: 0xc067670  jal         func_19D9C0
    ctx->pc = 0x19D970u;
    SET_GPR_U32(ctx, 31, 0x19D978u);
    ctx->pc = 0x19D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9C0u, 0x19D970u, 0x19D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D978u;
label_19d978:
    // 0x19d978: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d97c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19d980: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x19d980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x19d984: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x19d984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x19d988: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19d988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d98c:
    // 0x19d98c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d990: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19D990u;
    {
        const bool branch_taken_0x19d990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d990) {
            ctx->pc = 0x19D968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d968;
        }
    }
    ctx->pc = 0x19D998u;
    // 0x19d998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d99c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d9a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19d9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19d9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D9B4u;
    // 0x19d9b4: 0x0  nop
    ctx->pc = 0x19d9b4u;
    // NOP
    // 0x19d9b8: 0x0  nop
    ctx->pc = 0x19d9b8u;
    // NOP
    // 0x19d9bc: 0x0  nop
    ctx->pc = 0x19d9bcu;
    // NOP
    ctx->pc = 0x19d9c0u;
}
