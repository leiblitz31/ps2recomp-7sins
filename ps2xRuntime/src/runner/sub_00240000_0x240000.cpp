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

// Function: sub_00240000
// Address: 0x240000 - 0x240060
void sub_00240000_0x240000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240000_0x240000");
#endif

    switch (ctx->pc) {
        case 0x240018u: goto label_240018;
        default: break;
    }

    ctx->pc = 0x240000u;

    // 0x240000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240004: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x240004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x240008: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x240008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24000c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x24000cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240010: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x240010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240014: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x240014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_240018:
    // 0x240018: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24001c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x240020: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x240020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x240024: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x240024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x240028: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x240028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x24002c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24002cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x240030: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x240030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x240034: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x240034u;
    {
        const bool branch_taken_0x240034 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x240034) {
            ctx->pc = 0x240018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240018;
        }
    }
    ctx->pc = 0x24003Cu;
    // 0x24003c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240040: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x240040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x240044: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240048: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x240048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x24004c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240050: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x240050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x240054: 0x3e00008  jr          $ra
    ctx->pc = 0x240054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24005Cu;
    // 0x24005c: 0x0  nop
    ctx->pc = 0x24005cu;
    // NOP
    ctx->pc = 0x240060u;
}
