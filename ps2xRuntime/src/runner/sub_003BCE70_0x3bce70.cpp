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

// Function: sub_003BCE70
// Address: 0x3bce70 - 0x3bd010
void sub_003BCE70_0x3bce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCE70_0x3bce70");
#endif

    switch (ctx->pc) {
        case 0x3bce70u: goto label_3bce70;
        case 0x3bce74u: goto label_3bce74;
        case 0x3bce78u: goto label_3bce78;
        case 0x3bce7cu: goto label_3bce7c;
        case 0x3bce80u: goto label_3bce80;
        case 0x3bce84u: goto label_3bce84;
        case 0x3bce88u: goto label_3bce88;
        case 0x3bce8cu: goto label_3bce8c;
        case 0x3bce90u: goto label_3bce90;
        case 0x3bce94u: goto label_3bce94;
        case 0x3bce98u: goto label_3bce98;
        case 0x3bce9cu: goto label_3bce9c;
        case 0x3bcea0u: goto label_3bcea0;
        case 0x3bcea4u: goto label_3bcea4;
        case 0x3bcea8u: goto label_3bcea8;
        case 0x3bceacu: goto label_3bceac;
        case 0x3bceb0u: goto label_3bceb0;
        case 0x3bceb4u: goto label_3bceb4;
        case 0x3bceb8u: goto label_3bceb8;
        case 0x3bcebcu: goto label_3bcebc;
        case 0x3bcec0u: goto label_3bcec0;
        case 0x3bcec4u: goto label_3bcec4;
        case 0x3bcec8u: goto label_3bcec8;
        case 0x3bceccu: goto label_3bcecc;
        case 0x3bced0u: goto label_3bced0;
        case 0x3bced4u: goto label_3bced4;
        case 0x3bced8u: goto label_3bced8;
        case 0x3bcedcu: goto label_3bcedc;
        case 0x3bcee0u: goto label_3bcee0;
        case 0x3bcee4u: goto label_3bcee4;
        case 0x3bcee8u: goto label_3bcee8;
        case 0x3bceecu: goto label_3bceec;
        case 0x3bcef0u: goto label_3bcef0;
        case 0x3bcef4u: goto label_3bcef4;
        case 0x3bcef8u: goto label_3bcef8;
        case 0x3bcefcu: goto label_3bcefc;
        case 0x3bcf00u: goto label_3bcf00;
        case 0x3bcf04u: goto label_3bcf04;
        case 0x3bcf08u: goto label_3bcf08;
        case 0x3bcf0cu: goto label_3bcf0c;
        case 0x3bcf10u: goto label_3bcf10;
        case 0x3bcf14u: goto label_3bcf14;
        case 0x3bcf18u: goto label_3bcf18;
        case 0x3bcf1cu: goto label_3bcf1c;
        case 0x3bcf20u: goto label_3bcf20;
        case 0x3bcf24u: goto label_3bcf24;
        case 0x3bcf28u: goto label_3bcf28;
        case 0x3bcf2cu: goto label_3bcf2c;
        case 0x3bcf30u: goto label_3bcf30;
        case 0x3bcf34u: goto label_3bcf34;
        case 0x3bcf38u: goto label_3bcf38;
        case 0x3bcf3cu: goto label_3bcf3c;
        case 0x3bcf40u: goto label_3bcf40;
        case 0x3bcf44u: goto label_3bcf44;
        case 0x3bcf48u: goto label_3bcf48;
        case 0x3bcf4cu: goto label_3bcf4c;
        case 0x3bcf50u: goto label_3bcf50;
        case 0x3bcf54u: goto label_3bcf54;
        case 0x3bcf58u: goto label_3bcf58;
        case 0x3bcf5cu: goto label_3bcf5c;
        case 0x3bcf60u: goto label_3bcf60;
        case 0x3bcf64u: goto label_3bcf64;
        case 0x3bcf68u: goto label_3bcf68;
        case 0x3bcf6cu: goto label_3bcf6c;
        case 0x3bcf70u: goto label_3bcf70;
        case 0x3bcf74u: goto label_3bcf74;
        case 0x3bcf78u: goto label_3bcf78;
        case 0x3bcf7cu: goto label_3bcf7c;
        case 0x3bcf80u: goto label_3bcf80;
        case 0x3bcf84u: goto label_3bcf84;
        case 0x3bcf88u: goto label_3bcf88;
        case 0x3bcf8cu: goto label_3bcf8c;
        case 0x3bcf90u: goto label_3bcf90;
        case 0x3bcf94u: goto label_3bcf94;
        case 0x3bcf98u: goto label_3bcf98;
        case 0x3bcf9cu: goto label_3bcf9c;
        case 0x3bcfa0u: goto label_3bcfa0;
        case 0x3bcfa4u: goto label_3bcfa4;
        case 0x3bcfa8u: goto label_3bcfa8;
        case 0x3bcfacu: goto label_3bcfac;
        case 0x3bcfb0u: goto label_3bcfb0;
        case 0x3bcfb4u: goto label_3bcfb4;
        case 0x3bcfb8u: goto label_3bcfb8;
        case 0x3bcfbcu: goto label_3bcfbc;
        case 0x3bcfc0u: goto label_3bcfc0;
        case 0x3bcfc4u: goto label_3bcfc4;
        case 0x3bcfc8u: goto label_3bcfc8;
        case 0x3bcfccu: goto label_3bcfcc;
        case 0x3bcfd0u: goto label_3bcfd0;
        case 0x3bcfd4u: goto label_3bcfd4;
        case 0x3bcfd8u: goto label_3bcfd8;
        case 0x3bcfdcu: goto label_3bcfdc;
        case 0x3bcfe0u: goto label_3bcfe0;
        case 0x3bcfe4u: goto label_3bcfe4;
        case 0x3bcfe8u: goto label_3bcfe8;
        case 0x3bcfecu: goto label_3bcfec;
        case 0x3bcff0u: goto label_3bcff0;
        case 0x3bcff4u: goto label_3bcff4;
        case 0x3bcff8u: goto label_3bcff8;
        case 0x3bcffcu: goto label_3bcffc;
        case 0x3bd000u: goto label_3bd000;
        case 0x3bd004u: goto label_3bd004;
        case 0x3bd008u: goto label_3bd008;
        case 0x3bd00cu: goto label_3bd00c;
        default: break;
    }

    ctx->pc = 0x3bce70u;

