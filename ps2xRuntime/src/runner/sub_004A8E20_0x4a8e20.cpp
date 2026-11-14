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

// Function: sub_004A8E20
// Address: 0x4a8e20 - 0x4a8fb0
void sub_004A8E20_0x4a8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8E20_0x4a8e20");
#endif

    switch (ctx->pc) {
        case 0x4a8e20u: goto label_4a8e20;
        case 0x4a8e24u: goto label_4a8e24;
        case 0x4a8e28u: goto label_4a8e28;
        case 0x4a8e2cu: goto label_4a8e2c;
        case 0x4a8e30u: goto label_4a8e30;
        case 0x4a8e34u: goto label_4a8e34;
        case 0x4a8e38u: goto label_4a8e38;
        case 0x4a8e3cu: goto label_4a8e3c;
        case 0x4a8e40u: goto label_4a8e40;
        case 0x4a8e44u: goto label_4a8e44;
        case 0x4a8e48u: goto label_4a8e48;
        case 0x4a8e4cu: goto label_4a8e4c;
        case 0x4a8e50u: goto label_4a8e50;
        case 0x4a8e54u: goto label_4a8e54;
        case 0x4a8e58u: goto label_4a8e58;
        case 0x4a8e5cu: goto label_4a8e5c;
        case 0x4a8e60u: goto label_4a8e60;
        case 0x4a8e64u: goto label_4a8e64;
        case 0x4a8e68u: goto label_4a8e68;
        case 0x4a8e6cu: goto label_4a8e6c;
        case 0x4a8e70u: goto label_4a8e70;
        case 0x4a8e74u: goto label_4a8e74;
        case 0x4a8e78u: goto label_4a8e78;
        case 0x4a8e7cu: goto label_4a8e7c;
        case 0x4a8e80u: goto label_4a8e80;
        case 0x4a8e84u: goto label_4a8e84;
        case 0x4a8e88u: goto label_4a8e88;
        case 0x4a8e8cu: goto label_4a8e8c;
        case 0x4a8e90u: goto label_4a8e90;
        case 0x4a8e94u: goto label_4a8e94;
        case 0x4a8e98u: goto label_4a8e98;
        case 0x4a8e9cu: goto label_4a8e9c;
        case 0x4a8ea0u: goto label_4a8ea0;
        case 0x4a8ea4u: goto label_4a8ea4;
        case 0x4a8ea8u: goto label_4a8ea8;
        case 0x4a8eacu: goto label_4a8eac;
        case 0x4a8eb0u: goto label_4a8eb0;
        case 0x4a8eb4u: goto label_4a8eb4;
        case 0x4a8eb8u: goto label_4a8eb8;
        case 0x4a8ebcu: goto label_4a8ebc;
        case 0x4a8ec0u: goto label_4a8ec0;
        case 0x4a8ec4u: goto label_4a8ec4;
        case 0x4a8ec8u: goto label_4a8ec8;
        case 0x4a8eccu: goto label_4a8ecc;
        case 0x4a8ed0u: goto label_4a8ed0;
        case 0x4a8ed4u: goto label_4a8ed4;
        case 0x4a8ed8u: goto label_4a8ed8;
        case 0x4a8edcu: goto label_4a8edc;
        case 0x4a8ee0u: goto label_4a8ee0;
        case 0x4a8ee4u: goto label_4a8ee4;
        case 0x4a8ee8u: goto label_4a8ee8;
        case 0x4a8eecu: goto label_4a8eec;
        case 0x4a8ef0u: goto label_4a8ef0;
        case 0x4a8ef4u: goto label_4a8ef4;
        case 0x4a8ef8u: goto label_4a8ef8;
        case 0x4a8efcu: goto label_4a8efc;
        case 0x4a8f00u: goto label_4a8f00;
        case 0x4a8f04u: goto label_4a8f04;
        case 0x4a8f08u: goto label_4a8f08;
        case 0x4a8f0cu: goto label_4a8f0c;
        case 0x4a8f10u: goto label_4a8f10;
        case 0x4a8f14u: goto label_4a8f14;
        case 0x4a8f18u: goto label_4a8f18;
        case 0x4a8f1cu: goto label_4a8f1c;
        case 0x4a8f20u: goto label_4a8f20;
        case 0x4a8f24u: goto label_4a8f24;
        case 0x4a8f28u: goto label_4a8f28;
        case 0x4a8f2cu: goto label_4a8f2c;
        case 0x4a8f30u: goto label_4a8f30;
        case 0x4a8f34u: goto label_4a8f34;
        case 0x4a8f38u: goto label_4a8f38;
        case 0x4a8f3cu: goto label_4a8f3c;
        case 0x4a8f40u: goto label_4a8f40;
        case 0x4a8f44u: goto label_4a8f44;
        case 0x4a8f48u: goto label_4a8f48;
        case 0x4a8f4cu: goto label_4a8f4c;
        case 0x4a8f50u: goto label_4a8f50;
        case 0x4a8f54u: goto label_4a8f54;
        case 0x4a8f58u: goto label_4a8f58;
        case 0x4a8f5cu: goto label_4a8f5c;
        case 0x4a8f60u: goto label_4a8f60;
        case 0x4a8f64u: goto label_4a8f64;
        case 0x4a8f68u: goto label_4a8f68;
        case 0x4a8f6cu: goto label_4a8f6c;
        case 0x4a8f70u: goto label_4a8f70;
        case 0x4a8f74u: goto label_4a8f74;
        case 0x4a8f78u: goto label_4a8f78;
        case 0x4a8f7cu: goto label_4a8f7c;
        case 0x4a8f80u: goto label_4a8f80;
        case 0x4a8f84u: goto label_4a8f84;
        case 0x4a8f88u: goto label_4a8f88;
        case 0x4a8f8cu: goto label_4a8f8c;
        case 0x4a8f90u: goto label_4a8f90;
        case 0x4a8f94u: goto label_4a8f94;
        case 0x4a8f98u: goto label_4a8f98;
        case 0x4a8f9cu: goto label_4a8f9c;
        case 0x4a8fa0u: goto label_4a8fa0;
        case 0x4a8fa4u: goto label_4a8fa4;
        case 0x4a8fa8u: goto label_4a8fa8;
        case 0x4a8facu: goto label_4a8fac;
        default: break;
    }

    ctx->pc = 0x4a8e20u;

