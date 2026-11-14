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

// Function: sub_00459960
// Address: 0x459960 - 0x4599c0
void sub_00459960_0x459960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459960_0x459960");
#endif

    switch (ctx->pc) {
        case 0x45997cu: goto label_45997c;
        case 0x459990u: goto label_459990;
        default: break;
    }

    ctx->pc = 0x459960u;

    // 0x459960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x459960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x459964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459968: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x459968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45996c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x45996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x459970: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x459970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x459974: 0xc116714  jal         func_459C50
    ctx->pc = 0x459974u;
    SET_GPR_U32(ctx, 31, 0x45997Cu);
    ctx->pc = 0x459C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459C50u, 0x459974u, 0x45997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45997Cu;
label_45997c:
    // 0x45997c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459980: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x459980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x459984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x459984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459988: 0xc1166bc  jal         func_459AF0
    ctx->pc = 0x459988u;
    SET_GPR_U32(ctx, 31, 0x459990u);
    ctx->pc = 0x459AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459AF0u, 0x459988u, 0x459990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459990u;
label_459990:
    // 0x459990: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x459990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459994: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459998: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x459998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45999c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4599a0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4599a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4599a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4599a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4599a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4599a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4599ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4599acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4599b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4599B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4599B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4599B8u;
    // 0x4599b8: 0x0  nop
    ctx->pc = 0x4599b8u;
    // NOP
    // 0x4599bc: 0x0  nop
    ctx->pc = 0x4599bcu;
    // NOP
    ctx->pc = 0x4599c0u;
}
