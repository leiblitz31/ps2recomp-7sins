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

// Function: sub_001A3500
// Address: 0x1a3500 - 0x1a3570
void sub_001A3500_0x1a3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3500_0x1a3500");
#endif

    switch (ctx->pc) {
        case 0x1a351cu: goto label_1a351c;
        default: break;
    }

    ctx->pc = 0x1a3500u;

    // 0x1a3500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a3508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a350c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a350cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a3510: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1a3510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1a3514: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A3514u;
    {
        const bool branch_taken_0x1a3514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3514) {
            ctx->pc = 0x1A3544u;
            goto label_1a3544;
        }
    }
    ctx->pc = 0x1A351Cu;
label_1a351c:
    // 0x1a351c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3520: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a3520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a3528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a352c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a3534: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a3534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1a3538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a3538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a353c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1a353cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a3540: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1a3540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1a3544:
    // 0x1a3544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a3544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3548: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A3548u;
    {
        const bool branch_taken_0x1a3548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3548) {
            ctx->pc = 0x1A351Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a351c;
        }
    }
    ctx->pc = 0x1A3550u;
    // 0x1a3550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3558: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a355c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3564u;
    // 0x1a3564: 0x0  nop
    ctx->pc = 0x1a3564u;
    // NOP
    // 0x1a3568: 0x0  nop
    ctx->pc = 0x1a3568u;
    // NOP
    // 0x1a356c: 0x0  nop
    ctx->pc = 0x1a356cu;
    // NOP
    ctx->pc = 0x1a3570u;
}
