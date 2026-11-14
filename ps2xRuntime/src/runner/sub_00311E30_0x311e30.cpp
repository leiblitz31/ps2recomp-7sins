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

// Function: sub_00311E30
// Address: 0x311e30 - 0x311f08
void sub_00311E30_0x311e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311E30_0x311e30");
#endif

    switch (ctx->pc) {
        case 0x311e30u: goto label_311e30;
        case 0x311e34u: goto label_311e34;
        case 0x311e38u: goto label_311e38;
        case 0x311e3cu: goto label_311e3c;
        case 0x311e40u: goto label_311e40;
        case 0x311e44u: goto label_311e44;
        case 0x311e48u: goto label_311e48;
        case 0x311e4cu: goto label_311e4c;
        case 0x311e50u: goto label_311e50;
        case 0x311e54u: goto label_311e54;
        case 0x311e58u: goto label_311e58;
        case 0x311e5cu: goto label_311e5c;
        case 0x311e60u: goto label_311e60;
        case 0x311e64u: goto label_311e64;
        case 0x311e68u: goto label_311e68;
        case 0x311e6cu: goto label_311e6c;
        case 0x311e70u: goto label_311e70;
        case 0x311e74u: goto label_311e74;
        case 0x311e78u: goto label_311e78;
        case 0x311e7cu: goto label_311e7c;
        case 0x311e80u: goto label_311e80;
        case 0x311e84u: goto label_311e84;
        case 0x311e88u: goto label_311e88;
        case 0x311e8cu: goto label_311e8c;
        case 0x311e90u: goto label_311e90;
        case 0x311e94u: goto label_311e94;
        case 0x311e98u: goto label_311e98;
        case 0x311e9cu: goto label_311e9c;
        case 0x311ea0u: goto label_311ea0;
        case 0x311ea4u: goto label_311ea4;
        case 0x311ea8u: goto label_311ea8;
        case 0x311eacu: goto label_311eac;
        case 0x311eb0u: goto label_311eb0;
        case 0x311eb4u: goto label_311eb4;
        case 0x311eb8u: goto label_311eb8;
        case 0x311ebcu: goto label_311ebc;
        case 0x311ec0u: goto label_311ec0;
        case 0x311ec4u: goto label_311ec4;
        case 0x311ec8u: goto label_311ec8;
        case 0x311eccu: goto label_311ecc;
        case 0x311ed0u: goto label_311ed0;
        case 0x311ed4u: goto label_311ed4;
        case 0x311ed8u: goto label_311ed8;
        case 0x311edcu: goto label_311edc;
        case 0x311ee0u: goto label_311ee0;
        case 0x311ee4u: goto label_311ee4;
        case 0x311ee8u: goto label_311ee8;
        case 0x311eecu: goto label_311eec;
        case 0x311ef0u: goto label_311ef0;
        case 0x311ef4u: goto label_311ef4;
        case 0x311ef8u: goto label_311ef8;
        case 0x311efcu: goto label_311efc;
        case 0x311f00u: goto label_311f00;
        case 0x311f04u: goto label_311f04;
        default: break;
    }

    ctx->pc = 0x311e30u;

label_311e30:
    // 0x311e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x311e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_311e34:
    // 0x311e34: 0x8f82a570  lw          $v0, -0x5A90($gp)
    ctx->pc = 0x311e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
label_311e38:
    // 0x311e38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x311e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_311e3c:
    // 0x311e3c: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x311e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_311e40:
    // 0x311e40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x311e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_311e44:
    // 0x311e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x311e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311e48:
    // 0x311e48: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x311e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_311e4c:
    // 0x311e4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x311e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_311e50:
    // 0x311e50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x311e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_311e54:
    // 0x311e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_311e58:
    // 0x311e58: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x311e58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_311e5c:
    // 0x311e5c: 0xc103322  jal         func_40CC88
label_311e60:
    if (ctx->pc == 0x311E60u) {
        ctx->pc = 0x311E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E5Cu;
        // 0x311e60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311E64u;
        goto label_311e64;
    }
    ctx->pc = 0x311E5Cu;
    SET_GPR_U32(ctx, 31, 0x311E64u);
    ctx->pc = 0x311E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E5Cu;
    // 0x311e60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x311E5Cu, 0x311E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E64u;
label_311e64:
    // 0x311e64: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_311e68:
    if (ctx->pc == 0x311E68u) {
        ctx->pc = 0x311E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E64u;
        // 0x311e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311E6Cu;
        goto label_311e6c;
    }
    ctx->pc = 0x311E64u;
    {
        const bool branch_taken_0x311e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E64u;
        // 0x311e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e64) {
            ctx->pc = 0x311EE8u;
            goto label_311ee8;
        }
    }
    ctx->pc = 0x311E6Cu;
