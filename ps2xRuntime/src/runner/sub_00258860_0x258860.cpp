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

// Function: sub_00258860
// Address: 0x258860 - 0x2588c0
void sub_00258860_0x258860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258860_0x258860");
#endif

    switch (ctx->pc) {
        case 0x25888cu: goto label_25888c;
        case 0x2588acu: goto label_2588ac;
        default: break;
    }

    ctx->pc = 0x258860u;

    // 0x258860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25886c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25886cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258874: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258874u;
    {
        const bool branch_taken_0x258874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258874) {
            ctx->pc = 0x2588ACu;
            goto label_2588ac;
        }
    }
    ctx->pc = 0x25887Cu;
    // 0x25887c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25887cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258884: 0xc096230  jal         func_2588C0
    ctx->pc = 0x258884u;
    SET_GPR_U32(ctx, 31, 0x25888Cu);
    ctx->pc = 0x2588C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588C0u, 0x258884u, 0x25888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25888Cu;
label_25888c:
    // 0x25888c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25888cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258890: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258894: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x258894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258898: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258898u;
    {
        const bool branch_taken_0x258898 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x258898) {
            ctx->pc = 0x2588ACu;
            goto label_2588ac;
        }
    }
    ctx->pc = 0x2588A0u;
    // 0x2588a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2588a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588a4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2588A4u;
    SET_GPR_U32(ctx, 31, 0x2588ACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2588A4u, 0x2588ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588ACu;
label_2588ac:
    // 0x2588ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2588acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2588b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2588b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2588b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2588b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2588B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2588B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2588C0u;
}
