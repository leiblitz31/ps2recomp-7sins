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

// Function: sub_00258360
// Address: 0x258360 - 0x2583e0
void sub_00258360_0x258360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258360_0x258360");
#endif

    switch (ctx->pc) {
        case 0x258394u: goto label_258394;
        case 0x2583a4u: goto label_2583a4;
        case 0x2583c4u: goto label_2583c4;
        default: break;
    }

    ctx->pc = 0x258360u;

    // 0x258360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25836c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25836cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258374: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x258374u;
    {
        const bool branch_taken_0x258374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258374) {
            ctx->pc = 0x2583C4u;
            goto label_2583c4;
        }
    }
    ctx->pc = 0x25837Cu;
    // 0x25837c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x258384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258388: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x258388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25838c: 0xc096124  jal         func_258490
    ctx->pc = 0x25838Cu;
    SET_GPR_U32(ctx, 31, 0x258394u);
    ctx->pc = 0x258490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258490u, 0x25838Cu, 0x258394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258394u;
label_258394:
    // 0x258394: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25839c: 0xc0960f8  jal         func_2583E0
    ctx->pc = 0x25839Cu;
    SET_GPR_U32(ctx, 31, 0x2583A4u);
    ctx->pc = 0x2583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2583E0u, 0x25839Cu, 0x2583A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583A4u;
label_2583a4:
    // 0x2583a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2583a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2583a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2583a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2583ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2583acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2583b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2583B0u;
    {
        const bool branch_taken_0x2583b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2583b0) {
            ctx->pc = 0x2583C4u;
            goto label_2583c4;
        }
    }
    ctx->pc = 0x2583B8u;
    // 0x2583b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2583b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2583bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2583BCu;
    SET_GPR_U32(ctx, 31, 0x2583C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2583BCu, 0x2583C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583C4u;
label_2583c4:
    // 0x2583c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2583c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2583c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2583c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2583cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2583ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2583d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2583D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2583D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2583D8u;
    // 0x2583d8: 0x0  nop
    ctx->pc = 0x2583d8u;
    // NOP
    // 0x2583dc: 0x0  nop
    ctx->pc = 0x2583dcu;
    // NOP
    ctx->pc = 0x2583e0u;
}
