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

// Function: sub_002ACA00
// Address: 0x2aca00 - 0x2aca50
void sub_002ACA00_0x2aca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA00_0x2aca00");
#endif

    switch (ctx->pc) {
        case 0x2aca24u: goto label_2aca24;
        default: break;
    }

    ctx->pc = 0x2aca00u;

    // 0x2aca00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aca04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aca08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aca0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2aca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2aca10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2aca10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2aca14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aca18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2aca18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aca1c: 0xc0ab294  jal         func_2ACA50
    ctx->pc = 0x2ACA1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA24u);
    ctx->pc = 0x2ACA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACA50u, 0x2ACA1Cu, 0x2ACA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA24u;
label_2aca24:
    // 0x2aca24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2aca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aca28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aca2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2aca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2aca30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aca34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aca34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aca38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2aca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2aca3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA44u;
    // 0x2aca44: 0x0  nop
    ctx->pc = 0x2aca44u;
    // NOP
    // 0x2aca48: 0x0  nop
    ctx->pc = 0x2aca48u;
    // NOP
    // 0x2aca4c: 0x0  nop
    ctx->pc = 0x2aca4cu;
    // NOP
    ctx->pc = 0x2aca50u;
}
