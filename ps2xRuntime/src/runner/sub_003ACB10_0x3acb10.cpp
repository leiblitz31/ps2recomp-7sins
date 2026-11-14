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

// Function: sub_003ACB10
// Address: 0x3acb10 - 0x3acc68
void sub_003ACB10_0x3acb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACB10_0x3acb10");
#endif

    switch (ctx->pc) {
        case 0x3acb10u: goto label_3acb10;
        case 0x3acb14u: goto label_3acb14;
        case 0x3acb18u: goto label_3acb18;
        case 0x3acb1cu: goto label_3acb1c;
        case 0x3acb20u: goto label_3acb20;
        case 0x3acb24u: goto label_3acb24;
        case 0x3acb28u: goto label_3acb28;
        case 0x3acb2cu: goto label_3acb2c;
        case 0x3acb30u: goto label_3acb30;
        case 0x3acb34u: goto label_3acb34;
        case 0x3acb38u: goto label_3acb38;
        case 0x3acb3cu: goto label_3acb3c;
        case 0x3acb40u: goto label_3acb40;
        case 0x3acb44u: goto label_3acb44;
        case 0x3acb48u: goto label_3acb48;
        case 0x3acb4cu: goto label_3acb4c;
        case 0x3acb50u: goto label_3acb50;
        case 0x3acb54u: goto label_3acb54;
        case 0x3acb58u: goto label_3acb58;
        case 0x3acb5cu: goto label_3acb5c;
        case 0x3acb60u: goto label_3acb60;
        case 0x3acb64u: goto label_3acb64;
        case 0x3acb68u: goto label_3acb68;
        case 0x3acb6cu: goto label_3acb6c;
        case 0x3acb70u: goto label_3acb70;
        case 0x3acb74u: goto label_3acb74;
        case 0x3acb78u: goto label_3acb78;
        case 0x3acb7cu: goto label_3acb7c;
        case 0x3acb80u: goto label_3acb80;
        case 0x3acb84u: goto label_3acb84;
        case 0x3acb88u: goto label_3acb88;
        case 0x3acb8cu: goto label_3acb8c;
        case 0x3acb90u: goto label_3acb90;
        case 0x3acb94u: goto label_3acb94;
        case 0x3acb98u: goto label_3acb98;
        case 0x3acb9cu: goto label_3acb9c;
        case 0x3acba0u: goto label_3acba0;
        case 0x3acba4u: goto label_3acba4;
        case 0x3acba8u: goto label_3acba8;
        case 0x3acbacu: goto label_3acbac;
        case 0x3acbb0u: goto label_3acbb0;
        case 0x3acbb4u: goto label_3acbb4;
        case 0x3acbb8u: goto label_3acbb8;
        case 0x3acbbcu: goto label_3acbbc;
        case 0x3acbc0u: goto label_3acbc0;
        case 0x3acbc4u: goto label_3acbc4;
        case 0x3acbc8u: goto label_3acbc8;
        case 0x3acbccu: goto label_3acbcc;
        case 0x3acbd0u: goto label_3acbd0;
        case 0x3acbd4u: goto label_3acbd4;
        case 0x3acbd8u: goto label_3acbd8;
        case 0x3acbdcu: goto label_3acbdc;
        case 0x3acbe0u: goto label_3acbe0;
        case 0x3acbe4u: goto label_3acbe4;
        case 0x3acbe8u: goto label_3acbe8;
        case 0x3acbecu: goto label_3acbec;
        case 0x3acbf0u: goto label_3acbf0;
        case 0x3acbf4u: goto label_3acbf4;
        case 0x3acbf8u: goto label_3acbf8;
        case 0x3acbfcu: goto label_3acbfc;
        case 0x3acc00u: goto label_3acc00;
        case 0x3acc04u: goto label_3acc04;
        case 0x3acc08u: goto label_3acc08;
        case 0x3acc0cu: goto label_3acc0c;
        case 0x3acc10u: goto label_3acc10;
        case 0x3acc14u: goto label_3acc14;
        case 0x3acc18u: goto label_3acc18;
        case 0x3acc1cu: goto label_3acc1c;
        case 0x3acc20u: goto label_3acc20;
        case 0x3acc24u: goto label_3acc24;
        case 0x3acc28u: goto label_3acc28;
        case 0x3acc2cu: goto label_3acc2c;
        case 0x3acc30u: goto label_3acc30;
        case 0x3acc34u: goto label_3acc34;
        case 0x3acc38u: goto label_3acc38;
        case 0x3acc3cu: goto label_3acc3c;
        case 0x3acc40u: goto label_3acc40;
        case 0x3acc44u: goto label_3acc44;
        case 0x3acc48u: goto label_3acc48;
        case 0x3acc4cu: goto label_3acc4c;
        case 0x3acc50u: goto label_3acc50;
        case 0x3acc54u: goto label_3acc54;
        case 0x3acc58u: goto label_3acc58;
        case 0x3acc5cu: goto label_3acc5c;
        case 0x3acc60u: goto label_3acc60;
        case 0x3acc64u: goto label_3acc64;
        default: break;
    }

    ctx->pc = 0x3acb10u;

