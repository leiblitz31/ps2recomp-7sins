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

// Function: sub_00158A20
// Address: 0x158a20 - 0x158a70
void sub_00158A20_0x158a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158A20_0x158a20");
#endif

    switch (ctx->pc) {
        case 0x158a44u: goto label_158a44;
        default: break;
    }

    ctx->pc = 0x158a20u;

    // 0x158a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x158a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x158a2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x158a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x158a30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x158a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x158a34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x158a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158a38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x158a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158a3c: 0xc05629c  jal         func_158A70
    ctx->pc = 0x158A3Cu;
    SET_GPR_U32(ctx, 31, 0x158A44u);
    ctx->pc = 0x158A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A70u, 0x158A3Cu, 0x158A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A44u;
label_158a44:
    // 0x158a44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x158a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158a4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x158a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x158a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158a58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x158a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x158a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x158A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158A64u;
    // 0x158a64: 0x0  nop
    ctx->pc = 0x158a64u;
    // NOP
    // 0x158a68: 0x0  nop
    ctx->pc = 0x158a68u;
    // NOP
    // 0x158a6c: 0x0  nop
    ctx->pc = 0x158a6cu;
    // NOP
    ctx->pc = 0x158a70u;
}
