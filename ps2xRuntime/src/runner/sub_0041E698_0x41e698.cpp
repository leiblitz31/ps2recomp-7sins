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

// Function: sub_0041E698
// Address: 0x41e698 - 0x41e720
void sub_0041E698_0x41e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E698_0x41e698");
#endif

    switch (ctx->pc) {
        case 0x41e698u: goto label_41e698;
        case 0x41e69cu: goto label_41e69c;
        case 0x41e6a0u: goto label_41e6a0;
        case 0x41e6a4u: goto label_41e6a4;
        case 0x41e6a8u: goto label_41e6a8;
        case 0x41e6acu: goto label_41e6ac;
        case 0x41e6b0u: goto label_41e6b0;
        case 0x41e6b4u: goto label_41e6b4;
        case 0x41e6b8u: goto label_41e6b8;
        case 0x41e6bcu: goto label_41e6bc;
        case 0x41e6c0u: goto label_41e6c0;
        case 0x41e6c4u: goto label_41e6c4;
        case 0x41e6c8u: goto label_41e6c8;
        case 0x41e6ccu: goto label_41e6cc;
        case 0x41e6d0u: goto label_41e6d0;
        case 0x41e6d4u: goto label_41e6d4;
        case 0x41e6d8u: goto label_41e6d8;
        case 0x41e6dcu: goto label_41e6dc;
        case 0x41e6e0u: goto label_41e6e0;
        case 0x41e6e4u: goto label_41e6e4;
        case 0x41e6e8u: goto label_41e6e8;
        case 0x41e6ecu: goto label_41e6ec;
        case 0x41e6f0u: goto label_41e6f0;
        case 0x41e6f4u: goto label_41e6f4;
        case 0x41e6f8u: goto label_41e6f8;
        case 0x41e6fcu: goto label_41e6fc;
        case 0x41e700u: goto label_41e700;
        case 0x41e704u: goto label_41e704;
        case 0x41e708u: goto label_41e708;
        case 0x41e70cu: goto label_41e70c;
        case 0x41e710u: goto label_41e710;
        case 0x41e714u: goto label_41e714;
        case 0x41e718u: goto label_41e718;
        case 0x41e71cu: goto label_41e71c;
        default: break;
    }

    ctx->pc = 0x41e698u;

label_41e698:
    // 0x41e698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41e698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41e69c:
    // 0x41e69c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41e69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41e6a0:
    // 0x41e6a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41e6a4:
    // 0x41e6a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41e6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e6a8:
    // 0x41e6a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_41e6ac:
    // 0x41e6ac: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_41e6b0:
    if (ctx->pc == 0x41E6B0u) {
        ctx->pc = 0x41E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6ACu;
        // 0x41e6b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E6B4u;
        goto label_41e6b4;
    }
    ctx->pc = 0x41E6ACu;
    {
        const bool branch_taken_0x41e6ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6ACu;
        // 0x41e6b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e6ac) {
            ctx->pc = 0x41E708u;
            goto label_41e708;
        }
    }
    ctx->pc = 0x41E6B4u;
label_41e6b4:
    // 0x41e6b4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x41e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_41e6b8:
    // 0x41e6b8: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x41e6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_41e6bc:
    // 0x41e6bc: 0x5092000b  beql        $a0, $s2, . + 4 + (0xB << 2)
label_41e6c0:
    if (ctx->pc == 0x41E6C0u) {
        ctx->pc = 0x41E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6BCu;
        // 0x41e6c0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E6C4u;
        goto label_41e6c4;
    }
    ctx->pc = 0x41E6BCu;
    {
        const bool branch_taken_0x41e6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x41e6bc) {
            ctx->pc = 0x41E6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E6BCu;
            // 0x41e6c0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E6ECu;
            goto label_41e6ec;
        }
    }
    ctx->pc = 0x41E6C4u;
label_41e6c4:
    // 0x41e6c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e6c8:
    // 0x41e6c8: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x41e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_41e6cc:
    // 0x41e6cc: 0x0  nop
    ctx->pc = 0x41e6ccu;
    // NOP
label_41e6d0:
    // 0x41e6d0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x41e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_41e6d4:
    // 0x41e6d4: 0x40f809  jalr        $v0
label_41e6d8:
    if (ctx->pc == 0x41E6D8u) {
        ctx->pc = 0x41E6DCu;
        goto label_41e6dc;
    }
    ctx->pc = 0x41E6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E6DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E6D4u, 0x41E6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E6DCu;
label_41e6dc:
    // 0x41e6dc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x41e6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e6e0:
    // 0x41e6e0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_41e6e4:
    if (ctx->pc == 0x41E6E4u) {
        ctx->pc = 0x41E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6E0u;
        // 0x41e6e4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E6E8u;
        goto label_41e6e8;
    }
    ctx->pc = 0x41E6E0u;
    {
        const bool branch_taken_0x41e6e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x41E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6E0u;
        // 0x41e6e4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e6e0) {
            ctx->pc = 0x41E6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e6d0;
        }
    }
    ctx->pc = 0x41E6E8u;
label_41e6e8:
    // 0x41e6e8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x41e6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_41e6ec:
    // 0x41e6ec: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x41e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_41e6f0:
    // 0x41e6f0: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x41e6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_41e6f4:
    // 0x41e6f4: 0xc1079a6  jal         func_41E698
label_41e6f8:
    if (ctx->pc == 0x41E6F8u) {
        ctx->pc = 0x41E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6F4u;
        // 0x41e6f8: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E6FCu;
        goto label_41e6fc;
    }
    ctx->pc = 0x41E6F4u;
    SET_GPR_U32(ctx, 31, 0x41E6FCu);
    ctx->pc = 0x41E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E6F4u;
    // 0x41e6f8: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E698u;
    goto label_41e698;
    ctx->pc = 0x41E6FCu;
label_41e6fc:
    // 0x41e6fc: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x41e6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41e700:
    // 0x41e700: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_41e704:
    if (ctx->pc == 0x41E704u) {
        ctx->pc = 0x41E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E700u;
        // 0x41e704: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E708u;
        goto label_41e708;
    }
    ctx->pc = 0x41E700u;
    {
        const bool branch_taken_0x41e700 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e700) {
            ctx->pc = 0x41E704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E700u;
            // 0x41e704: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e6b8;
        }
    }
    ctx->pc = 0x41E708u;
label_41e708:
    // 0x41e708: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41e708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41e70c:
    // 0x41e70c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41e70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e710:
    // 0x41e710: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41e710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e714:
    // 0x41e714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41e718:
    // 0x41e718: 0x3e00008  jr          $ra
label_41e71c:
    if (ctx->pc == 0x41E71Cu) {
        ctx->pc = 0x41E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E718u;
        // 0x41e71c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E720u;
        goto label_fallthrough_0x41e718;
    }
    ctx->pc = 0x41E718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E718u;
        // 0x41e71c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41e718:
    ctx->pc = 0x41E720u;
}
