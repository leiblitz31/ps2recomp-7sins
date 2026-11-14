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

// Function: sub_0049DBD8
// Address: 0x49dbd8 - 0x49dda8
void sub_0049DBD8_0x49dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DBD8_0x49dbd8");
#endif

    switch (ctx->pc) {
        case 0x49dbd8u: goto label_49dbd8;
        case 0x49dbdcu: goto label_49dbdc;
        case 0x49dbe0u: goto label_49dbe0;
        case 0x49dbe4u: goto label_49dbe4;
        case 0x49dbe8u: goto label_49dbe8;
        case 0x49dbecu: goto label_49dbec;
        case 0x49dbf0u: goto label_49dbf0;
        case 0x49dbf4u: goto label_49dbf4;
        case 0x49dbf8u: goto label_49dbf8;
        case 0x49dbfcu: goto label_49dbfc;
        case 0x49dc00u: goto label_49dc00;
        case 0x49dc04u: goto label_49dc04;
        case 0x49dc08u: goto label_49dc08;
        case 0x49dc0cu: goto label_49dc0c;
        case 0x49dc10u: goto label_49dc10;
        case 0x49dc14u: goto label_49dc14;
        case 0x49dc18u: goto label_49dc18;
        case 0x49dc1cu: goto label_49dc1c;
        case 0x49dc20u: goto label_49dc20;
        case 0x49dc24u: goto label_49dc24;
        case 0x49dc28u: goto label_49dc28;
        case 0x49dc2cu: goto label_49dc2c;
        case 0x49dc30u: goto label_49dc30;
        case 0x49dc34u: goto label_49dc34;
        case 0x49dc38u: goto label_49dc38;
        case 0x49dc3cu: goto label_49dc3c;
        case 0x49dc40u: goto label_49dc40;
        case 0x49dc44u: goto label_49dc44;
        case 0x49dc48u: goto label_49dc48;
        case 0x49dc4cu: goto label_49dc4c;
        case 0x49dc50u: goto label_49dc50;
        case 0x49dc54u: goto label_49dc54;
        case 0x49dc58u: goto label_49dc58;
        case 0x49dc5cu: goto label_49dc5c;
        case 0x49dc60u: goto label_49dc60;
        case 0x49dc64u: goto label_49dc64;
        case 0x49dc68u: goto label_49dc68;
        case 0x49dc6cu: goto label_49dc6c;
        case 0x49dc70u: goto label_49dc70;
        case 0x49dc74u: goto label_49dc74;
        case 0x49dc78u: goto label_49dc78;
        case 0x49dc7cu: goto label_49dc7c;
        case 0x49dc80u: goto label_49dc80;
        case 0x49dc84u: goto label_49dc84;
        case 0x49dc88u: goto label_49dc88;
        case 0x49dc8cu: goto label_49dc8c;
        case 0x49dc90u: goto label_49dc90;
        case 0x49dc94u: goto label_49dc94;
        case 0x49dc98u: goto label_49dc98;
        case 0x49dc9cu: goto label_49dc9c;
        case 0x49dca0u: goto label_49dca0;
        case 0x49dca4u: goto label_49dca4;
        case 0x49dca8u: goto label_49dca8;
        case 0x49dcacu: goto label_49dcac;
        case 0x49dcb0u: goto label_49dcb0;
        case 0x49dcb4u: goto label_49dcb4;
        case 0x49dcb8u: goto label_49dcb8;
        case 0x49dcbcu: goto label_49dcbc;
        case 0x49dcc0u: goto label_49dcc0;
        case 0x49dcc4u: goto label_49dcc4;
        case 0x49dcc8u: goto label_49dcc8;
        case 0x49dcccu: goto label_49dccc;
        case 0x49dcd0u: goto label_49dcd0;
        case 0x49dcd4u: goto label_49dcd4;
        case 0x49dcd8u: goto label_49dcd8;
        case 0x49dcdcu: goto label_49dcdc;
        case 0x49dce0u: goto label_49dce0;
        case 0x49dce4u: goto label_49dce4;
        case 0x49dce8u: goto label_49dce8;
        case 0x49dcecu: goto label_49dcec;
        case 0x49dcf0u: goto label_49dcf0;
        case 0x49dcf4u: goto label_49dcf4;
        case 0x49dcf8u: goto label_49dcf8;
        case 0x49dcfcu: goto label_49dcfc;
        case 0x49dd00u: goto label_49dd00;
        case 0x49dd04u: goto label_49dd04;
        case 0x49dd08u: goto label_49dd08;
        case 0x49dd0cu: goto label_49dd0c;
        case 0x49dd10u: goto label_49dd10;
        case 0x49dd14u: goto label_49dd14;
        case 0x49dd18u: goto label_49dd18;
        case 0x49dd1cu: goto label_49dd1c;
        case 0x49dd20u: goto label_49dd20;
        case 0x49dd24u: goto label_49dd24;
        case 0x49dd28u: goto label_49dd28;
        case 0x49dd2cu: goto label_49dd2c;
        case 0x49dd30u: goto label_49dd30;
        case 0x49dd34u: goto label_49dd34;
        case 0x49dd38u: goto label_49dd38;
        case 0x49dd3cu: goto label_49dd3c;
        case 0x49dd40u: goto label_49dd40;
        case 0x49dd44u: goto label_49dd44;
        case 0x49dd48u: goto label_49dd48;
        case 0x49dd4cu: goto label_49dd4c;
        case 0x49dd50u: goto label_49dd50;
        case 0x49dd54u: goto label_49dd54;
        case 0x49dd58u: goto label_49dd58;
        case 0x49dd5cu: goto label_49dd5c;
        case 0x49dd60u: goto label_49dd60;
        case 0x49dd64u: goto label_49dd64;
        case 0x49dd68u: goto label_49dd68;
        case 0x49dd6cu: goto label_49dd6c;
        case 0x49dd70u: goto label_49dd70;
        case 0x49dd74u: goto label_49dd74;
        case 0x49dd78u: goto label_49dd78;
        case 0x49dd7cu: goto label_49dd7c;
        case 0x49dd80u: goto label_49dd80;
        case 0x49dd84u: goto label_49dd84;
        case 0x49dd88u: goto label_49dd88;
        case 0x49dd8cu: goto label_49dd8c;
        case 0x49dd90u: goto label_49dd90;
        case 0x49dd94u: goto label_49dd94;
        case 0x49dd98u: goto label_49dd98;
        case 0x49dd9cu: goto label_49dd9c;
        case 0x49dda0u: goto label_49dda0;
        case 0x49dda4u: goto label_49dda4;
        default: break;
    }

    ctx->pc = 0x49dbd8u;

