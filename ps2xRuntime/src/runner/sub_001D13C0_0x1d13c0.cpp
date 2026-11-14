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

// Function: sub_001D13C0
// Address: 0x1d13c0 - 0x1d1450
void sub_001D13C0_0x1d13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D13C0_0x1d13c0");
#endif

    switch (ctx->pc) {
        case 0x1d13fcu: goto label_1d13fc;
        case 0x1d143cu: goto label_1d143c;
        default: break;
    }

    ctx->pc = 0x1d13c0u;

    // 0x1d13c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d13c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d13c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1d13cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1d13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1d13d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d13d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d13d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d13dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d13e0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D13E0u;
    {
        const bool branch_taken_0x1d13e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d13e0) {
            ctx->pc = 0x1D1414u;
            goto label_1d1414;
        }
    }
    ctx->pc = 0x1D13E8u;
    // 0x1d13e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d13ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d13f0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1d13f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d13f4: 0xc074514  jal         func_1D1450
    ctx->pc = 0x1D13F4u;
    SET_GPR_U32(ctx, 31, 0x1D13FCu);
    ctx->pc = 0x1D1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1450u, 0x1D13F4u, 0x1D13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13FCu;
label_1d13fc:
    // 0x1d13fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d13fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1400: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d1404: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d1404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d1408: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1d1408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1d140c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D140Cu;
    {
        const bool branch_taken_0x1d140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d140c) {
            ctx->pc = 0x1D143Cu;
            goto label_1d143c;
        }
    }
    ctx->pc = 0x1D1414u;
label_1d1414:
    // 0x1d1414: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1418: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1d1418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d141c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1420: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d1420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d1424: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1d1424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1428: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1d1428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1d142c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d142cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1430: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1434: 0xc0602f4  jal         func_180BD0
    ctx->pc = 0x1D1434u;
    SET_GPR_U32(ctx, 31, 0x1D143Cu);
    ctx->pc = 0x180BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180BD0u, 0x1D1434u, 0x1D143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D143Cu;
label_1d143c:
    // 0x1d143c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d143cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1440: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d1444: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D144Cu;
    // 0x1d144c: 0x0  nop
    ctx->pc = 0x1d144cu;
    // NOP
    ctx->pc = 0x1d1450u;
}
