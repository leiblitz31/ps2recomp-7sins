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

// Function: sub_0038EA10
// Address: 0x38ea10 - 0x38ec50
void sub_0038EA10_0x38ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EA10_0x38ea10");
#endif

    switch (ctx->pc) {
        case 0x38ea10u: goto label_38ea10;
        case 0x38ea14u: goto label_38ea14;
        case 0x38ea18u: goto label_38ea18;
        case 0x38ea1cu: goto label_38ea1c;
        case 0x38ea20u: goto label_38ea20;
        case 0x38ea24u: goto label_38ea24;
        case 0x38ea28u: goto label_38ea28;
        case 0x38ea2cu: goto label_38ea2c;
        case 0x38ea30u: goto label_38ea30;
        case 0x38ea34u: goto label_38ea34;
        case 0x38ea38u: goto label_38ea38;
        case 0x38ea3cu: goto label_38ea3c;
        case 0x38ea40u: goto label_38ea40;
        case 0x38ea44u: goto label_38ea44;
        case 0x38ea48u: goto label_38ea48;
        case 0x38ea4cu: goto label_38ea4c;
        case 0x38ea50u: goto label_38ea50;
        case 0x38ea54u: goto label_38ea54;
        case 0x38ea58u: goto label_38ea58;
        case 0x38ea5cu: goto label_38ea5c;
        case 0x38ea60u: goto label_38ea60;
        case 0x38ea64u: goto label_38ea64;
        case 0x38ea68u: goto label_38ea68;
        case 0x38ea6cu: goto label_38ea6c;
        case 0x38ea70u: goto label_38ea70;
        case 0x38ea74u: goto label_38ea74;
        case 0x38ea78u: goto label_38ea78;
        case 0x38ea7cu: goto label_38ea7c;
        case 0x38ea80u: goto label_38ea80;
        case 0x38ea84u: goto label_38ea84;
        case 0x38ea88u: goto label_38ea88;
        case 0x38ea8cu: goto label_38ea8c;
        case 0x38ea90u: goto label_38ea90;
        case 0x38ea94u: goto label_38ea94;
        case 0x38ea98u: goto label_38ea98;
        case 0x38ea9cu: goto label_38ea9c;
        case 0x38eaa0u: goto label_38eaa0;
        case 0x38eaa4u: goto label_38eaa4;
        case 0x38eaa8u: goto label_38eaa8;
        case 0x38eaacu: goto label_38eaac;
        case 0x38eab0u: goto label_38eab0;
        case 0x38eab4u: goto label_38eab4;
        case 0x38eab8u: goto label_38eab8;
        case 0x38eabcu: goto label_38eabc;
        case 0x38eac0u: goto label_38eac0;
        case 0x38eac4u: goto label_38eac4;
        case 0x38eac8u: goto label_38eac8;
        case 0x38eaccu: goto label_38eacc;
        case 0x38ead0u: goto label_38ead0;
        case 0x38ead4u: goto label_38ead4;
        case 0x38ead8u: goto label_38ead8;
        case 0x38eadcu: goto label_38eadc;
        case 0x38eae0u: goto label_38eae0;
        case 0x38eae4u: goto label_38eae4;
        case 0x38eae8u: goto label_38eae8;
        case 0x38eaecu: goto label_38eaec;
        case 0x38eaf0u: goto label_38eaf0;
        case 0x38eaf4u: goto label_38eaf4;
        case 0x38eaf8u: goto label_38eaf8;
        case 0x38eafcu: goto label_38eafc;
        case 0x38eb00u: goto label_38eb00;
        case 0x38eb04u: goto label_38eb04;
        case 0x38eb08u: goto label_38eb08;
        case 0x38eb0cu: goto label_38eb0c;
        case 0x38eb10u: goto label_38eb10;
        case 0x38eb14u: goto label_38eb14;
        case 0x38eb18u: goto label_38eb18;
        case 0x38eb1cu: goto label_38eb1c;
        case 0x38eb20u: goto label_38eb20;
        case 0x38eb24u: goto label_38eb24;
        case 0x38eb28u: goto label_38eb28;
        case 0x38eb2cu: goto label_38eb2c;
        case 0x38eb30u: goto label_38eb30;
        case 0x38eb34u: goto label_38eb34;
        case 0x38eb38u: goto label_38eb38;
        case 0x38eb3cu: goto label_38eb3c;
        case 0x38eb40u: goto label_38eb40;
        case 0x38eb44u: goto label_38eb44;
        case 0x38eb48u: goto label_38eb48;
        case 0x38eb4cu: goto label_38eb4c;
        case 0x38eb50u: goto label_38eb50;
        case 0x38eb54u: goto label_38eb54;
        case 0x38eb58u: goto label_38eb58;
        case 0x38eb5cu: goto label_38eb5c;
        case 0x38eb60u: goto label_38eb60;
        case 0x38eb64u: goto label_38eb64;
        case 0x38eb68u: goto label_38eb68;
        case 0x38eb6cu: goto label_38eb6c;
        case 0x38eb70u: goto label_38eb70;
        case 0x38eb74u: goto label_38eb74;
        case 0x38eb78u: goto label_38eb78;
        case 0x38eb7cu: goto label_38eb7c;
        case 0x38eb80u: goto label_38eb80;
        case 0x38eb84u: goto label_38eb84;
        case 0x38eb88u: goto label_38eb88;
        case 0x38eb8cu: goto label_38eb8c;
        case 0x38eb90u: goto label_38eb90;
        case 0x38eb94u: goto label_38eb94;
        case 0x38eb98u: goto label_38eb98;
        case 0x38eb9cu: goto label_38eb9c;
        case 0x38eba0u: goto label_38eba0;
        case 0x38eba4u: goto label_38eba4;
        case 0x38eba8u: goto label_38eba8;
        case 0x38ebacu: goto label_38ebac;
        case 0x38ebb0u: goto label_38ebb0;
        case 0x38ebb4u: goto label_38ebb4;
        case 0x38ebb8u: goto label_38ebb8;
        case 0x38ebbcu: goto label_38ebbc;
        case 0x38ebc0u: goto label_38ebc0;
        case 0x38ebc4u: goto label_38ebc4;
        case 0x38ebc8u: goto label_38ebc8;
        case 0x38ebccu: goto label_38ebcc;
        case 0x38ebd0u: goto label_38ebd0;
        case 0x38ebd4u: goto label_38ebd4;
        case 0x38ebd8u: goto label_38ebd8;
        case 0x38ebdcu: goto label_38ebdc;
        case 0x38ebe0u: goto label_38ebe0;
        case 0x38ebe4u: goto label_38ebe4;
        case 0x38ebe8u: goto label_38ebe8;
        case 0x38ebecu: goto label_38ebec;
        case 0x38ebf0u: goto label_38ebf0;
        case 0x38ebf4u: goto label_38ebf4;
        case 0x38ebf8u: goto label_38ebf8;
        case 0x38ebfcu: goto label_38ebfc;
        case 0x38ec00u: goto label_38ec00;
        case 0x38ec04u: goto label_38ec04;
        case 0x38ec08u: goto label_38ec08;
        case 0x38ec0cu: goto label_38ec0c;
        case 0x38ec10u: goto label_38ec10;
        case 0x38ec14u: goto label_38ec14;
        case 0x38ec18u: goto label_38ec18;
        case 0x38ec1cu: goto label_38ec1c;
        case 0x38ec20u: goto label_38ec20;
        case 0x38ec24u: goto label_38ec24;
        case 0x38ec28u: goto label_38ec28;
        case 0x38ec2cu: goto label_38ec2c;
        case 0x38ec30u: goto label_38ec30;
        case 0x38ec34u: goto label_38ec34;
        case 0x38ec38u: goto label_38ec38;
        case 0x38ec3cu: goto label_38ec3c;
        case 0x38ec40u: goto label_38ec40;
        case 0x38ec44u: goto label_38ec44;
        case 0x38ec48u: goto label_38ec48;
        case 0x38ec4cu: goto label_38ec4c;
        default: break;
    }

    ctx->pc = 0x38ea10u;

