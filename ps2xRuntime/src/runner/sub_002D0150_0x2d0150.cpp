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

// Function: sub_002D0150
// Address: 0x2d0150 - 0x2d01d0
void sub_002D0150_0x2d0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0150_0x2d0150");
#endif

    switch (ctx->pc) {
        case 0x2d0184u: goto label_2d0184;
        case 0x2d0194u: goto label_2d0194;
        case 0x2d01b4u: goto label_2d01b4;
        default: break;
    }

    ctx->pc = 0x2d0150u;

    // 0x2d0150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d015c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d015cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d0160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0164: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0164u;
    {
        const bool branch_taken_0x2d0164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0164) {
            ctx->pc = 0x2D01B4u;
            goto label_2d01b4;
        }
    }
    ctx->pc = 0x2D016Cu;
    // 0x2d016c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0170: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0174: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d0174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0178: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d0178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d017c: 0xc0b40a0  jal         func_2D0280
    ctx->pc = 0x2D017Cu;
    SET_GPR_U32(ctx, 31, 0x2D0184u);
    ctx->pc = 0x2D0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0280u, 0x2D017Cu, 0x2D0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0184u;
label_2d0184:
    // 0x2d0184: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d018c: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2D018Cu;
    SET_GPR_U32(ctx, 31, 0x2D0194u);
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2D018Cu, 0x2D0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0194u;
label_2d0194:
    // 0x2d0194: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d0194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d0198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d019c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d019cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d01a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D01A0u;
    {
        const bool branch_taken_0x2d01a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d01a0) {
            ctx->pc = 0x2D01B4u;
            goto label_2d01b4;
        }
    }
    ctx->pc = 0x2D01A8u;
    // 0x2d01a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d01a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d01ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D01ACu;
    SET_GPR_U32(ctx, 31, 0x2D01B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D01ACu, 0x2D01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01B4u;
label_2d01b4:
    // 0x2d01b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d01b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d01b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d01bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d01bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d01c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D01C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D01C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D01C8u;
    // 0x2d01c8: 0x0  nop
    ctx->pc = 0x2d01c8u;
    // NOP
    // 0x2d01cc: 0x0  nop
    ctx->pc = 0x2d01ccu;
    // NOP
    ctx->pc = 0x2d01d0u;
}
