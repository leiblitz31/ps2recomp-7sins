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

// Function: sub_004AF8A8
// Address: 0x4af8a8 - 0x4af918
void sub_004AF8A8_0x4af8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF8A8_0x4af8a8");
#endif

    switch (ctx->pc) {
        case 0x4af8d4u: goto label_4af8d4;
        case 0x4af90cu: goto label_4af90c;
        default: break;
    }

    ctx->pc = 0x4af8a8u;

    // 0x4af8a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4af8a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4af8b0: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4af8b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8b4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4af8b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4af8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4af8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4af8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af8c4: 0x2444e9c0  addiu       $a0, $v0, -0x1640
    ctx->pc = 0x4af8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x4af8c8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4af8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8cc: 0xc126b7e  jal         func_49ADF8
    ctx->pc = 0x4AF8CCu;
    SET_GPR_U32(ctx, 31, 0x4AF8D4u);
    ctx->pc = 0x4AF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8CCu;
    // 0x4af8d0: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ADF8u, 0x4AF8CCu, 0x4AF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8D4u;
label_4af8d4:
    // 0x4af8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF8D8u;
        // 0x4af8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF8E0u;
    // 0x4af8e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4af8e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4af8e8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4af8e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4af8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4af8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4af8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4af8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af8fc: 0x2444e9c0  addiu       $a0, $v0, -0x1640
    ctx->pc = 0x4af8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x4af900: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4af900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af904: 0xc12609a  jal         func_498268
    ctx->pc = 0x4AF904u;
    SET_GPR_U32(ctx, 31, 0x4AF90Cu);
    ctx->pc = 0x4AF908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF904u;
    // 0x4af908: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498268u, 0x4AF904u, 0x4AF90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF90Cu;
label_4af90c:
    // 0x4af90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af910: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF910u;
        // 0x4af914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF918u;
}
