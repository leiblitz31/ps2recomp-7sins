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

// Function: sub_00390C88
// Address: 0x390c88 - 0x390e20
void sub_00390C88_0x390c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390C88_0x390c88");
#endif

    switch (ctx->pc) {
        case 0x390d10u: goto label_390d10;
        default: break;
    }

    ctx->pc = 0x390c88u;

    // 0x390c88: 0x28c60004  slti        $a2, $a2, 0x4
    ctx->pc = 0x390c88u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x390c8c: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x390C8Cu;
    {
        const bool branch_taken_0x390c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x390c8c) {
            ctx->pc = 0x390C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390C8Cu;
            // 0x390c90: 0x90820020  lbu         $v0, 0x20($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390CA0u;
            goto label_390ca0;
        }
    }
    ctx->pc = 0x390C94u;
    // 0x390c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x390c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390c98: 0x3e00008  jr          $ra
    ctx->pc = 0x390C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C98u;
        // 0x390c9c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390CA0u;
label_390ca0:
    // 0x390ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390ca4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x390ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x390ca8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x390ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x390cac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x390cb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x390cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390cb4: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x390CB4u;
    {
        const bool branch_taken_0x390cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x390CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CB4u;
        // 0x390cb8: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cb4) {
            ctx->pc = 0x390CE0u;
            goto label_390ce0;
        }
    }
    ctx->pc = 0x390CBCu;
    // 0x390cbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x390cc0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x390cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x390cc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x390cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x390cc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x390ccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x390cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390cd0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x390CD0u;
    {
        const bool branch_taken_0x390cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390cd0) {
            ctx->pc = 0x390CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390CD0u;
            // 0x390cd4: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390D04u;
            goto label_390d04;
        }
    }
    ctx->pc = 0x390CD8u;
    // 0x390cd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x390CD8u;
    {
        const bool branch_taken_0x390cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CD8u;
        // 0x390cdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cd8) {
            ctx->pc = 0x390D08u;
            goto label_390d08;
        }
    }
    ctx->pc = 0x390CE0u;
label_390ce0:
    // 0x390ce0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x390CE0u;
    {
        const bool branch_taken_0x390ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390ce0) {
            ctx->pc = 0x390CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390CE0u;
            // 0x390ce4: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390CF4u;
            goto label_390cf4;
        }
    }
    ctx->pc = 0x390CE8u;
    // 0x390ce8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x390ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x390cec: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x390cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x390cf0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x390cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_390cf4:
    // 0x390cf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390CF4u;
    {
        const bool branch_taken_0x390cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CF4u;
        // 0x390cf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cf4) {
            ctx->pc = 0x390D08u;
            goto label_390d08;
        }
    }
    ctx->pc = 0x390CFCu;
    // 0x390cfc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x390cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x390d00: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x390d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_390d04:
    // 0x390d04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x390d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390d08:
    // 0x390d08: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x390d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x390d0c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x390d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_390d10:
    // 0x390d10: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x390d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390d14: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x390d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x390d18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x390d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x390d1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x390d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x390d20: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x390D20u;
    {
        const bool branch_taken_0x390d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D20u;
        // 0x390d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d20) {
            ctx->pc = 0x390D44u;
            goto label_390d44;
        }
    }
    ctx->pc = 0x390D28u;
    // 0x390d28: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x390D28u;
    {
        const bool branch_taken_0x390d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x390D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D28u;
        // 0x390d2c: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d28) {
            ctx->pc = 0x390D48u;
            goto label_390d48;
        }
    }
    ctx->pc = 0x390D30u;
    // 0x390d30: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x390d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x390d34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390D34u;
    {
        const bool branch_taken_0x390d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D34u;
        // 0x390d38: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d34) {
            ctx->pc = 0x390D48u;
            goto label_390d48;
        }
    }
    ctx->pc = 0x390D3Cu;
    // 0x390d3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x390D3Cu;
    {
        const bool branch_taken_0x390d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D3Cu;
        // 0x390d40: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d3c) {
            ctx->pc = 0x390D60u;
            goto label_390d60;
        }
    }
    ctx->pc = 0x390D44u;
