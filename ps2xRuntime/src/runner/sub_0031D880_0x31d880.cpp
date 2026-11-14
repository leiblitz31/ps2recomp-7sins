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

// Function: sub_0031D880
// Address: 0x31d880 - 0x31da18
void sub_0031D880_0x31d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D880_0x31d880");
#endif

    switch (ctx->pc) {
        case 0x31d880u: goto label_31d880;
        case 0x31d884u: goto label_31d884;
        case 0x31d888u: goto label_31d888;
        case 0x31d88cu: goto label_31d88c;
        case 0x31d890u: goto label_31d890;
        case 0x31d894u: goto label_31d894;
        case 0x31d898u: goto label_31d898;
        case 0x31d89cu: goto label_31d89c;
        case 0x31d8a0u: goto label_31d8a0;
        case 0x31d8a4u: goto label_31d8a4;
        case 0x31d8a8u: goto label_31d8a8;
        case 0x31d8acu: goto label_31d8ac;
        case 0x31d8b0u: goto label_31d8b0;
        case 0x31d8b4u: goto label_31d8b4;
        case 0x31d8b8u: goto label_31d8b8;
        case 0x31d8bcu: goto label_31d8bc;
        case 0x31d8c0u: goto label_31d8c0;
        case 0x31d8c4u: goto label_31d8c4;
        case 0x31d8c8u: goto label_31d8c8;
        case 0x31d8ccu: goto label_31d8cc;
        case 0x31d8d0u: goto label_31d8d0;
        case 0x31d8d4u: goto label_31d8d4;
        case 0x31d8d8u: goto label_31d8d8;
        case 0x31d8dcu: goto label_31d8dc;
        case 0x31d8e0u: goto label_31d8e0;
        case 0x31d8e4u: goto label_31d8e4;
        case 0x31d8e8u: goto label_31d8e8;
        case 0x31d8ecu: goto label_31d8ec;
        case 0x31d8f0u: goto label_31d8f0;
        case 0x31d8f4u: goto label_31d8f4;
        case 0x31d8f8u: goto label_31d8f8;
        case 0x31d8fcu: goto label_31d8fc;
        case 0x31d900u: goto label_31d900;
        case 0x31d904u: goto label_31d904;
        case 0x31d908u: goto label_31d908;
        case 0x31d90cu: goto label_31d90c;
        case 0x31d910u: goto label_31d910;
        case 0x31d914u: goto label_31d914;
        case 0x31d918u: goto label_31d918;
        case 0x31d91cu: goto label_31d91c;
        case 0x31d920u: goto label_31d920;
        case 0x31d924u: goto label_31d924;
        case 0x31d928u: goto label_31d928;
        case 0x31d92cu: goto label_31d92c;
        case 0x31d930u: goto label_31d930;
        case 0x31d934u: goto label_31d934;
        case 0x31d938u: goto label_31d938;
        case 0x31d93cu: goto label_31d93c;
        case 0x31d940u: goto label_31d940;
        case 0x31d944u: goto label_31d944;
        case 0x31d948u: goto label_31d948;
        case 0x31d94cu: goto label_31d94c;
        case 0x31d950u: goto label_31d950;
        case 0x31d954u: goto label_31d954;
        case 0x31d958u: goto label_31d958;
        case 0x31d95cu: goto label_31d95c;
        case 0x31d960u: goto label_31d960;
        case 0x31d964u: goto label_31d964;
        case 0x31d968u: goto label_31d968;
        case 0x31d96cu: goto label_31d96c;
        case 0x31d970u: goto label_31d970;
        case 0x31d974u: goto label_31d974;
        case 0x31d978u: goto label_31d978;
        case 0x31d97cu: goto label_31d97c;
        case 0x31d980u: goto label_31d980;
        case 0x31d984u: goto label_31d984;
        case 0x31d988u: goto label_31d988;
        case 0x31d98cu: goto label_31d98c;
        case 0x31d990u: goto label_31d990;
        case 0x31d994u: goto label_31d994;
        case 0x31d998u: goto label_31d998;
        case 0x31d99cu: goto label_31d99c;
        case 0x31d9a0u: goto label_31d9a0;
        case 0x31d9a4u: goto label_31d9a4;
        case 0x31d9a8u: goto label_31d9a8;
        case 0x31d9acu: goto label_31d9ac;
        case 0x31d9b0u: goto label_31d9b0;
        case 0x31d9b4u: goto label_31d9b4;
        case 0x31d9b8u: goto label_31d9b8;
        case 0x31d9bcu: goto label_31d9bc;
        case 0x31d9c0u: goto label_31d9c0;
        case 0x31d9c4u: goto label_31d9c4;
        case 0x31d9c8u: goto label_31d9c8;
        case 0x31d9ccu: goto label_31d9cc;
        case 0x31d9d0u: goto label_31d9d0;
        case 0x31d9d4u: goto label_31d9d4;
        case 0x31d9d8u: goto label_31d9d8;
        case 0x31d9dcu: goto label_31d9dc;
        case 0x31d9e0u: goto label_31d9e0;
        case 0x31d9e4u: goto label_31d9e4;
        case 0x31d9e8u: goto label_31d9e8;
        case 0x31d9ecu: goto label_31d9ec;
        case 0x31d9f0u: goto label_31d9f0;
        case 0x31d9f4u: goto label_31d9f4;
        case 0x31d9f8u: goto label_31d9f8;
        case 0x31d9fcu: goto label_31d9fc;
        case 0x31da00u: goto label_31da00;
        case 0x31da04u: goto label_31da04;
        case 0x31da08u: goto label_31da08;
        case 0x31da0cu: goto label_31da0c;
        case 0x31da10u: goto label_31da10;
        case 0x31da14u: goto label_31da14;
        default: break;
    }

    ctx->pc = 0x31d880u;

