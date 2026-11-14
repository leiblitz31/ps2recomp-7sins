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

// Function: sub_003C2F38
// Address: 0x3c2f38 - 0x3c3008
void sub_003C2F38_0x3c2f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2F38_0x3c2f38");
#endif

    switch (ctx->pc) {
        case 0x3c2f38u: goto label_3c2f38;
        case 0x3c2f3cu: goto label_3c2f3c;
        case 0x3c2f40u: goto label_3c2f40;
        case 0x3c2f44u: goto label_3c2f44;
        case 0x3c2f48u: goto label_3c2f48;
        case 0x3c2f4cu: goto label_3c2f4c;
        case 0x3c2f50u: goto label_3c2f50;
        case 0x3c2f54u: goto label_3c2f54;
        case 0x3c2f58u: goto label_3c2f58;
        case 0x3c2f5cu: goto label_3c2f5c;
        case 0x3c2f60u: goto label_3c2f60;
        case 0x3c2f64u: goto label_3c2f64;
        case 0x3c2f68u: goto label_3c2f68;
        case 0x3c2f6cu: goto label_3c2f6c;
        case 0x3c2f70u: goto label_3c2f70;
        case 0x3c2f74u: goto label_3c2f74;
        case 0x3c2f78u: goto label_3c2f78;
        case 0x3c2f7cu: goto label_3c2f7c;
        case 0x3c2f80u: goto label_3c2f80;
        case 0x3c2f84u: goto label_3c2f84;
        case 0x3c2f88u: goto label_3c2f88;
        case 0x3c2f8cu: goto label_3c2f8c;
        case 0x3c2f90u: goto label_3c2f90;
        case 0x3c2f94u: goto label_3c2f94;
        case 0x3c2f98u: goto label_3c2f98;
        case 0x3c2f9cu: goto label_3c2f9c;
        case 0x3c2fa0u: goto label_3c2fa0;
        case 0x3c2fa4u: goto label_3c2fa4;
        case 0x3c2fa8u: goto label_3c2fa8;
        case 0x3c2facu: goto label_3c2fac;
        case 0x3c2fb0u: goto label_3c2fb0;
        case 0x3c2fb4u: goto label_3c2fb4;
        case 0x3c2fb8u: goto label_3c2fb8;
        case 0x3c2fbcu: goto label_3c2fbc;
        case 0x3c2fc0u: goto label_3c2fc0;
        case 0x3c2fc4u: goto label_3c2fc4;
        case 0x3c2fc8u: goto label_3c2fc8;
        case 0x3c2fccu: goto label_3c2fcc;
        case 0x3c2fd0u: goto label_3c2fd0;
        case 0x3c2fd4u: goto label_3c2fd4;
        case 0x3c2fd8u: goto label_3c2fd8;
        case 0x3c2fdcu: goto label_3c2fdc;
        case 0x3c2fe0u: goto label_3c2fe0;
        case 0x3c2fe4u: goto label_3c2fe4;
        case 0x3c2fe8u: goto label_3c2fe8;
        case 0x3c2fecu: goto label_3c2fec;
        case 0x3c2ff0u: goto label_3c2ff0;
        case 0x3c2ff4u: goto label_3c2ff4;
        case 0x3c2ff8u: goto label_3c2ff8;
        case 0x3c2ffcu: goto label_3c2ffc;
        case 0x3c3000u: goto label_3c3000;
        case 0x3c3004u: goto label_3c3004;
        default: break;
    }

    ctx->pc = 0x3c2f38u;

label_3c2f38:
    // 0x3c2f38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c2f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c2f3c:
    // 0x3c2f3c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c2f40:
    // 0x3c2f40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3c2f44:
    // 0x3c2f44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2f48:
    // 0x3c2f48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c2f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c2f4c:
    // 0x3c2f4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c2f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2f50:
    // 0x3c2f50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c2f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c2f54:
    // 0x3c2f54: 0x2442dff0  addiu       $v0, $v0, -0x2010
    ctx->pc = 0x3c2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
label_3c2f58:
    // 0x3c2f58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c2f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c2f5c:
    // 0x3c2f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2f60:
    // 0x3c2f60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3c2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3c2f64:
    // 0x3c2f64: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
label_3c2f68:
    if (ctx->pc == 0x3C2F68u) {
        ctx->pc = 0x3C2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F64u;
        // 0x3c2f68: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2F6Cu;
        goto label_3c2f6c;
    }
    ctx->pc = 0x3C2F64u;
    {
        const bool branch_taken_0x3c2f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3C2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F64u;
        // 0x3c2f68: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2f64) {
            ctx->pc = 0x3C2FD0u;
            goto label_3c2fd0;
        }
    }
    ctx->pc = 0x3C2F6Cu;
label_3c2f6c:
    // 0x3c2f6c: 0x8e71dff0  lw          $s1, -0x2010($s3)
    ctx->pc = 0x3c2f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294959088)));
label_3c2f70:
    // 0x3c2f70: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_3c2f74:
    if (ctx->pc == 0x3C2F74u) {
        ctx->pc = 0x3C2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F70u;
        // 0x3c2f74: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2F78u;
        goto label_3c2f78;
    }
    ctx->pc = 0x3C2F70u;
    {
        const bool branch_taken_0x3c2f70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F70u;
        // 0x3c2f74: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2f70) {
            ctx->pc = 0x3C2FC0u;
            goto label_3c2fc0;
        }
    }
    ctx->pc = 0x3C2F78u;
label_3c2f78:
    // 0x3c2f78: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3c2f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c2f7c:
    // 0x3c2f7c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3c2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3c2f80:
    // 0x3c2f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2f84:
    // 0x3c2f84: 0x40f809  jalr        $v0