label_49dbd8:
    // 0x49dbd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49dbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49dbdc:
    // 0x49dbdc: 0x8f82c1a8  lw          $v0, -0x3E58($gp)
    ctx->pc = 0x49dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
label_49dbe0:
    // 0x49dbe0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x49dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_49dbe4:
    // 0x49dbe4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_49dbe8:
    // 0x49dbe8: 0x2791c1a8  addiu       $s1, $gp, -0x3E58
    ctx->pc = 0x49dbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951336));
label_49dbec:
    // 0x49dbec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x49dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_49dbf0:
    // 0x49dbf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49dbf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49dbf4:
    // 0x49dbf4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x49dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_49dbf8:
    // 0x49dbf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49dbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49dbfc:
    // 0x49dbfc: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
label_49dc00:
    if (ctx->pc == 0x49DC00u) {
        ctx->pc = 0x49DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBFCu;
        // 0x49dc00: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC04u;
        goto label_49dc04;
    }
    ctx->pc = 0x49DBFCu;
    {
        const bool branch_taken_0x49dbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x49DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBFCu;
        // 0x49dc00: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbfc) {
            ctx->pc = 0x49DC44u;
            goto label_49dc44;
        }
    }
    ctx->pc = 0x49DC04u;
label_49dc04:
    // 0x49dc04: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_49dc08:
    // 0x49dc08: 0x27b0ffe0  addiu       $s0, $sp, -0x20
    ctx->pc = 0x49dc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49dc0c:
    // 0x49dc0c: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x49dc0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_49dc10:
    // 0x49dc10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x49dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49dc14:
    // 0x49dc14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_49dc18:
    if (ctx->pc == 0x49DC18u) {
        ctx->pc = 0x49DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC14u;
        // 0x49dc18: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC1Cu;
        goto label_49dc1c;
    }
    ctx->pc = 0x49DC14u;
    {
        const bool branch_taken_0x49dc14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC14u;
        // 0x49dc18: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc14) {
            ctx->pc = 0x49DC38u;
            goto label_49dc38;
        }
    }
    ctx->pc = 0x49DC1Cu;
label_49dc1c:
    // 0x49dc1c: 0x8e6200e8  lw          $v0, 0xE8($s3)
    ctx->pc = 0x49dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_49dc20:
    // 0x49dc20: 0x40f809  jalr        $v0
