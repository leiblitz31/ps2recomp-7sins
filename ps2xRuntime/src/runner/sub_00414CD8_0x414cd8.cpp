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

// Function: sub_00414CD8
// Address: 0x414cd8 - 0x414d78
void sub_00414CD8_0x414cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414CD8_0x414cd8");
#endif

    switch (ctx->pc) {
        case 0x414cd8u: goto label_414cd8;
        case 0x414cdcu: goto label_414cdc;
        case 0x414ce0u: goto label_414ce0;
        case 0x414ce4u: goto label_414ce4;
        case 0x414ce8u: goto label_414ce8;
        case 0x414cecu: goto label_414cec;
        case 0x414cf0u: goto label_414cf0;
        case 0x414cf4u: goto label_414cf4;
        case 0x414cf8u: goto label_414cf8;
        case 0x414cfcu: goto label_414cfc;
        case 0x414d00u: goto label_414d00;
        case 0x414d04u: goto label_414d04;
        case 0x414d08u: goto label_414d08;
        case 0x414d0cu: goto label_414d0c;
        case 0x414d10u: goto label_414d10;
        case 0x414d14u: goto label_414d14;
        case 0x414d18u: goto label_414d18;
        case 0x414d1cu: goto label_414d1c;
        case 0x414d20u: goto label_414d20;
        case 0x414d24u: goto label_414d24;
        case 0x414d28u: goto label_414d28;
        case 0x414d2cu: goto label_414d2c;
        case 0x414d30u: goto label_414d30;
        case 0x414d34u: goto label_414d34;
        case 0x414d38u: goto label_414d38;
        case 0x414d3cu: goto label_414d3c;
        case 0x414d40u: goto label_414d40;
        case 0x414d44u: goto label_414d44;
        case 0x414d48u: goto label_414d48;
        case 0x414d4cu: goto label_414d4c;
        case 0x414d50u: goto label_414d50;
        case 0x414d54u: goto label_414d54;
        case 0x414d58u: goto label_414d58;
        case 0x414d5cu: goto label_414d5c;
        case 0x414d60u: goto label_414d60;
        case 0x414d64u: goto label_414d64;
        case 0x414d68u: goto label_414d68;
        case 0x414d6cu: goto label_414d6c;
        case 0x414d70u: goto label_414d70;
        case 0x414d74u: goto label_414d74;
        default: break;
    }

    ctx->pc = 0x414cd8u;

label_414cd8:
    // 0x414cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x414cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_414cdc:
    // 0x414cdc: 0x2786ad70  addiu       $a2, $gp, -0x5290
    ctx->pc = 0x414cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946160));
label_414ce0:
    // 0x414ce0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x414ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_414ce4:
    // 0x414ce4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x414ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_414ce8:
    // 0x414ce8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x414ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_414cec:
    // 0x414cec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x414cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_414cf0:
    // 0x414cf0: 0x84800b  movn        $s0, $a0, $a0
    ctx->pc = 0x414cf0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_414cf4:
    // 0x414cf4: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x414cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_414cf8:
    // 0x414cf8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x414cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_414cfc:
    // 0x414cfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x414cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414d00:
    // 0x414d00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x414d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_414d04:
    // 0x414d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_414d08:
    // 0x414d08: 0x40f809  jalr        $v0
label_414d0c:
    if (ctx->pc == 0x414D0Cu) {
        ctx->pc = 0x414D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D08u;
        // 0x414d0c: 0x210200b  movn        $a0, $s0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414D10u;
        goto label_414d10;
    }
    ctx->pc = 0x414D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414D10u);
        ctx->pc = 0x414D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D08u;
        // 0x414d0c: 0x210200b  movn        $a0, $s0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414D08u, 0x414D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414D10u;
label_414d10:
    // 0x414d10: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x414d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_414d14:
    // 0x414d14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x414d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_414d18:
    // 0x414d18: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x414d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_414d1c:
    // 0x414d1c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x414d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_414d20:
    // 0x414d20: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x414d20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_414d24:
    // 0x414d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x414d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414d28:
    // 0x414d28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x414d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_414d2c:
    // 0x414d2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x414d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414d30:
    // 0x414d30: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x414d30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_414d34:
    // 0x414d34: 0xc103404  jal         func_40D010
label_414d38:
    if (ctx->pc == 0x414D38u) {
        ctx->pc = 0x414D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D34u;
        // 0x414d38: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414D3Cu;
        goto label_414d3c;
    }
    ctx->pc = 0x414D34u;
    SET_GPR_U32(ctx, 31, 0x414D3Cu);
    ctx->pc = 0x414D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414D34u;
    // 0x414d38: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x414D34u, 0x414D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414D3Cu;
label_414d3c:
    // 0x414d3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_414d40:
    if (ctx->pc == 0x414D40u) {
        ctx->pc = 0x414D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D3Cu;
        // 0x414d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414D44u;
        goto label_414d44;
    }
    ctx->pc = 0x414D3Cu;
    {
        const bool branch_taken_0x414d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D3Cu;
        // 0x414d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d3c) {
            ctx->pc = 0x414D5Cu;
            goto label_414d5c;
        }
    }
    ctx->pc = 0x414D44u;
label_414d44:
    // 0x414d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x414d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414d48:
    // 0x414d48: 0xc10486e  jal         func_4121B8
label_414d4c:
    if (ctx->pc == 0x414D4Cu) {
        ctx->pc = 0x414D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D48u;
        // 0x414d4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414D50u;
        goto label_414d50;
    }
    ctx->pc = 0x414D48u;
    SET_GPR_U32(ctx, 31, 0x414D50u);
    ctx->pc = 0x414D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414D48u;
    // 0x414d4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x414D48u, 0x414D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414D50u;
label_414d50:
    // 0x414d50: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x414d50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_414d54:
    // 0x414d54: 0x10000002  b           . + 4 + (0x2 << 2)
label_414d58:
    if (ctx->pc == 0x414D58u) {
        ctx->pc = 0x414D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D54u;
        // 0x414d58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414D5Cu;
        goto label_414d5c;
    }
    ctx->pc = 0x414D54u;
    {
        const bool branch_taken_0x414d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D54u;
        // 0x414d58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d54) {
            ctx->pc = 0x414D60u;
            goto label_414d60;
        }
    }
    ctx->pc = 0x414D5Cu;
label_414d5c:
    // 0x414d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x414d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414d60:
    // 0x414d60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x414d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414d64:
    // 0x414d64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x414d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414d68:
    // 0x414d68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x414d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414d6c:
    // 0x414d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_414d70:
    // 0x414d70: 0x3e00008  jr          $ra
label_414d74:
    if (ctx->pc == 0x414D74u) {
        ctx->pc = 0x414D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D70u;
        // 0x414d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414D78u;
        goto label_fallthrough_0x414d70;
    }
    ctx->pc = 0x414D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D70u;
        // 0x414d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414d70:
    ctx->pc = 0x414D78u;
}
