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

// Function: sub_003DCE28
// Address: 0x3dce28 - 0x3dcf68
void sub_003DCE28_0x3dce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCE28_0x3dce28");
#endif

    switch (ctx->pc) {
        case 0x3dce28u: goto label_3dce28;
        case 0x3dce2cu: goto label_3dce2c;
        case 0x3dce30u: goto label_3dce30;
        case 0x3dce34u: goto label_3dce34;
        case 0x3dce38u: goto label_3dce38;
        case 0x3dce3cu: goto label_3dce3c;
        case 0x3dce40u: goto label_3dce40;
        case 0x3dce44u: goto label_3dce44;
        case 0x3dce48u: goto label_3dce48;
        case 0x3dce4cu: goto label_3dce4c;
        case 0x3dce50u: goto label_3dce50;
        case 0x3dce54u: goto label_3dce54;
        case 0x3dce58u: goto label_3dce58;
        case 0x3dce5cu: goto label_3dce5c;
        case 0x3dce60u: goto label_3dce60;
        case 0x3dce64u: goto label_3dce64;
        case 0x3dce68u: goto label_3dce68;
        case 0x3dce6cu: goto label_3dce6c;
        case 0x3dce70u: goto label_3dce70;
        case 0x3dce74u: goto label_3dce74;
        case 0x3dce78u: goto label_3dce78;
        case 0x3dce7cu: goto label_3dce7c;
        case 0x3dce80u: goto label_3dce80;
        case 0x3dce84u: goto label_3dce84;
        case 0x3dce88u: goto label_3dce88;
        case 0x3dce8cu: goto label_3dce8c;
        case 0x3dce90u: goto label_3dce90;
        case 0x3dce94u: goto label_3dce94;
        case 0x3dce98u: goto label_3dce98;
        case 0x3dce9cu: goto label_3dce9c;
        case 0x3dcea0u: goto label_3dcea0;
        case 0x3dcea4u: goto label_3dcea4;
        case 0x3dcea8u: goto label_3dcea8;
        case 0x3dceacu: goto label_3dceac;
        case 0x3dceb0u: goto label_3dceb0;
        case 0x3dceb4u: goto label_3dceb4;
        case 0x3dceb8u: goto label_3dceb8;
        case 0x3dcebcu: goto label_3dcebc;
        case 0x3dcec0u: goto label_3dcec0;
        case 0x3dcec4u: goto label_3dcec4;
        case 0x3dcec8u: goto label_3dcec8;
        case 0x3dceccu: goto label_3dcecc;
        case 0x3dced0u: goto label_3dced0;
        case 0x3dced4u: goto label_3dced4;
        case 0x3dced8u: goto label_3dced8;
        case 0x3dcedcu: goto label_3dcedc;
        case 0x3dcee0u: goto label_3dcee0;
        case 0x3dcee4u: goto label_3dcee4;
        case 0x3dcee8u: goto label_3dcee8;
        case 0x3dceecu: goto label_3dceec;
        case 0x3dcef0u: goto label_3dcef0;
        case 0x3dcef4u: goto label_3dcef4;
        case 0x3dcef8u: goto label_3dcef8;
        case 0x3dcefcu: goto label_3dcefc;
        case 0x3dcf00u: goto label_3dcf00;
        case 0x3dcf04u: goto label_3dcf04;
        case 0x3dcf08u: goto label_3dcf08;
        case 0x3dcf0cu: goto label_3dcf0c;
        case 0x3dcf10u: goto label_3dcf10;
        case 0x3dcf14u: goto label_3dcf14;
        case 0x3dcf18u: goto label_3dcf18;
        case 0x3dcf1cu: goto label_3dcf1c;
        case 0x3dcf20u: goto label_3dcf20;
        case 0x3dcf24u: goto label_3dcf24;
        case 0x3dcf28u: goto label_3dcf28;
        case 0x3dcf2cu: goto label_3dcf2c;
        case 0x3dcf30u: goto label_3dcf30;
        case 0x3dcf34u: goto label_3dcf34;
        case 0x3dcf38u: goto label_3dcf38;
        case 0x3dcf3cu: goto label_3dcf3c;
        case 0x3dcf40u: goto label_3dcf40;
        case 0x3dcf44u: goto label_3dcf44;
        case 0x3dcf48u: goto label_3dcf48;
        case 0x3dcf4cu: goto label_3dcf4c;
        case 0x3dcf50u: goto label_3dcf50;
        case 0x3dcf54u: goto label_3dcf54;
        case 0x3dcf58u: goto label_3dcf58;
        case 0x3dcf5cu: goto label_3dcf5c;
        case 0x3dcf60u: goto label_3dcf60;
        case 0x3dcf64u: goto label_3dcf64;
        default: break;
    }

    ctx->pc = 0x3dce28u;

