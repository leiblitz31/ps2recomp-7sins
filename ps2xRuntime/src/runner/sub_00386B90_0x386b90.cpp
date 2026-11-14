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

// Function: sub_00386B90
// Address: 0x386b90 - 0x386ed8
void sub_00386B90_0x386b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386B90_0x386b90");
#endif

    switch (ctx->pc) {
        case 0x386bb8u: goto label_386bb8;
        case 0x386c38u: goto label_386c38;
        case 0x386c5cu: goto label_386c5c;
        case 0x386c74u: goto label_386c74;
        case 0x386cbcu: goto label_386cbc;
        case 0x386cd8u: goto label_386cd8;
        case 0x386cf8u: goto label_386cf8;
        case 0x386d30u: goto label_386d30;
        case 0x386e4cu: goto label_386e4c;
        case 0x386e5cu: goto label_386e5c;
        case 0x386e80u: goto label_386e80;
        case 0x386e94u: goto label_386e94;
        case 0x386eb4u: goto label_386eb4;
        default: break;
    }

    ctx->pc = 0x386b90u;

label_386b90:
    // 0x386b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x386b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x386b94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x386b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x386b98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x386b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x386b9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x386b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x386ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x386ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386ba8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x386ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x386bac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x386bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x386bb0: 0xc0e3e3a  jal         func_38F8E8
    ctx->pc = 0x386BB0u;
    SET_GPR_U32(ctx, 31, 0x386BB8u);
    ctx->pc = 0x386BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386BB0u;
    // 0x386bb4: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8E8u, 0x386BB0u, 0x386BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386BB8u;
label_386bb8:
    // 0x386bb8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x386bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x386bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386bc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x386bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x386bc4: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x386BC4u;
    {
        const bool branch_taken_0x386bc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x386BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BC4u;
        // 0x386bc8: 0x26130058  addiu       $s3, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bc4) {
            ctx->pc = 0x386C4Cu;
            goto label_386c4c;
        }
    }
    ctx->pc = 0x386BCCu;
    // 0x386bcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x386bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x386bd0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x386bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x386bd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x386bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x386bd8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x386BD8u;
    {
        const bool branch_taken_0x386bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BD8u;
        // 0x386bdc: 0x2410002c  addiu       $s0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bd8) {
            ctx->pc = 0x386C2Cu;
            goto label_386c2c;
        }
    }
    ctx->pc = 0x386BE0u;
    // 0x386be0: 0x94a40082  lhu         $a0, 0x82($a1)
    ctx->pc = 0x386be0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x386be4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x386be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x386be8: 0x32430010  andi        $v1, $s2, 0x10
    ctx->pc = 0x386be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x386bec: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x386becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x386bf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x386BF0u;
    {
        const bool branch_taken_0x386bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BF0u;
        // 0x386bf4: 0x2450002c  addiu       $s0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bf0) {
            ctx->pc = 0x386C00u;
            goto label_386c00;
        }
    }
    ctx->pc = 0x386BF8u;
    // 0x386bf8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x386bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x386bfc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x386bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_386c00:
    // 0x386c00: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x386c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x386c04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x386C04u;
    {
        const bool branch_taken_0x386c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C04u;
        // 0x386c08: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c04) {
            ctx->pc = 0x386C10u;
            goto label_386c10;
        }
    }
    ctx->pc = 0x386C0Cu;
    // 0x386c0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x386c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_386c10:
    // 0x386c10: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x386c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x386c14: 0x94a30084  lhu         $v1, 0x84($a1)
    ctx->pc = 0x386c14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x386c18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x386c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x386c1c: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x386c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x386c20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x386c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x386c24: 0xd08021  addu        $s0, $a2, $s0
    ctx->pc = 0x386c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x386c28: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x386c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_386c2c:
    // 0x386c2c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x386c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x386c30: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x386C30u;
    SET_GPR_U32(ctx, 31, 0x386C38u);
    ctx->pc = 0x386C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C30u;
    // 0x386c34: 0x2484ae40  addiu       $a0, $a0, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x386C30u, 0x386C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C38u;
label_386c38:
    // 0x386c38: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x386c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x386c3c: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x386c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x386c40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386c44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x386C44u;
    {
        const bool branch_taken_0x386c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C44u;
        // 0x386c48: 0x839821  addu        $s3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c44) {
            ctx->pc = 0x386C64u;
            goto label_386c64;
        }
    }
    ctx->pc = 0x386C4Cu;
label_386c4c:
    // 0x386c4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x386c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x386c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c54: 0xc0e193e  jal         func_3864F8
    ctx->pc = 0x386C54u;
    SET_GPR_U32(ctx, 31, 0x386C5Cu);
    ctx->pc = 0x386C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C54u;
    // 0x386c58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864F8u, 0x386C54u, 0x386C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C5Cu;
label_386c5c:
    // 0x386c5c: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x386c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x386c60: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x386c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_386c64:
    // 0x386c64: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x386c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x386c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x386c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c6c: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x386C6Cu;
    SET_GPR_U32(ctx, 31, 0x386C74u);
    ctx->pc = 0x386C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C6Cu;
    // 0x386c70: 0x2484ae58  addiu       $a0, $a0, -0x51A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x386C6Cu, 0x386C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C74u;
