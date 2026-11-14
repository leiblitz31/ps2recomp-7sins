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

// Function: sub_00153790
// Address: 0x153790 - 0x1537f0
void sub_00153790_0x153790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153790_0x153790");
#endif

    switch (ctx->pc) {
        case 0x1537bcu: goto label_1537bc;
        case 0x1537dcu: goto label_1537dc;
        default: break;
    }

    ctx->pc = 0x153790u;

    // 0x153790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15379c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15379cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1537a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1537a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1537A4u;
    {
        const bool branch_taken_0x1537a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1537a4) {
            ctx->pc = 0x1537DCu;
            goto label_1537dc;
        }
    }
    ctx->pc = 0x1537ACu;
    // 0x1537ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1537acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1537b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1537b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1537b4: 0xc054dfc  jal         func_1537F0
    ctx->pc = 0x1537B4u;
    SET_GPR_U32(ctx, 31, 0x1537BCu);
    ctx->pc = 0x1537F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1537F0u, 0x1537B4u, 0x1537BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537BCu;
label_1537bc:
    // 0x1537bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1537bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1537c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1537c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1537c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1537c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1537c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1537C8u;
    {
        const bool branch_taken_0x1537c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1537c8) {
            ctx->pc = 0x1537DCu;
            goto label_1537dc;
        }
    }
    ctx->pc = 0x1537D0u;
    // 0x1537d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1537d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1537d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1537D4u;
    SET_GPR_U32(ctx, 31, 0x1537DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1537D4u, 0x1537DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537DCu;
label_1537dc:
    // 0x1537dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1537dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1537e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1537e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1537e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1537e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1537e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1537E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1537E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1537F0u;
}
