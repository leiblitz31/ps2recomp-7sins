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

// Function: sub_004B3130
// Address: 0x4b3130 - 0x4b31a0
void sub_004B3130_0x4b3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3130_0x4b3130");
#endif

    switch (ctx->pc) {
        case 0x4b3158u: goto label_4b3158;
        case 0x4b3178u: goto label_4b3178;
        case 0x4b318cu: goto label_4b318c;
        default: break;
    }

    ctx->pc = 0x4b3130u;

    // 0x4b3130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b3130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b3134: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b3134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b3138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b3138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b313c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4b313cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4b3140: 0x2450ed60  addiu       $s0, $v0, -0x12A0
    ctx->pc = 0x4b3140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x4b3144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3148: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x4b3148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x4b314c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b314cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3150: 0xc126852  jal         func_49A148
    ctx->pc = 0x4B3150u;
    SET_GPR_U32(ctx, 31, 0x4B3158u);
    ctx->pc = 0x4B3154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3150u;
    // 0x4b3154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A148u, 0x4B3150u, 0x4B3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3158u;
label_4b3158:
    // 0x4b3158: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4b3158u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4b315c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b315cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b3160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b3164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b3168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b316c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b316cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3170: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4B3170u;
    SET_GPR_U32(ctx, 31, 0x4B3178u);
    ctx->pc = 0x4B3174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3170u;
    // 0x4b3174: 0x3529080d  ori         $t1, $t1, 0x80D (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2061);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4B3170u, 0x4B3178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3178u;
label_4b3178:
    // 0x4b3178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b3178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b317c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B317Cu;
    {
        const bool branch_taken_0x4b317c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B317Cu;
        // 0x4b3180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b317c) {
            ctx->pc = 0x4B3190u;
            goto label_4b3190;
        }
    }
    ctx->pc = 0x4B3184u;
    // 0x4b3184: 0xc12c966  jal         func_4B2598
    ctx->pc = 0x4B3184u;
    SET_GPR_U32(ctx, 31, 0x4B318Cu);
    ctx->pc = 0x4B3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3184u;
    // 0x4b3188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2598u, 0x4B3184u, 0x4B318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B318Cu;
label_4b318c:
    // 0x4b318c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b318cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b3190:
    // 0x4b3190: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b3190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3198: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3198u;
        // 0x4b319c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B31A0u;
}
