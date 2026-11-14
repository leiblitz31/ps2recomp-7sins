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

// Function: sub_00262720
// Address: 0x262720 - 0x2627b0
void sub_00262720_0x262720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262720_0x262720");
#endif

    switch (ctx->pc) {
        case 0x262750u: goto label_262750;
        case 0x262770u: goto label_262770;
        case 0x262790u: goto label_262790;
        default: break;
    }

    ctx->pc = 0x262720u;

    // 0x262720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x262728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26272c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26272cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x262730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262734: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x262734u;
    {
        const bool branch_taken_0x262734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262734) {
            ctx->pc = 0x262790u;
            goto label_262790;
        }
    }
    ctx->pc = 0x26273Cu;
    // 0x26273c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262740: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x262744: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x262744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262748: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x262748u;
    SET_GPR_U32(ctx, 31, 0x262750u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x262748u, 0x262750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262750u;
label_262750:
    // 0x262750: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262754: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x262754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x262758: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x262758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x26275c: 0x24a527b0  addiu       $a1, $a1, 0x27B0
    ctx->pc = 0x26275cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10160));
    // 0x262760: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x262760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x262764: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x262764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262768: 0xc0b9fd4  jal         func_2E7F50
    ctx->pc = 0x262768u;
    SET_GPR_U32(ctx, 31, 0x262770u);
    ctx->pc = 0x2E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7F50u, 0x262768u, 0x262770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262770u;
label_262770:
    // 0x262770: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x262770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262774: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x262774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x262778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x262778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26277c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26277Cu;
    {
        const bool branch_taken_0x26277c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26277c) {
            ctx->pc = 0x262790u;
            goto label_262790;
        }
    }
    ctx->pc = 0x262784u;
    // 0x262784: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x262784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262788: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x262788u;
    SET_GPR_U32(ctx, 31, 0x262790u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x262788u, 0x262790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262790u;
label_262790:
    // 0x262790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x262790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262798: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26279c: 0x3e00008  jr          $ra
    ctx->pc = 0x26279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2627A4u;
    // 0x2627a4: 0x0  nop
    ctx->pc = 0x2627a4u;
    // NOP
    // 0x2627a8: 0x0  nop
    ctx->pc = 0x2627a8u;
    // NOP
    // 0x2627ac: 0x0  nop
    ctx->pc = 0x2627acu;
    // NOP
    ctx->pc = 0x2627b0u;
}
