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

// Function: sub_0029AB60
// Address: 0x29ab60 - 0x29abd0
void sub_0029AB60_0x29ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AB60_0x29ab60");
#endif

    switch (ctx->pc) {
        case 0x29ab7cu: goto label_29ab7c;
        default: break;
    }

    ctx->pc = 0x29ab60u;

    // 0x29ab60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ab64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ab68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29ab6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x29ab70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x29ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x29ab74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29AB74u;
    {
        const bool branch_taken_0x29ab74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ab74) {
            ctx->pc = 0x29ABA4u;
            goto label_29aba4;
        }
    }
    ctx->pc = 0x29AB7Cu;
label_29ab7c:
    // 0x29ab7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ab80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ab84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29ab8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ab90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29ab94: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29ab98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab9c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x29ab9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29aba0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x29aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_29aba4:
    // 0x29aba4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29aba8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29ABA8u;
    {
        const bool branch_taken_0x29aba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aba8) {
            ctx->pc = 0x29AB7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ab7c;
        }
    }
    ctx->pc = 0x29ABB0u;
    // 0x29abb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29abb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29abb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29abb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29abbc: 0x3e00008  jr          $ra
    ctx->pc = 0x29ABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ABC4u;
    // 0x29abc4: 0x0  nop
    ctx->pc = 0x29abc4u;
    // NOP
    // 0x29abc8: 0x0  nop
    ctx->pc = 0x29abc8u;
    // NOP
    // 0x29abcc: 0x0  nop
    ctx->pc = 0x29abccu;
    // NOP
    ctx->pc = 0x29abd0u;
}