label_31d880:
    // 0x31d880: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31d884:
    // 0x31d884: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31d888:
    // 0x31d888: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d88c:
    // 0x31d88c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_31d890:
    if (ctx->pc == 0x31D890u) {
        ctx->pc = 0x31D894u;
        goto label_31d894;
    }
    ctx->pc = 0x31D88Cu;
    {
        const bool branch_taken_0x31d88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d88c) {
            ctx->pc = 0x31D89Cu;
            goto label_31d89c;
        }
    }
    ctx->pc = 0x31D894u;
label_31d894:
    // 0x31d894: 0x3e00008  jr          $ra
label_31d898:
    if (ctx->pc == 0x31D898u) {
        ctx->pc = 0x31D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D894u;
        // 0x31d898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D89Cu;
        goto label_31d89c;
    }
    ctx->pc = 0x31D894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D894u;
        // 0x31d898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D89Cu;
label_31d89c:
    // 0x31d89c: 0x3e00008  jr          $ra
label_31d8a0:
    if (ctx->pc == 0x31D8A0u) {
        ctx->pc = 0x31D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D89Cu;
        // 0x31d8a0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D8A4u;
        goto label_31d8a4;
    }
    ctx->pc = 0x31D89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D89Cu;
        // 0x31d8a0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D8A4u;
label_31d8a4:
    // 0x31d8a4: 0x0  nop
    ctx->pc = 0x31d8a4u;
    // NOP
label_31d8a8:
    // 0x31d8a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31d8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31d8ac:
    // 0x31d8ac: 0x8f83a5c0  lw          $v1, -0x5A40($gp)
    ctx->pc = 0x31d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31d8b0:
    // 0x31d8b0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31d8b4:
    // 0x31d8b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31d8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31d8b8:
    // 0x31d8b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31d8b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d8bc:
    // 0x31d8bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31d8c0:
    // 0x31d8c0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x31d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_31d8c4:
    // 0x31d8c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31d8c8:
    // 0x31d8c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x31d8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31d8cc:
    // 0x31d8cc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31d8d0:
    // 0x31d8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d8d4:
    // 0x31d8d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31d8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31d8d8:
    // 0x31d8d8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x31d8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31d8dc:
    // 0x31d8dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31d8e0:
    // 0x31d8e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_31d8e4:
    if (ctx->pc == 0x31D8E4u) {
        ctx->pc = 0x31D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8E0u;
        // 0x31d8e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D8E8u;
        goto label_31d8e8;
    }
    ctx->pc = 0x31D8E0u;
    {
        const bool branch_taken_0x31d8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8E0u;
        // 0x31d8e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8e0) {
            ctx->pc = 0x31D94Cu;
            goto label_31d94c;
        }
    }
    ctx->pc = 0x31D8E8u;
label_31d8e8:
    // 0x31d8e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31d8e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d8ec:
    // 0x31d8ec: 0x0  nop
    ctx->pc = 0x31d8ecu;
    // NOP
