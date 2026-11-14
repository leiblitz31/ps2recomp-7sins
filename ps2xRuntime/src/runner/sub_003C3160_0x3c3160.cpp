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

// Function: sub_003C3160
// Address: 0x3c3160 - 0x3c31f8
void sub_003C3160_0x3c3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3160_0x3c3160");
#endif

    switch (ctx->pc) {
        case 0x3c3160u: goto label_3c3160;
        case 0x3c3164u: goto label_3c3164;
        case 0x3c3168u: goto label_3c3168;
        case 0x3c316cu: goto label_3c316c;
        case 0x3c3170u: goto label_3c3170;
        case 0x3c3174u: goto label_3c3174;
        case 0x3c3178u: goto label_3c3178;
        case 0x3c317cu: goto label_3c317c;
        case 0x3c3180u: goto label_3c3180;
        case 0x3c3184u: goto label_3c3184;
        case 0x3c3188u: goto label_3c3188;
        case 0x3c318cu: goto label_3c318c;
        case 0x3c3190u: goto label_3c3190;
        case 0x3c3194u: goto label_3c3194;
        case 0x3c3198u: goto label_3c3198;
        case 0x3c319cu: goto label_3c319c;
        case 0x3c31a0u: goto label_3c31a0;
        case 0x3c31a4u: goto label_3c31a4;
        case 0x3c31a8u: goto label_3c31a8;
        case 0x3c31acu: goto label_3c31ac;
        case 0x3c31b0u: goto label_3c31b0;
        case 0x3c31b4u: goto label_3c31b4;
        case 0x3c31b8u: goto label_3c31b8;
        case 0x3c31bcu: goto label_3c31bc;
        case 0x3c31c0u: goto label_3c31c0;
        case 0x3c31c4u: goto label_3c31c4;
        case 0x3c31c8u: goto label_3c31c8;
        case 0x3c31ccu: goto label_3c31cc;
        case 0x3c31d0u: goto label_3c31d0;
        case 0x3c31d4u: goto label_3c31d4;
        case 0x3c31d8u: goto label_3c31d8;
        case 0x3c31dcu: goto label_3c31dc;
        case 0x3c31e0u: goto label_3c31e0;
        case 0x3c31e4u: goto label_3c31e4;
        case 0x3c31e8u: goto label_3c31e8;
        case 0x3c31ecu: goto label_3c31ec;
        case 0x3c31f0u: goto label_3c31f0;
        case 0x3c31f4u: goto label_3c31f4;
        default: break;
    }

    ctx->pc = 0x3c3160u;

label_3c3160:
    // 0x3c3160: 0x3e00008  jr          $ra
label_3c3164:
    if (ctx->pc == 0x3C3164u) {
        ctx->pc = 0x3C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3160u;
        // 0x3c3164: 0x8f82bd8c  lw          $v0, -0x4274($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3168u;
        goto label_3c3168;
    }
    ctx->pc = 0x3C3160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3160u;
        // 0x3c3164: 0x8f82bd8c  lw          $v0, -0x4274($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950284)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3168u;
label_3c3168:
    // 0x3c3168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c3168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c316c:
    // 0x3c316c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c3170:
    // 0x3c3170: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c3170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c3174:
    // 0x3c3174: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c3174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c3178:
    // 0x3c3178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c3178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c317c:
    // 0x3c317c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c3180:
    // 0x3c3180: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c3180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c3184:
    // 0x3c3184: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_3c3188:
    if (ctx->pc == 0x3C3188u) {
        ctx->pc = 0x3C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3184u;
        // 0x3c3188: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C318Cu;
        goto label_3c318c;
    }
    ctx->pc = 0x3C3184u;
    {
        const bool branch_taken_0x3c3184 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3184u;
        // 0x3c3188: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3184) {
            ctx->pc = 0x3C31E0u;
            goto label_3c31e0;
        }
    }
    ctx->pc = 0x3C318Cu;