label_3dce28:
    // 0x3dce28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dce28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3dce2c:
    // 0x3dce2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3dce30:
    // 0x3dce30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dce30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dce34:
    // 0x3dce34: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3dce38:
    if (ctx->pc == 0x3DCE38u) {
        ctx->pc = 0x3DCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE34u;
        // 0x3dce38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE3Cu;
        goto label_3dce3c;
    }
    ctx->pc = 0x3DCE34u;
    {
        const bool branch_taken_0x3dce34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE34u;
        // 0x3dce38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce34) {
            ctx->pc = 0x3DCE54u;
            goto label_3dce54;
        }
    }
    ctx->pc = 0x3DCE3Cu;
label_3dce3c:
    // 0x3dce3c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3dce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3dce40:
    // 0x3dce40: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3dce44:
    if (ctx->pc == 0x3DCE44u) {
        ctx->pc = 0x3DCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE40u;
        // 0x3dce44: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE48u;
        goto label_3dce48;
    }
    ctx->pc = 0x3DCE40u;
    {
        const bool branch_taken_0x3dce40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE40u;
        // 0x3dce44: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce40) {
            ctx->pc = 0x3DCE84u;
            goto label_3dce84;
        }
    }
    ctx->pc = 0x3DCE48u;
label_3dce48:
    // 0x3dce48: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3dce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3dce4c:
    // 0x3dce4c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3dce50:
    if (ctx->pc == 0x3DCE50u) {
        ctx->pc = 0x3DCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE4Cu;
        // 0x3dce50: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE54u;
        goto label_3dce54;
    }
    ctx->pc = 0x3DCE4Cu;
    {
        const bool branch_taken_0x3dce4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dce4c) {
            ctx->pc = 0x3DCE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCE4Cu;
            // 0x3dce50: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCE5Cu;
            goto label_3dce5c;
        }
    }
    ctx->pc = 0x3DCE54u;
label_3dce54:
    // 0x3dce54: 0x1000000b  b           . + 4 + (0xB << 2)
label_3dce58:
    if (ctx->pc == 0x3DCE58u) {
        ctx->pc = 0x3DCE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE54u;
        // 0x3dce58: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE5Cu;
        goto label_3dce5c;
    }
    ctx->pc = 0x3DCE54u;
    {
        const bool branch_taken_0x3dce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE54u;
        // 0x3dce58: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce54) {
            ctx->pc = 0x3DCE84u;
            goto label_3dce84;
        }
    }
    ctx->pc = 0x3DCE5Cu;
label_3dce5c:
    // 0x3dce5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3dce60:
    if (ctx->pc == 0x3DCE60u) {
        ctx->pc = 0x3DCE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE5Cu;
        // 0x3dce60: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE64u;
        goto label_3dce64;
    }
    ctx->pc = 0x3DCE5Cu;
    {
        const bool branch_taken_0x3dce5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dce5c) {
            ctx->pc = 0x3DCE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCE5Cu;
            // 0x3dce60: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCE70u;
            goto label_3dce70;
        }
    }
    ctx->pc = 0x3DCE64u;
label_3dce64:
    // 0x3dce64: 0xc0f7946  jal         func_3DE518
label_3dce68:
    if (ctx->pc == 0x3DCE68u) {
        ctx->pc = 0x3DCE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE64u;
        // 0x3dce68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE6Cu;
        goto label_3dce6c;
    }
    ctx->pc = 0x3DCE64u;
    SET_GPR_U32(ctx, 31, 0x3DCE6Cu);
    ctx->pc = 0x3DCE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE64u;
    // 0x3dce68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE518u, 0x3DCE64u, 0x3DCE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE6Cu;