label_31d8f0:
    // 0x31d8f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31d8f4:
    // 0x31d8f4: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x31d8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_31d8f8:
    // 0x31d8f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31d8fc:
    // 0x31d8fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31d8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_31d900:
    // 0x31d900: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31d904:
    if (ctx->pc == 0x31D904u) {
        ctx->pc = 0x31D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D900u;
        // 0x31d904: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D908u;
        goto label_31d908;
    }
    ctx->pc = 0x31D900u;
    {
        const bool branch_taken_0x31d900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D900u;
        // 0x31d904: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d900) {
            ctx->pc = 0x31D918u;
            goto label_31d918;
        }
    }
    ctx->pc = 0x31D908u;
label_31d908:
    // 0x31d908: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x31d908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_31d90c:
    // 0x31d90c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x31d90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31d910:
    // 0x31d910: 0xc104d94  jal         func_413650
label_31d914:
    if (ctx->pc == 0x31D914u) {
        ctx->pc = 0x31D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D910u;
        // 0x31d914: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D918u;
        goto label_31d918;
    }
    ctx->pc = 0x31D910u;
    SET_GPR_U32(ctx, 31, 0x31D918u);
    ctx->pc = 0x31D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D910u;
    // 0x31d914: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413650u, 0x31D910u, 0x31D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D918u;
label_31d918:
    // 0x31d918: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31d91c:
    // 0x31d91c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x31d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_31d920:
    // 0x31d920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31d924:
    if (ctx->pc == 0x31D924u) {
        ctx->pc = 0x31D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D920u;
        // 0x31d924: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D928u;
        goto label_31d928;
    }
    ctx->pc = 0x31D920u;
    {
        const bool branch_taken_0x31d920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D920u;
        // 0x31d924: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d920) {
            ctx->pc = 0x31D938u;
            goto label_31d938;
        }
    }
    ctx->pc = 0x31D928u;
label_31d928:
    // 0x31d928: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x31d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_31d92c:
    // 0x31d92c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x31d92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31d930:
    // 0x31d930: 0xc104d94  jal         func_413650
label_31d934:
    if (ctx->pc == 0x31D934u) {
        ctx->pc = 0x31D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D930u;
        // 0x31d934: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D938u;
        goto label_31d938;
    }
    ctx->pc = 0x31D930u;
    SET_GPR_U32(ctx, 31, 0x31D938u);
    ctx->pc = 0x31D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D930u;
    // 0x31d934: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413650u, 0x31D930u, 0x31D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D938u;
label_31d938:
    // 0x31d938: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31d93c:
    // 0x31d93c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31d93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31d940:
    // 0x31d940: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31d940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d944:
    // 0x31d944: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_31d948:
    if (ctx->pc == 0x31D948u) {
        ctx->pc = 0x31D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D944u;
        // 0x31d948: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D94Cu;
        goto label_31d94c;
    }
    ctx->pc = 0x31D944u;
    {
        const bool branch_taken_0x31d944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D944u;
        // 0x31d948: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d944) {
            ctx->pc = 0x31D8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d8f0;
        }
    }
    ctx->pc = 0x31D94Cu;
label_31d94c:
    // 0x31d94c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x31d94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31d950:
    // 0x31d950: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31d950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31d954:
    // 0x31d954: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31d954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31d958:
    // 0x31d958: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31d958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31d95c:
    // 0x31d95c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d95cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d960:
    // 0x31d960: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31d960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d964:
    // 0x31d964: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31d964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d968:
    // 0x31d968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d96c:
    // 0x31d96c: 0x3e00008  jr          $ra
label_31d970:
    if (ctx->pc == 0x31D970u) {
        ctx->pc = 0x31D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D96Cu;
        // 0x31d970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D974u;
        goto label_31d974;
    }
    ctx->pc = 0x31D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D96Cu;
        // 0x31d970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D974u;
label_31d974:
    // 0x31d974: 0x0  nop
    ctx->pc = 0x31d974u;
    // NOP
label_31d978:
    // 0x31d978: 0x3e00008  jr          $ra
label_31d97c:
    if (ctx->pc == 0x31D97Cu) {
        ctx->pc = 0x31D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D978u;
        // 0x31d97c: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D980u;
        goto label_31d980;
    }
    ctx->pc = 0x31D978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D978u;
        // 0x31d97c: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D980u;