label_38ea10:
    // 0x38ea10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38ea14:
    // 0x38ea14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_38ea18:
    // 0x38ea18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38ea1c:
    // 0x38ea1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38ea1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38ea20:
    // 0x38ea20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38ea24:
    // 0x38ea24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38ea24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ea28:
    // 0x38ea28: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x38ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_38ea2c:
    // 0x38ea2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38ea30:
    // 0x38ea30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38ea34:
    // 0x38ea34: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x38ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_38ea38:
    // 0x38ea38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38ea3c:
    // 0x38ea3c: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_38ea40:
    if (ctx->pc == 0x38EA40u) {
        ctx->pc = 0x38EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA3Cu;
        // 0x38ea40: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA44u;
        goto label_38ea44;
    }
    ctx->pc = 0x38EA3Cu;
    {
        const bool branch_taken_0x38ea3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA3Cu;
        // 0x38ea40: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea3c) {
            ctx->pc = 0x38EC34u;
            goto label_38ec34;
        }
    }
    ctx->pc = 0x38EA44u;
label_38ea44:
    // 0x38ea44: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38ea48:
    // 0x38ea48: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x38ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_38ea4c:
    // 0x38ea4c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x38ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38ea50:
    // 0x38ea50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38ea54:
    // 0x38ea54: 0x40f809  jalr        $v0
