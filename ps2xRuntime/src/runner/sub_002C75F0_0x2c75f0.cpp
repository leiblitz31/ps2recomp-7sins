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

// Function: sub_002C75F0
// Address: 0x2c75f0 - 0x2c7660
void sub_002C75F0_0x2c75f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C75F0_0x2c75f0");
#endif

    switch (ctx->pc) {
        case 0x2c760cu: goto label_2c760c;
        default: break;
    }

    ctx->pc = 0x2c75f0u;

    // 0x2c75f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c75f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c75f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c75f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c75f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c75fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c75fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c7600: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2c7600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2c7604: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C7604u;
    {
        const bool branch_taken_0x2c7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7604) {
            ctx->pc = 0x2C7634u;
            goto label_2c7634;
        }
    }
    ctx->pc = 0x2C760Cu;
label_2c760c:
    // 0x2c760c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c7610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7618: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c7618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c761c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c7620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c7624: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c7624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c7628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c7628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c762c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2c762cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c7630: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2c7630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2c7634:
    // 0x2c7634: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c7634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7638: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C7638u;
    {
        const bool branch_taken_0x2c7638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7638) {
            ctx->pc = 0x2C760Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c760c;
        }
    }
    ctx->pc = 0x2C7640u;
    // 0x2c7640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c7648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c764c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C764Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C764Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7654u;
    // 0x2c7654: 0x0  nop
    ctx->pc = 0x2c7654u;
    // NOP
    // 0x2c7658: 0x0  nop
    ctx->pc = 0x2c7658u;
    // NOP
    // 0x2c765c: 0x0  nop
    ctx->pc = 0x2c765cu;
    // NOP
    ctx->pc = 0x2c7660u;
}