label_49dc24:
    if (ctx->pc == 0x49DC24u) {
        ctx->pc = 0x49DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC20u;
        // 0x49dc24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC28u;
        goto label_49dc28;
    }
    ctx->pc = 0x49DC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49DC28u);
        ctx->pc = 0x49DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC20u;
        // 0x49dc24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DC20u, 0x49DC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49DC28u;
label_49dc28:
    // 0x49dc28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49dc2c:
    if (ctx->pc == 0x49DC2Cu) {
        ctx->pc = 0x49DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC28u;
        // 0x49dc2c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC30u;
        goto label_49dc30;
    }
    ctx->pc = 0x49DC28u;
    {
        const bool branch_taken_0x49dc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC28u;
        // 0x49dc2c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc28) {
            ctx->pc = 0x49DC38u;
            goto label_49dc38;
        }
    }
    ctx->pc = 0x49DC30u;
label_49dc30:
    // 0x49dc30: 0x10000005  b           . + 4 + (0x5 << 2)
label_49dc34:
    if (ctx->pc == 0x49DC34u) {
        ctx->pc = 0x49DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC30u;
        // 0x49dc34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC38u;
        goto label_49dc38;
    }
    ctx->pc = 0x49DC30u;
    {
        const bool branch_taken_0x49dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC30u;
        // 0x49dc34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc30) {
            ctx->pc = 0x49DC48u;
            goto label_49dc48;
        }
    }
    ctx->pc = 0x49DC38u;
label_49dc38:
    // 0x49dc38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49dc3c:
    // 0x49dc3c: 0x1471fff4  bne         $v1, $s1, . + 4 + (-0xC << 2)
label_49dc40:
    if (ctx->pc == 0x49DC40u) {
        ctx->pc = 0x49DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC3Cu;
        // 0x49dc40: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC44u;
        goto label_49dc44;
    }
    ctx->pc = 0x49DC3Cu;
    {
        const bool branch_taken_0x49dc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x49DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC3Cu;
        // 0x49dc40: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc3c) {
            ctx->pc = 0x49DC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49dc10;
        }
    }
    ctx->pc = 0x49DC44u;
label_49dc44:
    // 0x49dc44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49dc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49dc48:
    // 0x49dc48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x49dc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49dc4c:
    // 0x49dc4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x49dc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49dc50:
    // 0x49dc50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49dc50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49dc54:
    // 0x49dc54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x49dc54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49dc58:
    // 0x49dc58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49dc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49dc5c:
    // 0x49dc5c: 0x3e00008  jr          $ra
label_49dc60:
    if (ctx->pc == 0x49DC60u) {
        ctx->pc = 0x49DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC5Cu;
        // 0x49dc60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC64u;
        goto label_49dc64;
    }
    ctx->pc = 0x49DC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC5Cu;
        // 0x49dc60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DC64u;
label_49dc64:
    // 0x49dc64: 0x0  nop
    ctx->pc = 0x49dc64u;
    // NOP
label_49dc68:
    // 0x49dc68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49dc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49dc6c:
    // 0x49dc6c: 0x3e00008  jr          $ra
label_49dc70:
    if (ctx->pc == 0x49DC70u) {
        ctx->pc = 0x49DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC6Cu;
        // 0x49dc70: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DC74u;
        goto label_49dc74;
    }
    ctx->pc = 0x49DC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC6Cu;
        // 0x49dc70: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DC74u;
label_49dc74:
    // 0x49dc74: 0x0  nop
    ctx->pc = 0x49dc74u;
    // NOP
label_49dc78:
    // 0x49dc78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49dc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49dc7c:
    // 0x49dc7c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x49dc7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49dc80:
    // 0x49dc80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49dc84:
    // 0x49dc84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49dc88:
    // 0x49dc88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49dc8c:
    // 0x49dc8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49dc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49dc90:
    // 0x49dc90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49dc94:
    // 0x49dc94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49dc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49dc98:
    // 0x49dc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49dc9c:
    // 0x49dc9c: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
label_49dca0:
    if (ctx->pc == 0x49DCA0u) {
        ctx->pc = 0x49DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC9Cu;
        // 0x49dca0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DCA4u;
        goto label_49dca4;
    }
    ctx->pc = 0x49DC9Cu;
    {
        const bool branch_taken_0x49dc9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x49DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC9Cu;
        // 0x49dca0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc9c) {
            ctx->pc = 0x49DCACu;
            goto label_49dcac;
        }
    }
    ctx->pc = 0x49DCA4u;
label_49dca4:
    // 0x49dca4: 0x10000002  b           . + 4 + (0x2 << 2)
