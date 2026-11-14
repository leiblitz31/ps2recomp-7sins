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

// Function: sub_001B9690
// Address: 0x1b9690 - 0x1b9720
void sub_001B9690_0x1b9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9690_0x1b9690");
#endif

    switch (ctx->pc) {
        case 0x1b96a8u: goto label_1b96a8;
        case 0x1b96b4u: goto label_1b96b4;
        default: break;
    }

    ctx->pc = 0x1b9690u;

    // 0x1b9690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b969c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b96a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96a4: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1b96a8:
    // 0x1b96a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b96a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96ac: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1B96ACu;
    SET_GPR_U32(ctx, 31, 0x1B96B4u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1B96ACu, 0x1B96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96B4u;
label_1b96b4:
    // 0x1b96b4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b96b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b96b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96bc: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1b96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1b96c0: 0x1602fff9  bne         $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B96C0u;
    {
        const bool branch_taken_0x1b96c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b96c0) {
            ctx->pc = 0x1B96A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b96a8;
        }
    }
    ctx->pc = 0x1B96C8u;
    // 0x1b96c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96cc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1b96ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b96d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96d4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1b96d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b96d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96dc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1b96dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b96e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b96e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96e8: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1b96e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b96ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b96f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96f4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1b96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1b96f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96fc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1b96fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1b9700: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b9700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b970c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b970cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9710: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9718u;
    // 0x1b9718: 0x0  nop
    ctx->pc = 0x1b9718u;
    // NOP
    // 0x1b971c: 0x0  nop
    ctx->pc = 0x1b971cu;
    // NOP
    ctx->pc = 0x1b9720u;
}