label_3bce70:
    // 0x3bce70: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bce70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bce74:
    // 0x3bce74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bce74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3bce78:
    // 0x3bce78: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3bce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3bce7c:
    // 0x3bce7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bce80:
    // 0x3bce80: 0x40f809  jalr        $v0
label_3bce84:
    if (ctx->pc == 0x3BCE84u) {
        ctx->pc = 0x3BCE88u;
        goto label_3bce88;
    }
    ctx->pc = 0x3BCE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BCE88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCE80u, 0x3BCE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BCE88u;
label_3bce88:
    // 0x3bce88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bce8c:
    // 0x3bce8c: 0x3e00008  jr          $ra
label_3bce90:
    if (ctx->pc == 0x3BCE90u) {
        ctx->pc = 0x3BCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE8Cu;
        // 0x3bce90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCE94u;
        goto label_3bce94;
    }
    ctx->pc = 0x3BCE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE8Cu;
        // 0x3bce90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCE94u;
label_3bce94:
    // 0x3bce94: 0x0  nop
    ctx->pc = 0x3bce94u;
    // NOP
label_3bce98:
    // 0x3bce98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3bce9c:
    // 0x3bce9c: 0x8f82ab6c  lw          $v0, -0x5494($gp)
    ctx->pc = 0x3bce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
label_3bcea0:
    // 0x3bcea0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3bcea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3bcea4:
    // 0x3bcea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bcea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcea8:
    // 0x3bcea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bcea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3bceac:
    // 0x3bceac: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
