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

// Function: sub_0027EFA0
// Address: 0x27efa0 - 0x27eff0
void sub_0027EFA0_0x27efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EFA0_0x27efa0");
#endif

    switch (ctx->pc) {
        case 0x27efc4u: goto label_27efc4;
        default: break;
    }

    ctx->pc = 0x27efa0u;

    // 0x27efa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27efa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27efa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27efac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27efacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27efb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x27efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x27efb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27efb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x27efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27efbc: 0xc09fbfc  jal         func_27EFF0
    ctx->pc = 0x27EFBCu;
    SET_GPR_U32(ctx, 31, 0x27EFC4u);
    ctx->pc = 0x27EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFF0u, 0x27EFBCu, 0x27EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFC4u;
label_27efc4:
    // 0x27efc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27efc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27efcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27efccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27efd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27efd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27efd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27efd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27efd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27efdc: 0x3e00008  jr          $ra
    ctx->pc = 0x27EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EFE4u;
    // 0x27efe4: 0x0  nop
    ctx->pc = 0x27efe4u;
    // NOP
    // 0x27efe8: 0x0  nop
    ctx->pc = 0x27efe8u;
    // NOP
    // 0x27efec: 0x0  nop
    ctx->pc = 0x27efecu;
    // NOP
    ctx->pc = 0x27eff0u;
}
