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

// Function: sub_0023B630
// Address: 0x23b630 - 0x23b6c0
void sub_0023B630_0x23b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B630_0x23b630");
#endif

    switch (ctx->pc) {
        case 0x23b670u: goto label_23b670;
        case 0x23b680u: goto label_23b680;
        case 0x23b6a0u: goto label_23b6a0;
        default: break;
    }

    ctx->pc = 0x23b630u;

    // 0x23b630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23b63c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23b63cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23b640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b644: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23B644u;
    {
        const bool branch_taken_0x23b644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b644) {
            ctx->pc = 0x23B6A0u;
            goto label_23b6a0;
        }
    }
    ctx->pc = 0x23B64Cu;
    // 0x23b64c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23b650: 0x24635600  addiu       $v1, $v1, 0x5600
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22016));
    // 0x23b654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b658: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23b658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23b65c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b660: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23b664: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b668: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x23B668u;
    SET_GPR_U32(ctx, 31, 0x23B670u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x23B668u, 0x23B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B670u;
label_23b670:
    // 0x23b670: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b678: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x23B678u;
    SET_GPR_U32(ctx, 31, 0x23B680u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x23B678u, 0x23B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B680u;
label_23b680:
    // 0x23b680: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23b680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b684: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23b684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23b688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23b688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23b68c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B68Cu;
    {
        const bool branch_taken_0x23b68c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23b68c) {
            ctx->pc = 0x23B6A0u;
            goto label_23b6a0;
        }
    }
    ctx->pc = 0x23B694u;
    // 0x23b694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b698: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23B698u;
    SET_GPR_U32(ctx, 31, 0x23B6A0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23B698u, 0x23B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6A0u;
label_23b6a0:
    // 0x23b6a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b6a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23b6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x23B6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B6B4u;
    // 0x23b6b4: 0x0  nop
    ctx->pc = 0x23b6b4u;
    // NOP
    // 0x23b6b8: 0x0  nop
    ctx->pc = 0x23b6b8u;
    // NOP
    // 0x23b6bc: 0x0  nop
    ctx->pc = 0x23b6bcu;
    // NOP
    ctx->pc = 0x23b6c0u;
}
