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

// Function: sub_001452E0
// Address: 0x1452e0 - 0x145330
void sub_001452E0_0x1452e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001452E0_0x1452e0");
#endif

    switch (ctx->pc) {
        case 0x1452f8u: goto label_1452f8;
        case 0x145308u: goto label_145308;
        default: break;
    }

    ctx->pc = 0x1452e0u;

    // 0x1452e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1452e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1452e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1452e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1452e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1452e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1452ec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1452ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1452f0: 0xc05150c  jal         func_145430
    ctx->pc = 0x1452F0u;
    SET_GPR_U32(ctx, 31, 0x1452F8u);
    ctx->pc = 0x145430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145430u, 0x1452F0u, 0x1452F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452F8u;
label_1452f8:
    // 0x1452f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1452f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1452fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1452fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145300: 0xc0514cc  jal         func_145330
    ctx->pc = 0x145300u;
    SET_GPR_U32(ctx, 31, 0x145308u);
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x145300u, 0x145308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145308u;
label_145308:
    // 0x145308: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x145308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14530c: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x14530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
    // 0x145310: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x145310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145314: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x145314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x145318: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x145318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14531c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14531cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145320: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x145320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x145324: 0x3e00008  jr          $ra
    ctx->pc = 0x145324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14532Cu;
    // 0x14532c: 0x0  nop
    ctx->pc = 0x14532cu;
    // NOP
    ctx->pc = 0x145330u;
}