label_3c318c:
    // 0x3c318c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3c318cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3190:
    // 0x3c3190: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3c3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c3194:
    // 0x3c3194: 0x0  nop
    ctx->pc = 0x3c3194u;
    // NOP
label_3c3198:
    // 0x3c3198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c319c:
    // 0x3c319c: 0x40f809  jalr        $v0
label_3c31a0:
    if (ctx->pc == 0x3C31A0u) {
        ctx->pc = 0x3C31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C319Cu;
        // 0x3c31a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31A4u;
        goto label_3c31a4;
    }
    ctx->pc = 0x3C319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C31A4u);
        ctx->pc = 0x3C31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C319Cu;
        // 0x3c31a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C319Cu, 0x3C31A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C31A4u;
label_3c31a4:
    // 0x3c31a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c31a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c31a8:
    // 0x3c31a8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_3c31ac:
    if (ctx->pc == 0x3C31ACu) {
        ctx->pc = 0x3C31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31A8u;
        // 0x3c31ac: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31B0u;
        goto label_3c31b0;
    }
    ctx->pc = 0x3C31A8u;
    {
        const bool branch_taken_0x3c31a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c31a8) {
            ctx->pc = 0x3C31ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C31A8u;
            // 0x3c31ac: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C31D0u;
            goto label_3c31d0;
        }
    }
    ctx->pc = 0x3C31B0u;
label_3c31b0:
    // 0x3c31b0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3c31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3c31b4:
    // 0x3c31b4: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
label_3c31b8:
    if (ctx->pc == 0x3C31B8u) {
        ctx->pc = 0x3C31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31B4u;
        // 0x3c31b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31BCu;
        goto label_3c31bc;
    }
    ctx->pc = 0x3C31B4u;
    {
        const bool branch_taken_0x3c31b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3c31b4) {
            ctx->pc = 0x3C31B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C31B4u;
            // 0x3c31b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C31D0u;
            goto label_3c31d0;
        }
    }
    ctx->pc = 0x3C31BCu;
label_3c31bc:
    // 0x3c31bc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3c31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3c31c0:
    // 0x3c31c0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3c31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3c31c4:
    // 0x3c31c4: 0x40f809  jalr        $v0
label_3c31c8:
    if (ctx->pc == 0x3C31C8u) {
        ctx->pc = 0x3C31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31C4u;
        // 0x3c31c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31CCu;
        goto label_3c31cc;
    }
    ctx->pc = 0x3C31C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C31CCu);
        ctx->pc = 0x3C31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31C4u;
        // 0x3c31c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C31C4u, 0x3C31CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C31CCu;
label_3c31cc:
    // 0x3c31cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c31d0:
    // 0x3c31d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c31d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c31d4:
    // 0x3c31d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3c31d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c31d8:
    // 0x3c31d8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_3c31dc:
    if (ctx->pc == 0x3C31DCu) {
        ctx->pc = 0x3C31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31D8u;
        // 0x3c31dc: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31E0u;
        goto label_3c31e0;
    }
    ctx->pc = 0x3C31D8u;
    {
        const bool branch_taken_0x3c31d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c31d8) {
            ctx->pc = 0x3C31DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C31D8u;
            // 0x3c31dc: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3198;
        }
    }
    ctx->pc = 0x3C31E0u;
label_3c31e0:
    // 0x3c31e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c31e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c31e4:
    // 0x3c31e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c31e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c31e8:
    // 0x3c31e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c31e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c31ec:
    // 0x3c31ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c31ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c31f0:
    // 0x3c31f0: 0x3e00008  jr          $ra
label_3c31f4:
    if (ctx->pc == 0x3C31F4u) {
        ctx->pc = 0x3C31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31F0u;
        // 0x3c31f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31F8u;
        goto label_fallthrough_0x3c31f0;
    }
    ctx->pc = 0x3C31F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31F0u;
        // 0x3c31f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C31F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c31f0:
    ctx->pc = 0x3C31F8u;
}