label_3acb10:
    // 0x3acb10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3acb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3acb14:
    // 0x3acb14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3acb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3acb18:
    // 0x3acb18: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3acb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3acb1c:
    // 0x3acb1c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3acb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3acb20:
    // 0x3acb20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3acb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acb24:
    // 0x3acb24: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3acb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3acb28:
    // 0x3acb28: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3acb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3acb2c:
    // 0x3acb2c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3acb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3acb30:
    // 0x3acb30: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3acb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3acb34:
    // 0x3acb34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3acb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3acb38:
    // 0x3acb38: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3acb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3acb3c:
    // 0x3acb3c: 0x8c500518  lw          $s0, 0x518($v0)
    ctx->pc = 0x3acb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
label_3acb40:
    // 0x3acb40: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3acb44:
    if (ctx->pc == 0x3ACB44u) {
        ctx->pc = 0x3ACB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB40u;
        // 0x3acb44: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB48u;
        goto label_3acb48;
    }
    ctx->pc = 0x3ACB40u;
    {
        const bool branch_taken_0x3acb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB40u;
        // 0x3acb44: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb40) {
            ctx->pc = 0x3ACB78u;
            goto label_3acb78;
        }
    }
    ctx->pc = 0x3ACB48u;
label_3acb48:
    // 0x3acb48: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3acb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3acb4c:
    // 0x3acb4c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3acb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3acb50:
    // 0x3acb50: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x3acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_3acb54:
    // 0x3acb54: 0x0  nop
    ctx->pc = 0x3acb54u;
    // NOP
label_3acb58:
    // 0x3acb58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3acb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3acb5c:
    // 0x3acb5c: 0x40f809  jalr        $v0
label_3acb60:
    if (ctx->pc == 0x3ACB60u) {
        ctx->pc = 0x3ACB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB5Cu;
        // 0x3acb60: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB64u;
        goto label_3acb64;
    }
    ctx->pc = 0x3ACB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACB64u);
        ctx->pc = 0x3ACB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB5Cu;
        // 0x3acb60: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB5Cu, 0x3ACB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACB64u;
label_3acb64:
    // 0x3acb64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3acb68:
    if (ctx->pc == 0x3ACB68u) {
        ctx->pc = 0x3ACB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB64u;
        // 0x3acb68: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB6Cu;
        goto label_3acb6c;
    }
    ctx->pc = 0x3ACB64u;
    {
        const bool branch_taken_0x3acb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB64u;
        // 0x3acb68: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb64) {
            ctx->pc = 0x3ACB7Cu;
            goto label_3acb7c;
        }
    }
    ctx->pc = 0x3ACB6Cu;
label_3acb6c:
    // 0x3acb6c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x3acb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3acb70:
    // 0x3acb70: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_3acb74:
    if (ctx->pc == 0x3ACB74u) {
        ctx->pc = 0x3ACB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB70u;
        // 0x3acb74: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB78u;
        goto label_3acb78;
    }
    ctx->pc = 0x3ACB70u;
    {
        const bool branch_taken_0x3acb70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acb70) {
            ctx->pc = 0x3ACB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACB70u;
            // 0x3acb74: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acb58;
        }
    }
    ctx->pc = 0x3ACB78u;
label_3acb78:
    // 0x3acb78: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3acb78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acb7c:
    // 0x3acb7c: 0x16a00029  bnez        $s5, . + 4 + (0x29 << 2)
label_3acb80:
    if (ctx->pc == 0x3ACB80u) {
        ctx->pc = 0x3ACB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB7Cu;
        // 0x3acb80: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB84u;
        goto label_3acb84;
    }
    ctx->pc = 0x3ACB7Cu;
    {
        const bool branch_taken_0x3acb7c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB7Cu;
        // 0x3acb80: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb7c) {
            ctx->pc = 0x3ACC24u;
            goto label_3acc24;
        }
    }
    ctx->pc = 0x3ACB84u;