label_3dce6c:
    // 0x3dce6c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3dce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3dce70:
    // 0x3dce70: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3dce70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3dce74:
    // 0x3dce74: 0x40f809  jalr        $v0
label_3dce78:
    if (ctx->pc == 0x3DCE78u) {
        ctx->pc = 0x3DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE74u;
        // 0x3dce78: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE7Cu;
        goto label_3dce7c;
    }
    ctx->pc = 0x3DCE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCE7Cu);
        ctx->pc = 0x3DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE74u;
        // 0x3dce78: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE74u, 0x3DCE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCE7Cu;
label_3dce7c:
    // 0x3dce7c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3dce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3dce80:
    // 0x3dce80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dce80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dce84:
    // 0x3dce84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dce84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dce88:
    // 0x3dce88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dce8c:
    // 0x3dce8c: 0x3e00008  jr          $ra
label_3dce90:
    if (ctx->pc == 0x3DCE90u) {
        ctx->pc = 0x3DCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE8Cu;
        // 0x3dce90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE94u;
        goto label_3dce94;
    }
    ctx->pc = 0x3DCE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE8Cu;
        // 0x3dce90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCE94u;
label_3dce94:
    // 0x3dce94: 0x0  nop
    ctx->pc = 0x3dce94u;
    // NOP
label_3dce98:
    // 0x3dce98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3dce9c:
    // 0x3dce9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3dce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3dcea0:
    // 0x3dcea0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3dcea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3dcea4:
    // 0x3dcea4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3dcea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dcea8:
    // 0x3dcea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dcea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dceac:
    // 0x3dceac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dceacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dceb0:
    // 0x3dceb0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3dceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3dceb4:
    // 0x3dceb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dceb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dceb8:
    // 0x3dceb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dcebc:
    // 0x3dcebc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_3dcec0:
    if (ctx->pc == 0x3DCEC0u) {
        ctx->pc = 0x3DCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEBCu;
        // 0x3dcec0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCEC4u;
        goto label_3dcec4;
    }
    ctx->pc = 0x3DCEBCu;
    {
        const bool branch_taken_0x3dcebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEBCu;
        // 0x3dcec0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcebc) {
            ctx->pc = 0x3DCEDCu;
            goto label_3dcedc;
        }
    }
    ctx->pc = 0x3DCEC4u;
label_3dcec4:
    // 0x3dcec4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3dcec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3dcec8:
    // 0x3dcec8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3dcecc:
    if (ctx->pc == 0x3DCECCu) {
        ctx->pc = 0x3DCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEC8u;
        // 0x3dcecc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCED0u;
        goto label_3dced0;
    }
    ctx->pc = 0x3DCEC8u;
    {
        const bool branch_taken_0x3dcec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEC8u;
        // 0x3dcecc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcec8) {
            ctx->pc = 0x3DCEDCu;
            goto label_3dcedc;
        }
    }
    ctx->pc = 0x3DCED0u;
label_3dced0:
    // 0x3dced0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dced4:
    // 0x3dced4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3dced8:
    if (ctx->pc == 0x3DCED8u) {
        ctx->pc = 0x3DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCED4u;
        // 0x3dced8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCEDCu;
        goto label_3dcedc;
    }
    ctx->pc = 0x3DCED4u;
    {
        const bool branch_taken_0x3dced4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCED4u;
        // 0x3dced8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dced4) {
            ctx->pc = 0x3DCEE4u;
            goto label_3dcee4;
        }
    }
    ctx->pc = 0x3DCEDCu;
label_3dcedc:
    // 0x3dcedc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3dcee0:
    if (ctx->pc == 0x3DCEE0u) {
        ctx->pc = 0x3DCEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEDCu;
        // 0x3dcee0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCEE4u;
        goto label_3dcee4;
    }
    ctx->pc = 0x3DCEDCu;
    {
        const bool branch_taken_0x3dcedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEDCu;
        // 0x3dcee0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcedc) {
            ctx->pc = 0x3DCF48u;
            goto label_3dcf48;
        }
    }
    ctx->pc = 0x3DCEE4u;
label_3dcee4:
    // 0x3dcee4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dcee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dcee8:
    // 0x3dcee8: 0xc0f5b94  jal         func_3D6E50