label_3bceb0:
    if (ctx->pc == 0x3BCEB0u) {
        ctx->pc = 0x3BCEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEACu;
        // 0x3bceb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCEB4u;
        goto label_3bceb4;
    }
    ctx->pc = 0x3BCEACu;
    {
        const bool branch_taken_0x3bceac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BCEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEACu;
        // 0x3bceb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bceac) {
            ctx->pc = 0x3BCF84u;
            goto label_3bcf84;
        }
    }
    ctx->pc = 0x3BCEB4u;
label_3bceb4:
    // 0x3bceb4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3bceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3bceb8:
    // 0x3bceb8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bceb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bcebc:
    // 0x3bcebc: 0x2486dcd8  addiu       $a2, $a0, -0x2328
    ctx->pc = 0x3bcebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958296));
label_3bcec0:
    // 0x3bcec0: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x3bcec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3bcec4:
    // 0x3bcec4: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
label_3bcec8:
    if (ctx->pc == 0x3BCEC8u) {
        ctx->pc = 0x3BCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEC4u;
        // 0x3bcec8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCECCu;
        goto label_3bcecc;
    }
    ctx->pc = 0x3BCEC4u;
    {
        const bool branch_taken_0x3bcec4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3BCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEC4u;
        // 0x3bcec8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcec4) {
            ctx->pc = 0x3BCF1Cu;
            goto label_3bcf1c;
        }
    }
    ctx->pc = 0x3BCECCu;
label_3bcecc:
    // 0x3bcecc: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3bced0:
    if (ctx->pc == 0x3BCED0u) {
        ctx->pc = 0x3BCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCECCu;
        // 0x3bced0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCED4u;
        goto label_3bced4;
    }
    ctx->pc = 0x3BCECCu;
    {
        const bool branch_taken_0x3bcecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCECCu;
        // 0x3bced0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcecc) {
            ctx->pc = 0x3BCF3Cu;
            goto label_3bcf3c;
        }
    }
    ctx->pc = 0x3BCED4u;
label_3bced4:
    // 0x3bced4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3bced8:
    if (ctx->pc == 0x3BCED8u) {
        ctx->pc = 0x3BCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCED4u;
        // 0x3bced8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCEDCu;
        goto label_3bcedc;
    }
    ctx->pc = 0x3BCED4u;
    {
        const bool branch_taken_0x3bced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bced4) {
            ctx->pc = 0x3BCED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BCED4u;
            // 0x3bced8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCF20u;
            goto label_3bcf20;
        }
    }
    ctx->pc = 0x3BCEDCu;
label_3bcedc:
    // 0x3bcedc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bcedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3bcee0:
    // 0x3bcee0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3bcee4:
    if (ctx->pc == 0x3BCEE4u) {
        ctx->pc = 0x3BCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEE0u;
        // 0x3bcee4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCEE8u;
        goto label_3bcee8;
    }
    ctx->pc = 0x3BCEE0u;
    {
        const bool branch_taken_0x3bcee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bcee0) {
            ctx->pc = 0x3BCEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BCEE0u;
            // 0x3bcee4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCF08u;
            goto label_3bcf08;
        }
    }
    ctx->pc = 0x3BCEE8u;
label_3bcee8:
    // 0x3bcee8: 0x8c82dcd8  lw          $v0, -0x2328($a0)
    ctx->pc = 0x3bcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958296)));
label_3bceec:
    // 0x3bceec: 0x10450039  beq         $v0, $a1, . + 4 + (0x39 << 2)
label_3bcef0:
    if (ctx->pc == 0x3BCEF0u) {
        ctx->pc = 0x3BCEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEECu;
        // 0x3bcef0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCEF4u;
        goto label_3bcef4;
    }
    ctx->pc = 0x3BCEECu;
    {
        const bool branch_taken_0x3bceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEECu;
        // 0x3bcef0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bceec) {
            ctx->pc = 0x3BCFD4u;
            goto label_3bcfd4;
        }
    }
    ctx->pc = 0x3BCEF4u;
