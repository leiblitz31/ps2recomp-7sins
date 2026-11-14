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

// Function: sub_0039FCD0
// Address: 0x39fcd0 - 0x39fd90
void sub_0039FCD0_0x39fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FCD0_0x39fcd0");
#endif

    switch (ctx->pc) {
        case 0x39fcd0u: goto label_39fcd0;
        case 0x39fcd4u: goto label_39fcd4;
        case 0x39fcd8u: goto label_39fcd8;
        case 0x39fcdcu: goto label_39fcdc;
        case 0x39fce0u: goto label_39fce0;
        case 0x39fce4u: goto label_39fce4;
        case 0x39fce8u: goto label_39fce8;
        case 0x39fcecu: goto label_39fcec;
        case 0x39fcf0u: goto label_39fcf0;
        case 0x39fcf4u: goto label_39fcf4;
        case 0x39fcf8u: goto label_39fcf8;
        case 0x39fcfcu: goto label_39fcfc;
        case 0x39fd00u: goto label_39fd00;
        case 0x39fd04u: goto label_39fd04;
        case 0x39fd08u: goto label_39fd08;
        case 0x39fd0cu: goto label_39fd0c;
        case 0x39fd10u: goto label_39fd10;
        case 0x39fd14u: goto label_39fd14;
        case 0x39fd18u: goto label_39fd18;
        case 0x39fd1cu: goto label_39fd1c;
        case 0x39fd20u: goto label_39fd20;
        case 0x39fd24u: goto label_39fd24;
        case 0x39fd28u: goto label_39fd28;
        case 0x39fd2cu: goto label_39fd2c;
        case 0x39fd30u: goto label_39fd30;
        case 0x39fd34u: goto label_39fd34;
        case 0x39fd38u: goto label_39fd38;
        case 0x39fd3cu: goto label_39fd3c;
        case 0x39fd40u: goto label_39fd40;
        case 0x39fd44u: goto label_39fd44;
        case 0x39fd48u: goto label_39fd48;
        case 0x39fd4cu: goto label_39fd4c;
        case 0x39fd50u: goto label_39fd50;
        case 0x39fd54u: goto label_39fd54;
        case 0x39fd58u: goto label_39fd58;
        case 0x39fd5cu: goto label_39fd5c;
        case 0x39fd60u: goto label_39fd60;
        case 0x39fd64u: goto label_39fd64;
        case 0x39fd68u: goto label_39fd68;
        case 0x39fd6cu: goto label_39fd6c;
        case 0x39fd70u: goto label_39fd70;
        case 0x39fd74u: goto label_39fd74;
        case 0x39fd78u: goto label_39fd78;
        case 0x39fd7cu: goto label_39fd7c;
        case 0x39fd80u: goto label_39fd80;
        case 0x39fd84u: goto label_39fd84;
        case 0x39fd88u: goto label_39fd88;
        case 0x39fd8cu: goto label_39fd8c;
        default: break;
    }

    ctx->pc = 0x39fcd0u;

label_39fcd0:
    // 0x39fcd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39fcd4:
    // 0x39fcd4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x39fcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_39fcd8:
    // 0x39fcd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_39fcdc:
    // 0x39fcdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39fcdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fce0:
    // 0x39fce0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_39fce4:
    // 0x39fce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39fce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39fce8:
    // 0x39fce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39fcec:
    // 0x39fcec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39fcf0:
    // 0x39fcf0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39fcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39fcf4:
    // 0x39fcf4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_39fcf8:
    if (ctx->pc == 0x39FCF8u) {
        ctx->pc = 0x39FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCF4u;
        // 0x39fcf8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCFCu;
        goto label_39fcfc;
    }
    ctx->pc = 0x39FCF4u;
    {
        const bool branch_taken_0x39fcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCF4u;
        // 0x39fcf8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fcf4) {
            ctx->pc = 0x39FD5Cu;
            goto label_39fd5c;
        }
    }
    ctx->pc = 0x39FCFCu;
label_39fcfc:
    // 0x39fcfc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x39fcfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39fd00:
    // 0x39fd00: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x39fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39fd04:
    // 0x39fd04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x39fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_39fd08:
    // 0x39fd08: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x39fd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_39fd0c:
    // 0x39fd0c: 0x0  nop
    ctx->pc = 0x39fd0cu;
    // NOP
label_39fd10:
    // 0x39fd10: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x39fd10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39fd14:
    // 0x39fd14: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_39fd18:
    if (ctx->pc == 0x39FD18u) {
        ctx->pc = 0x39FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD14u;
        // 0x39fd18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD1Cu;
        goto label_39fd1c;
    }
    ctx->pc = 0x39FD14u;
    {
        const bool branch_taken_0x39fd14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD14u;
        // 0x39fd18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd14) {
            ctx->pc = 0x39FD50u;
            goto label_39fd50;
        }
    }
    ctx->pc = 0x39FD1Cu;
