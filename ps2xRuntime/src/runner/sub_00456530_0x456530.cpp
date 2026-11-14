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

// Function: sub_00456530
// Address: 0x456530 - 0x4565b0
void sub_00456530_0x456530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456530_0x456530");
#endif

    switch (ctx->pc) {
        case 0x456554u: goto label_456554;
        case 0x45656cu: goto label_45656c;
        case 0x456580u: goto label_456580;
        default: break;
    }

    ctx->pc = 0x456530u;

    // 0x456530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x456530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x456534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x456534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x456538: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x456538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45653c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x45653cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x456540: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x456540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x456544: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x456544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x456548: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x456548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45654c: 0xc042844  jal         func_10A110
    ctx->pc = 0x45654Cu;
    SET_GPR_U32(ctx, 31, 0x456554u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x45654Cu, 0x456554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456554u;
label_456554:
    // 0x456554: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x456554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456558: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x456558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45655c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x45655cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x456560: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x456560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x456564: 0xc113e48  jal         func_44F920
    ctx->pc = 0x456564u;
    SET_GPR_U32(ctx, 31, 0x45656Cu);
    ctx->pc = 0x44F920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F920u, 0x456564u, 0x45656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45656Cu;
label_45656c:
    // 0x45656c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x456570: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x456570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x456574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x456574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456578: 0xc113e08  jal         func_44F820
    ctx->pc = 0x456578u;
    SET_GPR_U32(ctx, 31, 0x456580u);
    ctx->pc = 0x44F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F820u, 0x456578u, 0x456580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456580u;
label_456580:
    // 0x456580: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x456580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x456584: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x456584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x456588: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x456588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45658c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x45658cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x456590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x456590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x456594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x456594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456598: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x456598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45659c: 0x3e00008  jr          $ra
    ctx->pc = 0x45659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45659Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4565A4u;
    // 0x4565a4: 0x0  nop
    ctx->pc = 0x4565a4u;
    // NOP
    // 0x4565a8: 0x0  nop
    ctx->pc = 0x4565a8u;
    // NOP
    // 0x4565ac: 0x0  nop
    ctx->pc = 0x4565acu;
    // NOP
    ctx->pc = 0x4565b0u;
}
