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

// Function: sub_0040DC88
// Address: 0x40dc88 - 0x40dda8
void sub_0040DC88_0x40dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DC88_0x40dc88");
#endif

    switch (ctx->pc) {
        case 0x40dc88u: goto label_40dc88;
        case 0x40dc8cu: goto label_40dc8c;
        case 0x40dc90u: goto label_40dc90;
        case 0x40dc94u: goto label_40dc94;
        case 0x40dc98u: goto label_40dc98;
        case 0x40dc9cu: goto label_40dc9c;
        case 0x40dca0u: goto label_40dca0;
        case 0x40dca4u: goto label_40dca4;
        case 0x40dca8u: goto label_40dca8;
        case 0x40dcacu: goto label_40dcac;
        case 0x40dcb0u: goto label_40dcb0;
        case 0x40dcb4u: goto label_40dcb4;
        case 0x40dcb8u: goto label_40dcb8;
        case 0x40dcbcu: goto label_40dcbc;
        case 0x40dcc0u: goto label_40dcc0;
        case 0x40dcc4u: goto label_40dcc4;
        case 0x40dcc8u: goto label_40dcc8;
        case 0x40dcccu: goto label_40dccc;
        case 0x40dcd0u: goto label_40dcd0;
        case 0x40dcd4u: goto label_40dcd4;
        case 0x40dcd8u: goto label_40dcd8;
        case 0x40dcdcu: goto label_40dcdc;
        case 0x40dce0u: goto label_40dce0;
        case 0x40dce4u: goto label_40dce4;
        case 0x40dce8u: goto label_40dce8;
        case 0x40dcecu: goto label_40dcec;
        case 0x40dcf0u: goto label_40dcf0;
        case 0x40dcf4u: goto label_40dcf4;
        case 0x40dcf8u: goto label_40dcf8;
        case 0x40dcfcu: goto label_40dcfc;
        case 0x40dd00u: goto label_40dd00;
        case 0x40dd04u: goto label_40dd04;
        case 0x40dd08u: goto label_40dd08;
        case 0x40dd0cu: goto label_40dd0c;
        case 0x40dd10u: goto label_40dd10;
        case 0x40dd14u: goto label_40dd14;
        case 0x40dd18u: goto label_40dd18;
        case 0x40dd1cu: goto label_40dd1c;
        case 0x40dd20u: goto label_40dd20;
        case 0x40dd24u: goto label_40dd24;
        case 0x40dd28u: goto label_40dd28;
        case 0x40dd2cu: goto label_40dd2c;
        case 0x40dd30u: goto label_40dd30;
        case 0x40dd34u: goto label_40dd34;
        case 0x40dd38u: goto label_40dd38;
        case 0x40dd3cu: goto label_40dd3c;
        case 0x40dd40u: goto label_40dd40;
        case 0x40dd44u: goto label_40dd44;
        case 0x40dd48u: goto label_40dd48;
        case 0x40dd4cu: goto label_40dd4c;
        case 0x40dd50u: goto label_40dd50;
        case 0x40dd54u: goto label_40dd54;
        case 0x40dd58u: goto label_40dd58;
        case 0x40dd5cu: goto label_40dd5c;
        case 0x40dd60u: goto label_40dd60;
        case 0x40dd64u: goto label_40dd64;
        case 0x40dd68u: goto label_40dd68;
        case 0x40dd6cu: goto label_40dd6c;
        case 0x40dd70u: goto label_40dd70;
        case 0x40dd74u: goto label_40dd74;
        case 0x40dd78u: goto label_40dd78;
        case 0x40dd7cu: goto label_40dd7c;
        case 0x40dd80u: goto label_40dd80;
        case 0x40dd84u: goto label_40dd84;
        case 0x40dd88u: goto label_40dd88;
        case 0x40dd8cu: goto label_40dd8c;
        case 0x40dd90u: goto label_40dd90;
        case 0x40dd94u: goto label_40dd94;
        case 0x40dd98u: goto label_40dd98;
        case 0x40dd9cu: goto label_40dd9c;
        case 0x40dda0u: goto label_40dda0;
        case 0x40dda4u: goto label_40dda4;
        default: break;
    }

    ctx->pc = 0x40dc88u;

label_40dc88:
    // 0x40dc88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40dc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40dc8c:
    // 0x40dc8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x40dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_40dc90:
    // 0x40dc90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_40dc94:
    // 0x40dc94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40dc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40dc98:
    // 0x40dc98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40dc9c:
    // 0x40dc9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40dc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40dca0:
    // 0x40dca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40dca4:
    // 0x40dca4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40dca8:
    // 0x40dca8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x40dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40dcac:
    // 0x40dcac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x40dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_40dcb0:
    // 0x40dcb0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x40dcb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_40dcb4:
    // 0x40dcb4: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_40dcb8:
    if (ctx->pc == 0x40DCB8u) {
        ctx->pc = 0x40DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCB4u;
        // 0x40dcb8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DCBCu;
        goto label_40dcbc;
    }
    ctx->pc = 0x40DCB4u;
    {
        const bool branch_taken_0x40dcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40dcb4) {
            ctx->pc = 0x40DCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40DCB4u;
            // 0x40dcb8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40DD74u;
            goto label_40dd74;
        }
    }
    ctx->pc = 0x40DCBCu;
