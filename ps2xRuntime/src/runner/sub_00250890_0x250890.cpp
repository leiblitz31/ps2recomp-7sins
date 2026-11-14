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

// Function: sub_00250890
// Address: 0x250890 - 0x250910
void sub_00250890_0x250890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250890_0x250890");
#endif

    switch (ctx->pc) {
        case 0x2508c4u: goto label_2508c4;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508f4u: goto label_2508f4;
        default: break;
    }

    ctx->pc = 0x250890u;

    // 0x250890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25089c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25089cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2508a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2508a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2508a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2508A4u;
    {
        const bool branch_taken_0x2508a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2508a4) {
            ctx->pc = 0x2508F4u;
            goto label_2508f4;
        }
    }
    ctx->pc = 0x2508ACu;
    // 0x2508ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2508acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2508b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2508b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2508b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2508b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2508b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2508b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2508bc: 0xc094270  jal         func_2509C0
    ctx->pc = 0x2508BCu;
    SET_GPR_U32(ctx, 31, 0x2508C4u);
    ctx->pc = 0x2509C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2509C0u, 0x2508BCu, 0x2508C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508C4u;
label_2508c4:
    // 0x2508c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2508c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2508c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2508c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2508cc: 0xc094244  jal         func_250910
    ctx->pc = 0x2508CCu;
    SET_GPR_U32(ctx, 31, 0x2508D4u);
    ctx->pc = 0x250910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250910u, 0x2508CCu, 0x2508D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508D4u;
label_2508d4:
    // 0x2508d4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2508d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2508d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2508d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2508dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2508dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2508e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2508E0u;
    {
        const bool branch_taken_0x2508e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2508e0) {
            ctx->pc = 0x2508F4u;
            goto label_2508f4;
        }
    }
    ctx->pc = 0x2508E8u;
    // 0x2508e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2508e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2508ec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2508ECu;
    SET_GPR_U32(ctx, 31, 0x2508F4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2508ECu, 0x2508F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508F4u;
label_2508f4:
    // 0x2508f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2508f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2508f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2508f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2508fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2508fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250900: 0x3e00008  jr          $ra
    ctx->pc = 0x250900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250908u;
    // 0x250908: 0x0  nop
    ctx->pc = 0x250908u;
    // NOP
    // 0x25090c: 0x0  nop
    ctx->pc = 0x25090cu;
    // NOP
    ctx->pc = 0x250910u;
}
