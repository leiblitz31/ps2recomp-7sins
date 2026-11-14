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

// Function: sub_00278600
// Address: 0x278600 - 0x278670
void sub_00278600_0x278600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278600_0x278600");
#endif

    switch (ctx->pc) {
        case 0x27861cu: goto label_27861c;
        default: break;
    }

    ctx->pc = 0x278600u;

    // 0x278600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x278604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27860c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x278610: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x278610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x278614: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278614u;
    {
        const bool branch_taken_0x278614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278614) {
            ctx->pc = 0x278644u;
            goto label_278644;
        }
    }
    ctx->pc = 0x27861Cu;
label_27861c:
    // 0x27861c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x278628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27862c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x278630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x278634: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x278634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x278638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27863c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x27863cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x278640: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x278640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_278644:
    // 0x278644: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278648: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x278648u;
    {
        const bool branch_taken_0x278648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278648) {
            ctx->pc = 0x27861Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27861c;
        }
    }
    ctx->pc = 0x278650u;
    // 0x278650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278658: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x278658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27865c: 0x3e00008  jr          $ra
    ctx->pc = 0x27865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278664u;
    // 0x278664: 0x0  nop
    ctx->pc = 0x278664u;
    // NOP
    // 0x278668: 0x0  nop
    ctx->pc = 0x278668u;
    // NOP
    // 0x27866c: 0x0  nop
    ctx->pc = 0x27866cu;
    // NOP
    ctx->pc = 0x278670u;
}
