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

// Function: sub_001582B0
// Address: 0x1582b0 - 0x158330
void sub_001582B0_0x1582b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001582B0_0x1582b0");
#endif

    switch (ctx->pc) {
        case 0x1582e4u: goto label_1582e4;
        case 0x1582f4u: goto label_1582f4;
        case 0x158314u: goto label_158314;
        default: break;
    }

    ctx->pc = 0x1582b0u;

    // 0x1582b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1582b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1582b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1582b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1582b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1582b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1582bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1582bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1582c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1582c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1582c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1582C4u;
    {
        const bool branch_taken_0x1582c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582c4) {
            ctx->pc = 0x158314u;
            goto label_158314;
        }
    }
    ctx->pc = 0x1582CCu;
    // 0x1582cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1582ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1582d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1582d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1582d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1582d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1582d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1582d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1582dc: 0xc0560f8  jal         func_1583E0
    ctx->pc = 0x1582DCu;
    SET_GPR_U32(ctx, 31, 0x1582E4u);
    ctx->pc = 0x1583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1583E0u, 0x1582DCu, 0x1582E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582E4u;
label_1582e4:
    // 0x1582e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1582e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1582e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1582e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582ec: 0xc0560cc  jal         func_158330
    ctx->pc = 0x1582ECu;
    SET_GPR_U32(ctx, 31, 0x1582F4u);
    ctx->pc = 0x158330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158330u, 0x1582ECu, 0x1582F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582F4u;
label_1582f4:
    // 0x1582f4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1582f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1582f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1582f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1582fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1582fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x158300: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158300u;
    {
        const bool branch_taken_0x158300 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x158300) {
            ctx->pc = 0x158314u;
            goto label_158314;
        }
    }
    ctx->pc = 0x158308u;
    // 0x158308: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x158308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15830c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x15830Cu;
    SET_GPR_U32(ctx, 31, 0x158314u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x15830Cu, 0x158314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158314u;
label_158314:
    // 0x158314: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15831c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158320: 0x3e00008  jr          $ra
    ctx->pc = 0x158320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158328u;
    // 0x158328: 0x0  nop
    ctx->pc = 0x158328u;
    // NOP
    // 0x15832c: 0x0  nop
    ctx->pc = 0x15832cu;
    // NOP
    ctx->pc = 0x158330u;
}
