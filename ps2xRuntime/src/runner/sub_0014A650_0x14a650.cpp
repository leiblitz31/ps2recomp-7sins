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

// Function: sub_0014A650
// Address: 0x14a650 - 0x14a6e0
void sub_0014A650_0x14a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A650_0x14a650");
#endif

    switch (ctx->pc) {
        case 0x14a680u: goto label_14a680;
        case 0x14a6a0u: goto label_14a6a0;
        case 0x14a6c0u: goto label_14a6c0;
        default: break;
    }

    ctx->pc = 0x14a650u;

    // 0x14a650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a65c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14a65cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x14a660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a664: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A664u;
    {
        const bool branch_taken_0x14a664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a664) {
            ctx->pc = 0x14A6C0u;
            goto label_14a6c0;
        }
    }
    ctx->pc = 0x14A66Cu;
    // 0x14a66c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a670: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14a674: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14a674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a678: 0xc052704  jal         func_149C10
    ctx->pc = 0x14A678u;
    SET_GPR_U32(ctx, 31, 0x14A680u);
    ctx->pc = 0x149C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149C10u, 0x14A678u, 0x14A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A680u;
label_14a680:
    // 0x14a680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a684: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14a688: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14a688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14a68c: 0x24a5a140  addiu       $a1, $a1, -0x5EC0
    ctx->pc = 0x14a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943040));
    // 0x14a690: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x14a690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14a694: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14a694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a698: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x14A698u;
    SET_GPR_U32(ctx, 31, 0x14A6A0u);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x14A698u, 0x14A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6A0u;
label_14a6a0:
    // 0x14a6a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14a6a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a6a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14a6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14a6a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14a6a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14a6ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A6ACu;
    {
        const bool branch_taken_0x14a6ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14a6ac) {
            ctx->pc = 0x14A6C0u;
            goto label_14a6c0;
        }
    }
    ctx->pc = 0x14A6B4u;
    // 0x14a6b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a6b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14A6B8u;
    SET_GPR_U32(ctx, 31, 0x14A6C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14A6B8u, 0x14A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6C0u;
label_14a6c0:
    // 0x14a6c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a6c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A6D4u;
    // 0x14a6d4: 0x0  nop
    ctx->pc = 0x14a6d4u;
    // NOP
    // 0x14a6d8: 0x0  nop
    ctx->pc = 0x14a6d8u;
    // NOP
    // 0x14a6dc: 0x0  nop
    ctx->pc = 0x14a6dcu;
    // NOP
    ctx->pc = 0x14a6e0u;
}
