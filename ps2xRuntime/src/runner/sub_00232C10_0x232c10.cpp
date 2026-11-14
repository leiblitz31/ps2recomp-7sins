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

// Function: sub_00232C10
// Address: 0x232c10 - 0x232c70
void sub_00232C10_0x232c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232C10_0x232c10");
#endif

    switch (ctx->pc) {
        case 0x232c28u: goto label_232c28;
        case 0x232c48u: goto label_232c48;
        default: break;
    }

    ctx->pc = 0x232c10u;

    // 0x232c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232c18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232c1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c20: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x232C20u;
    SET_GPR_U32(ctx, 31, 0x232C28u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x232C20u, 0x232C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C28u;
label_232c28:
    // 0x232c28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x232c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x232c2c: 0x24635380  addiu       $v1, $v1, 0x5380
    ctx->pc = 0x232c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21376));
    // 0x232c30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x232c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x232c38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c3c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x232c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x232c40: 0xc08cb7c  jal         func_232DF0
    ctx->pc = 0x232C40u;
    SET_GPR_U32(ctx, 31, 0x232C48u);
    ctx->pc = 0x232DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DF0u, 0x232C40u, 0x232C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C48u;
label_232c48:
    // 0x232c48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c4c: 0xaf82bb88  sw          $v0, -0x4478($gp)
    ctx->pc = 0x232c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949768), GPR_U32(ctx, 2));
    // 0x232c50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232c58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x232C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232C64u;
    // 0x232c64: 0x0  nop
    ctx->pc = 0x232c64u;
    // NOP
    // 0x232c68: 0x0  nop
    ctx->pc = 0x232c68u;
    // NOP
    // 0x232c6c: 0x0  nop
    ctx->pc = 0x232c6cu;
    // NOP
    ctx->pc = 0x232c70u;
}
