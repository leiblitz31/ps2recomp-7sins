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

// Function: sub_00389998
// Address: 0x389998 - 0x389a18
void sub_00389998_0x389998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389998_0x389998");
#endif

    switch (ctx->pc) {
        case 0x389998u: goto label_389998;
        case 0x38999cu: goto label_38999c;
        case 0x3899a0u: goto label_3899a0;
        case 0x3899a4u: goto label_3899a4;
        case 0x3899a8u: goto label_3899a8;
        case 0x3899acu: goto label_3899ac;
        case 0x3899b0u: goto label_3899b0;
        case 0x3899b4u: goto label_3899b4;
        case 0x3899b8u: goto label_3899b8;
        case 0x3899bcu: goto label_3899bc;
        case 0x3899c0u: goto label_3899c0;
        case 0x3899c4u: goto label_3899c4;
        case 0x3899c8u: goto label_3899c8;
        case 0x3899ccu: goto label_3899cc;
        case 0x3899d0u: goto label_3899d0;
        case 0x3899d4u: goto label_3899d4;
        case 0x3899d8u: goto label_3899d8;
        case 0x3899dcu: goto label_3899dc;
        case 0x3899e0u: goto label_3899e0;
        case 0x3899e4u: goto label_3899e4;
        case 0x3899e8u: goto label_3899e8;
        case 0x3899ecu: goto label_3899ec;
        case 0x3899f0u: goto label_3899f0;
        case 0x3899f4u: goto label_3899f4;
        case 0x3899f8u: goto label_3899f8;
        case 0x3899fcu: goto label_3899fc;
        case 0x389a00u: goto label_389a00;
        case 0x389a04u: goto label_389a04;
        case 0x389a08u: goto label_389a08;
        case 0x389a0cu: goto label_389a0c;
        case 0x389a10u: goto label_389a10;
        case 0x389a14u: goto label_389a14;
        default: break;
    }

    ctx->pc = 0x389998u;

label_389998:
    // 0x389998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x389998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38999c:
    // 0x38999c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3899a0:
    // 0x3899a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3899a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3899a4:
    // 0x3899a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3899a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3899a8:
    // 0x3899a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3899a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3899ac:
    // 0x3899ac: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x3899acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3899b0:
    // 0x3899b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3899b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3899b4:
    // 0x3899b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3899b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3899b8:
    // 0x3899b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3899b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3899bc:
    // 0x3899bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3899bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3899c0:
    // 0x3899c0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3899c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3899c4:
    // 0x3899c4: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_3899c8:
    if (ctx->pc == 0x3899C8u) {
        ctx->pc = 0x3899C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899C4u;
        // 0x3899c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3899CCu;
        goto label_3899cc;
    }
    ctx->pc = 0x3899C4u;
    {
        const bool branch_taken_0x3899c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3899C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899C4u;
        // 0x3899c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899c4) {
            ctx->pc = 0x3899F4u;
            goto label_3899f4;
        }
    }
    ctx->pc = 0x3899CCu;
label_3899cc:
    // 0x3899cc: 0x8f84a988  lw          $a0, -0x5678($gp)
    ctx->pc = 0x3899ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
label_3899d0:
    // 0x3899d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3899d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3899d4:
    // 0x3899d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3899d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3899d8:
    // 0x3899d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3899d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3899dc:
    // 0x3899dc: 0x280f809  jalr        $s4
label_3899e0:
    if (ctx->pc == 0x3899E0u) {
        ctx->pc = 0x3899E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899DCu;
        // 0x3899e0: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3899E4u;
        goto label_3899e4;
    }
    ctx->pc = 0x3899DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3899E4u);
        ctx->pc = 0x3899E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899DCu;
        // 0x3899e0: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3899DCu, 0x3899E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3899E4u;
label_3899e4:
    // 0x3899e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3899e8:
    if (ctx->pc == 0x3899E8u) {
        ctx->pc = 0x3899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899E4u;
        // 0x3899e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3899ECu;
        goto label_3899ec;
    }
    ctx->pc = 0x3899E4u;
    {
        const bool branch_taken_0x3899e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899E4u;
        // 0x3899e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899e4) {
            ctx->pc = 0x3899F4u;
            goto label_3899f4;
        }
    }
    ctx->pc = 0x3899ECu;
label_3899ec:
    // 0x3899ec: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_3899f0:
    if (ctx->pc == 0x3899F0u) {
        ctx->pc = 0x3899F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899ECu;
        // 0x3899f0: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3899F4u;
        goto label_3899f4;
    }
    ctx->pc = 0x3899ECu;
    {
        const bool branch_taken_0x3899ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3899ec) {
            ctx->pc = 0x3899F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3899ECu;
            // 0x3899f0: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3899D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3899d0;
        }
    }
    ctx->pc = 0x3899F4u;
label_3899f4:
    // 0x3899f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3899f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3899f8:
    // 0x3899f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3899f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3899fc:
    // 0x3899fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3899fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_389a00:
    // 0x389a00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x389a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389a04:
    // 0x389a04: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x389a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389a08:
    // 0x389a08: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x389a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389a0c:
    // 0x389a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389a10:
    // 0x389a10: 0x3e00008  jr          $ra
label_389a14:
    if (ctx->pc == 0x389A14u) {
        ctx->pc = 0x389A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A10u;
        // 0x389a14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389A18u;
        goto label_fallthrough_0x389a10;
    }
    ctx->pc = 0x389A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A10u;
        // 0x389a14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389a10:
    ctx->pc = 0x389A18u;
}
