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

// Function: sub_00102B90
// Address: 0x102b90 - 0x102bf0
void sub_00102B90_0x102b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102B90_0x102b90");
#endif

    switch (ctx->pc) {
        case 0x102bbcu: goto label_102bbc;
        case 0x102bdcu: goto label_102bdc;
        default: break;
    }

    ctx->pc = 0x102b90u;

    // 0x102b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102b9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x102b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x102ba0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ba4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x102BA4u;
    {
        const bool branch_taken_0x102ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102ba4) {
            ctx->pc = 0x102BDCu;
            goto label_102bdc;
        }
    }
    ctx->pc = 0x102BACu;
    // 0x102bac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102bb4: 0xc040afc  jal         func_102BF0
    ctx->pc = 0x102BB4u;
    SET_GPR_U32(ctx, 31, 0x102BBCu);
    ctx->pc = 0x102BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BF0u, 0x102BB4u, 0x102BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BBCu;
label_102bbc:
    // 0x102bbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x102bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102bc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x102bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x102bc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x102bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x102bc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102BC8u;
    {
        const bool branch_taken_0x102bc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102bc8) {
            ctx->pc = 0x102BDCu;
            goto label_102bdc;
        }
    }
    ctx->pc = 0x102BD0u;
    // 0x102bd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102bd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x102BD4u;
    SET_GPR_U32(ctx, 31, 0x102BDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x102BD4u, 0x102BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BDCu;
label_102bdc:
    // 0x102bdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102be4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102be8: 0x3e00008  jr          $ra
    ctx->pc = 0x102BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102BF0u;
}