label_3bcef4:
    // 0x3bcef4: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x3bcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_3bcef8:
    // 0x3bcef8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3bcef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bcefc:
    // 0x3bcefc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3bcefcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bcf00:
    // 0x3bcf00: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3bcf00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bcf04:
    // 0x3bcf04: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bcf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bcf08:
    // 0x3bcf08: 0x10450032  beq         $v0, $a1, . + 4 + (0x32 << 2)
label_3bcf0c:
    if (ctx->pc == 0x3BCF0Cu) {
        ctx->pc = 0x3BCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF08u;
        // 0x3bcf0c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF10u;
        goto label_3bcf10;
    }
    ctx->pc = 0x3BCF08u;
    {
        const bool branch_taken_0x3bcf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF08u;
        // 0x3bcf0c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf08) {
            ctx->pc = 0x3BCFD4u;
            goto label_3bcfd4;
        }
    }
    ctx->pc = 0x3BCF10u;
label_3bcf10:
    // 0x3bcf10: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x3bcf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_3bcf14:
    // 0x3bcf14: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x3bcf14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_3bcf18:
    // 0x3bcf18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3bcf18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3bcf1c:
    // 0x3bcf1c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3bcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3bcf20:
    // 0x3bcf20: 0x1045002c  beq         $v0, $a1, . + 4 + (0x2C << 2)
label_3bcf24:
    if (ctx->pc == 0x3BCF24u) {
        ctx->pc = 0x3BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF20u;
        // 0x3bcf24: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF28u;
        goto label_3bcf28;
    }
    ctx->pc = 0x3BCF20u;
    {
        const bool branch_taken_0x3bcf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF20u;
        // 0x3bcf24: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf20) {
            ctx->pc = 0x3BCFD4u;
            goto label_3bcfd4;
        }
    }
    ctx->pc = 0x3BCF28u;
label_3bcf28:
    // 0x3bcf28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3bcf28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3bcf2c:
    // 0x3bcf2c: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x3bcf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_3bcf30:
    // 0x3bcf30: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x3bcf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bcf34:
    // 0x3bcf34: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3bcf38:
    if (ctx->pc == 0x3BCF38u) {
        ctx->pc = 0x3BCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF34u;
        // 0x3bcf38: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF3Cu;
        goto label_3bcf3c;
    }
    ctx->pc = 0x3BCF34u;
    {
        const bool branch_taken_0x3bcf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF34u;
        // 0x3bcf38: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf34) {
            ctx->pc = 0x3BCF84u;
            goto label_3bcf84;
        }
    }
    ctx->pc = 0x3BCF3Cu;
label_3bcf3c:
    // 0x3bcf3c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3bcf3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3bcf40:
    // 0x3bcf40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bcf44:
    // 0x3bcf44: 0x10450023  beq         $v0, $a1, . + 4 + (0x23 << 2)
label_3bcf48:
    if (ctx->pc == 0x3BCF48u) {
        ctx->pc = 0x3BCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF44u;
        // 0x3bcf48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF4Cu;
        goto label_3bcf4c;
    }
    ctx->pc = 0x3BCF44u;
    {
        const bool branch_taken_0x3bcf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF44u;
        // 0x3bcf48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf44) {
            ctx->pc = 0x3BCFD4u;
            goto label_3bcfd4;
        }
    }
    ctx->pc = 0x3BCF4Cu;
label_3bcf4c:
    // 0x3bcf4c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3bcf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3bcf50:
    // 0x3bcf50: 0x10450020  beq         $v0, $a1, . + 4 + (0x20 << 2)
label_3bcf54:
    if (ctx->pc == 0x3BCF54u) {
        ctx->pc = 0x3BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF50u;
        // 0x3bcf54: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF58u;
        goto label_3bcf58;
    }
    ctx->pc = 0x3BCF50u;
    {
        const bool branch_taken_0x3bcf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF50u;
        // 0x3bcf54: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf50) {
            ctx->pc = 0x3BCFD4u;
            goto label_3bcfd4;
        }
    }
    ctx->pc = 0x3BCF58u;
