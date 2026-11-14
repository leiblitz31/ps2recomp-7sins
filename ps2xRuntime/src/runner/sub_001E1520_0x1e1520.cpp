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

// Function: sub_001E1520
// Address: 0x1e1520 - 0x1e1570
void sub_001E1520_0x1e1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1520_0x1e1520");
#endif

    switch (ctx->pc) {
        case 0x1e153cu: goto label_1e153c;
        case 0x1e1550u: goto label_1e1550;
        case 0x1e1560u: goto label_1e1560;
        default: break;
    }

    ctx->pc = 0x1e1520u;

    // 0x1e1520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1528: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e152c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1530: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e1530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1534: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1E1534u;
    SET_GPR_U32(ctx, 31, 0x1E153Cu);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1E1534u, 0x1E153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E153Cu;
label_1e153c:
    // 0x1e153c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e153cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1540: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e1540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1544: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e1544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1548: 0xc07855c  jal         func_1E1570
    ctx->pc = 0x1E1548u;
    SET_GPR_U32(ctx, 31, 0x1E1550u);
    ctx->pc = 0x1E1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1570u, 0x1E1548u, 0x1E1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1550u;
label_1e1550:
    // 0x1e1550: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e1550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1554: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e1554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1558: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1E1558u;
    SET_GPR_U32(ctx, 31, 0x1E1560u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1E1558u, 0x1E1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1560u;
label_1e1560:
    // 0x1e1560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1564: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e1564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e1568: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1570u;
}
