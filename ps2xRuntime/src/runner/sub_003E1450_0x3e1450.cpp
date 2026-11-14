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

// Function: sub_003E1450
// Address: 0x3e1450 - 0x3e14c8
void sub_003E1450_0x3e1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1450_0x3e1450");
#endif

    switch (ctx->pc) {
        case 0x3e1478u: goto label_3e1478;
        case 0x3e148cu: goto label_3e148c;
        case 0x3e14b8u: goto label_3e14b8;
        default: break;
    }

    ctx->pc = 0x3e1450u;

    // 0x3e1450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1454: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e1454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1458u;
    {
        const bool branch_taken_0x3e1458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1458u;
        // 0x3e145c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1458) {
            ctx->pc = 0x3E1468u;
            goto label_3e1468;
        }
    }
    ctx->pc = 0x3E1460u;
    // 0x3e1460: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3E1460u;
    {
        const bool branch_taken_0x3e1460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1460u;
        // 0x3e1464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1460) {
            ctx->pc = 0x3E1490u;
            goto label_3e1490;
        }
    }
    ctx->pc = 0x3E1468u;
label_3e1468:
    // 0x3e1468: 0x8c4602e8  lw          $a2, 0x2E8($v0)
    ctx->pc = 0x3e1468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x3e146c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e1470: 0xc0f8b78  jal         func_3E2DE0
    ctx->pc = 0x3E1470u;
    SET_GPR_U32(ctx, 31, 0x3E1478u);
    ctx->pc = 0x3E1474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1470u;
    // 0x3e1474: 0x8c4502ec  lw          $a1, 0x2EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DE0u, 0x3E1470u, 0x3E1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1478u;
label_3e1478:
    // 0x3e1478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1478u;
    {
        const bool branch_taken_0x3e1478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1478u;
        // 0x3e147c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1478) {
            ctx->pc = 0x3E148Cu;
            goto label_3e148c;
        }
    }
    ctx->pc = 0x3E1480u;
    // 0x3e1480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1484: 0xc0f8532  jal         func_3E14C8
    ctx->pc = 0x3E1484u;
    SET_GPR_U32(ctx, 31, 0x3E148Cu);
    ctx->pc = 0x3E1488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1484u;
    // 0x3e1488: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E14C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E14C8u, 0x3E1484u, 0x3E148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E148Cu;
label_3e148c:
    // 0x3e148c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3e148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1490:
    // 0x3e1490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1494: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1494u;
        // 0x3e1498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E149Cu;
    // 0x3e149c: 0x0  nop
    ctx->pc = 0x3e149cu;
    // NOP
    // 0x3e14a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e14a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e14a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e14a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e14a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3e14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3e14ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e14acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e14b0: 0xc0f8532  jal         func_3E14C8
    ctx->pc = 0x3E14B0u;
    SET_GPR_U32(ctx, 31, 0x3E14B8u);
    ctx->pc = 0x3E14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E14B0u;
    // 0x3e14b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E14C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E14C8u, 0x3E14B0u, 0x3E14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E14B8u;
label_3e14b8:
    // 0x3e14b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e14b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e14bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E14BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14BCu;
        // 0x3e14c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E14BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E14C4u;
    // 0x3e14c4: 0x0  nop
    ctx->pc = 0x3e14c4u;
    // NOP
    ctx->pc = 0x3e14c8u;
}