label_4a8e20:
    // 0x4a8e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a8e24:
    // 0x4a8e24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a8e28:
    // 0x4a8e28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a8e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4a8e2c:
    // 0x4a8e2c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4a8e2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e30:
    // 0x4a8e30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4a8e34:
    // 0x4a8e34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a8e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e38:
    // 0x4a8e38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a8e3c:
    // 0x4a8e3c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4a8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_4a8e40:
    // 0x4a8e40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a8e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4a8e44:
    // 0x4a8e44: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a8e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_4a8e48:
    // 0x4a8e48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4a8e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4a8e4c:
    // 0x4a8e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e50:
    // 0x4a8e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a8e54:
    // 0x4a8e54: 0x25730008  addiu       $s3, $t3, 0x8
    ctx->pc = 0x4a8e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_4a8e58:
    // 0x4a8e58: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4a8e58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e5c:
    // 0x4a8e5c: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x4a8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_4a8e60:
    // 0x4a8e60: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x4a8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_4a8e64:
    // 0x4a8e64: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x4a8e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_4a8e68:
    // 0x4a8e68: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4a8e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4a8e6c:
    // 0x4a8e6c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x4a8e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a8e70:
    // 0x4a8e70: 0x95670004  lhu         $a3, 0x4($t3)
    ctx->pc = 0x4a8e70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_4a8e74:
    // 0x4a8e74: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x4a8e74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_4a8e78:
    // 0x4a8e78: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x4a8e78u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
label_4a8e7c:
    // 0x4a8e7c: 0x91690008  lbu         $t1, 0x8($t3)
    ctx->pc = 0x4a8e7cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
label_4a8e80:
    // 0x4a8e80: 0x40f809  jalr        $v0
label_4a8e84:
    if (ctx->pc == 0x4A8E84u) {
        ctx->pc = 0x4A8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E80u;
        // 0x4a8e84: 0x916a0009  lbu         $t2, 0x9($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E88u;
        goto label_4a8e88;
    }
    ctx->pc = 0x4A8E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8E88u);
        ctx->pc = 0x4A8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E80u;
        // 0x4a8e84: 0x916a0009  lbu         $t2, 0x9($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8E80u, 0x4A8E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8E88u;
label_4a8e88:
    // 0x4a8e88: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x4a8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_4a8e8c:
    // 0x4a8e8c: 0x0  nop
    ctx->pc = 0x4a8e8cu;
    // NOP