label_3acb84:
    // 0x3acb84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3acb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3acb88:
    // 0x3acb88: 0x2674ce80  addiu       $s4, $s3, -0x3180
    ctx->pc = 0x3acb88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3acb8c:
    // 0x3acb8c: 0xc107150  jal         func_41C540
label_3acb90:
    if (ctx->pc == 0x3ACB90u) {
        ctx->pc = 0x3ACB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB8Cu;
        // 0x3acb90: 0x2453e880  addiu       $s3, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB94u;
        goto label_3acb94;
    }
    ctx->pc = 0x3ACB8Cu;
    SET_GPR_U32(ctx, 31, 0x3ACB94u);
    ctx->pc = 0x3ACB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACB8Cu;
    // 0x3acb90: 0x2453e880  addiu       $s3, $v0, -0x1780 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C540u, 0x3ACB8Cu, 0x3ACB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACB94u;
label_3acb94:
    // 0x3acb94: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x3acb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_3acb98:
    // 0x3acb98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3acb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3acb9c:
    // 0x3acb9c: 0x60f809  jalr        $v1
label_3acba0:
    if (ctx->pc == 0x3ACBA0u) {
        ctx->pc = 0x3ACBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB9Cu;
        // 0x3acba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBA4u;
        goto label_3acba4;
    }
    ctx->pc = 0x3ACB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACBA4u);
        ctx->pc = 0x3ACBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB9Cu;
        // 0x3acba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB9Cu, 0x3ACBA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACBA4u;
label_3acba4:
    // 0x3acba4: 0x8e820c18  lw          $v0, 0xC18($s4)
    ctx->pc = 0x3acba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3096)));
label_3acba8:
    // 0x3acba8: 0x40f809  jalr        $v0
label_3acbac:
    if (ctx->pc == 0x3ACBACu) {
        ctx->pc = 0x3ACBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBA8u;
        // 0x3acbac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBB0u;
        goto label_3acbb0;
    }
    ctx->pc = 0x3ACBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACBB0u);
        ctx->pc = 0x3ACBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBA8u;
        // 0x3acbac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACBA8u, 0x3ACBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACBB0u;
label_3acbb0:
    // 0x3acbb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3acbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acbb4:
    // 0x3acbb4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_3acbb8:
    if (ctx->pc == 0x3ACBB8u) {
        ctx->pc = 0x3ACBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBB4u;
        // 0x3acbb8: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBBCu;
        goto label_3acbbc;
    }
    ctx->pc = 0x3ACBB4u;
    {
        const bool branch_taken_0x3acbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBB4u;
        // 0x3acbb8: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbb4) {
            ctx->pc = 0x3ACC18u;
            goto label_3acc18;
        }
    }
    ctx->pc = 0x3ACBBCu;
label_3acbbc:
    // 0x3acbbc: 0x8e840514  lw          $a0, 0x514($s4)
    ctx->pc = 0x3acbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1300)));
label_3acbc0:
    // 0x3acbc0: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x3acbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_3acbc4:
    // 0x3acbc4: 0x40f809  jalr        $v0
label_3acbc8:
    if (ctx->pc == 0x3ACBC8u) {
        ctx->pc = 0x3ACBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBC4u;
        // 0x3acbc8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBCCu;
        goto label_3acbcc;
    }
    ctx->pc = 0x3ACBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACBCCu);
        ctx->pc = 0x3ACBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBC4u;
        // 0x3acbc8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACBC4u, 0x3ACBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACBCCu;
label_3acbcc:
    // 0x3acbcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3acbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acbd0:
    // 0x3acbd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3acbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3acbd4:
    // 0x3acbd4: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x3acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_3acbd8:
    // 0x3acbd8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3acbd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acbdc:
    // 0x3acbdc: 0x40f809  jalr        $v0
label_3acbe0:
    if (ctx->pc == 0x3ACBE0u) {
        ctx->pc = 0x3ACBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBDCu;
        // 0x3acbe0: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBE4u;
        goto label_3acbe4;
    }
    ctx->pc = 0x3ACBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACBE4u);
        ctx->pc = 0x3ACBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBDCu;
        // 0x3acbe0: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACBDCu, 0x3ACBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACBE4u;
label_3acbe4:
    // 0x3acbe4: 0x8e630108  lw          $v1, 0x108($s3)
    ctx->pc = 0x3acbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_3acbe8:
    // 0x3acbe8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3acbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3acbec:
    // 0x3acbec: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3acbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3acbf0:
    // 0x3acbf0: 0x60f809  jalr        $v1
