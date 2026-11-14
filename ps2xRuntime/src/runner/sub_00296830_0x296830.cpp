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

// Function: sub_00296830
// Address: 0x296830 - 0x2968b0
void sub_00296830_0x296830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296830_0x296830");
#endif

    switch (ctx->pc) {
        case 0x296860u: goto label_296860;
        case 0x296870u: goto label_296870;
        case 0x296890u: goto label_296890;
        default: break;
    }

    ctx->pc = 0x296830u;

    // 0x296830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x296838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29683c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29683cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x296840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296844: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x296844u;
    {
        const bool branch_taken_0x296844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296844) {
            ctx->pc = 0x296890u;
            goto label_296890;
        }
    }
    ctx->pc = 0x29684Cu;
    // 0x29684c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296850: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296854: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x296854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296858: 0xc0a5214  jal         func_294850
    ctx->pc = 0x296858u;
    SET_GPR_U32(ctx, 31, 0x296860u);
    ctx->pc = 0x294850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294850u, 0x296858u, 0x296860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296860u;
label_296860:
    // 0x296860: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296864: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x296864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296868: 0xc056094  jal         func_158250
    ctx->pc = 0x296868u;
    SET_GPR_U32(ctx, 31, 0x296870u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x296868u, 0x296870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296870u;
label_296870:
    // 0x296870: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x296870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296874: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x296874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x296878: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x296878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29687c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29687Cu;
    {
        const bool branch_taken_0x29687c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29687c) {
            ctx->pc = 0x296890u;
            goto label_296890;
        }
    }
    ctx->pc = 0x296884u;
    // 0x296884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x296884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296888: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x296888u;
    SET_GPR_U32(ctx, 31, 0x296890u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x296888u, 0x296890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296890u;
label_296890:
    // 0x296890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296898: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x296898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29689c: 0x3e00008  jr          $ra
    ctx->pc = 0x29689Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29689Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2968A4u;
    // 0x2968a4: 0x0  nop
    ctx->pc = 0x2968a4u;
    // NOP
    // 0x2968a8: 0x0  nop
    ctx->pc = 0x2968a8u;
    // NOP
    // 0x2968ac: 0x0  nop
    ctx->pc = 0x2968acu;
    // NOP
    ctx->pc = 0x2968b0u;
}