label_311e6c:
    // 0x311e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311e70:
    // 0x311e70: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x311e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_311e74:
    // 0x311e74: 0xc103468  jal         func_40D1A0
label_311e78:
    if (ctx->pc == 0x311E78u) {
        ctx->pc = 0x311E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E74u;
        // 0x311e78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311E7Cu;
        goto label_311e7c;
    }
    ctx->pc = 0x311E74u;
    SET_GPR_U32(ctx, 31, 0x311E7Cu);
    ctx->pc = 0x311E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E74u;
    // 0x311e78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x311E74u, 0x311E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E7Cu;
label_311e7c:
    // 0x311e7c: 0x8fb00008  lw          $s0, 0x8($sp)
    ctx->pc = 0x311e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_311e80:
    // 0x311e80: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_311e84:
    if (ctx->pc == 0x311E84u) {
        ctx->pc = 0x311E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E80u;
        // 0x311e84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311E88u;
        goto label_311e88;
    }
    ctx->pc = 0x311E80u;
    {
        const bool branch_taken_0x311e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E80u;
        // 0x311e84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e80) {
            ctx->pc = 0x311ECCu;
            goto label_311ecc;
        }
    }
    ctx->pc = 0x311E88u;
label_311e88:
    // 0x311e88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x311e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_311e8c:
    // 0x311e8c: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x311e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_311e90:
    // 0x311e90: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x311e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_311e94:
    // 0x311e94: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x311e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_311e98:
    // 0x311e98: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x311e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_311e9c:
    // 0x311e9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x311e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_311ea0:
    // 0x311ea0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x311ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_311ea4:
    // 0x311ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311ea8:
    // 0x311ea8: 0x40f809  jalr        $v0
label_311eac:
    if (ctx->pc == 0x311EACu) {
        ctx->pc = 0x311EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EA8u;
        // 0x311eac: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311EB0u;
        goto label_311eb0;
    }
    ctx->pc = 0x311EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311EB0u);
        ctx->pc = 0x311EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EA8u;
        // 0x311eac: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311EA8u, 0x311EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311EB0u;
label_311eb0:
    // 0x311eb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311eb4:
    // 0x311eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311eb8:
    // 0x311eb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x311eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311ebc:
    // 0x311ebc: 0xc103468  jal         func_40D1A0
label_311ec0:
    if (ctx->pc == 0x311EC0u) {
        ctx->pc = 0x311EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EBCu;
        // 0x311ec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311EC4u;
        goto label_311ec4;
    }
    ctx->pc = 0x311EBCu;
    SET_GPR_U32(ctx, 31, 0x311EC4u);
    ctx->pc = 0x311EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EBCu;
    // 0x311ec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x311EBCu, 0x311EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EC4u;
label_311ec4:
    // 0x311ec4: 0x10000002  b           . + 4 + (0x2 << 2)
label_311ec8:
    if (ctx->pc == 0x311EC8u) {
        ctx->pc = 0x311EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EC4u;
        // 0x311ec8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311ECCu;
        goto label_311ecc;
    }
    ctx->pc = 0x311EC4u;
    {
        const bool branch_taken_0x311ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EC4u;
        // 0x311ec8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ec4) {
            ctx->pc = 0x311ED0u;
            goto label_311ed0;
        }
    }
    ctx->pc = 0x311ECCu;
label_311ecc:
    // 0x311ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x311eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311ed0:
    // 0x311ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311ed4:
    // 0x311ed4: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x311ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_311ed8:
    // 0x311ed8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x311ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_311edc:
    // 0x311edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311ee0:
    // 0x311ee0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x311ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_311ee4:
    // 0x311ee4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x311ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_311ee8:
    // 0x311ee8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x311ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_311eec:
    // 0x311eec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x311eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311ef0:
    // 0x311ef0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x311ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311ef4:
    // 0x311ef4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x311ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311ef8:
    // 0x311ef8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x311ef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311efc:
    // 0x311efc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311f00:
    // 0x311f00: 0x3e00008  jr          $ra
label_311f04:
    if (ctx->pc == 0x311F04u) {
        ctx->pc = 0x311F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F00u;
        // 0x311f04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311F08u;
        goto label_fallthrough_0x311f00;
    }
    ctx->pc = 0x311F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F00u;
        // 0x311f04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x311f00:
    ctx->pc = 0x311F08u;
}
