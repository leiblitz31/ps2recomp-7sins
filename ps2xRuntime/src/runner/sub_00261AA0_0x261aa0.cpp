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

// Function: sub_00261AA0
// Address: 0x261aa0 - 0x261b20
void sub_00261AA0_0x261aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261AA0_0x261aa0");
#endif

    switch (ctx->pc) {
        case 0x261ab8u: goto label_261ab8;
        default: break;
    }

    ctx->pc = 0x261aa0u;

    // 0x261aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261aa4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x261aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x261aa8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x261aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x261aac: 0x24c6c810  addiu       $a2, $a2, -0x37F0
    ctx->pc = 0x261aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952976));
    // 0x261ab0: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x261ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x261ab4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x261ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_261ab8:
    // 0x261ab8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x261ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x261abc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x261abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x261ac0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x261ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x261ac4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x261ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x261ac8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x261ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x261acc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x261accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x261ad0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x261ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x261ad4: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x261AD4u;
    {
        const bool branch_taken_0x261ad4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x261ad4) {
            ctx->pc = 0x261AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261ab8;
        }
    }
    ctx->pc = 0x261ADCu;
    // 0x261adc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x261adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261ae0: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x261AE0u;
    {
        const bool branch_taken_0x261ae0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x261ae0) {
            ctx->pc = 0x261B10u;
            goto label_261b10;
        }
    }
    ctx->pc = 0x261AE8u;
    // 0x261ae8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x261ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261aec: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x261aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x261af0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x261AF0u;
    {
        const bool branch_taken_0x261af0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261af0) {
            ctx->pc = 0x261B10u;
            goto label_261b10;
        }
    }
    ctx->pc = 0x261AF8u;
    // 0x261af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x261af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261afc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x261afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261b00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x261b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x261b04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261b08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x261B08u;
    {
        const bool branch_taken_0x261b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b08) {
            ctx->pc = 0x261B14u;
            goto label_261b14;
        }
    }
    ctx->pc = 0x261B10u;
label_261b10:
    // 0x261b10: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_261b14:
    // 0x261b14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261b18: 0x3e00008  jr          $ra
    ctx->pc = 0x261B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261B20u;
}
