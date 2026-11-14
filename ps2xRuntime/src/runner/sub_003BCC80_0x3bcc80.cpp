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

// Function: sub_003BCC80
// Address: 0x3bcc80 - 0x3bcd58
void sub_003BCC80_0x3bcc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCC80_0x3bcc80");
#endif

    switch (ctx->pc) {
        case 0x3bcc80u: goto label_3bcc80;
        case 0x3bcc84u: goto label_3bcc84;
        case 0x3bcc88u: goto label_3bcc88;
        case 0x3bcc8cu: goto label_3bcc8c;
        case 0x3bcc90u: goto label_3bcc90;
        case 0x3bcc94u: goto label_3bcc94;
        case 0x3bcc98u: goto label_3bcc98;
        case 0x3bcc9cu: goto label_3bcc9c;
        case 0x3bcca0u: goto label_3bcca0;
        case 0x3bcca4u: goto label_3bcca4;
        case 0x3bcca8u: goto label_3bcca8;
        case 0x3bccacu: goto label_3bccac;
        case 0x3bccb0u: goto label_3bccb0;
        case 0x3bccb4u: goto label_3bccb4;
        case 0x3bccb8u: goto label_3bccb8;
        case 0x3bccbcu: goto label_3bccbc;
        case 0x3bccc0u: goto label_3bccc0;
        case 0x3bccc4u: goto label_3bccc4;
        case 0x3bccc8u: goto label_3bccc8;
        case 0x3bccccu: goto label_3bcccc;
        case 0x3bccd0u: goto label_3bccd0;
        case 0x3bccd4u: goto label_3bccd4;
        case 0x3bccd8u: goto label_3bccd8;
        case 0x3bccdcu: goto label_3bccdc;
        case 0x3bcce0u: goto label_3bcce0;
        case 0x3bcce4u: goto label_3bcce4;
        case 0x3bcce8u: goto label_3bcce8;
        case 0x3bccecu: goto label_3bccec;
        case 0x3bccf0u: goto label_3bccf0;
        case 0x3bccf4u: goto label_3bccf4;
        case 0x3bccf8u: goto label_3bccf8;
        case 0x3bccfcu: goto label_3bccfc;
        case 0x3bcd00u: goto label_3bcd00;
        case 0x3bcd04u: goto label_3bcd04;
        case 0x3bcd08u: goto label_3bcd08;
        case 0x3bcd0cu: goto label_3bcd0c;
        case 0x3bcd10u: goto label_3bcd10;
        case 0x3bcd14u: goto label_3bcd14;
        case 0x3bcd18u: goto label_3bcd18;
        case 0x3bcd1cu: goto label_3bcd1c;
        case 0x3bcd20u: goto label_3bcd20;
        case 0x3bcd24u: goto label_3bcd24;
        case 0x3bcd28u: goto label_3bcd28;
        case 0x3bcd2cu: goto label_3bcd2c;
        case 0x3bcd30u: goto label_3bcd30;
        case 0x3bcd34u: goto label_3bcd34;
        case 0x3bcd38u: goto label_3bcd38;
        case 0x3bcd3cu: goto label_3bcd3c;
        case 0x3bcd40u: goto label_3bcd40;
        case 0x3bcd44u: goto label_3bcd44;
        case 0x3bcd48u: goto label_3bcd48;
        case 0x3bcd4cu: goto label_3bcd4c;
        case 0x3bcd50u: goto label_3bcd50;
        case 0x3bcd54u: goto label_3bcd54;
        default: break;
    }

    ctx->pc = 0x3bcc80u;

label_3bcc80:
    // 0x3bcc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bcc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3bcc84:
    // 0x3bcc84: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3bcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3bcc88:
    // 0x3bcc88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bcc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3bcc8c:
    // 0x3bcc8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3bcc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3bcc90:
    // 0x3bcc90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bcc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bcc94:
    // 0x3bcc94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bcc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bcc98:
    // 0x3bcc98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bcc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3bcc9c:
    // 0x3bcc9c: 0xc0ef356  jal         func_3BCD58
label_3bcca0:
    if (ctx->pc == 0x3BCCA0u) {
        ctx->pc = 0x3BCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCC9Cu;
        // 0x3bcca0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCCA4u;
        goto label_3bcca4;
    }
    ctx->pc = 0x3BCC9Cu;
    SET_GPR_U32(ctx, 31, 0x3BCCA4u);
    ctx->pc = 0x3BCCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCC9Cu;
    // 0x3bcca0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD58u, 0x3BCC9Cu, 0x3BCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCCA4u;
