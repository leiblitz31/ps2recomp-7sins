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

// Function: sub_0026FE80
// Address: 0x26fe80 - 0x26fed0
void sub_0026FE80_0x26fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FE80_0x26fe80");
#endif

    switch (ctx->pc) {
        case 0x26fea4u: goto label_26fea4;
        default: break;
    }

    ctx->pc = 0x26fe80u;

    // 0x26fe80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26fe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26fe84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fe88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fe8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26fe90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x26fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x26fe94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fe98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fe9c: 0xc09bfb4  jal         func_26FED0
    ctx->pc = 0x26FE9Cu;
    SET_GPR_U32(ctx, 31, 0x26FEA4u);
    ctx->pc = 0x26FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FED0u, 0x26FE9Cu, 0x26FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEA4u;
label_26fea4:
    // 0x26fea4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x26fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fea8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26feac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26feacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26feb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26feb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26feb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26feb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26feb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26febc: 0x3e00008  jr          $ra
    ctx->pc = 0x26FEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FEC4u;
    // 0x26fec4: 0x0  nop
    ctx->pc = 0x26fec4u;
    // NOP
    // 0x26fec8: 0x0  nop
    ctx->pc = 0x26fec8u;
    // NOP
    // 0x26fecc: 0x0  nop
    ctx->pc = 0x26feccu;
    // NOP
    ctx->pc = 0x26fed0u;
}
