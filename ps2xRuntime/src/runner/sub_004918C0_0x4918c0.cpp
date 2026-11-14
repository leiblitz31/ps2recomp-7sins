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

// Function: sub_004918C0
// Address: 0x4918c0 - 0x491940
void sub_004918C0_0x4918c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004918C0_0x4918c0");
#endif

    switch (ctx->pc) {
        case 0x4918e4u: goto label_4918e4;
        case 0x491928u: goto label_491928;
        default: break;
    }

    ctx->pc = 0x4918c0u;

    // 0x4918c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4918c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4918c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4918c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4918c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4918c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4918cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4918ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4918d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4918d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4918d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4918d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4918d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4918d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4918dc: 0xc124344  jal         func_490D10
    ctx->pc = 0x4918DCu;
    SET_GPR_U32(ctx, 31, 0x4918E4u);
    ctx->pc = 0x490D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490D10u, 0x4918DCu, 0x4918E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4918E4u;
label_4918e4:
    // 0x4918e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4918e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4918e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4918e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4918ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4918f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4918f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4918f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4918f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4918f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4918f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4918fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4918fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491900: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x491900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491904: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x491904u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x491908: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x491908u;
    {
        const bool branch_taken_0x491908 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x491908) {
            ctx->pc = 0x491918u;
            goto label_491918;
        }
    }
    ctx->pc = 0x491910u;
    // 0x491910: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x491910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x491914: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x491914u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_491918:
    // 0x491918: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x491918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x49191c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x49191cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x491920: 0xc124c24  jal         func_493090
    ctx->pc = 0x491920u;
    SET_GPR_U32(ctx, 31, 0x491928u);
    ctx->pc = 0x493090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493090u, 0x491920u, 0x491928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491928u;
label_491928:
    // 0x491928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x491928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49192c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x49192cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x491930: 0x3e00008  jr          $ra
    ctx->pc = 0x491930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491938u;
    // 0x491938: 0x0  nop
    ctx->pc = 0x491938u;
    // NOP
    // 0x49193c: 0x0  nop
    ctx->pc = 0x49193cu;
    // NOP
    ctx->pc = 0x491940u;
}