label_386c74:
    // 0x386c74: 0x2663000c  addiu       $v1, $s3, 0xC
    ctx->pc = 0x386c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x386c78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x386c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x386c7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x386c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386c80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x386c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386c84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x386c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386c88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x386c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386c90: 0x3e00008  jr          $ra
    ctx->pc = 0x386C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C90u;
        // 0x386c94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386C98u;
    // 0x386c98: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x386c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x386c9c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x386c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x386ca0: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x386ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x386ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x386ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ca8: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x386ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x386cac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x386cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386cb0: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x386cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x386cb4: 0xc0e1ae4  jal         func_386B90
    ctx->pc = 0x386CB4u;
    SET_GPR_U32(ctx, 31, 0x386CBCu);
    ctx->pc = 0x386CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CB4u;
    // 0x386cb8: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386B90u;
    goto label_386b90;
    ctx->pc = 0x386CBCu;
label_386cbc:
    // 0x386cbc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x386cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x386cc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x386cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386cc8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x386cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x386ccc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x386cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x386cd0: 0xc103404  jal         func_40D010
    ctx->pc = 0x386CD0u;
    SET_GPR_U32(ctx, 31, 0x386CD8u);
    ctx->pc = 0x386CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CD0u;
    // 0x386cd4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x386CD0u, 0x386CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CD8u;
label_386cd8:
    // 0x386cd8: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x386CD8u;
    {
        const bool branch_taken_0x386cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CD8u;
        // 0x386cdc: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cd8) {
            ctx->pc = 0x386E9Cu;
            goto label_386e9c;
        }
    }
    ctx->pc = 0x386CE0u;
    // 0x386ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x386ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386ce8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x386ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x386cec: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x386cecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x386cf0: 0xc103404  jal         func_40D010
    ctx->pc = 0x386CF0u;
    SET_GPR_U32(ctx, 31, 0x386CF8u);
    ctx->pc = 0x386CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CF0u;
    // 0x386cf4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x386CF0u, 0x386CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CF8u;
label_386cf8:
    // 0x386cf8: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x386CF8u;
    {
        const bool branch_taken_0x386cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CF8u;
        // 0x386cfc: 0x27ac0140  addiu       $t4, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cf8) {
            ctx->pc = 0x386E9Cu;
            goto label_386e9c;
        }
    }
    ctx->pc = 0x386D00u;
    // 0x386d00: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x386d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x386d04: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x386d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x386d08: 0x27ab0144  addiu       $t3, $sp, 0x144
    ctx->pc = 0x386d08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x386d0c: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x386d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x386d10: 0x27aa0148  addiu       $t2, $sp, 0x148
    ctx->pc = 0x386d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x386d14: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x386d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x386d18: 0x27a9014c  addiu       $t1, $sp, 0x14C
    ctx->pc = 0x386d18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x386d1c: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x386d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x386d20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x386d20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386d24: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x386d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x386d28: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x386d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x386d2c: 0x0  nop
    ctx->pc = 0x386d2cu;
    // NOP
label_386d30:
    // 0x386d30: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x386D30u;
    {
        const bool branch_taken_0x386d30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x386D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D30u;
        // 0x386d34: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d30) {
            ctx->pc = 0x386D74u;
            goto label_386d74;
        }
    }
    ctx->pc = 0x386D38u;
    // 0x386d38: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x386d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x386d3c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x386d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x386d40: 0x94e40084  lhu         $a0, 0x84($a3)
    ctx->pc = 0x386d40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x386d44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386d48: 0x94e50082  lhu         $a1, 0x82($a3)
    ctx->pc = 0x386d48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 130)));
    // 0x386d4c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x386d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x386d50: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x386d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x386d54: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x386d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x386d58: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x386d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x386d5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x386d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x386d60: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x386d60u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x386d64: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x386d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x386d68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x386d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x386d6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x386D6Cu;
    {
        const bool branch_taken_0x386d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D6Cu;
        // 0x386d70: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d6c) {
            ctx->pc = 0x386D94u;
            goto label_386d94;
        }
    }
    ctx->pc = 0x386D74u;
