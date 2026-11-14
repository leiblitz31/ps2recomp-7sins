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

// Function: sub_00149AA0
// Address: 0x149aa0 - 0x149b00
void sub_00149AA0_0x149aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149AA0_0x149aa0");
#endif

    switch (ctx->pc) {
        case 0x149ad4u: goto label_149ad4;
        default: break;
    }

    ctx->pc = 0x149aa0u;

    // 0x149aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x149aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ab0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x149ab4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ab8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x149ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x149abc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ac0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x149ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x149ac4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ac8: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x149ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x149acc: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x149ACCu;
    SET_GPR_U32(ctx, 31, 0x149AD4u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x149ACCu, 0x149AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AD4u;
label_149ad4:
    // 0x149ad4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ad8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x149ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x149adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ae0: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x149ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x149ae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ae8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x149ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x149aec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149af4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x149af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149af8: 0x3e00008  jr          $ra
    ctx->pc = 0x149AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B00u;
}