label_390d44:
    // 0x390d44: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x390d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_390d48:
    // 0x390d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x390d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390d4c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x390d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x390d50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390D50u;
    {
        const bool branch_taken_0x390d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390d50) {
            ctx->pc = 0x390D60u;
            goto label_390d60;
        }
    }
    ctx->pc = 0x390D58u;
    // 0x390d58: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x390d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x390d5c: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x390d5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_390d60:
    // 0x390d60: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x390D60u;
    {
        const bool branch_taken_0x390d60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D60u;
        // 0x390d64: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d60) {
            ctx->pc = 0x390E08u;
            goto label_390e08;
        }
    }
    ctx->pc = 0x390D68u;
    // 0x390d68: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x390d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x390d6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x390d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x390d70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x390d74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x390d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390d78: 0x1466000a  bne         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x390D78u;
    {
        const bool branch_taken_0x390d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x390D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D78u;
        // 0x390d7c: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d78) {
            ctx->pc = 0x390DA4u;
            goto label_390da4;
        }
    }
    ctx->pc = 0x390D80u;
    // 0x390d80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x390d84: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x390d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x390d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x390d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x390d8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x390d90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x390d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390d94: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x390D94u;
    {
        const bool branch_taken_0x390d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390d94) {
            ctx->pc = 0x390D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390D94u;
            // 0x390d98: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390DC8u;
            goto label_390dc8;
        }
    }
    ctx->pc = 0x390D9Cu;
    // 0x390d9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x390D9Cu;
    {
        const bool branch_taken_0x390d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D9Cu;
        // 0x390da0: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d9c) {
            ctx->pc = 0x390DCCu;
            goto label_390dcc;
        }
    }
    ctx->pc = 0x390DA4u;
label_390da4:
    // 0x390da4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x390DA4u;
    {
        const bool branch_taken_0x390da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390da4) {
            ctx->pc = 0x390DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390DA4u;
            // 0x390da8: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390DB8u;
            goto label_390db8;
        }
    }
    ctx->pc = 0x390DACu;
    // 0x390dac: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x390dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x390db0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x390db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x390db4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x390db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_390db8:
    // 0x390db8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x390DB8u;
    {
        const bool branch_taken_0x390db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390db8) {
            ctx->pc = 0x390DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390DB8u;
            // 0x390dbc: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390DCCu;
            goto label_390dcc;
        }
    }
    ctx->pc = 0x390DC0u;
    // 0x390dc0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x390dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x390dc4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x390dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_390dc8:
    // 0x390dc8: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x390dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
label_390dcc:
    // 0x390dcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x390dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x390dd0: 0xa0c20020  sb          $v0, 0x20($a2)
    ctx->pc = 0x390dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x390dd4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x390dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x390dd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x390dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x390ddc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x390ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x390de0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x390de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x390de4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x390DE4u;
    {
        const bool branch_taken_0x390de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DE4u;
        // 0x390de8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390de4) {
            ctx->pc = 0x390DF0u;
            goto label_390df0;
        }
    }
    ctx->pc = 0x390DECu;
    // 0x390dec: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x390decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_390df0:
    // 0x390df0: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x390df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x390df4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x390df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x390df8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x390dfc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x390dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x390e00: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x390e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x390e04: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x390e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_390e08:
    // 0x390e08: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x390e08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x390e0c: 0x2d030003  sltiu       $v1, $t0, 0x3
    ctx->pc = 0x390e0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x390e10: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x390E10u;
    {
        const bool branch_taken_0x390e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x390E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E10u;
        // 0x390e14: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e10) {
            ctx->pc = 0x390D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390d10;
        }
    }
    ctx->pc = 0x390E18u;
    // 0x390e18: 0x3e00008  jr          $ra
    ctx->pc = 0x390E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390E20u;
}