label_3bcca4:
    // 0x3bcca4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3bcca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_3bcca8:
    // 0x3bcca8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3bcca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bccac:
    // 0x3bccac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bccb0:
    // 0x3bccb0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3bccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3bccb4:
    // 0x3bccb4: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x3bccb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3bccb8:
    // 0x3bccb8: 0xc103404  jal         func_40D010
label_3bccbc:
    if (ctx->pc == 0x3BCCBCu) {
        ctx->pc = 0x3BCCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCB8u;
        // 0x3bccbc: 0x34e77002  ori         $a3, $a3, 0x7002 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCCC0u;
        goto label_3bccc0;
    }
    ctx->pc = 0x3BCCB8u;
    SET_GPR_U32(ctx, 31, 0x3BCCC0u);
    ctx->pc = 0x3BCCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCCB8u;
    // 0x3bccbc: 0x34e77002  ori         $a3, $a3, 0x7002 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3BCCB8u, 0x3BCCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCCC0u;
label_3bccc0:
    // 0x3bccc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bccc4:
    // 0x3bccc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3bccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bccc8:
    // 0x3bccc8: 0xc103440  jal         func_40D100
label_3bcccc:
    if (ctx->pc == 0x3BCCCCu) {
        ctx->pc = 0x3BCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCC8u;
        // 0x3bcccc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCCD0u;
        goto label_3bccd0;
    }
    ctx->pc = 0x3BCCC8u;
    SET_GPR_U32(ctx, 31, 0x3BCCD0u);
    ctx->pc = 0x3BCCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCCC8u;
    // 0x3bcccc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BCCC8u, 0x3BCCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCCD0u;
label_3bccd0:
    // 0x3bccd0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3bccd4:
    if (ctx->pc == 0x3BCCD4u) {
        ctx->pc = 0x3BCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCD0u;
        // 0x3bccd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCCD8u;
        goto label_3bccd8;
    }
    ctx->pc = 0x3BCCD0u;
    {
        const bool branch_taken_0x3bccd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCD0u;
        // 0x3bccd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bccd0) {
            ctx->pc = 0x3BCD40u;
            goto label_3bcd40;
        }
    }
    ctx->pc = 0x3BCCD8u;
label_3bccd8:
    // 0x3bccd8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3bccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bccdc:
    // 0x3bccdc: 0xc103440  jal         func_40D100
label_3bcce0:
    if (ctx->pc == 0x3BCCE0u) {
        ctx->pc = 0x3BCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCDCu;
        // 0x3bcce0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCCE4u;
        goto label_3bcce4;
    }
    ctx->pc = 0x3BCCDCu;
    SET_GPR_U32(ctx, 31, 0x3BCCE4u);
    ctx->pc = 0x3BCCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCCDCu;
    // 0x3bcce0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BCCDCu, 0x3BCCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCCE4u;
label_3bcce4:
    // 0x3bcce4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3bcce8:
    if (ctx->pc == 0x3BCCE8u) {
        ctx->pc = 0x3BCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCE4u;
        // 0x3bcce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCCECu;
        goto label_3bccec;
    }
    ctx->pc = 0x3BCCE4u;
    {
        const bool branch_taken_0x3bcce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCE4u;
        // 0x3bcce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcce4) {
            ctx->pc = 0x3BCD40u;
            goto label_3bcd40;
        }
    }
    ctx->pc = 0x3BCCECu;
label_3bccec:
    // 0x3bccec: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x3bccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3bccf0:
    // 0x3bccf0: 0xc103440  jal         func_40D100
label_3bccf4:
    if (ctx->pc == 0x3BCCF4u) {
        ctx->pc = 0x3BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCF0u;
        // 0x3bccf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCCF8u;
        goto label_3bccf8;
    }
    ctx->pc = 0x3BCCF0u;
    SET_GPR_U32(ctx, 31, 0x3BCCF8u);
    ctx->pc = 0x3BCCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCCF0u;
    // 0x3bccf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BCCF0u, 0x3BCCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCCF8u;
label_3bccf8:
    // 0x3bccf8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3bccfc:
    if (ctx->pc == 0x3BCCFCu) {
        ctx->pc = 0x3BCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCF8u;
        // 0x3bccfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD00u;
        goto label_3bcd00;
    }
    ctx->pc = 0x3BCCF8u;
    {
        const bool branch_taken_0x3bccf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCF8u;
        // 0x3bccfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bccf8) {
            ctx->pc = 0x3BCD40u;
            goto label_3bcd40;
        }
    }
    ctx->pc = 0x3BCD00u;