label_49dca8:
    if (ctx->pc == 0x49DCA8u) {
        ctx->pc = 0x49DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCA4u;
        // 0x49dca8: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DCACu;
        goto label_49dcac;
    }
    ctx->pc = 0x49DCA4u;
    {
        const bool branch_taken_0x49dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCA4u;
        // 0x49dca8: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dca4) {
            ctx->pc = 0x49DCB0u;
            goto label_49dcb0;
        }
    }
    ctx->pc = 0x49DCACu;
label_49dcac:
    // 0x49dcac: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x49dcacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49dcb0:
    // 0x49dcb0: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x49dcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49dcb4:
    // 0x49dcb4: 0x701018  mult        $v0, $v1, $s0
    ctx->pc = 0x49dcb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49dcb8:
    // 0x49dcb8: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x49dcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_49dcbc:
    // 0x49dcbc: 0xc12a424  jal         func_4A9090
label_49dcc0:
    if (ctx->pc == 0x49DCC0u) {
        ctx->pc = 0x49DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCBCu;
        // 0x49dcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DCC4u;
        goto label_49dcc4;
    }
    ctx->pc = 0x49DCBCu;
    SET_GPR_U32(ctx, 31, 0x49DCC4u);
    ctx->pc = 0x49DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DCBCu;
    // 0x49dcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x49DCBCu, 0x49DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DCC4u;
label_49dcc4:
    // 0x49dcc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49dcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49dcc8:
    // 0x49dcc8: 0xc12a45c  jal         func_4A9170
label_49dccc:
    if (ctx->pc == 0x49DCCCu) {
        ctx->pc = 0x49DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCC8u;
        // 0x49dccc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DCD0u;
        goto label_49dcd0;
    }
    ctx->pc = 0x49DCC8u;
    SET_GPR_U32(ctx, 31, 0x49DCD0u);
    ctx->pc = 0x49DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DCC8u;
    // 0x49dccc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x49DCC8u, 0x49DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DCD0u;
label_49dcd0:
    // 0x49dcd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49dcd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49dcd4:
    // 0x49dcd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49dcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49dcd8:
    // 0x49dcd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49dcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49dcdc:
    // 0x49dcdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49dcdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49dce0:
    // 0x49dce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49dce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49dce4:
    // 0x49dce4: 0x3e00008  jr          $ra
label_49dce8:
    if (ctx->pc == 0x49DCE8u) {
        ctx->pc = 0x49DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCE4u;
        // 0x49dce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DCECu;
        goto label_49dcec;
    }
    ctx->pc = 0x49DCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCE4u;
        // 0x49dce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DCECu;
label_49dcec:
    // 0x49dcec: 0x0  nop
    ctx->pc = 0x49dcecu;
    // NOP
label_49dcf0:
    // 0x49dcf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49dcf4:
    // 0x49dcf4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x49dcf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49dcf8:
    // 0x49dcf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49dcfc:
    // 0x49dcfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49dd00:
    // 0x49dd00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49dd04:
    // 0x49dd04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49dd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49dd08:
    // 0x49dd08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49dd0c:
    // 0x49dd0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49dd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49dd10:
    // 0x49dd10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49dd14:
    // 0x49dd14: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
label_49dd18:
    if (ctx->pc == 0x49DD18u) {
        ctx->pc = 0x49DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD14u;
        // 0x49dd18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DD1Cu;
        goto label_49dd1c;
    }
    ctx->pc = 0x49DD14u;
    {
        const bool branch_taken_0x49dd14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x49DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD14u;
        // 0x49dd18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd14) {
            ctx->pc = 0x49DD24u;
            goto label_49dd24;
        }
    }
    ctx->pc = 0x49DD1Cu;
label_49dd1c:
    // 0x49dd1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_49dd20:
    if (ctx->pc == 0x49DD20u) {
        ctx->pc = 0x49DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD1Cu;
        // 0x49dd20: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DD24u;
        goto label_49dd24;
    }
    ctx->pc = 0x49DD1Cu;
    {
        const bool branch_taken_0x49dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD1Cu;
        // 0x49dd20: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd1c) {
            ctx->pc = 0x49DD28u;
            goto label_49dd28;
        }
    }
    ctx->pc = 0x49DD24u;
label_49dd24:
    // 0x49dd24: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x49dd24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_49dd28:
    // 0x49dd28: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x49dd28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49dd2c:
    // 0x49dd2c: 0x701018  mult        $v0, $v1, $s0
    ctx->pc = 0x49dd2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49dd30:
    // 0x49dd30: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x49dd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_49dd34:
    // 0x49dd34: 0xc12a448  jal         func_4A9120
