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

// Function: sub_0012AFC0
// Address: 0x12afc0 - 0x12b000
void sub_0012AFC0_0x12afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AFC0_0x12afc0");
#endif

    switch (ctx->pc) {
        case 0x12afe4u: goto label_12afe4;
        default: break;
    }

    ctx->pc = 0x12afc0u;

    // 0x12afc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12afc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12afc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12afcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12afccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12afd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12afd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12afd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12afd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afdc: 0xc04ac00  jal         func_12B000
    ctx->pc = 0x12AFDCu;
    SET_GPR_U32(ctx, 31, 0x12AFE4u);
    ctx->pc = 0x12B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B000u, 0x12AFDCu, 0x12AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFE4u;
label_12afe4:
    // 0x12afe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12afe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12afe8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12afec: 0x3e00008  jr          $ra
    ctx->pc = 0x12AFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AFF4u;
    // 0x12aff4: 0x0  nop
    ctx->pc = 0x12aff4u;
    // NOP
    // 0x12aff8: 0x0  nop
    ctx->pc = 0x12aff8u;
    // NOP
    // 0x12affc: 0x0  nop
    ctx->pc = 0x12affcu;
    // NOP
    ctx->pc = 0x12b000u;
}
