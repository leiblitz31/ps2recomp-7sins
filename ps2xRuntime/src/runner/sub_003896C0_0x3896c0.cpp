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

// Function: sub_003896C0
// Address: 0x3896c0 - 0x389730
void sub_003896C0_0x3896c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003896C0_0x3896c0");
#endif

    switch (ctx->pc) {
        case 0x3896e4u: goto label_3896e4;
        case 0x38970cu: goto label_38970c;
        default: break;
    }

    ctx->pc = 0x3896c0u;

    // 0x3896c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3896c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3896c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3896c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3896c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3896c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3896cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3896ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3896d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3896d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3896d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3896d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3896d8: 0x2785bd28  addiu       $a1, $gp, -0x42D8
    ctx->pc = 0x3896d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950184));
    // 0x3896dc: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3896DCu;
    SET_GPR_U32(ctx, 31, 0x3896E4u);
    ctx->pc = 0x3896E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3896DCu;
    // 0x3896e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3896DCu, 0x3896E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896E4u;
label_3896e4:
    // 0x3896e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3896E4u;
    {
        const bool branch_taken_0x3896e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3896E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896E4u;
        // 0x3896e8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896e4) {
            ctx->pc = 0x3896F4u;
            goto label_3896f4;
        }
    }
    ctx->pc = 0x3896ECu;
    // 0x3896ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3896ECu;
    {
        const bool branch_taken_0x3896ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3896F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896ECu;
        // 0x3896f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896ec) {
            ctx->pc = 0x38971Cu;
            goto label_38971c;
        }
    }
    ctx->pc = 0x3896F4u;
label_3896f4:
    // 0x3896f4: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3896F4u;
    {
        const bool branch_taken_0x3896f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3896f4) {
            ctx->pc = 0x3896F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3896F4u;
            // 0x3896f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38971Cu;
            goto label_38971c;
        }
    }
    ctx->pc = 0x3896FCu;
    // 0x3896fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3896fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389700: 0x2785bd2c  addiu       $a1, $gp, -0x42D4
    ctx->pc = 0x389700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950188));
    // 0x389704: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x389704u;
    SET_GPR_U32(ctx, 31, 0x38970Cu);
    ctx->pc = 0x389708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389704u;
    // 0x389708: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x389704u, 0x38970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38970Cu;
label_38970c:
    // 0x38970c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38970cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389710: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x389710u;
    {
        const bool branch_taken_0x389710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389710u;
        // 0x389714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389710) {
            ctx->pc = 0x38971Cu;
            goto label_38971c;
        }
    }
    ctx->pc = 0x389718u;
    // 0x389718: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38971c:
    // 0x38971c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38971cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389728: 0x3e00008  jr          $ra
    ctx->pc = 0x389728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389728u;
        // 0x38972c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389730u;
}
