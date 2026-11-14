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

// Function: sub_0028A870
// Address: 0x28a870 - 0x28a8d0
void sub_0028A870_0x28a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A870_0x28a870");
#endif

    switch (ctx->pc) {
        case 0x28a89cu: goto label_28a89c;
        case 0x28a8bcu: goto label_28a8bc;
        default: break;
    }

    ctx->pc = 0x28a870u;

    // 0x28a870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28a874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28a878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28a87c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28a87cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x28a880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a884: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A884u;
    {
        const bool branch_taken_0x28a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a884) {
            ctx->pc = 0x28A8BCu;
            goto label_28a8bc;
        }
    }
    ctx->pc = 0x28A88Cu;
    // 0x28a88c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a890: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a894: 0xc0a2a34  jal         func_28A8D0
    ctx->pc = 0x28A894u;
    SET_GPR_U32(ctx, 31, 0x28A89Cu);
    ctx->pc = 0x28A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A8D0u, 0x28A894u, 0x28A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A89Cu;
label_28a89c:
    // 0x28a89c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x28a89cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a8a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28a8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28a8a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28a8a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28a8a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A8A8u;
    {
        const bool branch_taken_0x28a8a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28a8a8) {
            ctx->pc = 0x28A8BCu;
            goto label_28a8bc;
        }
    }
    ctx->pc = 0x28A8B0u;
    // 0x28a8b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x28A8B4u;
    SET_GPR_U32(ctx, 31, 0x28A8BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x28A8B4u, 0x28A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8BCu;
label_28a8bc:
    // 0x28a8bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a8c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28a8c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28a8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x28A8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A8D0u;
}