label_39fd1c:
    // 0x39fd1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fd20:
    // 0x39fd20: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_39fd24:
    if (ctx->pc == 0x39FD24u) {
        ctx->pc = 0x39FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD20u;
        // 0x39fd24: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD28u;
        goto label_39fd28;
    }
    ctx->pc = 0x39FD20u;
    {
        const bool branch_taken_0x39fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fd20) {
            ctx->pc = 0x39FD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FD20u;
            // 0x39fd24: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FD4Cu;
            goto label_39fd4c;
        }
    }
    ctx->pc = 0x39FD28u;
label_39fd28:
    // 0x39fd28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39fd2c:
    // 0x39fd2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_39fd30:
    if (ctx->pc == 0x39FD30u) {
        ctx->pc = 0x39FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD2Cu;
        // 0x39fd30: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD34u;
        goto label_39fd34;
    }
    ctx->pc = 0x39FD2Cu;
    {
        const bool branch_taken_0x39fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fd2c) {
            ctx->pc = 0x39FD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FD2Cu;
            // 0x39fd30: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FD4Cu;
            goto label_39fd4c;
        }
    }
    ctx->pc = 0x39FD34u;
label_39fd34:
    // 0x39fd34: 0xc0e7ee0  jal         func_39FB80
label_39fd38:
    if (ctx->pc == 0x39FD38u) {
        ctx->pc = 0x39FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD34u;
        // 0x39fd38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD3Cu;
        goto label_39fd3c;
    }
    ctx->pc = 0x39FD34u;
    SET_GPR_U32(ctx, 31, 0x39FD3Cu);
    ctx->pc = 0x39FD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD34u;
    // 0x39fd38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FD34u, 0x39FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD3Cu;
label_39fd3c:
    // 0x39fd3c: 0xc104702  jal         func_411C08
label_39fd40:
    if (ctx->pc == 0x39FD40u) {
        ctx->pc = 0x39FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD3Cu;
        // 0x39fd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD44u;
        goto label_39fd44;
    }
    ctx->pc = 0x39FD3Cu;
    SET_GPR_U32(ctx, 31, 0x39FD44u);
    ctx->pc = 0x39FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD3Cu;
    // 0x39fd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x39FD3Cu, 0x39FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD44u;
label_39fd44:
    // 0x39fd44: 0x10000002  b           . + 4 + (0x2 << 2)
label_39fd48:
    if (ctx->pc == 0x39FD48u) {
        ctx->pc = 0x39FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD44u;
        // 0x39fd48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD4Cu;
        goto label_39fd4c;
    }
    ctx->pc = 0x39FD44u;
    {
        const bool branch_taken_0x39fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD44u;
        // 0x39fd48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd44) {
            ctx->pc = 0x39FD50u;
            goto label_39fd50;
        }
    }
    ctx->pc = 0x39FD4Cu;
label_39fd4c:
    // 0x39fd4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39fd4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39fd50:
    // 0x39fd50: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x39fd50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_39fd54:
    // 0x39fd54: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_39fd58:
    if (ctx->pc == 0x39FD58u) {
        ctx->pc = 0x39FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD54u;
        // 0x39fd58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD5Cu;
        goto label_39fd5c;
    }
    ctx->pc = 0x39FD54u;
    {
        const bool branch_taken_0x39fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD54u;
        // 0x39fd58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd54) {
            ctx->pc = 0x39FD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fd10;
        }
    }
    ctx->pc = 0x39FD5Cu;
label_39fd5c:
    // 0x39fd5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39fd60:
    // 0x39fd60: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39fd64:
    // 0x39fd64: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x39fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_39fd68:
    // 0x39fd68: 0x60f809  jalr        $v1
label_39fd6c:
    if (ctx->pc == 0x39FD6Cu) {
        ctx->pc = 0x39FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD68u;
        // 0x39fd6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD70u;
        goto label_39fd70;
    }
    ctx->pc = 0x39FD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FD70u);
        ctx->pc = 0x39FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD68u;
        // 0x39fd6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD68u, 0x39FD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FD70u;
label_39fd70:
    // 0x39fd70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39fd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39fd74:
    // 0x39fd74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39fd74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39fd78:
    // 0x39fd78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39fd78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39fd7c:
    // 0x39fd7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x39fd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fd80:
    // 0x39fd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39fd84:
    // 0x39fd84: 0x3e00008  jr          $ra
label_39fd88:
    if (ctx->pc == 0x39FD88u) {
        ctx->pc = 0x39FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD84u;
        // 0x39fd88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD8Cu;
        goto label_39fd8c;
    }
    ctx->pc = 0x39FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD84u;
        // 0x39fd88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FD8Cu;
label_39fd8c:
    // 0x39fd8c: 0x0  nop
    ctx->pc = 0x39fd8cu;
    // NOP
    ctx->pc = 0x39fd90u;
}
