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

// Function: sub_003439E0
// Address: 0x3439e0 - 0x343a60
void sub_003439E0_0x3439e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003439E0_0x3439e0");
#endif

    switch (ctx->pc) {
        case 0x3439fcu: goto label_3439fc;
        case 0x343a18u: goto label_343a18;
        case 0x343a2cu: goto label_343a2c;
        case 0x343a40u: goto label_343a40;
        default: break;
    }

    ctx->pc = 0x3439e0u;

    // 0x3439e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3439e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3439e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3439e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3439e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3439e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3439ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3439ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3439f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3439f4: 0xc0d0e98  jal         func_343A60
    ctx->pc = 0x3439F4u;
    SET_GPR_U32(ctx, 31, 0x3439FCu);
    ctx->pc = 0x3439F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439F4u;
    // 0x3439f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A60u, 0x3439F4u, 0x3439FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439FCu;
label_3439fc:
    // 0x3439fc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3439fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x343a00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x343a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a08: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x343a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x343a0c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x343a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x343a10: 0xc103404  jal         func_40D010
    ctx->pc = 0x343A10u;
    SET_GPR_U32(ctx, 31, 0x343A18u);
    ctx->pc = 0x343A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A10u;
    // 0x343a14: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x343A10u, 0x343A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A18u;
label_343a18:
    // 0x343a18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x343A18u;
    {
        const bool branch_taken_0x343a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A18u;
        // 0x343a1c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a18) {
            ctx->pc = 0x343A48u;
            goto label_343a48;
        }
    }
    ctx->pc = 0x343A20u;
    // 0x343a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a24: 0xc103440  jal         func_40D100
    ctx->pc = 0x343A24u;
    SET_GPR_U32(ctx, 31, 0x343A2Cu);
    ctx->pc = 0x343A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A24u;
    // 0x343a28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x343A24u, 0x343A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A2Cu;
label_343a2c:
    // 0x343a2c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x343a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x343a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x343a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343a38: 0xc103440  jal         func_40D100
    ctx->pc = 0x343A38u;
    SET_GPR_U32(ctx, 31, 0x343A40u);
    ctx->pc = 0x343A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A38u;
    // 0x343a3c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x343A38u, 0x343A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A40u;
label_343a40:
    // 0x343a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x343A40u;
    {
        const bool branch_taken_0x343a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A40u;
        // 0x343a44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a40) {
            ctx->pc = 0x343A4Cu;
            goto label_343a4c;
        }
    }
    ctx->pc = 0x343A48u;
label_343a48:
    // 0x343a48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343a4c:
    // 0x343a4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x343a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x343a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343a58: 0x3e00008  jr          $ra
    ctx->pc = 0x343A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A58u;
        // 0x343a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343A60u;
}
