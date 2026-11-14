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

// Function: sub_001778F0
// Address: 0x1778f0 - 0x177970
void sub_001778F0_0x1778f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001778F0_0x1778f0");
#endif

    switch (ctx->pc) {
        case 0x177924u: goto label_177924;
        case 0x177934u: goto label_177934;
        case 0x177954u: goto label_177954;
        default: break;
    }

    ctx->pc = 0x1778f0u;

    // 0x1778f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1778f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1778f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1778f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1778f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1778f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1778fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1778fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x177900: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177904: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177904u;
    {
        const bool branch_taken_0x177904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177904) {
            ctx->pc = 0x177954u;
            goto label_177954;
        }
    }
    ctx->pc = 0x17790Cu;
    // 0x17790c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177914: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x177914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177918: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x177918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17791c: 0xc05de84  jal         func_177A10
    ctx->pc = 0x17791Cu;
    SET_GPR_U32(ctx, 31, 0x177924u);
    ctx->pc = 0x177A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A10u, 0x17791Cu, 0x177924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177924u;
label_177924:
    // 0x177924: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17792c: 0xc05de5c  jal         func_177970
    ctx->pc = 0x17792Cu;
    SET_GPR_U32(ctx, 31, 0x177934u);
    ctx->pc = 0x177970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177970u, 0x17792Cu, 0x177934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177934u;
label_177934:
    // 0x177934: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x177934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177938: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x177938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17793c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17793cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x177940: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177940u;
    {
        const bool branch_taken_0x177940 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x177940) {
            ctx->pc = 0x177954u;
            goto label_177954;
        }
    }
    ctx->pc = 0x177948u;
    // 0x177948: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17794c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17794Cu;
    SET_GPR_U32(ctx, 31, 0x177954u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17794Cu, 0x177954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177954u;
label_177954:
    // 0x177954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17795c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17795cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177960: 0x3e00008  jr          $ra
    ctx->pc = 0x177960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177968u;
    // 0x177968: 0x0  nop
    ctx->pc = 0x177968u;
    // NOP
    // 0x17796c: 0x0  nop
    ctx->pc = 0x17796cu;
    // NOP
    ctx->pc = 0x177970u;
}
