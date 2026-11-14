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

// Function: sub_00341370
// Address: 0x341370 - 0x3413f0
void sub_00341370_0x341370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341370_0x341370");
#endif

    switch (ctx->pc) {
        case 0x34138cu: goto label_34138c;
        case 0x3413a8u: goto label_3413a8;
        case 0x3413bcu: goto label_3413bc;
        case 0x3413d0u: goto label_3413d0;
        default: break;
    }

    ctx->pc = 0x341370u;

    // 0x341370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x341378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x34137c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34137cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341384: 0xc0d04fc  jal         func_3413F0
    ctx->pc = 0x341384u;
    SET_GPR_U32(ctx, 31, 0x34138Cu);
    ctx->pc = 0x341388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341384u;
    // 0x341388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3413F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3413F0u, 0x341384u, 0x34138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34138Cu;
label_34138c:
    // 0x34138c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x34138cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x341390: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x341390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341398: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x341398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x34139c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x34139cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3413a0: 0xc103404  jal         func_40D010
    ctx->pc = 0x3413A0u;
    SET_GPR_U32(ctx, 31, 0x3413A8u);
    ctx->pc = 0x3413A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3413A0u;
    // 0x3413a4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3413A0u, 0x3413A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413A8u;
label_3413a8:
    // 0x3413a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3413A8u;
    {
        const bool branch_taken_0x3413a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3413ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413A8u;
        // 0x3413ac: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413a8) {
            ctx->pc = 0x3413D8u;
            goto label_3413d8;
        }
    }
    ctx->pc = 0x3413B0u;
    // 0x3413b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3413b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3413b4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3413B4u;
    SET_GPR_U32(ctx, 31, 0x3413BCu);
    ctx->pc = 0x3413B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3413B4u;
    // 0x3413b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3413B4u, 0x3413BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413BCu;
label_3413bc:
    // 0x3413bc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3413bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3413c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3413c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3413c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3413c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3413c8: 0xc103440  jal         func_40D100
    ctx->pc = 0x3413C8u;
    SET_GPR_U32(ctx, 31, 0x3413D0u);
    ctx->pc = 0x3413CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3413C8u;
    // 0x3413cc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3413C8u, 0x3413D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413D0u;
label_3413d0:
    // 0x3413d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3413D0u;
    {
        const bool branch_taken_0x3413d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3413D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413D0u;
        // 0x3413d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3413d0) {
            ctx->pc = 0x3413DCu;
            goto label_3413dc;
        }
    }
    ctx->pc = 0x3413D8u;
label_3413d8:
    // 0x3413d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3413d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3413dc:
    // 0x3413dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3413dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3413e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3413e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3413e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3413e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3413e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3413E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3413ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3413E8u;
        // 0x3413ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3413E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3413F0u;
}