label_38ea58:
    if (ctx->pc == 0x38EA58u) {
        ctx->pc = 0x38EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA54u;
        // 0x38ea58: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA5Cu;
        goto label_38ea5c;
    }
    ctx->pc = 0x38EA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38EA5Cu);
        ctx->pc = 0x38EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA54u;
        // 0x38ea58: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EA54u, 0x38EA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EA5Cu;
label_38ea5c:
    // 0x38ea5c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_38ea60:
    if (ctx->pc == 0x38EA60u) {
        ctx->pc = 0x38EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA5Cu;
        // 0x38ea60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA64u;
        goto label_38ea64;
    }
    ctx->pc = 0x38EA5Cu;
    {
        const bool branch_taken_0x38ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA5Cu;
        // 0x38ea60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea5c) {
            ctx->pc = 0x38EA98u;
            goto label_38ea98;
        }
    }
    ctx->pc = 0x38EA64u;
label_38ea64:
    // 0x38ea64: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x38ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38ea68:
    // 0x38ea68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38ea6c:
    // 0x38ea6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38ea70:
    // 0x38ea70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38ea74:
    // 0x38ea74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x38ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38ea78:
    // 0x38ea78: 0xc1035f6  jal         func_40D7D8
label_38ea7c:
    if (ctx->pc == 0x38EA7Cu) {
        ctx->pc = 0x38EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA78u;
        // 0x38ea7c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA80u;
        goto label_38ea80;
    }
    ctx->pc = 0x38EA78u;
    SET_GPR_U32(ctx, 31, 0x38EA80u);
    ctx->pc = 0x38EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA78u;
    // 0x38ea7c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38EA78u, 0x38EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA80u;
label_38ea80:
    // 0x38ea80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38ea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38ea84:
    // 0x38ea84: 0xc103628  jal         func_40D8A0
label_38ea88:
    if (ctx->pc == 0x38EA88u) {
        ctx->pc = 0x38EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA84u;
        // 0x38ea88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA8Cu;
        goto label_38ea8c;
    }
    ctx->pc = 0x38EA84u;
    SET_GPR_U32(ctx, 31, 0x38EA8Cu);
    ctx->pc = 0x38EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA84u;
    // 0x38ea88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38EA84u, 0x38EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA8Cu;
label_38ea8c:
    // 0x38ea8c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_38ea90:
    if (ctx->pc == 0x38EA90u) {
        ctx->pc = 0x38EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA8Cu;
        // 0x38ea90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA94u;
        goto label_38ea94;
    }
    ctx->pc = 0x38EA8Cu;
    {
        const bool branch_taken_0x38ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA8Cu;
        // 0x38ea90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea8c) {
            ctx->pc = 0x38EC38u;
            goto label_38ec38;
        }
    }
    ctx->pc = 0x38EA94u;
