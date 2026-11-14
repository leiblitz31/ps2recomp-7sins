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

// Function: sub_0023E260
// Address: 0x23e260 - 0x23e2b0
void sub_0023E260_0x23e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E260_0x23e260");
#endif

    switch (ctx->pc) {
        case 0x23e290u: goto label_23e290;
        default: break;
    }

    ctx->pc = 0x23e260u;

    // 0x23e260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23e264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e268: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23e268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23e26c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e270: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E270u;
    {
        const bool branch_taken_0x23e270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e270) {
            ctx->pc = 0x23E294u;
            goto label_23e294;
        }
    }
    ctx->pc = 0x23E278u;
    // 0x23e278: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e27c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E27Cu;
    {
        const bool branch_taken_0x23e27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e27c) {
            ctx->pc = 0x23E294u;
            goto label_23e294;
        }
    }
    ctx->pc = 0x23E284u;
    // 0x23e284: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23e284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e288: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23E288u;
    SET_GPR_U32(ctx, 31, 0x23E290u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23E288u, 0x23E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E290u;
label_23e290:
    // 0x23e290: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23e290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_23e294:
    // 0x23e294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e298: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23e298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23e29c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E2A4u;
    // 0x23e2a4: 0x0  nop
    ctx->pc = 0x23e2a4u;
    // NOP
    // 0x23e2a8: 0x0  nop
    ctx->pc = 0x23e2a8u;
    // NOP
    // 0x23e2ac: 0x0  nop
    ctx->pc = 0x23e2acu;
    // NOP
    ctx->pc = 0x23e2b0u;
}
