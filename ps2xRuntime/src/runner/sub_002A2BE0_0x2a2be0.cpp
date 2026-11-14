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

// Function: sub_002A2BE0
// Address: 0x2a2be0 - 0x2a2c30
void sub_002A2BE0_0x2a2be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2BE0_0x2a2be0");
#endif

    switch (ctx->pc) {
        case 0x2a2c10u: goto label_2a2c10;
        default: break;
    }

    ctx->pc = 0x2a2be0u;

    // 0x2a2be0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a2be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2bec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a2becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2a2bf0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2a2bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2a2bf4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2a2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2a2bf8: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2a2bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2a2bfc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2c00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2a2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a2c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c08: 0xc0a8b0c  jal         func_2A2C30
    ctx->pc = 0x2A2C08u;
    SET_GPR_U32(ctx, 31, 0x2A2C10u);
    ctx->pc = 0x2A2C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2C30u, 0x2A2C08u, 0x2A2C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C10u;
label_2a2c10:
    // 0x2a2c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2c18: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a2c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2C24u;
    // 0x2a2c24: 0x0  nop
    ctx->pc = 0x2a2c24u;
    // NOP
    // 0x2a2c28: 0x0  nop
    ctx->pc = 0x2a2c28u;
    // NOP
    // 0x2a2c2c: 0x0  nop
    ctx->pc = 0x2a2c2cu;
    // NOP
    ctx->pc = 0x2a2c30u;
}
