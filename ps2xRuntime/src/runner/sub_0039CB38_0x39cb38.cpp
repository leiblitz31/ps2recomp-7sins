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

// Function: sub_0039CB38
// Address: 0x39cb38 - 0x39cbe8
void sub_0039CB38_0x39cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CB38_0x39cb38");
#endif

    switch (ctx->pc) {
        case 0x39cb38u: goto label_39cb38;
        case 0x39cb3cu: goto label_39cb3c;
        case 0x39cb40u: goto label_39cb40;
        case 0x39cb44u: goto label_39cb44;
        case 0x39cb48u: goto label_39cb48;
        case 0x39cb4cu: goto label_39cb4c;
        case 0x39cb50u: goto label_39cb50;
        case 0x39cb54u: goto label_39cb54;
        case 0x39cb58u: goto label_39cb58;
        case 0x39cb5cu: goto label_39cb5c;
        case 0x39cb60u: goto label_39cb60;
        case 0x39cb64u: goto label_39cb64;
        case 0x39cb68u: goto label_39cb68;
        case 0x39cb6cu: goto label_39cb6c;
        case 0x39cb70u: goto label_39cb70;
        case 0x39cb74u: goto label_39cb74;
        case 0x39cb78u: goto label_39cb78;
        case 0x39cb7cu: goto label_39cb7c;
        case 0x39cb80u: goto label_39cb80;
        case 0x39cb84u: goto label_39cb84;
        case 0x39cb88u: goto label_39cb88;
        case 0x39cb8cu: goto label_39cb8c;
        case 0x39cb90u: goto label_39cb90;
        case 0x39cb94u: goto label_39cb94;
        case 0x39cb98u: goto label_39cb98;
        case 0x39cb9cu: goto label_39cb9c;
        case 0x39cba0u: goto label_39cba0;
        case 0x39cba4u: goto label_39cba4;
        case 0x39cba8u: goto label_39cba8;
        case 0x39cbacu: goto label_39cbac;
        case 0x39cbb0u: goto label_39cbb0;
        case 0x39cbb4u: goto label_39cbb4;
        case 0x39cbb8u: goto label_39cbb8;
        case 0x39cbbcu: goto label_39cbbc;
        case 0x39cbc0u: goto label_39cbc0;
        case 0x39cbc4u: goto label_39cbc4;
        case 0x39cbc8u: goto label_39cbc8;
        case 0x39cbccu: goto label_39cbcc;
        case 0x39cbd0u: goto label_39cbd0;
        case 0x39cbd4u: goto label_39cbd4;
        case 0x39cbd8u: goto label_39cbd8;
        case 0x39cbdcu: goto label_39cbdc;
        case 0x39cbe0u: goto label_39cbe0;
        case 0x39cbe4u: goto label_39cbe4;
        default: break;
    }

    ctx->pc = 0x39cb38u;

label_39cb38:
    // 0x39cb38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39cb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39cb3c:
    // 0x39cb3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_39cb40:
    // 0x39cb40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39cb44:
    // 0x39cb44: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x39cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_39cb48:
    // 0x39cb48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39cb48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39cb4c:
    // 0x39cb4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39cb50:
    // 0x39cb50: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x39cb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_39cb54:
    // 0x39cb54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_39cb58:
    // 0x39cb58: 0x8e50002c  lw          $s0, 0x2C($s2)
    ctx->pc = 0x39cb58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_39cb5c:
    // 0x39cb5c: 0x12110019  beq         $s0, $s1, . + 4 + (0x19 << 2)
label_39cb60:
    if (ctx->pc == 0x39CB60u) {
        ctx->pc = 0x39CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB5Cu;
        // 0x39cb60: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CB64u;
        goto label_39cb64;
    }
    ctx->pc = 0x39CB5Cu;
    {
        const bool branch_taken_0x39cb5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x39CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB5Cu;
        // 0x39cb60: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb5c) {
            ctx->pc = 0x39CBC4u;
            goto label_39cbc4;
        }
    }
    ctx->pc = 0x39CB64u;
label_39cb64:
    // 0x39cb64: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x39cb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39cb68:
    // 0x39cb68: 0x2606fff4  addiu       $a2, $s0, -0xC
    ctx->pc = 0x39cb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_39cb6c:
    // 0x39cb6c: 0x0  nop
    ctx->pc = 0x39cb6cu;
    // NOP
label_39cb70:
    // 0x39cb70: 0x8f82bd68  lw          $v0, -0x4298($gp)
    ctx->pc = 0x39cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39cb74:
    // 0x39cb74: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x39cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39cb78:
    // 0x39cb78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39cb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39cb7c:
    // 0x39cb7c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x39cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39cb80:
    // 0x39cb80: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x39cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_39cb84:
    // 0x39cb84: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x39cb84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39cb88:
    // 0x39cb88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x39cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_39cb8c:
    // 0x39cb8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39cb90:
    // 0x39cb90: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x39cb90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39cb94:
    // 0x39cb94: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x39cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39cb98:
    // 0x39cb98: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x39cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_39cb9c:
    // 0x39cb9c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x39cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_39cba0:
    // 0x39cba0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39cba4:
    // 0x39cba4: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x39cba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39cba8:
    // 0x39cba8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_39cbac:
    // 0x39cbac: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x39cbacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39cbb0:
    // 0x39cbb0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x39cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39cbb4:
    // 0x39cbb4: 0x40f809  jalr        $v0
label_39cbb8:
    if (ctx->pc == 0x39CBB8u) {
        ctx->pc = 0x39CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBB4u;
        // 0x39cbb8: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBBCu;
        goto label_39cbbc;
    }
    ctx->pc = 0x39CBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39CBBCu);
        ctx->pc = 0x39CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBB4u;
        // 0x39cbb8: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CBB4u, 0x39CBBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39CBBCu;
label_39cbbc:
    // 0x39cbbc: 0x1611ffec  bne         $s0, $s1, . + 4 + (-0x14 << 2)
label_39cbc0:
    if (ctx->pc == 0x39CBC0u) {
        ctx->pc = 0x39CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBBCu;
        // 0x39cbc0: 0x2606fff4  addiu       $a2, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBC4u;
        goto label_39cbc4;
    }
    ctx->pc = 0x39CBBCu;
    {
        const bool branch_taken_0x39cbbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x39CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBBCu;
        // 0x39cbc0: 0x2606fff4  addiu       $a2, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cbbc) {
            ctx->pc = 0x39CB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39cb70;
        }
    }
    ctx->pc = 0x39CBC4u;
label_39cbc4:
    // 0x39cbc4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39cbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39cbc8:
    // 0x39cbc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39cbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39cbcc:
    // 0x39cbcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39cbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39cbd0:
    // 0x39cbd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39cbd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39cbd4:
    // 0x39cbd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x39cbd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39cbd8:
    // 0x39cbd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39cbdc:
    // 0x39cbdc: 0x3e00008  jr          $ra
label_39cbe0:
    if (ctx->pc == 0x39CBE0u) {
        ctx->pc = 0x39CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBDCu;
        // 0x39cbe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CBE4u;
        goto label_39cbe4;
    }
    ctx->pc = 0x39CBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBDCu;
        // 0x39cbe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CBE4u;
label_39cbe4:
    // 0x39cbe4: 0x0  nop
    ctx->pc = 0x39cbe4u;
    // NOP
    ctx->pc = 0x39cbe8u;
}