label_31d980:
    // 0x31d980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31d984:
    // 0x31d984: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31d984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31d988:
    // 0x31d988: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_31d98c:
    // 0x31d98c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31d98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31d990:
    // 0x31d990: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31d990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_31d994:
    // 0x31d994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31d994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d998:
    // 0x31d998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d99c:
    // 0x31d99c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_31d9a0:
    if (ctx->pc == 0x31D9A0u) {
        ctx->pc = 0x31D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D99Cu;
        // 0x31d9a0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9A4u;
        goto label_31d9a4;
    }
    ctx->pc = 0x31D99Cu;
    {
        const bool branch_taken_0x31d99c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D99Cu;
        // 0x31d9a0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d99c) {
            ctx->pc = 0x31D9E8u;
            goto label_31d9e8;
        }
    }
    ctx->pc = 0x31D9A4u;
label_31d9a4:
    // 0x31d9a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_31d9a8:
    // 0x31d9a8: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x31d9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31d9ac:
    // 0x31d9ac: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x31d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_31d9b0:
    // 0x31d9b0: 0x40f809  jalr        $v0
label_31d9b4:
    if (ctx->pc == 0x31D9B4u) {
        ctx->pc = 0x31D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9B0u;
        // 0x31d9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9B8u;
        goto label_31d9b8;
    }
    ctx->pc = 0x31D9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D9B8u);
        ctx->pc = 0x31D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9B0u;
        // 0x31d9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D9B0u, 0x31D9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D9B8u;
label_31d9b8:
    // 0x31d9b8: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x31d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_31d9bc:
    // 0x31d9bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31d9c0:
    // 0x31d9c0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31d9c4:
    // 0x31d9c4: 0x60f809  jalr        $v1
label_31d9c8:
    if (ctx->pc == 0x31D9C8u) {
        ctx->pc = 0x31D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C4u;
        // 0x31d9c8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9CCu;
        goto label_31d9cc;
    }
    ctx->pc = 0x31D9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31D9CCu);
        ctx->pc = 0x31D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C4u;
        // 0x31d9c8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D9C4u, 0x31D9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D9CCu;
label_31d9cc:
    // 0x31d9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31d9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d9d0:
    // 0x31d9d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_31d9d4:
    if (ctx->pc == 0x31D9D4u) {
        ctx->pc = 0x31D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9D0u;
        // 0x31d9d4: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9D8u;
        goto label_31d9d8;
    }
    ctx->pc = 0x31D9D0u;
    {
        const bool branch_taken_0x31d9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9D0u;
        // 0x31d9d4: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9d0) {
            ctx->pc = 0x31D9E8u;
            goto label_31d9e8;
        }
    }
    ctx->pc = 0x31D9D8u;
label_31d9d8:
    // 0x31d9d8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x31d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_31d9dc:
    // 0x31d9dc: 0x40f809  jalr        $v0
label_31d9e0:
    if (ctx->pc == 0x31D9E0u) {
        ctx->pc = 0x31D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9DCu;
        // 0x31d9e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9E4u;
        goto label_31d9e4;
    }
    ctx->pc = 0x31D9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D9E4u);
        ctx->pc = 0x31D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9DCu;
        // 0x31d9e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D9DCu, 0x31D9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D9E4u;
label_31d9e4:
    // 0x31d9e4: 0x0  nop
    ctx->pc = 0x31d9e4u;
    // NOP
label_31d9e8:
    // 0x31d9e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31d9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d9ec:
    // 0x31d9ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31d9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d9f0:
    // 0x31d9f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31d9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d9f4:
    // 0x31d9f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31d9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d9f8:
    // 0x31d9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d9fc:
    // 0x31d9fc: 0x3e00008  jr          $ra
label_31da00:
    if (ctx->pc == 0x31DA00u) {
        ctx->pc = 0x31DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9FCu;
        // 0x31da00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA04u;
        goto label_31da04;
    }
    ctx->pc = 0x31D9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9FCu;
        // 0x31da00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA04u;
label_31da04:
    // 0x31da04: 0x0  nop
    ctx->pc = 0x31da04u;
    // NOP
label_31da08:
    // 0x31da08: 0x3e00008  jr          $ra
label_31da0c:
    if (ctx->pc == 0x31DA0Cu) {
        ctx->pc = 0x31DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA08u;
        // 0x31da0c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA10u;
        goto label_31da10;
    }
    ctx->pc = 0x31DA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA08u;
        // 0x31da0c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA10u;
label_31da10:
    // 0x31da10: 0x3e00008  jr          $ra
label_31da14:
    if (ctx->pc == 0x31DA14u) {
        ctx->pc = 0x31DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA10u;
        // 0x31da14: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA18u;
        goto label_fallthrough_0x31da10;
    }
    ctx->pc = 0x31DA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA10u;
        // 0x31da14: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31da10:
    ctx->pc = 0x31DA18u;
}
