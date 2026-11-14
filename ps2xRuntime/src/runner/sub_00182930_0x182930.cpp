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

// Function: sub_00182930
// Address: 0x182930 - 0x182980
void sub_00182930_0x182930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182930_0x182930");
#endif

    switch (ctx->pc) {
        case 0x182960u: goto label_182960;
        default: break;
    }

    ctx->pc = 0x182930u;

    // 0x182930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182938: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x182938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18293c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182940: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x182940u;
    {
        const bool branch_taken_0x182940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182940) {
            ctx->pc = 0x182964u;
            goto label_182964;
        }
    }
    ctx->pc = 0x182948u;
    // 0x182948: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18294c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18294Cu;
    {
        const bool branch_taken_0x18294c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18294c) {
            ctx->pc = 0x182964u;
            goto label_182964;
        }
    }
    ctx->pc = 0x182954u;
    // 0x182954: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x182954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182958: 0xc119c5c  jal         func_467170
    ctx->pc = 0x182958u;
    SET_GPR_U32(ctx, 31, 0x182960u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x182958u, 0x182960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182960u;
label_182960:
    // 0x182960: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x182960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_182964:
    // 0x182964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182968: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18296c: 0x3e00008  jr          $ra
    ctx->pc = 0x18296Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18296Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182974u;
    // 0x182974: 0x0  nop
    ctx->pc = 0x182974u;
    // NOP
    // 0x182978: 0x0  nop
    ctx->pc = 0x182978u;
    // NOP
    // 0x18297c: 0x0  nop
    ctx->pc = 0x18297cu;
    // NOP
    ctx->pc = 0x182980u;
}