label_4a8e90:
    // 0x4a8e90: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x4a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_4a8e94:
    // 0x4a8e94: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x4a8e94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4a8e98:
    // 0x4a8e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e9c:
    // 0x4a8e9c: 0x2645a7d8  addiu       $a1, $s2, -0x5828
    ctx->pc = 0x4a8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944728));
label_4a8ea0:
    // 0x4a8ea0: 0x40f809  jalr        $v0
label_4a8ea4:
    if (ctx->pc == 0x4A8EA4u) {
        ctx->pc = 0x4A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EA0u;
        // 0x4a8ea4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8EA8u;
        goto label_4a8ea8;
    }
    ctx->pc = 0x4A8EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8EA8u);
        ctx->pc = 0x4A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EA0u;
        // 0x4a8ea4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8EA0u, 0x4A8EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8EA8u;
label_4a8ea8:
    // 0x4a8ea8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4a8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a8eac:
    // 0x4a8eac: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x4a8eacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a8eb0:
    // 0x4a8eb0: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x4a8eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4a8eb4:
    // 0x4a8eb4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_4a8eb8:
    if (ctx->pc == 0x4A8EB8u) {
        ctx->pc = 0x4A8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EB4u;
        // 0x4a8eb8: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8EBCu;
        goto label_4a8ebc;
    }
    ctx->pc = 0x4A8EB4u;
    {
        const bool branch_taken_0x4a8eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8eb4) {
            ctx->pc = 0x4A8EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8EB4u;
            // 0x4a8eb8: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8e90;
        }
    }
    ctx->pc = 0x4A8EBCu;
label_4a8ebc:
    // 0x4a8ebc: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x4a8ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
label_4a8ec0:
    // 0x4a8ec0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a8ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8ec4:
    // 0x4a8ec4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a8ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8ec8:
    // 0x4a8ec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a8ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8ecc:
    // 0x4a8ecc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a8eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8ed0:
    // 0x4a8ed0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4a8ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8ed4:
    // 0x4a8ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8ed8:
    // 0x4a8ed8: 0x3e00008  jr          $ra
label_4a8edc:
    if (ctx->pc == 0x4A8EDCu) {
        ctx->pc = 0x4A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8ED8u;
        // 0x4a8edc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8EE0u;
        goto label_4a8ee0;
    }
    ctx->pc = 0x4A8ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8ED8u;
        // 0x4a8edc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8EE0u;
label_4a8ee0:
    // 0x4a8ee0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a8ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a8ee4:
    // 0x4a8ee4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a8ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8ee8:
    // 0x4a8ee8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a8ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4a8eec:
    // 0x4a8eec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a8eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4a8ef0:
    // 0x4a8ef0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x4a8ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_4a8ef4:
    // 0x4a8ef4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a8ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4a8ef8:
    // 0x4a8ef8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a8ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a8efc:
    // 0x4a8efc: 0xafbd0030  sw          $sp, 0x30($sp)
    ctx->pc = 0x4a8efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
label_4a8f00:
    // 0x4a8f00: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x4a8f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_4a8f04:
    // 0x4a8f04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a8f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a8f08:
    // 0x4a8f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a8f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8f0c:
    // 0x4a8f0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a8f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8f10:
    // 0x4a8f10: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x4a8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_4a8f14:
    // 0x4a8f14: 0x40f809  jalr        $v0
label_4a8f18:
    if (ctx->pc == 0x4A8F18u) {
        ctx->pc = 0x4A8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F14u;
        // 0x4a8f18: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F1Cu;
        goto label_4a8f1c;
    }
    ctx->pc = 0x4A8F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8F1Cu);
        ctx->pc = 0x4A8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F14u;
        // 0x4a8f18: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8F14u, 0x4A8F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8F1Cu;
label_4a8f1c:
    // 0x4a8f1c: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x4a8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_4a8f20:
    // 0x4a8f20: 0x40f809  jalr        $v0
label_4a8f24:
    if (ctx->pc == 0x4A8F24u) {
        ctx->pc = 0x4A8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F20u;
        // 0x4a8f24: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F28u;
        goto label_4a8f28;
    }
    ctx->pc = 0x4A8F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8F28u);
        ctx->pc = 0x4A8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F20u;
        // 0x4a8f24: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8F20u, 0x4A8F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8F28u;
