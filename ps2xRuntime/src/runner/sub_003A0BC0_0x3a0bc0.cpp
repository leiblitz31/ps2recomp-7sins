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

// Function: sub_003A0BC0
// Address: 0x3a0bc0 - 0x3a0d40
void sub_003A0BC0_0x3a0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0BC0_0x3a0bc0");
#endif

    switch (ctx->pc) {
        case 0x3a0bd8u: goto label_3a0bd8;
        case 0x3a0ca8u: goto label_3a0ca8;
        default: break;
    }

    ctx->pc = 0x3a0bc0u;

    // 0x3a0bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a0bc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a0bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a0bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a0bd0: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x3A0BD0u;
    SET_GPR_U32(ctx, 31, 0x3A0BD8u);
    ctx->pc = 0x3A0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BD0u;
    // 0x3a0bd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x3A0BD0u, 0x3A0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BD8u;
label_3a0bd8:
    // 0x3a0bd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3a0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3a0bdc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a0be0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a0be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a0be4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3A0BE4u;
    {
        const bool branch_taken_0x3a0be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0BE4u;
        // 0x3a0be8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0be4) {
            ctx->pc = 0x3A0D28u;
            goto label_3a0d28;
        }
    }
    ctx->pc = 0x3A0BECu;
    // 0x3a0bec: 0x8f82bd80  lw          $v0, -0x4280($gp)
    ctx->pc = 0x3a0becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
    // 0x3a0bf0: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x3a0bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a0bf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a0bf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0bfc: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x3a0bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a0c00: 0x11800049  beqz        $t4, . + 4 + (0x49 << 2)
    ctx->pc = 0x3A0C00u;
    {
        const bool branch_taken_0x3a0c00 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C00u;
        // 0x3a0c04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c00) {
            ctx->pc = 0x3A0D28u;
            goto label_3a0d28;
        }
    }
    ctx->pc = 0x3A0C08u;
    // 0x3a0c08: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x3a0c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3a0c0c: 0x19800019  blez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A0C0Cu;
    {
        const bool branch_taken_0x3a0c0c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3A0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C0Cu;
        // 0x3a0c10: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c0c) {
            ctx->pc = 0x3A0C74u;
            goto label_3a0c74;
        }
    }
    ctx->pc = 0x3A0C14u;
    // 0x3a0c14: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A0C14u;
    {
        const bool branch_taken_0x3a0c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C14u;
        // 0x3a0c18: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c14) {
            ctx->pc = 0x3A0CA0u;
            goto label_3a0ca0;
        }
    }
    ctx->pc = 0x3A0C1Cu;
    // 0x3a0c1c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A0C1Cu;
    {
        const bool branch_taken_0x3a0c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c1c) {
            ctx->pc = 0x3A0C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0C1Cu;
            // 0x3a0c20: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0C78u;
            goto label_3a0c78;
        }
    }
    ctx->pc = 0x3A0C24u;
    // 0x3a0c24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a0c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a0c28: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3A0C28u;
    {
        const bool branch_taken_0x3a0c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c28) {
            ctx->pc = 0x3A0C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0C28u;
            // 0x3a0c2c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0C54u;
            goto label_3a0c54;
        }
    }
    ctx->pc = 0x3A0C30u;
    // 0x3a0c30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3a0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a0c34: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x3a0c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a0c38: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3a0c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0c3c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3a0c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3a0c40: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a0c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3a0c44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0c48: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3a0c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a0c4c: 0x24900018  addiu       $s0, $a0, 0x18
    ctx->pc = 0x3a0c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3a0c50: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a0c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a0c54:
    // 0x3a0c54: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3a0c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3a0c58: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a0c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a0c5c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a0c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a0c60: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3a0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a0c64: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a0c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a0c68: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a0c6c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0c70: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x3a0c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a0c74:
    // 0x3a0c74: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a0c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a0c78:
    // 0x3a0c78: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3a0c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3a0c7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a0c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a0c80: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a0c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a0c84: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a0c88: 0x14c582b  sltu        $t3, $t2, $t4
    ctx->pc = 0x3a0c88u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3a0c8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a0c90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a0c94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a0c98: 0x11600023  beqz        $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A0C98u;
    {
        const bool branch_taken_0x3a0c98 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C98u;
        // 0x3a0c9c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c98) {
            ctx->pc = 0x3A0D28u;
            goto label_3a0d28;
        }
    }
    ctx->pc = 0x3A0CA0u;
label_3a0ca0:
    // 0x3a0ca0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3a0ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ca4: 0x0  nop
    ctx->pc = 0x3a0ca4u;
    // NOP
label_3a0ca8:
    // 0x3a0ca8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x3a0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a0cac: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x3a0cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3a0cb0: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x3a0cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3a0cb4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3a0cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3a0cb8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3a0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a0cbc: 0x14c582b  sltu        $t3, $t2, $t4
    ctx->pc = 0x3a0cbcu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3a0cc0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a0cc4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a0cc8: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x3a0cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3a0ccc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0cd0: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x3a0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3a0cd4: 0x1038021  addu        $s0, $t0, $v1
    ctx->pc = 0x3a0cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3a0cd8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3a0cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a0cdc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3a0cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a0ce0: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3a0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a0ce4: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x3a0ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3a0ce8: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x3a0ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3a0cec: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x3a0cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3a0cf0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3a0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3a0cf4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3a0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3a0cf8: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x3a0cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a0cfc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3a0cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a0d00: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3a0d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x3a0d04: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3a0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3a0d08: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3a0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3a0d0c: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x3a0d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a0d10: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x3a0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3a0d14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a0d18: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3a0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3a0d1c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3a0d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a0d20: 0x1560ffe1  bnez        $t3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3A0D20u;
    {
        const bool branch_taken_0x3a0d20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D20u;
        // 0x3a0d24: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d20) {
            ctx->pc = 0x3A0CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0ca8;
        }
    }
    ctx->pc = 0x3A0D28u;
label_3a0d28:
    // 0x3a0d28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a0d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0d30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a0d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0d38: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D38u;
        // 0x3a0d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0D40u;
}
