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

// Function: sub_0038A588
// Address: 0x38a588 - 0x38a620
void sub_0038A588_0x38a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A588_0x38a588");
#endif

    switch (ctx->pc) {
        case 0x38a588u: goto label_38a588;
        case 0x38a58cu: goto label_38a58c;
        case 0x38a590u: goto label_38a590;
        case 0x38a594u: goto label_38a594;
        case 0x38a598u: goto label_38a598;
        case 0x38a59cu: goto label_38a59c;
        case 0x38a5a0u: goto label_38a5a0;
        case 0x38a5a4u: goto label_38a5a4;
        case 0x38a5a8u: goto label_38a5a8;
        case 0x38a5acu: goto label_38a5ac;
        case 0x38a5b0u: goto label_38a5b0;
        case 0x38a5b4u: goto label_38a5b4;
        case 0x38a5b8u: goto label_38a5b8;
        case 0x38a5bcu: goto label_38a5bc;
        case 0x38a5c0u: goto label_38a5c0;
        case 0x38a5c4u: goto label_38a5c4;
        case 0x38a5c8u: goto label_38a5c8;
        case 0x38a5ccu: goto label_38a5cc;
        case 0x38a5d0u: goto label_38a5d0;
        case 0x38a5d4u: goto label_38a5d4;
        case 0x38a5d8u: goto label_38a5d8;
        case 0x38a5dcu: goto label_38a5dc;
        case 0x38a5e0u: goto label_38a5e0;
        case 0x38a5e4u: goto label_38a5e4;
        case 0x38a5e8u: goto label_38a5e8;
        case 0x38a5ecu: goto label_38a5ec;
        case 0x38a5f0u: goto label_38a5f0;
        case 0x38a5f4u: goto label_38a5f4;
        case 0x38a5f8u: goto label_38a5f8;
        case 0x38a5fcu: goto label_38a5fc;
        case 0x38a600u: goto label_38a600;
        case 0x38a604u: goto label_38a604;
        case 0x38a608u: goto label_38a608;
        case 0x38a60cu: goto label_38a60c;
        case 0x38a610u: goto label_38a610;
        case 0x38a614u: goto label_38a614;
        case 0x38a618u: goto label_38a618;
        case 0x38a61cu: goto label_38a61c;
        default: break;
    }

    ctx->pc = 0x38a588u;

label_38a588:
    // 0x38a588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38a58c:
    // 0x38a58c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a590:
    // 0x38a590: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38a590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38a594:
    // 0x38a594: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_38a598:
    // 0x38a598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a59c:
    // 0x38a59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38a5a0:
    // 0x38a5a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38a5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_38a5a4:
    // 0x38a5a4: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x38a5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38a5a8:
    // 0x38a5a8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x38a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_38a5ac:
    // 0x38a5ac: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_38a5b0:
    if (ctx->pc == 0x38A5B0u) {
        ctx->pc = 0x38A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5ACu;
        // 0x38a5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5B4u;
        goto label_38a5b4;
    }
    ctx->pc = 0x38A5ACu;
    {
        const bool branch_taken_0x38a5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5ACu;
        // 0x38a5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5ac) {
            ctx->pc = 0x38A608u;
            goto label_38a608;
        }
    }
    ctx->pc = 0x38A5B4u;
label_38a5b4:
    // 0x38a5b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38a5b8:
    // 0x38a5b8: 0x3c120100  lui         $s2, 0x100
    ctx->pc = 0x38a5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)256 << 16));
label_38a5bc:
    // 0x38a5bc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x38a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_38a5c0:
    // 0x38a5c0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_38a5c4:
    if (ctx->pc == 0x38A5C4u) {
        ctx->pc = 0x38A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5C0u;
        // 0x38a5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5C8u;
        goto label_38a5c8;
    }
    ctx->pc = 0x38A5C0u;
    {
        const bool branch_taken_0x38a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5C0u;
        // 0x38a5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5c0) {
            ctx->pc = 0x38A608u;
            goto label_38a608;
        }
    }
    ctx->pc = 0x38A5C8u;
label_38a5c8:
    // 0x38a5c8: 0xc0e8296  jal         func_3A0A58
label_38a5cc:
    if (ctx->pc == 0x38A5CCu) {
        ctx->pc = 0x38A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5C8u;
        // 0x38a5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5D0u;
        goto label_38a5d0;
    }
    ctx->pc = 0x38A5C8u;
    SET_GPR_U32(ctx, 31, 0x38A5D0u);
    ctx->pc = 0x38A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A5C8u;
    // 0x38a5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0A58u, 0x38A5C8u, 0x38A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A5D0u;
label_38a5d0:
    // 0x38a5d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x38a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38a5d4:
    // 0x38a5d4: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x38a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_38a5d8:
    // 0x38a5d8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x38a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_38a5dc:
    // 0x38a5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a5e0:
    // 0x38a5e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x38a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_38a5e4:
    // 0x38a5e4: 0x40f809  jalr        $v0
label_38a5e8:
    if (ctx->pc == 0x38A5E8u) {
        ctx->pc = 0x38A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5E4u;
        // 0x38a5e8: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5ECu;
        goto label_38a5ec;
    }
    ctx->pc = 0x38A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38A5ECu);
        ctx->pc = 0x38A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5E4u;
        // 0x38a5e8: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A5E4u, 0x38A5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A5ECu;
label_38a5ec:
    // 0x38a5ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38a5f0:
    // 0x38a5f0: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x38a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
label_38a5f4:
    // 0x38a5f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38a5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_38a5f8:
    // 0x38a5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a5fc:
    // 0x38a5fc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x38a5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_38a600:
    // 0x38a600: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x38a600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
label_38a604:
    // 0x38a604: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x38a604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_38a608:
    // 0x38a608: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38a608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38a60c:
    // 0x38a60c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38a60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38a610:
    // 0x38a610: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38a610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38a614:
    // 0x38a614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38a618:
    // 0x38a618: 0x3e00008  jr          $ra
label_38a61c:
    if (ctx->pc == 0x38A61Cu) {
        ctx->pc = 0x38A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A618u;
        // 0x38a61c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A620u;
        goto label_fallthrough_0x38a618;
    }
    ctx->pc = 0x38A618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A618u;
        // 0x38a61c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38a618:
    ctx->pc = 0x38A620u;
}
