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

// Function: sub_0024F2E0
// Address: 0x24f2e0 - 0x24f370
void sub_0024F2E0_0x24f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F2E0_0x24f2e0");
#endif

    switch (ctx->pc) {
        case 0x24f2fcu: goto label_24f2fc;
        case 0x24f308u: goto label_24f308;
        case 0x24f318u: goto label_24f318;
        case 0x24f324u: goto label_24f324;
        case 0x24f338u: goto label_24f338;
        case 0x24f34cu: goto label_24f34c;
        default: break;
    }

    ctx->pc = 0x24f2e0u;

label_24f2e0:
    // 0x24f2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24f2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f2ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24f2f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24f2f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24F2F4u;
    {
        const bool branch_taken_0x24f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f2f4) {
            ctx->pc = 0x24F350u;
            goto label_24f350;
        }
    }
    ctx->pc = 0x24F2FCu;
label_24f2fc:
    // 0x24f2fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f300: 0xc053c60  jal         func_14F180
    ctx->pc = 0x24F300u;
    SET_GPR_U32(ctx, 31, 0x24F308u);
    ctx->pc = 0x14F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F180u, 0x24F300u, 0x24F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F308u;
label_24f308:
    // 0x24f308: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f30c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f310: 0xc093cb8  jal         func_24F2E0
    ctx->pc = 0x24F310u;
    SET_GPR_U32(ctx, 31, 0x24F318u);
    ctx->pc = 0x24F2E0u;
    goto label_24f2e0;
    ctx->pc = 0x24F318u;
label_24f318:
    // 0x24f318: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f31c: 0xc053c68  jal         func_14F1A0
    ctx->pc = 0x24F31Cu;
    SET_GPR_U32(ctx, 31, 0x24F324u);
    ctx->pc = 0x14F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A0u, 0x24F31Cu, 0x24F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F324u;
label_24f324:
    // 0x24f324: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24f324u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f328: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f32c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x24f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x24f330: 0xc09352c  jal         func_24D4B0
    ctx->pc = 0x24F330u;
    SET_GPR_U32(ctx, 31, 0x24F338u);
    ctx->pc = 0x24D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4B0u, 0x24F330u, 0x24F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F338u;
label_24f338:
    // 0x24f338: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f33c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f340: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f344: 0xc093b9c  jal         func_24EE70
    ctx->pc = 0x24F344u;
    SET_GPR_U32(ctx, 31, 0x24F34Cu);
    ctx->pc = 0x24EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EE70u, 0x24F344u, 0x24F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F34Cu;
label_24f34c:
    // 0x24f34c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x24f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_24f350:
    // 0x24f350: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x24f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f354: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x24F354u;
    {
        const bool branch_taken_0x24f354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f354) {
            ctx->pc = 0x24F2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f2fc;
        }
    }
    ctx->pc = 0x24F35Cu;
    // 0x24f35c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24f35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f364: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24f364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24f368: 0x3e00008  jr          $ra
    ctx->pc = 0x24F368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F370u;
}