label_38ea94:
    // 0x38ea94: 0x0  nop
    ctx->pc = 0x38ea94u;
    // NOP
label_38ea98:
    // 0x38ea98: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x38ea98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38ea9c:
    // 0x38ea9c: 0x19200043  blez        $t1, . + 4 + (0x43 << 2)
label_38eaa0:
    if (ctx->pc == 0x38EAA0u) {
        ctx->pc = 0x38EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA9Cu;
        // 0x38eaa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAA4u;
        goto label_38eaa4;
    }
    ctx->pc = 0x38EA9Cu;
    {
        const bool branch_taken_0x38ea9c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x38EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA9Cu;
        // 0x38eaa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea9c) {
            ctx->pc = 0x38EBACu;
            goto label_38ebac;
        }
    }
    ctx->pc = 0x38EAA4u;
label_38eaa4:
    // 0x38eaa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38eaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38eaa8:
    // 0x38eaa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38eaac:
    // 0x38eaac: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x38eaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_38eab0:
    // 0x38eab0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x38eab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38eab4:
    // 0x38eab4: 0x61023  negu        $v0, $a2
    ctx->pc = 0x38eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_38eab8:
    // 0x38eab8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x38eab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38eabc:
    // 0x38eabc: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_38eac0:
    if (ctx->pc == 0x38EAC0u) {
        ctx->pc = 0x38EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EABCu;
        // 0x38eac0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAC4u;
        goto label_38eac4;
    }
    ctx->pc = 0x38EABCu;
    {
        const bool branch_taken_0x38eabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EABCu;
        // 0x38eac0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eabc) {
            ctx->pc = 0x38EB3Cu;
            goto label_38eb3c;
        }
    }
    ctx->pc = 0x38EAC4u;
label_38eac4:
    // 0x38eac4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x38eac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_38eac8:
    // 0x38eac8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_38eacc:
    if (ctx->pc == 0x38EACCu) {
        ctx->pc = 0x38EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAC8u;
        // 0x38eacc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAD0u;
        goto label_38ead0;
    }
    ctx->pc = 0x38EAC8u;
    {
        const bool branch_taken_0x38eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAC8u;
        // 0x38eacc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eac8) {
            ctx->pc = 0x38EB18u;
            goto label_38eb18;
        }
    }
    ctx->pc = 0x38EAD0u;
label_38ead0:
    // 0x38ead0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_38ead4:
    if (ctx->pc == 0x38EAD4u) {
        ctx->pc = 0x38EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAD0u;
        // 0x38ead4: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAD8u;
        goto label_38ead8;
    }
    ctx->pc = 0x38EAD0u;
    {
        const bool branch_taken_0x38ead0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ead0) {
            ctx->pc = 0x38EAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EAD0u;
            // 0x38ead4: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EAFCu;
            goto label_38eafc;
        }
    }
    ctx->pc = 0x38EAD8u;
label_38ead8:
    // 0x38ead8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38eadc:
    // 0x38eadc: 0x24a80004  addiu       $t0, $a1, 0x4
    ctx->pc = 0x38eadcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_38eae0:
    // 0x38eae0: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x38eae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_38eae4:
    // 0x38eae4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38eae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38eae8:
    // 0x38eae8: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x38eae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_38eaec:
    // 0x38eaec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x38eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_38eaf0:
    // 0x38eaf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38eaf4:
    // 0x38eaf4: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x38eaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_38eaf8:
    // 0x38eaf8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x38eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_38eafc:
    // 0x38eafc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38eafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38eb00:
    // 0x38eb00: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x38eb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_38eb04:
    // 0x38eb04: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x38eb04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_38eb08:
    // 0x38eb08: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x38eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_38eb0c:
    // 0x38eb0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38eb10:
    // 0x38eb10: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x38eb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_38eb14:
    // 0x38eb14: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x38eb14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_38eb18:
    // 0x38eb18: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x38eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_38eb1c:
    // 0x38eb1c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38eb20:
    // 0x38eb20: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x38eb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_38eb24:
    // 0x38eb24: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x38eb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_38eb28:
    // 0x38eb28: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x38eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_38eb2c:
    // 0x38eb2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38eb30:
    // 0x38eb30: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x38eb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_38eb34:
    // 0x38eb34: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
