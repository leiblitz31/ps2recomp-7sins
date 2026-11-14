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

// Function: sub_0028ACF0
// Address: 0x28acf0 - 0x28ad40
void sub_0028ACF0_0x28acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ACF0_0x28acf0");
#endif

    switch (ctx->pc) {
        case 0x28ad14u: goto label_28ad14;
        default: break;
    }

    ctx->pc = 0x28acf0u;

    // 0x28acf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28acf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28acf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28acfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28ad00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x28ad00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x28ad04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ad08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ad0c: 0xc0a29e4  jal         func_28A790
    ctx->pc = 0x28AD0Cu;
    SET_GPR_U32(ctx, 31, 0x28AD14u);
    ctx->pc = 0x28A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A790u, 0x28AD0Cu, 0x28AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD14u;
label_28ad14:
    // 0x28ad14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ad18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28ad18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ad1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ad20: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x28ad20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ad24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ad28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ad28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ad2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28ad30: 0x3e00008  jr          $ra
    ctx->pc = 0x28AD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AD38u;
    // 0x28ad38: 0x0  nop
    ctx->pc = 0x28ad38u;
    // NOP
    // 0x28ad3c: 0x0  nop
    ctx->pc = 0x28ad3cu;
    // NOP
    ctx->pc = 0x28ad40u;
}
