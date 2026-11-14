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

// Function: sub_00223D00
// Address: 0x223d00 - 0x223d50
void sub_00223D00_0x223d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223D00_0x223d00");
#endif

    switch (ctx->pc) {
        case 0x223d38u: goto label_223d38;
        default: break;
    }

    ctx->pc = 0x223d00u;

    // 0x223d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223d08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x223d0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x223d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x223d10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223d14: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x223d14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223d18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d1c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x223d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x223d20: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x223d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223d28: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x223d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x223d2c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x223d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x223d30: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x223D30u;
    SET_GPR_U32(ctx, 31, 0x223D38u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x223D30u, 0x223D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D38u;
label_223d38:
    // 0x223d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223d40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223d44: 0x3e00008  jr          $ra
    ctx->pc = 0x223D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D4Cu;
    // 0x223d4c: 0x0  nop
    ctx->pc = 0x223d4cu;
    // NOP
    ctx->pc = 0x223d50u;
}
