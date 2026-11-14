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

// Function: sub_00254580
// Address: 0x254580 - 0x254600
void sub_00254580_0x254580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254580_0x254580");
#endif

    switch (ctx->pc) {
        case 0x2545b4u: goto label_2545b4;
        case 0x2545c4u: goto label_2545c4;
        case 0x2545e4u: goto label_2545e4;
        default: break;
    }

    ctx->pc = 0x254580u;

    // 0x254580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25458c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25458cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x254590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254594: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x254594u;
    {
        const bool branch_taken_0x254594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254594) {
            ctx->pc = 0x2545E4u;
            goto label_2545e4;
        }
    }
    ctx->pc = 0x25459Cu;
    // 0x25459c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2545a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2545a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2545a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2545a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2545ac: 0xc0951ac  jal         func_2546B0
    ctx->pc = 0x2545ACu;
    SET_GPR_U32(ctx, 31, 0x2545B4u);
    ctx->pc = 0x2546B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2546B0u, 0x2545ACu, 0x2545B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545B4u;
label_2545b4:
    // 0x2545b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2545b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2545b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545bc: 0xc095180  jal         func_254600
    ctx->pc = 0x2545BCu;
    SET_GPR_U32(ctx, 31, 0x2545C4u);
    ctx->pc = 0x254600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254600u, 0x2545BCu, 0x2545C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545C4u;
label_2545c4:
    // 0x2545c4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2545c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2545c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2545c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2545cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2545ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2545d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2545D0u;
    {
        const bool branch_taken_0x2545d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2545d0) {
            ctx->pc = 0x2545E4u;
            goto label_2545e4;
        }
    }
    ctx->pc = 0x2545D8u;
    // 0x2545d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2545d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2545DCu;
    SET_GPR_U32(ctx, 31, 0x2545E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2545DCu, 0x2545E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545E4u;
label_2545e4:
    // 0x2545e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2545e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2545e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2545ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2545ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2545f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2545F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2545F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2545F8u;
    // 0x2545f8: 0x0  nop
    ctx->pc = 0x2545f8u;
    // NOP
    // 0x2545fc: 0x0  nop
    ctx->pc = 0x2545fcu;
    // NOP
    ctx->pc = 0x254600u;
}