label_38eb38:
    if (ctx->pc == 0x38EB38u) {
        ctx->pc = 0x38EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB34u;
        // 0x38eb38: 0xa4820018  sh          $v0, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EB3Cu;
        goto label_38eb3c;
    }
    ctx->pc = 0x38EB34u;
    {
        const bool branch_taken_0x38eb34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB34u;
        // 0x38eb38: 0xa4820018  sh          $v0, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb34) {
            ctx->pc = 0x38EBA8u;
            goto label_38eba8;
        }
    }
    ctx->pc = 0x38EB3Cu;
label_38eb3c:
    // 0x38eb3c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x38eb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38eb40:
    // 0x38eb40: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x38eb40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38eb44:
    // 0x38eb44: 0x0  nop
    ctx->pc = 0x38eb44u;
    // NOP
label_38eb48:
    // 0x38eb48: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x38eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38eb4c:
    // 0x38eb4c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x38eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_38eb50:
    // 0x38eb50: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x38eb50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_38eb54:
    // 0x38eb54: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x38eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_38eb58:
    // 0x38eb58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38eb5c:
    // 0x38eb5c: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x38eb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_38eb60:
    // 0x38eb60: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x38eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_38eb64:
    // 0x38eb64: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x38eb64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_38eb68:
    // 0x38eb68: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x38eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_38eb6c:
    // 0x38eb6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38eb70:
    // 0x38eb70: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x38eb70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_38eb74:
    // 0x38eb74: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x38eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_38eb78:
    // 0x38eb78: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x38eb78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_38eb7c:
    // 0x38eb7c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x38eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_38eb80:
    // 0x38eb80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38eb84:
    // 0x38eb84: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x38eb84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_38eb88:
    // 0x38eb88: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x38eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_38eb8c:
    // 0x38eb8c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x38eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_38eb90:
    // 0x38eb90: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x38eb90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_38eb94:
    // 0x38eb94: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x38eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_38eb98:
    // 0x38eb98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38eb9c:
    // 0x38eb9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x38eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_38eba0:
    // 0x38eba0: 0x14c0ffe9  bnez        $a2, . + 4 + (-0x17 << 2)
label_38eba4:
    if (ctx->pc == 0x38EBA4u) {
        ctx->pc = 0x38EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBA0u;
        // 0x38eba4: 0xa4820018  sh          $v0, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EBA8u;
        goto label_38eba8;
    }
    ctx->pc = 0x38EBA0u;
    {
        const bool branch_taken_0x38eba0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBA0u;
        // 0x38eba4: 0xa4820018  sh          $v0, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eba0) {
            ctx->pc = 0x38EB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38eb48;
        }
    }
    ctx->pc = 0x38EBA8u;
label_38eba8:
    // 0x38eba8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x38eba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_38ebac:
    // 0x38ebac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x38ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38ebb0:
    // 0x38ebb0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x38ebb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_38ebb4:
    // 0x38ebb4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_38ebb8:
    if (ctx->pc == 0x38EBB8u) {
        ctx->pc = 0x38EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBB4u;
        // 0x38ebb8: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EBBCu;
        goto label_38ebbc;
    }
    ctx->pc = 0x38EBB4u;
    {
        const bool branch_taken_0x38ebb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBB4u;
        // 0x38ebb8: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ebb4) {
            ctx->pc = 0x38EC34u;
            goto label_38ec34;
        }
    }
    ctx->pc = 0x38EBBCu;
label_38ebbc:
    // 0x38ebbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38ebc0:
    // 0x38ebc0: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x38ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_38ebc4:
    // 0x38ebc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_38ebc8:
    // 0x38ebc8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x38ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_38ebcc:
    // 0x38ebcc: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x38ebccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38ebd0:
    // 0x38ebd0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_38ebd4:
    if (ctx->pc == 0x38EBD4u) {
        ctx->pc = 0x38EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBD0u;
        // 0x38ebd4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EBD8u;
        goto label_38ebd8;
    }
    ctx->pc = 0x38EBD0u;
    {
        const bool branch_taken_0x38ebd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBD0u;
        // 0x38ebd4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ebd0) {
            ctx->pc = 0x38EC14u;
            goto label_38ec14;
        }
    }
    ctx->pc = 0x38EBD8u;
