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

// Function: sub_00379C48
// Address: 0x379c48 - 0x379d18
void sub_00379C48_0x379c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379C48_0x379c48");
#endif

    switch (ctx->pc) {
        case 0x379c6cu: goto label_379c6c;
        case 0x379c80u: goto label_379c80;
        case 0x379ca4u: goto label_379ca4;
        case 0x379cb4u: goto label_379cb4;
        case 0x379cd8u: goto label_379cd8;
        case 0x379cfcu: goto label_379cfc;
        default: break;
    }

    ctx->pc = 0x379c48u;

    // 0x379c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x379c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379c58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x379c5c: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x379c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x379c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379c64: 0xc106406  jal         func_419018
    ctx->pc = 0x379C64u;
    SET_GPR_U32(ctx, 31, 0x379C6Cu);
    ctx->pc = 0x379C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C64u;
    // 0x379c68: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379C64u, 0x379C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C6Cu;
label_379c6c:
    // 0x379c6c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379c6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x379c70: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x379C70u;
    {
        const bool branch_taken_0x379c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379c70) {
            ctx->pc = 0x379C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379C70u;
            // 0x379c74: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379C94u;
            goto label_379c94;
        }
    }
    ctx->pc = 0x379C78u;
    // 0x379c78: 0xc0e294a  jal         func_38A528
    ctx->pc = 0x379C78u;
    SET_GPR_U32(ctx, 31, 0x379C80u);
    ctx->pc = 0x379C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379C78u;
    // 0x379c7c: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A528u, 0x379C78u, 0x379C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C80u;
label_379c80:
    // 0x379c80: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x379c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x379c84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x379c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379c88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x379c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379c8c: 0x83900b  movn        $s2, $a0, $v1
    ctx->pc = 0x379c8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x379c90: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x379c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_379c94:
    // 0x379c94: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x379C94u;
    {
        const bool branch_taken_0x379c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x379C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C94u;
        // 0x379c98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379c94) {
            ctx->pc = 0x379D00u;
            goto label_379d00;
        }
    }
    ctx->pc = 0x379C9Cu;
    // 0x379c9c: 0xc0de61a  jal         func_379868
    ctx->pc = 0x379C9Cu;
    SET_GPR_U32(ctx, 31, 0x379CA4u);
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x379C9Cu, 0x379CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CA4u;
label_379ca4:
    // 0x379ca4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x379CA4u;
    {
        const bool branch_taken_0x379ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CA4u;
        // 0x379ca8: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ca4) {
            ctx->pc = 0x379CFCu;
            goto label_379cfc;
        }
    }
    ctx->pc = 0x379CACu;
    // 0x379cac: 0xc106406  jal         func_419018
    ctx->pc = 0x379CACu;
    SET_GPR_U32(ctx, 31, 0x379CB4u);
    ctx->pc = 0x379CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CACu;
    // 0x379cb0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379CACu, 0x379CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CB4u;
label_379cb4:
    // 0x379cb4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379cb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x379cb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x379CB8u;
    {
        const bool branch_taken_0x379cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CB8u;
        // 0x379cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379cb8) {
            ctx->pc = 0x379CD0u;
            goto label_379cd0;
        }
    }
    ctx->pc = 0x379CC0u;
    // 0x379cc0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379CC0u;
    {
        const bool branch_taken_0x379cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x379cc0) {
            ctx->pc = 0x379CD0u;
            goto label_379cd0;
        }
    }
    ctx->pc = 0x379CC8u;
    // 0x379cc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x379CC8u;
    {
        const bool branch_taken_0x379cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CC8u;
        // 0x379ccc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379cc8) {
            ctx->pc = 0x379CF0u;
            goto label_379cf0;
        }
    }
    ctx->pc = 0x379CD0u;
label_379cd0:
    // 0x379cd0: 0xc106406  jal         func_419018
    ctx->pc = 0x379CD0u;
    SET_GPR_U32(ctx, 31, 0x379CD8u);
    ctx->pc = 0x379CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CD0u;
    // 0x379cd4: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379CD0u, 0x379CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CD8u;
label_379cd8:
    // 0x379cd8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379cd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x379cdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x379CDCu;
    {
        const bool branch_taken_0x379cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CDCu;
        // 0x379ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379cdc) {
            ctx->pc = 0x379CF4u;
            goto label_379cf4;
        }
    }
    ctx->pc = 0x379CE4u;
    // 0x379ce4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x379ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379ce8: 0x3a420003  xori        $v0, $s2, 0x3
    ctx->pc = 0x379ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x379cec: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x379cecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_379cf0:
    // 0x379cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379cf4:
    // 0x379cf4: 0xc0de920  jal         func_37A480
    ctx->pc = 0x379CF4u;
    SET_GPR_U32(ctx, 31, 0x379CFCu);
    ctx->pc = 0x379CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CF4u;
    // 0x379cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A480u, 0x379CF4u, 0x379CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CFCu;
label_379cfc:
    // 0x379cfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_379d00:
    // 0x379d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379d04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379d08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379d10: 0x3e00008  jr          $ra
    ctx->pc = 0x379D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D10u;
        // 0x379d14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379D18u;
}
