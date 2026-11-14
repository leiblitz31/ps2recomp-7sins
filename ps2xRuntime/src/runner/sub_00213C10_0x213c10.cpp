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

// Function: sub_00213C10
// Address: 0x213c10 - 0x213c70
void sub_00213C10_0x213c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213C10_0x213c10");
#endif

    switch (ctx->pc) {
        case 0x213c28u: goto label_213c28;
        case 0x213c50u: goto label_213c50;
        default: break;
    }

    ctx->pc = 0x213c10u;

    // 0x213c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213c18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213c1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c20: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x213C20u;
    SET_GPR_U32(ctx, 31, 0x213C28u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x213C20u, 0x213C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C28u;
label_213c28:
    // 0x213c28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x213c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x213c2c: 0x246351b0  addiu       $v1, $v1, 0x51B0
    ctx->pc = 0x213c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20912));
    // 0x213c30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x213c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x213c38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c3c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x213c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x213c40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c44: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x213c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x213c48: 0xc084fa4  jal         func_213E90
    ctx->pc = 0x213C48u;
    SET_GPR_U32(ctx, 31, 0x213C50u);
    ctx->pc = 0x213E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E90u, 0x213C48u, 0x213C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C50u;
label_213c50:
    // 0x213c50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x213c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x213c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x213C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213C64u;
    // 0x213c64: 0x0  nop
    ctx->pc = 0x213c64u;
    // NOP
    // 0x213c68: 0x0  nop
    ctx->pc = 0x213c68u;
    // NOP
    // 0x213c6c: 0x0  nop
    ctx->pc = 0x213c6cu;
    // NOP
    ctx->pc = 0x213c70u;
}