label_386d74:
    // 0x386d74: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x386d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x386d78: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x386d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x386d7c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x386d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x386d80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x386d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x386d84: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x386d84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x386d88: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x386d88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x386d8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x386d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x386d90: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x386d90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_386d94:
    // 0x386d94: 0x503ffe6  bgezl       $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x386D94u;
    {
        const bool branch_taken_0x386d94 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x386d94) {
            ctx->pc = 0x386D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386D94u;
            // 0x386d98: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386d30;
        }
    }
    ctx->pc = 0x386D9Cu;
    // 0x386d9c: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x386d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x386da0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x386da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x386da4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x386da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x386da8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x386da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x386dac: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x386dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x386db0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x386db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x386db4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x386db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x386db8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x386db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x386dbc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x386dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x386dc0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x386dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x386dc4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x386dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x386dc8: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x386dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x386dcc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x386dccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x386dd0: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x386dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386dd4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x386dd4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x386dd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x386dd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x386ddc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x386ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x386de0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x386de0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x386de4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x386de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x386de8: 0x8fa80144  lw          $t0, 0x144($sp)
    ctx->pc = 0x386de8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x386dec: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x386decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x386df0: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x386df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x386df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386df8: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x386df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x386dfc: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x386dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x386e00: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x386e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x386e04: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x386e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x386e08: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x386e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x386e0c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x386e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x386e10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x386e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x386e14: 0x6a020057  ldl         $v0, 0x57($s0)
    ctx->pc = 0x386e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x386e18: 0x6e020050  ldr         $v0, 0x50($s0)
    ctx->pc = 0x386e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x386e1c: 0x6a03005f  ldl         $v1, 0x5F($s0)
    ctx->pc = 0x386e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x386e20: 0x6e030058  ldr         $v1, 0x58($s0)
    ctx->pc = 0x386e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x386e24: 0x6a070067  ldl         $a3, 0x67($s0)
    ctx->pc = 0x386e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x386e28: 0x6e070060  ldr         $a3, 0x60($s0)
    ctx->pc = 0x386e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x386e2c: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x386e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e30: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x386e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e34: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x386e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e38: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x386e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e3c: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x386e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e40: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x386e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e44: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x386E44u;
    SET_GPR_U32(ctx, 31, 0x386E4Cu);
    ctx->pc = 0x386E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E44u;
    // 0x386e48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x386E44u, 0x386E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E4Cu;
label_386e4c:
    // 0x386e4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386E4Cu;
    {
        const bool branch_taken_0x386e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E4Cu;
        // 0x386e50: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e4c) {
            ctx->pc = 0x386E9Cu;
            goto label_386e9c;
        }
    }
    ctx->pc = 0x386E54u;
    // 0x386e54: 0xc0e3b5e  jal         func_38ED78
    ctx->pc = 0x386E54u;
    SET_GPR_U32(ctx, 31, 0x386E5Cu);
    ctx->pc = 0x386E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E54u;
    // 0x386e58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ED78u, 0x386E54u, 0x386E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E5Cu;
label_386e5c:
    // 0x386e5c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x386E5Cu;
    {
        const bool branch_taken_0x386e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E5Cu;
        // 0x386e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e5c) {
            ctx->pc = 0x386EBCu;
            goto label_386ebc;
        }
    }
    ctx->pc = 0x386E64u;
    // 0x386e64: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x386e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x386e68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x386e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x386e6c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x386E6Cu;
    {
        const bool branch_taken_0x386e6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x386E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E6Cu;
        // 0x386e70: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e6c) {
            ctx->pc = 0x386E88u;
            goto label_386e88;
        }
    }
    ctx->pc = 0x386E74u;
    // 0x386e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x386e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386e78: 0xc0e1742  jal         func_385D08
    ctx->pc = 0x386E78u;
    SET_GPR_U32(ctx, 31, 0x386E80u);
    ctx->pc = 0x386E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E78u;
    // 0x386e7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385D08u, 0x386E78u, 0x386E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E80u;
label_386e80:
    // 0x386e80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386E80u;
    {
        const bool branch_taken_0x386e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386e80) {
            ctx->pc = 0x386E94u;
            goto label_386e94;
        }
    }
    ctx->pc = 0x386E88u;
label_386e88:
    // 0x386e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x386e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386e8c: 0xc0e19a0  jal         func_386680
    ctx->pc = 0x386E8Cu;
    SET_GPR_U32(ctx, 31, 0x386E94u);
    ctx->pc = 0x386E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E8Cu;
    // 0x386e90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386680u, 0x386E8Cu, 0x386E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E94u;
label_386e94:
    // 0x386e94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x386E94u;
    {
        const bool branch_taken_0x386e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E94u;
        // 0x386e98: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e94) {
            ctx->pc = 0x386EA4u;
            goto label_386ea4;
        }
    }
    ctx->pc = 0x386E9Cu;
label_386e9c:
    // 0x386e9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x386E9Cu;
    {
        const bool branch_taken_0x386e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E9Cu;
        // 0x386ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e9c) {
            ctx->pc = 0x386EBCu;
            goto label_386ebc;
        }
    }
    ctx->pc = 0x386EA4u;
label_386ea4:
    // 0x386ea4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x386ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x386ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386eac: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x386EACu;
    SET_GPR_U32(ctx, 31, 0x386EB4u);
    ctx->pc = 0x386EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386EACu;
    // 0x386eb0: 0x2484ae58  addiu       $a0, $a0, -0x51A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x386EACu, 0x386EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386EB4u;
label_386eb4:
    // 0x386eb4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x386eb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x386eb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x386eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_386ebc:
    // 0x386ebc: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x386ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x386ec0: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x386ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x386ec4: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x386ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x386ec8: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x386ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x386ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x386ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386ECCu;
        // 0x386ed0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386ED4u;
    // 0x386ed4: 0x0  nop
    ctx->pc = 0x386ed4u;
    // NOP
    ctx->pc = 0x386ed8u;
}
