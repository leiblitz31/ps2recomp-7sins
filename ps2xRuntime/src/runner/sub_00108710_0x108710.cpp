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

// Function: sub_00108710
// Address: 0x108710 - 0x108780
void sub_00108710_0x108710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108710_0x108710");
#endif

    switch (ctx->pc) {
        case 0x10872cu: goto label_10872c;
        default: break;
    }

    ctx->pc = 0x108710u;

    // 0x108710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x108714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10871c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x108720: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x108720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x108724: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x108724u;
    {
        const bool branch_taken_0x108724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108724) {
            ctx->pc = 0x108754u;
            goto label_108754;
        }
    }
    ctx->pc = 0x10872Cu;
label_10872c:
    // 0x10872c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108738: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10873c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108740: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108744: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x108744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x108748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10874c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x10874cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x108750: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x108750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_108754:
    // 0x108754: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x108754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108758: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x108758u;
    {
        const bool branch_taken_0x108758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108758) {
            ctx->pc = 0x10872Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10872c;
        }
    }
    ctx->pc = 0x108760u;
    // 0x108760: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108768: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x108768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10876c: 0x3e00008  jr          $ra
    ctx->pc = 0x10876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10876Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108774u;
    // 0x108774: 0x0  nop
    ctx->pc = 0x108774u;
    // NOP
    // 0x108778: 0x0  nop
    ctx->pc = 0x108778u;
    // NOP
    // 0x10877c: 0x0  nop
    ctx->pc = 0x10877cu;
    // NOP
    ctx->pc = 0x108780u;
}