label_3bcd00:
    // 0x3bcd00: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x3bcd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3bcd04:
    // 0x3bcd04: 0xc103440  jal         func_40D100
label_3bcd08:
    if (ctx->pc == 0x3BCD08u) {
        ctx->pc = 0x3BCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD04u;
        // 0x3bcd08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD0Cu;
        goto label_3bcd0c;
    }
    ctx->pc = 0x3BCD04u;
    SET_GPR_U32(ctx, 31, 0x3BCD0Cu);
    ctx->pc = 0x3BCD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCD04u;
    // 0x3bcd08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BCD04u, 0x3BCD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCD0Cu;
label_3bcd0c:
    // 0x3bcd0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3bcd10:
    if (ctx->pc == 0x3BCD10u) {
        ctx->pc = 0x3BCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD0Cu;
        // 0x3bcd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD14u;
        goto label_3bcd14;
    }
    ctx->pc = 0x3BCD0Cu;
    {
        const bool branch_taken_0x3bcd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD0Cu;
        // 0x3bcd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcd0c) {
            ctx->pc = 0x3BCD40u;
            goto label_3bcd40;
        }
    }
    ctx->pc = 0x3BCD14u;
label_3bcd14:
    // 0x3bcd14: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x3bcd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3bcd18:
    // 0x3bcd18: 0xc10341a  jal         func_40D068
label_3bcd1c:
    if (ctx->pc == 0x3BCD1Cu) {
        ctx->pc = 0x3BCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD18u;
        // 0x3bcd1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD20u;
        goto label_3bcd20;
    }
    ctx->pc = 0x3BCD18u;
    SET_GPR_U32(ctx, 31, 0x3BCD20u);
    ctx->pc = 0x3BCD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCD18u;
    // 0x3bcd1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3BCD18u, 0x3BCD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCD20u;
label_3bcd20:
    // 0x3bcd20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3bcd24:
    if (ctx->pc == 0x3BCD24u) {
        ctx->pc = 0x3BCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD20u;
        // 0x3bcd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD28u;
        goto label_3bcd28;
    }
    ctx->pc = 0x3BCD20u;
    {
        const bool branch_taken_0x3bcd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD20u;
        // 0x3bcd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcd20) {
            ctx->pc = 0x3BCD40u;
            goto label_3bcd40;
        }
    }
    ctx->pc = 0x3BCD28u;
label_3bcd28:
    // 0x3bcd28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3bcd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bcd2c:
    // 0x3bcd2c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3bcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3bcd30:
    // 0x3bcd30: 0x40f809  jalr        $v0
label_3bcd34:
    if (ctx->pc == 0x3BCD34u) {
        ctx->pc = 0x3BCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD30u;
        // 0x3bcd34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD38u;
        goto label_3bcd38;
    }
    ctx->pc = 0x3BCD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BCD38u);
        ctx->pc = 0x3BCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD30u;
        // 0x3bcd34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCD30u, 0x3BCD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BCD38u;
label_3bcd38:
    // 0x3bcd38: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bcd3c:
    if (ctx->pc == 0x3BCD3Cu) {
        ctx->pc = 0x3BCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD38u;
        // 0x3bcd3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD40u;
        goto label_3bcd40;
    }
    ctx->pc = 0x3BCD38u;
    {
        const bool branch_taken_0x3bcd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD38u;
        // 0x3bcd3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcd38) {
            ctx->pc = 0x3BCD44u;
            goto label_3bcd44;
        }
    }
    ctx->pc = 0x3BCD40u;
label_3bcd40:
    // 0x3bcd40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bcd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcd44:
    // 0x3bcd44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3bcd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bcd48:
    // 0x3bcd48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bcd48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bcd4c:
    // 0x3bcd4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bcd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bcd50:
    // 0x3bcd50: 0x3e00008  jr          $ra
label_3bcd54:
    if (ctx->pc == 0x3BCD54u) {
        ctx->pc = 0x3BCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD50u;
        // 0x3bcd54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD58u;
        goto label_fallthrough_0x3bcd50;
    }
    ctx->pc = 0x3BCD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD50u;
        // 0x3bcd54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bcd50:
    ctx->pc = 0x3BCD58u;
}
