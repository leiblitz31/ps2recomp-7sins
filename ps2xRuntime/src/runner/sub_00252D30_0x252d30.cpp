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

// Function: sub_00252D30
// Address: 0x252d30 - 0x252d90
void sub_00252D30_0x252d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252D30_0x252d30");
#endif

    switch (ctx->pc) {
        case 0x252d54u: goto label_252d54;
        case 0x252d74u: goto label_252d74;
        default: break;
    }

    ctx->pc = 0x252d30u;

    // 0x252d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x252d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x252d3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x252d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x252d44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d48: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x252d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x252d4c: 0xc09247c  jal         func_2491F0
    ctx->pc = 0x252D4Cu;
    SET_GPR_U32(ctx, 31, 0x252D54u);
    ctx->pc = 0x2491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491F0u, 0x252D4Cu, 0x252D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D54u;
label_252d54:
    // 0x252d54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d58: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x252d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x252d5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d60: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x252d60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x252d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d68: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x252d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x252d6c: 0xc094b40  jal         func_252D00
    ctx->pc = 0x252D6Cu;
    SET_GPR_U32(ctx, 31, 0x252D74u);
    ctx->pc = 0x252D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252D00u, 0x252D6Cu, 0x252D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D74u;
label_252d74:
    // 0x252d74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252d7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x252d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252d80: 0x3e00008  jr          $ra
    ctx->pc = 0x252D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252D88u;
    // 0x252d88: 0x0  nop
    ctx->pc = 0x252d88u;
    // NOP
    // 0x252d8c: 0x0  nop
    ctx->pc = 0x252d8cu;
    // NOP
    ctx->pc = 0x252d90u;
}
