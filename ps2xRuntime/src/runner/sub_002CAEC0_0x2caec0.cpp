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

// Function: sub_002CAEC0
// Address: 0x2caec0 - 0x2caf30
void sub_002CAEC0_0x2caec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAEC0_0x2caec0");
#endif

    switch (ctx->pc) {
        case 0x2caef4u: goto label_2caef4;
        case 0x2caf14u: goto label_2caf14;
        default: break;
    }

    ctx->pc = 0x2caec0u;

    // 0x2caec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2caec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2caec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2caec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2caec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2caec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2caecc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2caeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2caed0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2caed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2caed4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2caed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2caed8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2caed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2caedc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2caedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caee0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2caee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2caee4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2caee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2caee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2caee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caeec: 0xc09bd14  jal         func_26F450
    ctx->pc = 0x2CAEECu;
    SET_GPR_U32(ctx, 31, 0x2CAEF4u);
    ctx->pc = 0x26F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F450u, 0x2CAEECu, 0x2CAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEF4u;
label_2caef4:
    // 0x2caef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2caef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caef8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2caef8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caefc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2caefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2caf00: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2caf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2caf04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2caf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2caf08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2caf0c: 0xc0b2b5c  jal         func_2CAD70
    ctx->pc = 0x2CAF0Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF14u);
    ctx->pc = 0x2CAD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD70u, 0x2CAF0Cu, 0x2CAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF14u;
label_2caf14:
    // 0x2caf14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2caf14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2caf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2caf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2caf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2caf24: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF2Cu;
    // 0x2caf2c: 0x0  nop
    ctx->pc = 0x2caf2cu;
    // NOP
    ctx->pc = 0x2caf30u;
}
