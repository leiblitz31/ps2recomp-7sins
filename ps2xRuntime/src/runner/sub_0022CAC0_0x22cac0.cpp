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

// Function: sub_0022CAC0
// Address: 0x22cac0 - 0x22cb10
void sub_0022CAC0_0x22cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CAC0_0x22cac0");
#endif

    switch (ctx->pc) {
        case 0x22cae4u: goto label_22cae4;
        default: break;
    }

    ctx->pc = 0x22cac0u;

    // 0x22cac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22cac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22cacc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22caccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22cad0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x22cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x22cad4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cad8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cadc: 0xc08b2c4  jal         func_22CB10
    ctx->pc = 0x22CADCu;
    SET_GPR_U32(ctx, 31, 0x22CAE4u);
    ctx->pc = 0x22CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB10u, 0x22CADCu, 0x22CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CAE4u;
label_22cae4:
    // 0x22cae4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cae8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22caec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22caecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22caf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22caf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22caf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22caf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22caf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22cafc: 0x3e00008  jr          $ra
    ctx->pc = 0x22CAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CB04u;
    // 0x22cb04: 0x0  nop
    ctx->pc = 0x22cb04u;
    // NOP
    // 0x22cb08: 0x0  nop
    ctx->pc = 0x22cb08u;
    // NOP
    // 0x22cb0c: 0x0  nop
    ctx->pc = 0x22cb0cu;
    // NOP
    ctx->pc = 0x22cb10u;
}
