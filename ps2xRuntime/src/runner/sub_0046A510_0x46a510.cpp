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

// Function: sub_0046A510
// Address: 0x46a510 - 0x46a560
void sub_0046A510_0x46a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A510_0x46a510");
#endif

    switch (ctx->pc) {
        case 0x46a534u: goto label_46a534;
        case 0x46a548u: goto label_46a548;
        default: break;
    }

    ctx->pc = 0x46a510u;

    // 0x46a510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46a514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a51c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a520: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46a520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46a524: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46a524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a528: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46a528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a52c: 0xc11a958  jal         func_46A560
    ctx->pc = 0x46A52Cu;
    SET_GPR_U32(ctx, 31, 0x46A534u);
    ctx->pc = 0x46A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A560u, 0x46A52Cu, 0x46A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A534u;
label_46a534:
    // 0x46a534: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46a538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a53c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x46a53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a540: 0xc11a4f8  jal         func_4693E0
    ctx->pc = 0x46A540u;
    SET_GPR_U32(ctx, 31, 0x46A548u);
    ctx->pc = 0x4693E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693E0u, 0x46A540u, 0x46A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A548u;
label_46a548:
    // 0x46a548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a54c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46a54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a550: 0x3e00008  jr          $ra
    ctx->pc = 0x46A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A558u;
    // 0x46a558: 0x0  nop
    ctx->pc = 0x46a558u;
    // NOP
    // 0x46a55c: 0x0  nop
    ctx->pc = 0x46a55cu;
    // NOP
    ctx->pc = 0x46a560u;
}
