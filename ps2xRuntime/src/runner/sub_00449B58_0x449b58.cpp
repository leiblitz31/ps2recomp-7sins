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

// Function: sub_00449B58
// Address: 0x449b58 - 0x449c48
void sub_00449B58_0x449b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449B58_0x449b58");
#endif

    ctx->pc = 0x449b58u;

    // 0x449b58: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x449b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449b5c: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x449B5Cu;
    {
        const bool branch_taken_0x449b5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x449B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B5Cu;
        // 0x449b60: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449b5c) {
            ctx->pc = 0x449BE8u;
            goto label_449be8;
        }
    }
    ctx->pc = 0x449B64u;
    // 0x449b64: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x449b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x449b68: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x449B68u;
    {
        const bool branch_taken_0x449b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449b68) {
            ctx->pc = 0x449BE8u;
            goto label_449be8;
        }
    }
    ctx->pc = 0x449B70u;
    // 0x449b70: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x449B70u;
    {
        const bool branch_taken_0x449b70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x449b70) {
            ctx->pc = 0x449BE8u;
            goto label_449be8;
        }
    }
    ctx->pc = 0x449B78u;
    // 0x449b78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x449b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x449b7c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x449b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x449b80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x449b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x449b84: 0x15420018  bne         $t2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x449B84u;
    {
        const bool branch_taken_0x449b84 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x449b84) {
            ctx->pc = 0x449BE8u;
            goto label_449be8;
        }
    }
    ctx->pc = 0x449B8Cu;
    // 0x449b8c: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x449B8Cu;
    {
        const bool branch_taken_0x449b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x449b8c) {
            ctx->pc = 0x449BE8u;
            goto label_449be8;
        }
    }
    ctx->pc = 0x449B94u;
    // 0x449b94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x449b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x449b98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x449B98u;
    {
        const bool branch_taken_0x449b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B98u;
        // 0x449b9c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449b98) {
            ctx->pc = 0x449BE8u;
            goto label_449be8;
        }
    }
    ctx->pc = 0x449BA0u;
    // 0x449ba0: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x449ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x449ba4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x449ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x449ba8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x449ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x449bac: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x449bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x449bb0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x449bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x449bb4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x449bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x449bb8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x449bb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x449bbc: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x449bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x449bc0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x449bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x449bc4: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x449BC4u;
    {
        const bool branch_taken_0x449bc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x449BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449BC4u;
        // 0x449bc8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449bc4) {
            ctx->pc = 0x449BD8u;
            goto label_449bd8;
        }
    }
    ctx->pc = 0x449BCCu;
    // 0x449bcc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x449bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x449bd0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x449bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x449bd4: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x449bd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_449bd8:
    // 0x449bd8: 0x10ea0003  beq         $a3, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x449BD8u;
    {
        const bool branch_taken_0x449bd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x449BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449BD8u;
        // 0x449bdc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449bd8) {
            ctx->pc = 0x449BE8u;
            goto label_449be8;
        }
    }
    ctx->pc = 0x449BE0u;
    // 0x449be0: 0x3e00008  jr          $ra
    ctx->pc = 0x449BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449BE0u;
        // 0x449be4: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449BE8u;
label_449be8:
    // 0x449be8: 0x3e00008  jr          $ra
    ctx->pc = 0x449BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449BE8u;
        // 0x449bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449BF0u;
    // 0x449bf0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x449bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449bf4: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x449BF4u;
    {
        const bool branch_taken_0x449bf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x449bf4) {
            ctx->pc = 0x449C40u;
            goto label_449c40;
        }
    }
    ctx->pc = 0x449BFCu;
    // 0x449bfc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x449bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x449c00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x449C00u;
    {
        const bool branch_taken_0x449c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449c00) {
            ctx->pc = 0x449C40u;
            goto label_449c40;
        }
    }
    ctx->pc = 0x449C08u;
    // 0x449c08: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x449C08u;
    {
        const bool branch_taken_0x449c08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x449c08) {
            ctx->pc = 0x449C40u;
            goto label_449c40;
        }
    }
    ctx->pc = 0x449C10u;
    // 0x449c10: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x449C10u;
    {
        const bool branch_taken_0x449c10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C10u;
        // 0x449c14: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c10) {
            ctx->pc = 0x449C40u;
            goto label_449c40;
        }
    }
    ctx->pc = 0x449C18u;
    // 0x449c18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x449c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x449c1c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x449c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x449c20: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x449c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x449c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x449c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x449c28: 0x14460005  bne         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x449C28u;
    {
        const bool branch_taken_0x449c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x449C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C28u;
        // 0x449c2c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c28) {
            ctx->pc = 0x449C40u;
            goto label_449c40;
        }
    }
    ctx->pc = 0x449C30u;
    // 0x449c30: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x449c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x449c34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x449c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x449c38: 0x3e00008  jr          $ra
    ctx->pc = 0x449C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C38u;
        // 0x449c3c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449C40u;
label_449c40:
    // 0x449c40: 0x3e00008  jr          $ra
    ctx->pc = 0x449C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C40u;
        // 0x449c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449C48u;
}
