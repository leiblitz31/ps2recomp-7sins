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

// Function: sub_0049F878
// Address: 0x49f878 - 0x49f8f8
void sub_0049F878_0x49f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F878_0x49f878");
#endif

    switch (ctx->pc) {
        case 0x49f89cu: goto label_49f89c;
        case 0x49f8b8u: goto label_49f8b8;
        case 0x49f8d4u: goto label_49f8d4;
        default: break;
    }

    ctx->pc = 0x49f878u;

    // 0x49f878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49f87c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x49f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x49f880: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49f884: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x49f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49f888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49f88c: 0x24845d90  addiu       $a0, $a0, 0x5D90
    ctx->pc = 0x49f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
    // 0x49f890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f894: 0xc127584  jal         func_49D610
    ctx->pc = 0x49F894u;
    SET_GPR_U32(ctx, 31, 0x49F89Cu);
    ctx->pc = 0x49F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F894u;
    // 0x49f898: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D610u, 0x49F894u, 0x49F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F89Cu;
label_49f89c:
    // 0x49f89c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49f89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f8a0: 0x16300010  bne         $s1, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x49F8A0u;
    {
        const bool branch_taken_0x49f8a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x49F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F8A0u;
        // 0x49f8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f8a0) {
            ctx->pc = 0x49F8E4u;
            goto label_49f8e4;
        }
    }
    ctx->pc = 0x49F8A8u;
    // 0x49f8a8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x49f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x49f8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49f8b0: 0xc1269aa  jal         func_49A6A8
    ctx->pc = 0x49F8B0u;
    SET_GPR_U32(ctx, 31, 0x49F8B8u);
    ctx->pc = 0x49F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F8B0u;
    // 0x49f8b4: 0x24845d88  addiu       $a0, $a0, 0x5D88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A6A8u, 0x49F8B0u, 0x49F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F8B8u;
label_49f8b8:
    // 0x49f8b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49f8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f8bc: 0x56110009  bnel        $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x49F8BCu;
    {
        const bool branch_taken_0x49f8bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x49f8bc) {
            ctx->pc = 0x49F8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F8BCu;
            // 0x49f8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F8E4u;
            goto label_49f8e4;
        }
    }
    ctx->pc = 0x49F8C4u;
    // 0x49f8c4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x49f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x49f8c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49f8cc: 0xc129a3c  jal         func_4A68F0
    ctx->pc = 0x49F8CCu;
    SET_GPR_U32(ctx, 31, 0x49F8D4u);
    ctx->pc = 0x49F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F8CCu;
    // 0x49f8d0: 0x24845da0  addiu       $a0, $a0, 0x5DA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A68F0u, 0x49F8CCu, 0x49F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F8D4u;
label_49f8d4:
    // 0x49f8d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49f8d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f8d8: 0x10700002  beq         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49F8D8u;
    {
        const bool branch_taken_0x49f8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x49F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F8D8u;
        // 0x49f8dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f8d8) {
            ctx->pc = 0x49F8E4u;
            goto label_49f8e4;
        }
    }
    ctx->pc = 0x49F8E0u;
    // 0x49f8e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49f8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49f8e4:
    // 0x49f8e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49f8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49f8e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x49F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F8F0u;
        // 0x49f8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F8F8u;
}
