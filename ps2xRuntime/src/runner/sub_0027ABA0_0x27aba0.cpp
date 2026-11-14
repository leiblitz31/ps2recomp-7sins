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

// Function: sub_0027ABA0
// Address: 0x27aba0 - 0x27ac10
void sub_0027ABA0_0x27aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ABA0_0x27aba0");
#endif

    switch (ctx->pc) {
        case 0x27abbcu: goto label_27abbc;
        default: break;
    }

    ctx->pc = 0x27aba0u;

    // 0x27aba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27aba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27aba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27abac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27abacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27abb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x27abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x27abb4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27ABB4u;
    {
        const bool branch_taken_0x27abb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27abb4) {
            ctx->pc = 0x27ABE4u;
            goto label_27abe4;
        }
    }
    ctx->pc = 0x27ABBCu;
label_27abbc:
    // 0x27abbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27abc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27abc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27abc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27abcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27abd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27abd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x27abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x27abd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27abdc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x27abdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x27abe0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x27abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_27abe4:
    // 0x27abe4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27abe8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27ABE8u;
    {
        const bool branch_taken_0x27abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27abe8) {
            ctx->pc = 0x27ABBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27abbc;
        }
    }
    ctx->pc = 0x27ABF0u;
    // 0x27abf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27abf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27abf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27abf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x27ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC04u;
    // 0x27ac04: 0x0  nop
    ctx->pc = 0x27ac04u;
    // NOP
    // 0x27ac08: 0x0  nop
    ctx->pc = 0x27ac08u;
    // NOP
    // 0x27ac0c: 0x0  nop
    ctx->pc = 0x27ac0cu;
    // NOP
    ctx->pc = 0x27ac10u;
}