label_3dceec:
    if (ctx->pc == 0x3DCEECu) {
        ctx->pc = 0x3DCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEE8u;
        // 0x3dceec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCEF0u;
        goto label_3dcef0;
    }
    ctx->pc = 0x3DCEE8u;
    SET_GPR_U32(ctx, 31, 0x3DCEF0u);
    ctx->pc = 0x3DCEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCEE8u;
    // 0x3dceec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6E50u, 0x3DCEE8u, 0x3DCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCEF0u;
label_3dcef0:
    // 0x3dcef0: 0xde230038  ld          $v1, 0x38($s1)
    ctx->pc = 0x3dcef0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_3dcef4:
    // 0x3dcef4: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_3dcef8:
    if (ctx->pc == 0x3DCEF8u) {
        ctx->pc = 0x3DCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEF4u;
        // 0x3dcef8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCEFCu;
        goto label_3dcefc;
    }
    ctx->pc = 0x3DCEF4u;
    {
        const bool branch_taken_0x3dcef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEF4u;
        // 0x3dcef8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcef4) {
            ctx->pc = 0x3DCF48u;
            goto label_3dcf48;
        }
    }
    ctx->pc = 0x3DCEFCu;
label_3dcefc:
    // 0x3dcefc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3dcefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3dcf00:
    // 0x3dcf00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dcf04:
    // 0x3dcf04: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3dcf04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_3dcf08:
    // 0x3dcf08: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3dcf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3dcf0c:
    // 0x3dcf0c: 0x701006  srlv        $v0, $s0, $v1
    ctx->pc = 0x3dcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_3dcf10:
    // 0x3dcf10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3dcf14:
    if (ctx->pc == 0x3DCF14u) {
        ctx->pc = 0x3DCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF10u;
        // 0x3dcf14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF18u;
        goto label_3dcf18;
    }
    ctx->pc = 0x3DCF10u;
    {
        const bool branch_taken_0x3dcf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF10u;
        // 0x3dcf14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcf10) {
            ctx->pc = 0x3DCF28u;
            goto label_3dcf28;
        }
    }
    ctx->pc = 0x3DCF18u;
label_3dcf18:
    // 0x3dcf18: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3dcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_3dcf1c:
    // 0x3dcf1c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x3dcf1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dcf20:
    // 0x3dcf20: 0x2701823  subu        $v1, $s3, $s0
    ctx->pc = 0x3dcf20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3dcf24:
    // 0x3dcf24: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x3dcf24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3dcf28:
    // 0x3dcf28: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x3dcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3dcf2c:
    // 0x3dcf2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dcf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dcf30:
    // 0x3dcf30: 0xc0f797c  jal         func_3DE5F0
label_3dcf34:
    if (ctx->pc == 0x3DCF34u) {
        ctx->pc = 0x3DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF30u;
        // 0x3dcf34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF38u;
        goto label_3dcf38;
    }
    ctx->pc = 0x3DCF30u;
    SET_GPR_U32(ctx, 31, 0x3DCF38u);
    ctx->pc = 0x3DCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF30u;
    // 0x3dcf34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE5F0u, 0x3DCF30u, 0x3DCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF38u;
label_3dcf38:
    // 0x3dcf38: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3dcf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3dcf3c:
    // 0x3dcf3c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3dcf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3dcf40:
    // 0x3dcf40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dcf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcf44:
    // 0x3dcf44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3dcf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3dcf48:
    // 0x3dcf48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3dcf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dcf4c:
    // 0x3dcf4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3dcf4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dcf50:
    // 0x3dcf50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dcf50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcf54:
    // 0x3dcf54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3dcf54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dcf58:
    // 0x3dcf58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dcf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dcf5c:
    // 0x3dcf5c: 0x3e00008  jr          $ra
label_3dcf60:
    if (ctx->pc == 0x3DCF60u) {
        ctx->pc = 0x3DCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF5Cu;
        // 0x3dcf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF64u;
        goto label_3dcf64;
    }
    ctx->pc = 0x3DCF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF5Cu;
        // 0x3dcf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCF64u;
label_3dcf64:
    // 0x3dcf64: 0x0  nop
    ctx->pc = 0x3dcf64u;
    // NOP
    ctx->pc = 0x3dcf68u;
}