label_4a8f28:
    // 0x4a8f28: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4a8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8f2c:
    // 0x4a8f2c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4a8f2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4a8f30:
    // 0x4a8f30: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4a8f34:
    if (ctx->pc == 0x4A8F34u) {
        ctx->pc = 0x4A8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F30u;
        // 0x4a8f34: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F38u;
        goto label_4a8f38;
    }
    ctx->pc = 0x4A8F30u;
    {
        const bool branch_taken_0x4a8f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8f30) {
            ctx->pc = 0x4A8F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8F30u;
            // 0x4a8f34: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8F58u;
            goto label_4a8f58;
        }
    }
    ctx->pc = 0x4A8F38u;
label_4a8f38:
    // 0x4a8f38: 0xc12a27a  jal         func_4A89E8
label_4a8f3c:
    if (ctx->pc == 0x4A8F3Cu) {
        ctx->pc = 0x4A8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F38u;
        // 0x4a8f3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F40u;
        goto label_4a8f40;
    }
    ctx->pc = 0x4A8F38u;
    SET_GPR_U32(ctx, 31, 0x4A8F40u);
    ctx->pc = 0x4A8F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8F38u;
    // 0x4a8f3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A89E8u, 0x4A8F38u, 0x4A8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8F40u;
label_4a8f40:
    // 0x4a8f40: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4a8f40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_4a8f44:
    // 0x4a8f44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4a8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8f48:
    // 0x4a8f48: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x4a8f48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4a8f4c:
    // 0x4a8f4c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4a8f50:
    if (ctx->pc == 0x4A8F50u) {
        ctx->pc = 0x4A8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F4Cu;
        // 0x4a8f50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F54u;
        goto label_4a8f54;
    }
    ctx->pc = 0x4A8F4Cu;
    {
        const bool branch_taken_0x4a8f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F4Cu;
        // 0x4a8f50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8f4c) {
            ctx->pc = 0x4A8F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8f38;
        }
    }
    ctx->pc = 0x4A8F54u;
label_4a8f54:
    // 0x4a8f54: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4a8f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a8f58:
    // 0x4a8f58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a8f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a8f5c:
    // 0x4a8f5c: 0x82270003  lb          $a3, 0x3($s1)
    ctx->pc = 0x4a8f5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_4a8f60:
    // 0x4a8f60: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x4a8f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4a8f64:
    // 0x4a8f64: 0x82280002  lb          $t0, 0x2($s1)
    ctx->pc = 0x4a8f64u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_4a8f68:
    // 0x4a8f68: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x4a8f68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_4a8f6c:
    // 0x4a8f6c: 0x82290004  lb          $t1, 0x4($s1)
    ctx->pc = 0x4a8f6cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_4a8f70:
    // 0x4a8f70: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x4a8f70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_4a8f74:
    // 0x4a8f74: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x4a8f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_4a8f78:
    // 0x4a8f78: 0x92260007  lbu         $a2, 0x7($s1)
    ctx->pc = 0x4a8f78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_4a8f7c:
    // 0x4a8f7c: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x4a8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
label_4a8f80:
    // 0x4a8f80: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x4a8f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_4a8f84:
    // 0x4a8f84: 0xa2270000  sb          $a3, 0x0($s1)
    ctx->pc = 0x4a8f84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 7));
label_4a8f88:
    // 0x4a8f88: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x4a8f88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
label_4a8f8c:
    // 0x4a8f8c: 0xa2280001  sb          $t0, 0x1($s1)
    ctx->pc = 0x4a8f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 8));
label_4a8f90:
    // 0x4a8f90: 0xa2250004  sb          $a1, 0x4($s1)
    ctx->pc = 0x4a8f90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 5));
label_4a8f94:
    // 0x4a8f94: 0xa2290005  sb          $t1, 0x5($s1)
    ctx->pc = 0x4a8f94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 9));
label_4a8f98:
    // 0x4a8f98: 0xa2260006  sb          $a2, 0x6($s1)
    ctx->pc = 0x4a8f98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 6));
label_4a8f9c:
    // 0x4a8f9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a8f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a8fa0:
    // 0x4a8fa0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a8fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8fa4:
    // 0x4a8fa4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a8fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8fa8:
    // 0x4a8fa8: 0x3e00008  jr          $ra
label_4a8fac:
    if (ctx->pc == 0x4A8FACu) {
        ctx->pc = 0x4A8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FA8u;
        // 0x4a8fac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8FB0u;
        goto label_fallthrough_0x4a8fa8;
    }
    ctx->pc = 0x4A8FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FA8u;
        // 0x4a8fac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a8fa8:
    ctx->pc = 0x4A8FB0u;
}
