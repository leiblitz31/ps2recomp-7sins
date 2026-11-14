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

// Function: sub_0026FAF0
// Address: 0x26faf0 - 0x26fb90
void sub_0026FAF0_0x26faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FAF0_0x26faf0");
#endif

    switch (ctx->pc) {
        case 0x26fb0cu: goto label_26fb0c;
        case 0x26fb44u: goto label_26fb44;
        default: break;
    }

    ctx->pc = 0x26faf0u;

    // 0x26faf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26faf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26faf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fafc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb00: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26fb04: 0xc091174  jal         func_2445D0
    ctx->pc = 0x26FB04u;
    SET_GPR_U32(ctx, 31, 0x26FB0Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x26FB04u, 0x26FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB0Cu;
label_26fb0c:
    // 0x26fb0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x26fb10: 0x24635a40  addiu       $v1, $v1, 0x5A40
    ctx->pc = 0x26fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23104));
    // 0x26fb14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26fb1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb20: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x26fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x26fb24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb28: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x26fb28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fb2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb30: 0xa0400041  sb          $zero, 0x41($v0)
    ctx->pc = 0x26fb30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fb34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb38: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x26fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x26fb3c: 0xc09bf6c  jal         func_26FDB0
    ctx->pc = 0x26FB3Cu;
    SET_GPR_U32(ctx, 31, 0x26FB44u);
    ctx->pc = 0x26FDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FDB0u, 0x26FB3Cu, 0x26FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB44u;
label_26fb44:
    // 0x26fb44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb48: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x26fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x26fb4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb50: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x26fb50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fb54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb58: 0xa0400042  sb          $zero, 0x42($v0)
    ctx->pc = 0x26fb58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fb5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb60: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x26fb60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fb64: 0x8f83bc00  lw          $v1, -0x4400($gp)
    ctx->pc = 0x26fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949888)));
    // 0x26fb68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb6c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x26fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x26fb70: 0x8f82bc00  lw          $v0, -0x4400($gp)
    ctx->pc = 0x26fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949888)));
    // 0x26fb74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fb78: 0xaf82bc00  sw          $v0, -0x4400($gp)
    ctx->pc = 0x26fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949888), GPR_U32(ctx, 2));
    // 0x26fb7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fb84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26fb84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26fb88: 0x3e00008  jr          $ra
    ctx->pc = 0x26FB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FB90u;
}
