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

// Function: sub_00459AF0
// Address: 0x459af0 - 0x459b40
void sub_00459AF0_0x459af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459AF0_0x459af0");
#endif

    switch (ctx->pc) {
        case 0x459b10u: goto label_459b10;
        case 0x459b20u: goto label_459b20;
        default: break;
    }

    ctx->pc = 0x459af0u;

    // 0x459af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x459af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x459af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459af8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x459af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x459afc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x459afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x459b00: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x459b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x459b04: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x459b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459b08: 0xc11670c  jal         func_459C30
    ctx->pc = 0x459B08u;
    SET_GPR_U32(ctx, 31, 0x459B10u);
    ctx->pc = 0x459C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459C30u, 0x459B08u, 0x459B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459B10u;
label_459b10:
    // 0x459b10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459b14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x459b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459b18: 0xc1166d0  jal         func_459B40
    ctx->pc = 0x459B18u;
    SET_GPR_U32(ctx, 31, 0x459B20u);
    ctx->pc = 0x459B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459B40u, 0x459B18u, 0x459B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459B20u;
label_459b20:
    // 0x459b20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459b28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x459b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x459b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x459B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459B34u;
    // 0x459b34: 0x0  nop
    ctx->pc = 0x459b34u;
    // NOP
    // 0x459b38: 0x0  nop
    ctx->pc = 0x459b38u;
    // NOP
    // 0x459b3c: 0x0  nop
    ctx->pc = 0x459b3cu;
    // NOP
    ctx->pc = 0x459b40u;
}
