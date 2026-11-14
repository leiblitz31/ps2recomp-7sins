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

// Function: sub_002588C0
// Address: 0x2588c0 - 0x258940
void sub_002588C0_0x2588c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002588C0_0x2588c0");
#endif

    switch (ctx->pc) {
        case 0x2588f4u: goto label_2588f4;
        case 0x258904u: goto label_258904;
        case 0x258924u: goto label_258924;
        default: break;
    }

    ctx->pc = 0x2588c0u;

    // 0x2588c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2588c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2588c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2588c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2588c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2588c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2588cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2588ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2588d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2588D4u;
    {
        const bool branch_taken_0x2588d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2588d4) {
            ctx->pc = 0x258924u;
            goto label_258924;
        }
    }
    ctx->pc = 0x2588DCu;
    // 0x2588dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2588dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2588e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2588e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2588e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2588e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2588ec: 0xc096278  jal         func_2589E0
    ctx->pc = 0x2588ECu;
    SET_GPR_U32(ctx, 31, 0x2588F4u);
    ctx->pc = 0x2589E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589E0u, 0x2588ECu, 0x2588F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588F4u;
label_2588f4:
    // 0x2588f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2588f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2588f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2588f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588fc: 0xc096250  jal         func_258940
    ctx->pc = 0x2588FCu;
    SET_GPR_U32(ctx, 31, 0x258904u);
    ctx->pc = 0x258940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258940u, 0x2588FCu, 0x258904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258904u;
label_258904:
    // 0x258904: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x258904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258908: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25890c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25890cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258910: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258910u;
    {
        const bool branch_taken_0x258910 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x258910) {
            ctx->pc = 0x258924u;
            goto label_258924;
        }
    }
    ctx->pc = 0x258918u;
    // 0x258918: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25891c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25891Cu;
    SET_GPR_U32(ctx, 31, 0x258924u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25891Cu, 0x258924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258924u;
label_258924:
    // 0x258924: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25892c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25892cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258930: 0x3e00008  jr          $ra
    ctx->pc = 0x258930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258938u;
    // 0x258938: 0x0  nop
    ctx->pc = 0x258938u;
    // NOP
    // 0x25893c: 0x0  nop
    ctx->pc = 0x25893cu;
    // NOP
    ctx->pc = 0x258940u;
}
