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

// Function: sub_00146100
// Address: 0x146100 - 0x146140
void sub_00146100_0x146100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146100_0x146100");
#endif

    switch (ctx->pc) {
        case 0x146118u: goto label_146118;
        default: break;
    }

    ctx->pc = 0x146100u;

    // 0x146100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x146108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14610c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14610cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146110: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x146110u;
    SET_GPR_U32(ctx, 31, 0x146118u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x146110u, 0x146118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146118u;
label_146118:
    // 0x146118: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x146118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14611c: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x14611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x146120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x146120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146124: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x146124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x146128: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14612c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14612cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146130: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x146130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x146134: 0x3e00008  jr          $ra
    ctx->pc = 0x146134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14613Cu;
    // 0x14613c: 0x0  nop
    ctx->pc = 0x14613cu;
    // NOP
    ctx->pc = 0x146140u;
}
