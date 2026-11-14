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

// Function: sub_0022C150
// Address: 0x22c150 - 0x22c1d0
void sub_0022C150_0x22c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C150_0x22c150");
#endif

    switch (ctx->pc) {
        case 0x22c184u: goto label_22c184;
        case 0x22c194u: goto label_22c194;
        case 0x22c1b4u: goto label_22c1b4;
        default: break;
    }

    ctx->pc = 0x22c150u;

    // 0x22c150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c15c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22c15cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22c160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c164: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22C164u;
    {
        const bool branch_taken_0x22c164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c164) {
            ctx->pc = 0x22C1B4u;
            goto label_22c1b4;
        }
    }
    ctx->pc = 0x22C16Cu;
    // 0x22c16c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c170: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c174: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c178: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22c178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22c17c: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x22C17Cu;
    SET_GPR_U32(ctx, 31, 0x22C184u);
    ctx->pc = 0x22C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C270u, 0x22C17Cu, 0x22C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C184u;
label_22c184:
    // 0x22c184: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c18c: 0xc08b074  jal         func_22C1D0
    ctx->pc = 0x22C18Cu;
    SET_GPR_U32(ctx, 31, 0x22C194u);
    ctx->pc = 0x22C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C1D0u, 0x22C18Cu, 0x22C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C194u;
label_22c194:
    // 0x22c194: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22c194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c19c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22c19cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22c1a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C1A0u;
    {
        const bool branch_taken_0x22c1a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22c1a0) {
            ctx->pc = 0x22C1B4u;
            goto label_22c1b4;
        }
    }
    ctx->pc = 0x22C1A8u;
    // 0x22c1a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c1ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22C1ACu;
    SET_GPR_U32(ctx, 31, 0x22C1B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22C1ACu, 0x22C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C1B4u;
label_22c1b4:
    // 0x22c1b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c1bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C1C8u;
    // 0x22c1c8: 0x0  nop
    ctx->pc = 0x22c1c8u;
    // NOP
    // 0x22c1cc: 0x0  nop
    ctx->pc = 0x22c1ccu;
    // NOP
    ctx->pc = 0x22c1d0u;
}
