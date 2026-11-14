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

// Function: sub_002C15F0
// Address: 0x2c15f0 - 0x2c1660
void sub_002C15F0_0x2c15f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C15F0_0x2c15f0");
#endif

    switch (ctx->pc) {
        case 0x2c160cu: goto label_2c160c;
        default: break;
    }

    ctx->pc = 0x2c15f0u;

    // 0x2c15f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c15f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c15f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c15f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c15f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c15fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c1600: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2c1600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2c1604: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C1604u;
    {
        const bool branch_taken_0x2c1604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1604) {
            ctx->pc = 0x2C1634u;
            goto label_2c1634;
        }
    }
    ctx->pc = 0x2C160Cu;
label_2c160c:
    // 0x2c160c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1618: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c1618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c161c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c1620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c1624: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c1624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c1628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c162c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2c162cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1630: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2c1630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2c1634:
    // 0x2c1634: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c1634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1638: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C1638u;
    {
        const bool branch_taken_0x2c1638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1638) {
            ctx->pc = 0x2C160Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c160c;
        }
    }
    ctx->pc = 0x2C1640u;
    // 0x2c1640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c1648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c164c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C164Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C164Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1654u;
    // 0x2c1654: 0x0  nop
    ctx->pc = 0x2c1654u;
    // NOP
    // 0x2c1658: 0x0  nop
    ctx->pc = 0x2c1658u;
    // NOP
    // 0x2c165c: 0x0  nop
    ctx->pc = 0x2c165cu;
    // NOP
    ctx->pc = 0x2c1660u;
}