label_3bcf58:
    // 0x3bcf58: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x3bcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3bcf5c:
    // 0x3bcf5c: 0x1045001d  beq         $v0, $a1, . + 4 + (0x1D << 2)
label_3bcf60:
    if (ctx->pc == 0x3BCF60u) {
        ctx->pc = 0x3BCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF5Cu;
        // 0x3bcf60: 0x24c40060  addiu       $a0, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF64u;
        goto label_3bcf64;
    }
    ctx->pc = 0x3BCF5Cu;
    {
        const bool branch_taken_0x3bcf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF5Cu;
        // 0x3bcf60: 0x24c40060  addiu       $a0, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf5c) {
            ctx->pc = 0x3BCFD4u;
            goto label_3bcfd4;
        }
    }
    ctx->pc = 0x3BCF64u;
label_3bcf64:
    // 0x3bcf64: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3bcf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_3bcf68:
    // 0x3bcf68: 0x1045001a  beq         $v0, $a1, . + 4 + (0x1A << 2)
label_3bcf6c:
    if (ctx->pc == 0x3BCF6Cu) {
        ctx->pc = 0x3BCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF68u;
        // 0x3bcf6c: 0x24c40090  addiu       $a0, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF70u;
        goto label_3bcf70;
    }
    ctx->pc = 0x3BCF68u;
    {
        const bool branch_taken_0x3bcf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF68u;
        // 0x3bcf6c: 0x24c40090  addiu       $a0, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf68) {
            ctx->pc = 0x3BCFD4u;
            goto label_3bcfd4;
        }
    }
    ctx->pc = 0x3BCF70u;
label_3bcf70:
    // 0x3bcf70: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3bcf70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3bcf74:
    // 0x3bcf74: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x3bcf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3bcf78:
    // 0x3bcf78: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x3bcf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3bcf7c:
    // 0x3bcf7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3bcf80:
    if (ctx->pc == 0x3BCF80u) {
        ctx->pc = 0x3BCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF7Cu;
        // 0x3bcf80: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF84u;
        goto label_3bcf84;
    }
    ctx->pc = 0x3BCF7Cu;
    {
        const bool branch_taken_0x3bcf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF7Cu;
        // 0x3bcf80: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf7c) {
            ctx->pc = 0x3BCF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bcf40;
        }
    }
    ctx->pc = 0x3BCF84u;
label_3bcf84:
    // 0x3bcf84: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x3bcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_3bcf88:
    // 0x3bcf88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3bcf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bcf8c:
    // 0x3bcf8c: 0xc1035f6  jal         func_40D7D8
label_3bcf90:
    if (ctx->pc == 0x3BCF90u) {
        ctx->pc = 0x3BCF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF8Cu;
        // 0x3bcf90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF94u;
        goto label_3bcf94;
    }
    ctx->pc = 0x3BCF8Cu;
    SET_GPR_U32(ctx, 31, 0x3BCF94u);
    ctx->pc = 0x3BCF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCF8Cu;
    // 0x3bcf90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BCF8Cu, 0x3BCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCF94u;
label_3bcf94:
    // 0x3bcf94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bcf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bcf98:
    // 0x3bcf98: 0xc103628  jal         func_40D8A0
label_3bcf9c:
    if (ctx->pc == 0x3BCF9Cu) {
        ctx->pc = 0x3BCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF98u;
        // 0x3bcf9c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFA0u;
        goto label_3bcfa0;
    }
    ctx->pc = 0x3BCF98u;
    SET_GPR_U32(ctx, 31, 0x3BCFA0u);
    ctx->pc = 0x3BCF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCF98u;
    // 0x3bcf9c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BCF98u, 0x3BCFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCFA0u;
label_3bcfa0:
    // 0x3bcfa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bcfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcfa4:
    // 0x3bcfa4: 0x0  nop
    ctx->pc = 0x3bcfa4u;
    // NOP
