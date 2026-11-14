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

// Function: sub_00129290
// Address: 0x129290 - 0x129310
void sub_00129290_0x129290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129290_0x129290");
#endif

    ctx->pc = 0x129290u;

    // 0x129290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x129298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12929c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1292a0: 0xaf838b30  sw          $v1, -0x74D0($gp)
    ctx->pc = 0x1292a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
    // 0x1292a4: 0x8f84ba1c  lw          $a0, -0x45E4($gp)
    ctx->pc = 0x1292a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
    // 0x1292a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1292a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1292ac: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1292ACu;
    {
        const bool branch_taken_0x1292ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1292ac) {
            ctx->pc = 0x1292D4u;
            goto label_1292d4;
        }
    }
    ctx->pc = 0x1292B4u;
    // 0x1292b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1292b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1292b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1292B8u;
    {
        const bool branch_taken_0x1292b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1292b8) {
            ctx->pc = 0x1292C8u;
            goto label_1292c8;
        }
    }
    ctx->pc = 0x1292C0u;
    // 0x1292c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1292C0u;
    {
        const bool branch_taken_0x1292c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292c0) {
            ctx->pc = 0x1292F8u;
            goto label_1292f8;
        }
    }
    ctx->pc = 0x1292C8u;
label_1292c8:
    // 0x1292c8: 0xaf808b30  sw          $zero, -0x74D0($gp)
    ctx->pc = 0x1292c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 0));
    // 0x1292cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1292CCu;
    {
        const bool branch_taken_0x1292cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292cc) {
            ctx->pc = 0x1292F8u;
            goto label_1292f8;
        }
    }
    ctx->pc = 0x1292D4u;
label_1292d4:
    // 0x1292d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1292d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1292d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1292d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1292dc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1292DCu;
    {
        const bool branch_taken_0x1292dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1292dc) {
            ctx->pc = 0x1292F0u;
            goto label_1292f0;
        }
    }
    ctx->pc = 0x1292E4u;
    // 0x1292e4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1292e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1292e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1292E8u;
    {
        const bool branch_taken_0x1292e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292e8) {
            ctx->pc = 0x1292F4u;
            goto label_1292f4;
        }
    }
    ctx->pc = 0x1292F0u;
label_1292f0:
    // 0x1292f0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1292f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1292f4:
    // 0x1292f4: 0xaf908b30  sw          $s0, -0x74D0($gp)
    ctx->pc = 0x1292f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 16));
label_1292f8:
    // 0x1292f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1292f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1292fc: 0xa383ba18  sb          $v1, -0x45E8($gp)
    ctx->pc = 0x1292fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949400), (uint8_t)GPR_U32(ctx, 3));
    // 0x129300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129304: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x129304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x129308: 0x3e00008  jr          $ra
    ctx->pc = 0x129308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129310u;
}