label_40dcbc:
    // 0x40dcbc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x40dcbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40dcc0:
    // 0x40dcc0: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x40dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_40dcc4:
    // 0x40dcc4: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x40dcc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_40dcc8:
    // 0x40dcc8: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x40dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_40dccc:
    // 0x40dccc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x40dcccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_40dcd0:
    // 0x40dcd0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x40dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40dcd4:
    // 0x40dcd4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x40dcd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_40dcd8:
    // 0x40dcd8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x40dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_40dcdc:
    // 0x40dcdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40dce0:
    // 0x40dce0: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x40dce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40dce4:
    // 0x40dce4: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x40dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_40dce8:
    // 0x40dce8: 0x2812  mflo        $a1
    ctx->pc = 0x40dce8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_40dcec:
    // 0x40dcec: 0x40f809  jalr        $v0
label_40dcf0:
    if (ctx->pc == 0x40DCF0u) {
        ctx->pc = 0x40DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCECu;
        // 0x40dcf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DCF4u;
        goto label_40dcf4;
    }
    ctx->pc = 0x40DCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DCF4u);
        ctx->pc = 0x40DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCECu;
        // 0x40dcf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DCECu, 0x40DCF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DCF4u;
label_40dcf4:
    // 0x40dcf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40dcf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dcf8:
    // 0x40dcf8: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_40dcfc:
    if (ctx->pc == 0x40DCFCu) {
        ctx->pc = 0x40DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DCF8u;
        // 0x40dcfc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD00u;
        goto label_40dd00;
    }
    ctx->pc = 0x40DCF8u;
    {
        const bool branch_taken_0x40dcf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40dcf8) {
            ctx->pc = 0x40DCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40DCF8u;
            // 0x40dcfc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40DD50u;
            goto label_40dd50;
        }
    }
    ctx->pc = 0x40DD00u;
label_40dd00:
    // 0x40dd00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x40dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40dd04:
    // 0x40dd04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40dd08:
    // 0x40dd08: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x40dd08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40dd0c:
    // 0x40dd0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40dd10:
    // 0x40dd10: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x40dd10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_40dd14:
    // 0x40dd14: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x40dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_40dd18:
    // 0x40dd18: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x40dd18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_40dd1c:
    // 0x40dd1c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x40dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_40dd20:
    // 0x40dd20: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x40dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_40dd24:
    // 0x40dd24: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x40dd24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_40dd28:
    // 0x40dd28: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x40dd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_40dd2c:
    // 0x40dd2c: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x40dd2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40dd30:
    // 0x40dd30: 0x2812  mflo        $a1
    ctx->pc = 0x40dd30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_40dd34:
    // 0x40dd34: 0xc1035f6  jal         func_40D7D8
label_40dd38:
    if (ctx->pc == 0x40DD38u) {
        ctx->pc = 0x40DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD34u;
        // 0x40dd38: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD3Cu;
        goto label_40dd3c;
    }
    ctx->pc = 0x40DD34u;
    SET_GPR_U32(ctx, 31, 0x40DD3Cu);
    ctx->pc = 0x40DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DD34u;
    // 0x40dd38: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40DD34u, 0x40DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DD3Cu;
label_40dd3c:
    // 0x40dd3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40dd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40dd40:
    // 0x40dd40: 0xc103628  jal         func_40D8A0
label_40dd44:
    if (ctx->pc == 0x40DD44u) {
        ctx->pc = 0x40DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD40u;
        // 0x40dd44: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD48u;
        goto label_40dd48;
    }
    ctx->pc = 0x40DD40u;
    SET_GPR_U32(ctx, 31, 0x40DD48u);
    ctx->pc = 0x40DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DD40u;
    // 0x40dd44: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40DD40u, 0x40DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DD48u;
label_40dd48:
    // 0x40dd48: 0x10000010  b           . + 4 + (0x10 << 2)
label_40dd4c:
    if (ctx->pc == 0x40DD4Cu) {
        ctx->pc = 0x40DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD48u;
        // 0x40dd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DD50u;
        goto label_40dd50;
    }
    ctx->pc = 0x40DD48u;
    {
        const bool branch_taken_0x40dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD48u;
        // 0x40dd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dd48) {
            ctx->pc = 0x40DD8Cu;
            goto label_40dd8c;
        }
    }
    ctx->pc = 0x40DD50u;
label_40dd50:
    // 0x40dd50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40dd54:
    // 0x40dd54: 0x242202a  slt         $a0, $s2, $v0
    ctx->pc = 0x40dd54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_40dd58:
    // 0x40dd58: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x40dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_40dd5c:
    // 0x40dd5c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x40dd5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_40dd60:
    // 0x40dd60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x40dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_40dd64:
    // 0x40dd64: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x40dd64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_40dd68:
    // 0x40dd68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40dd6c:
    // 0x40dd6c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x40dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_40dd70:
    // 0x40dd70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40dd74:
    // 0x40dd74: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x40dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40dd78:
    // 0x40dd78: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x40dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_40dd7c:
    // 0x40dd7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x40dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40dd80:
    // 0x40dd80: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x40dd80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_40dd84:
    // 0x40dd84: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x40dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_40dd88:
    // 0x40dd88: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x40dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_40dd8c:
    // 0x40dd8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x40dd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40dd90:
    // 0x40dd90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40dd90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40dd94:
    // 0x40dd94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40dd94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40dd98:
    // 0x40dd98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40dd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40dd9c:
    // 0x40dd9c: 0x3e00008  jr          $ra
label_40dda0:
    if (ctx->pc == 0x40DDA0u) {
        ctx->pc = 0x40DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD9Cu;
        // 0x40dda0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DDA4u;
        goto label_40dda4;
    }
    ctx->pc = 0x40DD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DD9Cu;
        // 0x40dda0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DDA4u;
label_40dda4:
    // 0x40dda4: 0x0  nop
    ctx->pc = 0x40dda4u;
    // NOP
    ctx->pc = 0x40dda8u;
}