label_3bcfa8:
    // 0x3bcfa8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_3bcfac:
    if (ctx->pc == 0x3BCFACu) {
        ctx->pc = 0x3BCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFA8u;
        // 0x3bcfac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFB0u;
        goto label_3bcfb0;
    }
    ctx->pc = 0x3BCFA8u;
    {
        const bool branch_taken_0x3bcfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFA8u;
        // 0x3bcfac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfa8) {
            ctx->pc = 0x3BCFDCu;
            goto label_3bcfdc;
        }
    }
    ctx->pc = 0x3BCFB0u;
label_3bcfb0:
    // 0x3bcfb0: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x3bcfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_3bcfb4:
    // 0x3bcfb4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3bcfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3bcfb8:
    // 0x3bcfb8: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x3bcfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3bcfbc:
    // 0x3bcfbc: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3bcfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3bcfc0:
    // 0x3bcfc0: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x3bcfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
label_3bcfc4:
    // 0x3bcfc4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x3bcfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_3bcfc8:
    // 0x3bcfc8: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x3bcfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
label_3bcfcc:
    // 0x3bcfcc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3bcfd0:
    if (ctx->pc == 0x3BCFD0u) {
        ctx->pc = 0x3BCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFCCu;
        // 0x3bcfd0: 0xae050044  sw          $a1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFD4u;
        goto label_3bcfd4;
    }
    ctx->pc = 0x3BCFCCu;
    {
        const bool branch_taken_0x3bcfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFCCu;
        // 0x3bcfd0: 0xae050044  sw          $a1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfcc) {
            ctx->pc = 0x3BCFE0u;
            goto label_3bcfe0;
        }
    }
    ctx->pc = 0x3BCFD4u;
label_3bcfd4:
    // 0x3bcfd4: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_3bcfd8:
    if (ctx->pc == 0x3BCFD8u) {
        ctx->pc = 0x3BCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFD4u;
        // 0x3bcfd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFDCu;
        goto label_3bcfdc;
    }
    ctx->pc = 0x3BCFD4u;
    {
        const bool branch_taken_0x3bcfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFD4u;
        // 0x3bcfd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfd4) {
            ctx->pc = 0x3BCFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bcfa8;
        }
    }
    ctx->pc = 0x3BCFDCu;
label_3bcfdc:
    // 0x3bcfdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bcfdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcfe0:
    // 0x3bcfe0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3bcfe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bcfe4:
    // 0x3bcfe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bcfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bcfe8:
    // 0x3bcfe8: 0x3e00008  jr          $ra
label_3bcfec:
    if (ctx->pc == 0x3BCFECu) {
        ctx->pc = 0x3BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFE8u;
        // 0x3bcfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFF0u;
        goto label_3bcff0;
    }
    ctx->pc = 0x3BCFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFE8u;
        // 0x3bcfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCFF0u;
label_3bcff0:
    // 0x3bcff0: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x3bcff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
label_3bcff4:
    // 0x3bcff4: 0x3e00008  jr          $ra
label_3bcff8:
    if (ctx->pc == 0x3BCFF8u) {
        ctx->pc = 0x3BCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFF4u;
        // 0x3bcff8: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFFCu;
        goto label_3bcffc;
    }
    ctx->pc = 0x3BCFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFF4u;
        // 0x3bcff8: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCFFCu;
label_3bcffc:
    // 0x3bcffc: 0x0  nop
    ctx->pc = 0x3bcffcu;
    // NOP
label_3bd000:
    // 0x3bd000: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x3bd000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
label_3bd004:
    // 0x3bd004: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x3bd004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_3bd008:
    // 0x3bd008: 0x3e00008  jr          $ra
label_3bd00c:
    if (ctx->pc == 0x3BD00Cu) {
        ctx->pc = 0x3BD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD008u;
        // 0x3bd00c: 0xe48c0014  swc1        $f12, 0x14($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD010u;
        goto label_fallthrough_0x3bd008;
    }
    ctx->pc = 0x3BD008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD008u;
        // 0x3bd00c: 0xe48c0014  swc1        $f12, 0x14($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bd008:
    ctx->pc = 0x3BD010u;
}