label_49dd38:
    if (ctx->pc == 0x49DD38u) {
        ctx->pc = 0x49DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD34u;
        // 0x49dd38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DD3Cu;
        goto label_49dd3c;
    }
    ctx->pc = 0x49DD34u;
    SET_GPR_U32(ctx, 31, 0x49DD3Cu);
    ctx->pc = 0x49DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DD34u;
    // 0x49dd38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49DD34u, 0x49DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DD3Cu;
label_49dd3c:
    // 0x49dd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49dd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49dd40:
    // 0x49dd40: 0xc12a47e  jal         func_4A91F8
label_49dd44:
    if (ctx->pc == 0x49DD44u) {
        ctx->pc = 0x49DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD40u;
        // 0x49dd44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DD48u;
        goto label_49dd48;
    }
    ctx->pc = 0x49DD40u;
    SET_GPR_U32(ctx, 31, 0x49DD48u);
    ctx->pc = 0x49DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DD40u;
    // 0x49dd44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49DD40u, 0x49DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DD48u;
label_49dd48:
    // 0x49dd48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49dd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49dd4c:
    // 0x49dd4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49dd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49dd50:
    // 0x49dd50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49dd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49dd54:
    // 0x49dd54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49dd54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49dd58:
    // 0x49dd58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49dd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49dd5c:
    // 0x49dd5c: 0x3e00008  jr          $ra
label_49dd60:
    if (ctx->pc == 0x49DD60u) {
        ctx->pc = 0x49DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD5Cu;
        // 0x49dd60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DD64u;
        goto label_49dd64;
    }
    ctx->pc = 0x49DD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD5Cu;
        // 0x49dd60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DD64u;
label_49dd64:
    // 0x49dd64: 0x0  nop
    ctx->pc = 0x49dd64u;
    // NOP
label_49dd68:
    // 0x49dd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49dd6c:
    // 0x49dd6c: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
label_49dd70:
    if (ctx->pc == 0x49DD70u) {
        ctx->pc = 0x49DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD6Cu;
        // 0x49dd70: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DD74u;
        goto label_49dd74;
    }
    ctx->pc = 0x49DD6Cu;
    {
        const bool branch_taken_0x49dd6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x49dd6c) {
            ctx->pc = 0x49DD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49DD6Cu;
            // 0x49dd70: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DD84u;
            goto label_49dd84;
        }
    }
    ctx->pc = 0x49DD74u;
label_49dd74:
    // 0x49dd74: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x49dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49dd78:
    // 0x49dd78: 0x400013  mtlo        $v0
    ctx->pc = 0x49dd78u;
    ctx->lo = GPR_U64(ctx, 2);
label_49dd7c:
    // 0x49dd7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_49dd80:
    if (ctx->pc == 0x49DD80u) {
        ctx->pc = 0x49DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD7Cu;
        // 0x49dd80: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DD84u;
        goto label_49dd84;
    }
    ctx->pc = 0x49DD7Cu;
    {
        const bool branch_taken_0x49dd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD7Cu;
        // 0x49dd80: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd7c) {
            ctx->pc = 0x49DD90u;
            goto label_49dd90;
        }
    }
    ctx->pc = 0x49DD84u;
label_49dd84:
    // 0x49dd84: 0x600013  mtlo        $v1
    ctx->pc = 0x49dd84u;
    ctx->lo = GPR_U64(ctx, 3);
label_49dd88:
    // 0x49dd88: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x49dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49dd8c:
    // 0x49dd8c: 0x0  nop
    ctx->pc = 0x49dd8cu;
    // NOP
label_49dd90:
    // 0x49dd90: 0x70c21000  madd        $v0, $a2, $v0
    ctx->pc = 0x49dd90u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_49dd94:
    // 0x49dd94: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x49dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_49dd98:
    // 0x49dd98: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x49dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_49dd9c:
    // 0x49dd9c: 0x3e00008  jr          $ra
label_49dda0:
    if (ctx->pc == 0x49DDA0u) {
        ctx->pc = 0x49DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD9Cu;
        // 0x49dda0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49DDA4u;
        goto label_49dda4;
    }
    ctx->pc = 0x49DD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD9Cu;
        // 0x49dda0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DDA4u;
label_49dda4:
    // 0x49dda4: 0x0  nop
    ctx->pc = 0x49dda4u;
    // NOP
    ctx->pc = 0x49dda8u;
}
