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

// Function: sub_00282220
// Address: 0x282220 - 0x282270
void sub_00282220_0x282220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282220_0x282220");
#endif

    switch (ctx->pc) {
        case 0x282250u: goto label_282250;
        default: break;
    }

    ctx->pc = 0x282220u;

    // 0x282220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282228: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x282228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28222c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282230: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x282230u;
    {
        const bool branch_taken_0x282230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282230) {
            ctx->pc = 0x282254u;
            goto label_282254;
        }
    }
    ctx->pc = 0x282238u;
    // 0x282238: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x282238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28223c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28223Cu;
    {
        const bool branch_taken_0x28223c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28223c) {
            ctx->pc = 0x282254u;
            goto label_282254;
        }
    }
    ctx->pc = 0x282244u;
    // 0x282244: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282248: 0xc119c5c  jal         func_467170
    ctx->pc = 0x282248u;
    SET_GPR_U32(ctx, 31, 0x282250u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x282248u, 0x282250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282250u;
label_282250:
    // 0x282250: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x282250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_282254:
    // 0x282254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282258: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x282258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28225c: 0x3e00008  jr          $ra
    ctx->pc = 0x28225Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28225Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282264u;
    // 0x282264: 0x0  nop
    ctx->pc = 0x282264u;
    // NOP
    // 0x282268: 0x0  nop
    ctx->pc = 0x282268u;
    // NOP
    // 0x28226c: 0x0  nop
    ctx->pc = 0x28226cu;
    // NOP
    ctx->pc = 0x282270u;
}