label_3c2f88:
    if (ctx->pc == 0x3C2F88u) {
        ctx->pc = 0x3C2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F84u;
        // 0x3c2f88: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2F8Cu;
        goto label_3c2f8c;
    }
    ctx->pc = 0x3C2F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2F8Cu);
        ctx->pc = 0x3C2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F84u;
        // 0x3c2f88: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2F84u, 0x3C2F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2F8Cu;
label_3c2f8c:
    // 0x3c2f8c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x3c2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3c2f90:
    // 0x3c2f90: 0x40f809  jalr        $v0
label_3c2f94:
    if (ctx->pc == 0x3C2F94u) {
        ctx->pc = 0x3C2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F90u;
        // 0x3c2f94: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2F98u;
        goto label_3c2f98;
    }
    ctx->pc = 0x3C2F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2F98u);
        ctx->pc = 0x3C2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F90u;
        // 0x3c2f94: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2F90u, 0x3C2F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2F98u;
label_3c2f98:
    // 0x3c2f98: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3c2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3c2f9c:
    // 0x3c2f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2fa0:
    // 0x3c2fa0: 0xc0f08e4  jal         func_3C2390
label_3c2fa4:
    if (ctx->pc == 0x3C2FA4u) {
        ctx->pc = 0x3C2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FA0u;
        // 0x3c2fa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2FA8u;
        goto label_3c2fa8;
    }
    ctx->pc = 0x3C2FA0u;
    SET_GPR_U32(ctx, 31, 0x3C2FA8u);
    ctx->pc = 0x3C2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2FA0u;
    // 0x3c2fa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2390u, 0x3C2FA0u, 0x3C2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2FA8u;
label_3c2fa8:
    // 0x3c2fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2fac:
    // 0x3c2fac: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x3c2facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3c2fb0:
    // 0x3c2fb0: 0x40f809  jalr        $v0
label_3c2fb4:
    if (ctx->pc == 0x3C2FB4u) {
        ctx->pc = 0x3C2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FB0u;
        // 0x3c2fb4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2FB8u;
        goto label_3c2fb8;
    }
    ctx->pc = 0x3C2FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2FB8u);
        ctx->pc = 0x3C2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FB0u;
        // 0x3c2fb4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2FB0u, 0x3C2FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2FB8u;
label_3c2fb8:
    // 0x3c2fb8: 0x5620fff1  bnel        $s1, $zero, . + 4 + (-0xF << 2)
label_3c2fbc:
    if (ctx->pc == 0x3C2FBCu) {
        ctx->pc = 0x3C2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FB8u;
        // 0x3c2fbc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2FC0u;
        goto label_3c2fc0;
    }
    ctx->pc = 0x3C2FB8u;
    {
        const bool branch_taken_0x3c2fb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2fb8) {
            ctx->pc = 0x3C2FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2FB8u;
            // 0x3c2fbc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2f80;
        }
    }
    ctx->pc = 0x3C2FC0u;
label_3c2fc0:
    // 0x3c2fc0: 0x2662dff0  addiu       $v0, $s3, -0x2010
    ctx->pc = 0x3c2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959088));
label_3c2fc4:
    // 0x3c2fc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3c2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3c2fc8:
    // 0x3c2fc8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3c2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3c2fcc:
    // 0x3c2fcc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c2fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2fd0:
    // 0x3c2fd0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c2fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2fd4:
    // 0x3c2fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c2fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2fd8:
    // 0x3c2fd8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c2fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2fdc:
    // 0x3c2fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2fe0:
    // 0x3c2fe0: 0x3e00008  jr          $ra
label_3c2fe4:
    if (ctx->pc == 0x3C2FE4u) {
        ctx->pc = 0x3C2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FE0u;
        // 0x3c2fe4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2FE8u;
        goto label_3c2fe8;
    }
    ctx->pc = 0x3C2FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FE0u;
        // 0x3c2fe4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2FE8u;
label_3c2fe8:
    // 0x3c2fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2fec:
    // 0x3c2fec: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_3c2ff0:
    if (ctx->pc == 0x3C2FF0u) {
        ctx->pc = 0x3C2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FECu;
        // 0x3c2ff0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2FF4u;
        goto label_3c2ff4;
    }
    ctx->pc = 0x3C2FECu;
    {
        const bool branch_taken_0x3c2fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FECu;
        // 0x3c2ff0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2fec) {
            ctx->pc = 0x3C2FFCu;
            goto label_3c2ffc;
        }
    }
    ctx->pc = 0x3C2FF4u;
label_3c2ff4:
    // 0x3c2ff4: 0x3e00008  jr          $ra
label_3c2ff8:
    if (ctx->pc == 0x3C2FF8u) {
        ctx->pc = 0x3C2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FF4u;
        // 0x3c2ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2FFCu;
        goto label_3c2ffc;
    }
    ctx->pc = 0x3C2FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FF4u;
        // 0x3c2ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2FFCu;
label_3c2ffc:
    // 0x3c2ffc: 0x3e00008  jr          $ra
label_3c3000:
    if (ctx->pc == 0x3C3000u) {
        ctx->pc = 0x3C3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FFCu;
        // 0x3c3000: 0xac65e004  sw          $a1, -0x1FFC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3004u;
        goto label_3c3004;
    }
    ctx->pc = 0x3C2FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2FFCu;
        // 0x3c3000: 0xac65e004  sw          $a1, -0x1FFC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3004u;
label_3c3004:
    // 0x3c3004: 0x0  nop
    ctx->pc = 0x3c3004u;
    // NOP
    ctx->pc = 0x3c3008u;
}
