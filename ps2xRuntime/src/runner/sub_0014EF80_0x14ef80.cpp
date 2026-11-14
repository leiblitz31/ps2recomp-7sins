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

// Function: sub_0014EF80
// Address: 0x14ef80 - 0x14efd0
void sub_0014EF80_0x14ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EF80_0x14ef80");
#endif

    switch (ctx->pc) {
        case 0x14efa4u: goto label_14efa4;
        case 0x14efb4u: goto label_14efb4;
        default: break;
    }

    ctx->pc = 0x14ef80u;

    // 0x14ef80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ef84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ef88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14ef88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14ef8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14ef90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14ef94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ef98: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ef9c: 0xc053bf4  jal         func_14EFD0
    ctx->pc = 0x14EF9Cu;
    SET_GPR_U32(ctx, 31, 0x14EFA4u);
    ctx->pc = 0x14EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFD0u, 0x14EF9Cu, 0x14EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFA4u;
label_14efa4:
    // 0x14efa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14efa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14efa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14efac: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x14EFACu;
    SET_GPR_U32(ctx, 31, 0x14EFB4u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x14EFACu, 0x14EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFB4u;
label_14efb4:
    // 0x14efb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14efb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14efb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14efbc: 0x3e00008  jr          $ra
    ctx->pc = 0x14EFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EFC4u;
    // 0x14efc4: 0x0  nop
    ctx->pc = 0x14efc4u;
    // NOP
    // 0x14efc8: 0x0  nop
    ctx->pc = 0x14efc8u;
    // NOP
    // 0x14efcc: 0x0  nop
    ctx->pc = 0x14efccu;
    // NOP
    ctx->pc = 0x14efd0u;
}
