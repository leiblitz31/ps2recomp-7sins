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

// Function: sub_001A7F60
// Address: 0x1a7f60 - 0x1a7fb0
void sub_001A7F60_0x1a7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7F60_0x1a7f60");
#endif

    switch (ctx->pc) {
        case 0x1a7f90u: goto label_1a7f90;
        default: break;
    }

    ctx->pc = 0x1a7f60u;

    // 0x1a7f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7f68: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a7f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a7f6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7f70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7F70u;
    {
        const bool branch_taken_0x1a7f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f70) {
            ctx->pc = 0x1A7F94u;
            goto label_1a7f94;
        }
    }
    ctx->pc = 0x1A7F78u;
    // 0x1a7f78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7f7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7F7Cu;
    {
        const bool branch_taken_0x1a7f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f7c) {
            ctx->pc = 0x1A7F94u;
            goto label_1a7f94;
        }
    }
    ctx->pc = 0x1A7F84u;
    // 0x1a7f84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7f88: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1A7F88u;
    SET_GPR_U32(ctx, 31, 0x1A7F90u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1A7F88u, 0x1A7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F90u;
label_1a7f90:
    // 0x1a7f90: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1a7f94:
    // 0x1a7f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7f98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a7f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a7f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7FA4u;
    // 0x1a7fa4: 0x0  nop
    ctx->pc = 0x1a7fa4u;
    // NOP
    // 0x1a7fa8: 0x0  nop
    ctx->pc = 0x1a7fa8u;
    // NOP
    // 0x1a7fac: 0x0  nop
    ctx->pc = 0x1a7facu;
    // NOP
    ctx->pc = 0x1a7fb0u;
}
