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

// Function: sub_0019CC60
// Address: 0x19cc60 - 0x19ccb0
void sub_0019CC60_0x19cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CC60_0x19cc60");
#endif

    switch (ctx->pc) {
        case 0x19cc90u: goto label_19cc90;
        default: break;
    }

    ctx->pc = 0x19cc60u;

    // 0x19cc60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19cc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19cc68: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19cc6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cc70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC70u;
    {
        const bool branch_taken_0x19cc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc70) {
            ctx->pc = 0x19CC94u;
            goto label_19cc94;
        }
    }
    ctx->pc = 0x19CC78u;
    // 0x19cc78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cc7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CC7Cu;
    {
        const bool branch_taken_0x19cc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc7c) {
            ctx->pc = 0x19CC94u;
            goto label_19cc94;
        }
    }
    ctx->pc = 0x19CC84u;
    // 0x19cc84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cc88: 0xc119c5c  jal         func_467170
    ctx->pc = 0x19CC88u;
    SET_GPR_U32(ctx, 31, 0x19CC90u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x19CC88u, 0x19CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC90u;
label_19cc90:
    // 0x19cc90: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_19cc94:
    // 0x19cc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cc98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19cc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCA4u;
    // 0x19cca4: 0x0  nop
    ctx->pc = 0x19cca4u;
    // NOP
    // 0x19cca8: 0x0  nop
    ctx->pc = 0x19cca8u;
    // NOP
    // 0x19ccac: 0x0  nop
    ctx->pc = 0x19ccacu;
    // NOP
    ctx->pc = 0x19ccb0u;
}
