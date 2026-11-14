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

// Function: sub_00240120
// Address: 0x240120 - 0x240170
void sub_00240120_0x240120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240120_0x240120");
#endif

    switch (ctx->pc) {
        case 0x240150u: goto label_240150;
        default: break;
    }

    ctx->pc = 0x240120u;

    // 0x240120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240128: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x240128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24012c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240130: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x240130u;
    {
        const bool branch_taken_0x240130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240130) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x240138u;
    // 0x240138: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x240138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24013c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24013Cu;
    {
        const bool branch_taken_0x24013c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24013c) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x240144u;
    // 0x240144: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x240144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240148: 0xc119c5c  jal         func_467170
    ctx->pc = 0x240148u;
    SET_GPR_U32(ctx, 31, 0x240150u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x240148u, 0x240150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240150u;
label_240150:
    // 0x240150: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x240150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_240154:
    // 0x240154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240158: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x240158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24015c: 0x3e00008  jr          $ra
    ctx->pc = 0x24015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240164u;
    // 0x240164: 0x0  nop
    ctx->pc = 0x240164u;
    // NOP
    // 0x240168: 0x0  nop
    ctx->pc = 0x240168u;
    // NOP
    // 0x24016c: 0x0  nop
    ctx->pc = 0x24016cu;
    // NOP
    ctx->pc = 0x240170u;
}
