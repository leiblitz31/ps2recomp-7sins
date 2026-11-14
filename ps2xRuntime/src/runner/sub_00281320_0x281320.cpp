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

// Function: sub_00281320
// Address: 0x281320 - 0x281370
void sub_00281320_0x281320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281320_0x281320");
#endif

    switch (ctx->pc) {
        case 0x281344u: goto label_281344;
        default: break;
    }

    ctx->pc = 0x281320u;

    // 0x281320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28132c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x281330: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x281330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x281334: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x281334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281338: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x281338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28133c: 0xc0a04dc  jal         func_281370
    ctx->pc = 0x28133Cu;
    SET_GPR_U32(ctx, 31, 0x281344u);
    ctx->pc = 0x281370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281370u, 0x28133Cu, 0x281344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281344u;
label_281344:
    // 0x281344: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281348: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x281348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28134c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281350: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x281350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x281354: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x281354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28135c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28135cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281360: 0x3e00008  jr          $ra
    ctx->pc = 0x281360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281368u;
    // 0x281368: 0x0  nop
    ctx->pc = 0x281368u;
    // NOP
    // 0x28136c: 0x0  nop
    ctx->pc = 0x28136cu;
    // NOP
    ctx->pc = 0x281370u;
}