label_38ebd8:
    // 0x38ebd8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x38ebd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_38ebdc:
    // 0x38ebdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38ebe0:
    if (ctx->pc == 0x38EBE0u) {
        ctx->pc = 0x38EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBDCu;
        // 0x38ebe0: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EBE4u;
        goto label_38ebe4;
    }
    ctx->pc = 0x38EBDCu;
    {
        const bool branch_taken_0x38ebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBDCu;
        // 0x38ebe0: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ebdc) {
            ctx->pc = 0x38EC04u;
            goto label_38ec04;
        }
    }
    ctx->pc = 0x38EBE4u;
label_38ebe4:
    // 0x38ebe4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_38ebe8:
    if (ctx->pc == 0x38EBE8u) {
        ctx->pc = 0x38EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBE4u;
        // 0x38ebe8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EBECu;
        goto label_38ebec;
    }
    ctx->pc = 0x38EBE4u;
    {
        const bool branch_taken_0x38ebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ebe4) {
            ctx->pc = 0x38EBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EBE4u;
            // 0x38ebe8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EBFCu;
            goto label_38ebfc;
        }
    }
    ctx->pc = 0x38EBECu;
label_38ebec:
    // 0x38ebec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_38ebf0:
    // 0x38ebf0: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x38ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_38ebf4:
    // 0x38ebf4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38ebf8:
    // 0x38ebf8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x38ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_38ebfc:
    // 0x38ebfc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38ebfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38ec00:
    // 0x38ec00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x38ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_38ec04:
    // 0x38ec04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x38ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_38ec08:
    // 0x38ec08: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38ec08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38ec0c:
    // 0x38ec0c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38ec10:
    if (ctx->pc == 0x38EC10u) {
        ctx->pc = 0x38EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC0Cu;
        // 0x38ec10: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC14u;
        goto label_38ec14;
    }
    ctx->pc = 0x38EC0Cu;
    {
        const bool branch_taken_0x38ec0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC0Cu;
        // 0x38ec10: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec0c) {
            ctx->pc = 0x38EC34u;
            goto label_38ec34;
        }
    }
    ctx->pc = 0x38EC14u;
label_38ec14:
    // 0x38ec14: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x38ec14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38ec18:
    // 0x38ec18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x38ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_38ec1c:
    // 0x38ec1c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x38ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_38ec20:
    // 0x38ec20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_38ec24:
    // 0x38ec24: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x38ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_38ec28:
    // 0x38ec28: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x38ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_38ec2c:
    // 0x38ec2c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_38ec30:
    if (ctx->pc == 0x38EC30u) {
        ctx->pc = 0x38EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC2Cu;
        // 0x38ec30: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC34u;
        goto label_38ec34;
    }
    ctx->pc = 0x38EC2Cu;
    {
        const bool branch_taken_0x38ec2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC2Cu;
        // 0x38ec30: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec2c) {
            ctx->pc = 0x38EC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ec18;
        }
    }
    ctx->pc = 0x38EC34u;
label_38ec34:
    // 0x38ec34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38ec34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ec38:
    // 0x38ec38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38ec38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ec3c:
    // 0x38ec3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38ec3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ec40:
    // 0x38ec40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38ec44:
    // 0x38ec44: 0x3e00008  jr          $ra
label_38ec48:
    if (ctx->pc == 0x38EC48u) {
        ctx->pc = 0x38EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC44u;
        // 0x38ec48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC4Cu;
        goto label_38ec4c;
    }
    ctx->pc = 0x38EC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC44u;
        // 0x38ec48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EC4Cu;
label_38ec4c:
    // 0x38ec4c: 0x0  nop
    ctx->pc = 0x38ec4cu;
    // NOP
    ctx->pc = 0x38ec50u;
}