label_3acbf4:
    if (ctx->pc == 0x3ACBF4u) {
        ctx->pc = 0x3ACBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBF0u;
        // 0x3acbf4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBF8u;
        goto label_3acbf8;
    }
    ctx->pc = 0x3ACBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACBF8u);
        ctx->pc = 0x3ACBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBF0u;
        // 0x3acbf4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACBF0u, 0x3ACBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACBF8u;
label_3acbf8:
    // 0x3acbf8: 0x8e6600cc  lw          $a2, 0xCC($s3)
    ctx->pc = 0x3acbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_3acbfc:
    // 0x3acbfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3acbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acc00:
    // 0x3acc00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3acc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3acc04:
    // 0x3acc04: 0xc0f809  jalr        $a2
label_3acc08:
    if (ctx->pc == 0x3ACC08u) {
        ctx->pc = 0x3ACC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC04u;
        // 0x3acc08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC0Cu;
        goto label_3acc0c;
    }
    ctx->pc = 0x3ACC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3ACC0Cu);
        ctx->pc = 0x3ACC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC04u;
        // 0x3acc08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACC04u, 0x3ACC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACC0Cu;
label_3acc0c:
    // 0x3acc0c: 0x8e830518  lw          $v1, 0x518($s4)
    ctx->pc = 0x3acc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
label_3acc10:
    // 0x3acc10: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3acc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3acc14:
    // 0x3acc14: 0xae900518  sw          $s0, 0x518($s4)
    ctx->pc = 0x3acc14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1304), GPR_U32(ctx, 16));
label_3acc18:
    // 0x3acc18: 0xc107156  jal         func_41C558
label_3acc1c:
    if (ctx->pc == 0x3ACC1Cu) {
        ctx->pc = 0x3ACC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC18u;
        // 0x3acc1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC20u;
        goto label_3acc20;
    }
    ctx->pc = 0x3ACC18u;
    SET_GPR_U32(ctx, 31, 0x3ACC20u);
    ctx->pc = 0x3ACC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC18u;
    // 0x3acc1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x3ACC18u, 0x3ACC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC20u;
label_3acc20:
    // 0x3acc20: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3acc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3acc24:
    // 0x3acc24: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3acc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3acc28:
    // 0x3acc28: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3acc28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3acc2c:
    // 0x3acc2c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3acc2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3acc30:
    // 0x3acc30: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3acc30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3acc34:
    // 0x3acc34: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3acc34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3acc38:
    // 0x3acc38: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3acc38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3acc3c:
    // 0x3acc3c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3acc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3acc40:
    // 0x3acc40: 0x3e00008  jr          $ra
label_3acc44:
    if (ctx->pc == 0x3ACC44u) {
        ctx->pc = 0x3ACC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC40u;
        // 0x3acc44: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC48u;
        goto label_3acc48;
    }
    ctx->pc = 0x3ACC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC40u;
        // 0x3acc44: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACC48u;
label_3acc48:
    // 0x3acc48: 0xaf84aaf8  sw          $a0, -0x5508($gp)
    ctx->pc = 0x3acc48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945528), GPR_U32(ctx, 4));
label_3acc4c:
    // 0x3acc4c: 0x3e00008  jr          $ra
label_3acc50:
    if (ctx->pc == 0x3ACC50u) {
        ctx->pc = 0x3ACC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC4Cu;
        // 0x3acc50: 0xaf85aafc  sw          $a1, -0x5504($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945532), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC54u;
        goto label_3acc54;
    }
    ctx->pc = 0x3ACC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC4Cu;
        // 0x3acc50: 0xaf85aafc  sw          $a1, -0x5504($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945532), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACC54u;
label_3acc54:
    // 0x3acc54: 0x0  nop
    ctx->pc = 0x3acc54u;
    // NOP
label_3acc58:
    // 0x3acc58: 0xaf84ab00  sw          $a0, -0x5500($gp)
    ctx->pc = 0x3acc58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945536), GPR_U32(ctx, 4));
label_3acc5c:
    // 0x3acc5c: 0x3e00008  jr          $ra
label_3acc60:
    if (ctx->pc == 0x3ACC60u) {
        ctx->pc = 0x3ACC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC5Cu;
        // 0x3acc60: 0xaf85ab04  sw          $a1, -0x54FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945540), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC64u;
        goto label_3acc64;
    }
    ctx->pc = 0x3ACC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC5Cu;
        // 0x3acc60: 0xaf85ab04  sw          $a1, -0x54FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945540), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACC64u;
label_3acc64:
    // 0x3acc64: 0x0  nop
    ctx->pc = 0x3acc64u;
    // NOP
    ctx->pc = 0x3acc68u;
}
