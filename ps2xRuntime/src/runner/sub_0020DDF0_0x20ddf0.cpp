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

// Function: sub_0020DDF0
// Address: 0x20ddf0 - 0x20de80
void sub_0020DDF0_0x20ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DDF0_0x20ddf0");
#endif

    switch (ctx->pc) {
        case 0x20de2cu: goto label_20de2c;
        case 0x20de6cu: goto label_20de6c;
        default: break;
    }

    ctx->pc = 0x20ddf0u;

    // 0x20ddf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20ddf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ddf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20ddfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x20de00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20de08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20de10: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20DE10u;
    {
        const bool branch_taken_0x20de10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20de10) {
            ctx->pc = 0x20DE44u;
            goto label_20de44;
        }
    }
    ctx->pc = 0x20DE18u;
    // 0x20de18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x20de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20de20: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20de20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20de24: 0xc083844  jal         func_20E110
    ctx->pc = 0x20DE24u;
    SET_GPR_U32(ctx, 31, 0x20DE2Cu);
    ctx->pc = 0x20E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E110u, 0x20DE24u, 0x20DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DE2Cu;
label_20de2c:
    // 0x20de2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20de34: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x20de34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20de38: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20de38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x20de3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20DE3Cu;
    {
        const bool branch_taken_0x20de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20de3c) {
            ctx->pc = 0x20DE6Cu;
            goto label_20de6c;
        }
    }
    ctx->pc = 0x20DE44u;
label_20de44:
    // 0x20de44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de48: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x20de48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x20de4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de50: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20de50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20de54: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x20de54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20de58: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x20de5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20de5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de60: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20de60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de64: 0xc0837a0  jal         func_20DE80
    ctx->pc = 0x20DE64u;
    SET_GPR_U32(ctx, 31, 0x20DE6Cu);
    ctx->pc = 0x20DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE80u, 0x20DE64u, 0x20DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DE6Cu;
label_20de6c:
    // 0x20de6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20de6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20de70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20de74: 0x3e00008  jr          $ra
    ctx->pc = 0x20DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DE7Cu;
    // 0x20de7c: 0x0  nop
    ctx->pc = 0x20de7cu;
    // NOP
    ctx->pc = 0x20de80u;
}
