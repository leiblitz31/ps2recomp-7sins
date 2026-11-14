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

// Function: sub_0028A8D0
// Address: 0x28a8d0 - 0x28a940
void sub_0028A8D0_0x28a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A8D0_0x28a8d0");
#endif

    switch (ctx->pc) {
        case 0x28a8f8u: goto label_28a8f8;
        case 0x28a908u: goto label_28a908;
        case 0x28a928u: goto label_28a928;
        default: break;
    }

    ctx->pc = 0x28a8d0u;

    // 0x28a8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28a8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a8d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28a8dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28a8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x28a8e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28A8E4u;
    {
        const bool branch_taken_0x28a8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a8e4) {
            ctx->pc = 0x28A928u;
            goto label_28a928;
        }
    }
    ctx->pc = 0x28A8ECu;
    // 0x28a8ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8f0: 0xc0a2a6c  jal         func_28A9B0
    ctx->pc = 0x28A8F0u;
    SET_GPR_U32(ctx, 31, 0x28A8F8u);
    ctx->pc = 0x28A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A9B0u, 0x28A8F0u, 0x28A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8F8u;
label_28a8f8:
    // 0x28a8f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a900: 0xc0a2a50  jal         func_28A940
    ctx->pc = 0x28A900u;
    SET_GPR_U32(ctx, 31, 0x28A908u);
    ctx->pc = 0x28A940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A940u, 0x28A900u, 0x28A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A908u;
label_28a908:
    // 0x28a908: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x28a908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a90c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28a910: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28a910u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28a914: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A914u;
    {
        const bool branch_taken_0x28a914 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28a914) {
            ctx->pc = 0x28A928u;
            goto label_28a928;
        }
    }
    ctx->pc = 0x28A91Cu;
    // 0x28a91c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a920: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x28A920u;
    SET_GPR_U32(ctx, 31, 0x28A928u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x28A920u, 0x28A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A928u;
label_28a928:
    // 0x28a928: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a930: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28a934: 0x3e00008  jr          $ra
    ctx->pc = 0x28A934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A93Cu;
    // 0x28a93c: 0x0  nop
    ctx->pc = 0x28a93cu;
    // NOP
    ctx->pc = 0x28a940u;
}
