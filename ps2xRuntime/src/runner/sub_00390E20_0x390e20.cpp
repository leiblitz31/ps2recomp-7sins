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

// Function: sub_00390E20
// Address: 0x390e20 - 0x391230
void sub_00390E20_0x390e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390E20_0x390e20");
#endif

    switch (ctx->pc) {
        case 0x390e80u: goto label_390e80;
        case 0x390f0cu: goto label_390f0c;
        default: break;
    }

    ctx->pc = 0x390e20u;

    // 0x390e20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x390e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x390e24: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x390e24u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e28: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x390e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x390e2c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x390e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x390e30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x390e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x390e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x390e38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x390e38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e3c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x390e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x390e40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x390e40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e44: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x390e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x390e48: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x390e48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e4c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x390e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x390e50: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x390e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x390e54: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x390e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x390e58: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x390e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x390e5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x390e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x390e60: 0x120000e6  beqz        $s0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x390E60u;
    {
        const bool branch_taken_0x390e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E60u;
        // 0x390e64: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e60) {
            ctx->pc = 0x3911FCu;
            goto label_3911fc;
        }
    }
    ctx->pc = 0x390E68u;
    // 0x390e68: 0x2bc20004  slti        $v0, $fp, 0x4
    ctx->pc = 0x390e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x390e6c: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x390e6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x390e70: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x390e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390e74: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x390e74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390e78: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x390e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x390e7c: 0x0  nop
    ctx->pc = 0x390e7cu;
    // NOP
label_390e80:
    // 0x390e80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x390e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e84: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x390e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x390e88: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x390E88u;
    {
        const bool branch_taken_0x390e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E88u;
        // 0x390e8c: 0x2bd60004  slti        $s6, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e88) {
            ctx->pc = 0x390EBCu;
            goto label_390ebc;
        }
    }
    ctx->pc = 0x390E90u;
    // 0x390e90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x390e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x390e94: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x390E94u;
    {
        const bool branch_taken_0x390e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390e94) {
            ctx->pc = 0x390E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390E94u;
            // 0x390e98: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390EACu;
            goto label_390eac;
        }
    }
    ctx->pc = 0x390E9Cu;
    // 0x390e9c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x390e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x390ea0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x390EA0u;
    {
        const bool branch_taken_0x390ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390ea0) {
            ctx->pc = 0x390EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390EA0u;
            // 0x390ea4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390EF0u;
            goto label_390ef0;
        }
    }
    ctx->pc = 0x390EA8u;
    // 0x390ea8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x390ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_390eac:
    // 0x390eac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x390EACu;
    {
        const bool branch_taken_0x390eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390eac) {
            ctx->pc = 0x390EF0u;
            goto label_390ef0;
        }
    }
    ctx->pc = 0x390EB4u;
    // 0x390eb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x390EB4u;
    {
        const bool branch_taken_0x390eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390EB4u;
        // 0x390eb8: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390eb4) {
            ctx->pc = 0x390EE8u;
            goto label_390ee8;
        }
    }
    ctx->pc = 0x390EBCu;
label_390ebc:
    // 0x390ebc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x390ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x390ec0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x390EC0u;
    {
        const bool branch_taken_0x390ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390ec0) {
            ctx->pc = 0x390EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390EC0u;
            // 0x390ec4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390EDCu;
            goto label_390edc;
        }
    }
    ctx->pc = 0x390EC8u;
    // 0x390ec8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x390ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x390ecc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x390ECCu;
    {
        const bool branch_taken_0x390ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390ecc) {
            ctx->pc = 0x390ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390ECCu;
            // 0x390ed0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390EDCu;
            goto label_390edc;
        }
    }
    ctx->pc = 0x390ED4u;
    // 0x390ed4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x390ED4u;
    {
        const bool branch_taken_0x390ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390ED4u;
        // 0x390ed8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ed4) {
            ctx->pc = 0x390EF0u;
            goto label_390ef0;
        }
    }
    ctx->pc = 0x390EDCu;
label_390edc:
    // 0x390edc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390EDCu;
    {
        const bool branch_taken_0x390edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390edc) {
            ctx->pc = 0x390EF0u;
            goto label_390ef0;
        }
    }
    ctx->pc = 0x390EE4u;
    // 0x390ee4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x390ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_390ee8:
    // 0x390ee8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x390ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390eec: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x390eecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_390ef0:
    // 0x390ef0: 0x122000c2  beqz        $s1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x390EF0u;
    {
        const bool branch_taken_0x390ef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x390EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390EF0u;
        // 0x390ef4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ef0) {
            ctx->pc = 0x3911FCu;
            goto label_3911fc;
        }
    }
    ctx->pc = 0x390EF8u;
    // 0x390ef8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x390ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x390efc: 0x7fac0010  sq          $t4, 0x10($sp)
    ctx->pc = 0x390efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 12));
    // 0x390f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x390f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f04: 0xc0e4322  jal         func_390C88
    ctx->pc = 0x390F04u;
    SET_GPR_U32(ctx, 31, 0x390F0Cu);
    ctx->pc = 0x390F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F04u;
    // 0x390f08: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390C88u, 0x390F04u, 0x390F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F0Cu;
label_390f0c:
    // 0x390f0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x390f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x390f10: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390F10u;
    {
        const bool branch_taken_0x390f10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x390F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F10u;
        // 0x390f14: 0x7bac0010  lq          $t4, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f10) {
            ctx->pc = 0x390F20u;
            goto label_390f20;
        }
    }
    ctx->pc = 0x390F18u;
    // 0x390f18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x390F18u;
    {
        const bool branch_taken_0x390f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F18u;
        // 0x390f1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f18) {
            ctx->pc = 0x390F40u;
            goto label_390f40;
        }
    }
    ctx->pc = 0x390F20u;
label_390f20:
    // 0x390f20: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x390f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x390f24: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390F24u;
    {
        const bool branch_taken_0x390f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x390f24) {
            ctx->pc = 0x390F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390F24u;
            // 0x390f28: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390F34u;
            goto label_390f34;
        }
    }
    ctx->pc = 0x390F2Cu;
    // 0x390f2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390F2Cu;
    {
        const bool branch_taken_0x390f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F2Cu;
        // 0x390f30: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f2c) {
            ctx->pc = 0x390F40u;
            goto label_390f40;
        }
    }
    ctx->pc = 0x390F34u;
label_390f34:
    // 0x390f34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x390f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390f38: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x390f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x390f3c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x390f3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_390f40:
    // 0x390f40: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x390f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x390f44: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x390F44u;
    {
        const bool branch_taken_0x390f44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x390f44) {
            ctx->pc = 0x390F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390F44u;
            // 0x390f48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x390F4Cu;
            goto label_390f4c;
        }
    }
    ctx->pc = 0x390F4Cu;
label_390f4c:
    // 0x390f4c: 0x77001a  div         $zero, $v1, $s7
    ctx->pc = 0x390f4cu;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x390f50: 0x1010  mfhi        $v0
    ctx->pc = 0x390f50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x390f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x390f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x390f58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x390f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x390f5c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x390f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x390f60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x390f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x390f64: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x390F64u;
    {
        const bool branch_taken_0x390f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x390f64) {
            ctx->pc = 0x390F7Cu;
            goto label_390f7c;
        }
    }
    ctx->pc = 0x390F6Cu;
    // 0x390f6c: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x390F6Cu;
    {
        const bool branch_taken_0x390f6c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x390f6c) {
            ctx->pc = 0x390F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390F6Cu;
            // 0x390f70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x390F74u;
            goto label_390f74;
        }
    }
    ctx->pc = 0x390F74u;
label_390f74:
    // 0x390f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390F74u;
    {
        const bool branch_taken_0x390f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F74u;
        // 0x390f78: 0x94480002  lhu         $t0, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f74) {
            ctx->pc = 0x390F88u;
            goto label_390f88;
        }
    }
    ctx->pc = 0x390F7Cu;
label_390f7c:
    // 0x390f7c: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x390F7Cu;
    {
        const bool branch_taken_0x390f7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x390f7c) {
            ctx->pc = 0x390F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390F7Cu;
            // 0x390f80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x390F84u;
            goto label_390f84;
        }
    }
    ctx->pc = 0x390F84u;
label_390f84:
    // 0x390f84: 0x94480000  lhu         $t0, 0x0($v0)
    ctx->pc = 0x390f84u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_390f88:
    // 0x390f88: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x390f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x390f8c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x390f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f90: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x390f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x390f94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x390f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x390f98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x390f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x390fa0: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x390fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fa4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x390fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x390fa8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x390fa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x390fac: 0x9446fffe  lhu         $a2, -0x2($v0)
    ctx->pc = 0x390facu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x390fb0: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x390FB0u;
    {
        const bool branch_taken_0x390fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x390FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FB0u;
        // 0x390fb4: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fb0) {
            ctx->pc = 0x390FC4u;
            goto label_390fc4;
        }
    }
    ctx->pc = 0x390FB8u;
    // 0x390fb8: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x390fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x390fbc: 0x10480020  beq         $v0, $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x390FBCu;
    {
        const bool branch_taken_0x390fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x390FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FBCu;
        // 0x390fc0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fbc) {
            ctx->pc = 0x391040u;
            goto label_391040;
        }
    }
    ctx->pc = 0x390FC4u;
label_390fc4:
    // 0x390fc4: 0x54680006  bnel        $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390FC4u;
    {
        const bool branch_taken_0x390fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x390fc4) {
            ctx->pc = 0x390FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390FC4u;
            // 0x390fc8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390FE0u;
            goto label_390fe0;
        }
    }
    ctx->pc = 0x390FCCu;
    // 0x390fcc: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x390fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x390fd0: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x390FD0u;
    {
        const bool branch_taken_0x390fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x390fd0) {
            ctx->pc = 0x390FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390FD0u;
            // 0x390fd4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390FE0u;
            goto label_390fe0;
        }
    }
    ctx->pc = 0x390FD8u;
    // 0x390fd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x390FD8u;
    {
        const bool branch_taken_0x390fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FD8u;
        // 0x390fdc: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fd8) {
            ctx->pc = 0x391040u;
            goto label_391040;
        }
    }
    ctx->pc = 0x390FE0u;
label_390fe0:
    // 0x390fe0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x390fe0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390fe4: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x390FE4u;
    {
        const bool branch_taken_0x390fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x390FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FE4u;
        // 0x390fe8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fe4) {
            ctx->pc = 0x390FF8u;
            goto label_390ff8;
        }
    }
    ctx->pc = 0x390FECu;
    // 0x390fec: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x390fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x390ff0: 0x10480013  beq         $v0, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x390FF0u;
    {
        const bool branch_taken_0x390ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x390FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FF0u;
        // 0x390ff4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ff0) {
            ctx->pc = 0x391040u;
            goto label_391040;
        }
    }
    ctx->pc = 0x390FF8u;
label_390ff8:
    // 0x390ff8: 0x54880005  bnel        $a0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390FF8u;
    {
        const bool branch_taken_0x390ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x390ff8) {
            ctx->pc = 0x390FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390FF8u;
            // 0x390ffc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391010u;
            goto label_391010;
        }
    }
    ctx->pc = 0x391000u;
    // 0x391000: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x391000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x391004: 0x1046000e  beq         $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x391004u;
    {
        const bool branch_taken_0x391004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x391008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391004u;
        // 0x391008: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391004) {
            ctx->pc = 0x391040u;
            goto label_391040;
        }
    }
    ctx->pc = 0x39100Cu;
    // 0x39100c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x39100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_391010:
    // 0x391010: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x391010u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x391014: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x391014u;
    {
        const bool branch_taken_0x391014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x391018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391014u;
        // 0x391018: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391014) {
            ctx->pc = 0x391028u;
            goto label_391028;
        }
    }
    ctx->pc = 0x39101Cu;
    // 0x39101c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x39101cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x391020: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x391020u;
    {
        const bool branch_taken_0x391020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x391024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391020u;
        // 0x391024: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391020) {
            ctx->pc = 0x391040u;
            goto label_391040;
        }
    }
    ctx->pc = 0x391028u;
label_391028:
    // 0x391028: 0x14880005  bne         $a0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391028u;
    {
        const bool branch_taken_0x391028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x39102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391028u;
        // 0x39102c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391028) {
            ctx->pc = 0x391040u;
            goto label_391040;
        }
    }
    ctx->pc = 0x391030u;
    // 0x391030: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x391030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x391034: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x391034u;
    {
        const bool branch_taken_0x391034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x391034) {
            ctx->pc = 0x391040u;
            goto label_391040;
        }
    }
    ctx->pc = 0x39103Cu;
    // 0x39103c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x39103cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_391040:
    // 0x391040: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x391040u;
    {
        const bool branch_taken_0x391040 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x391044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391040u;
        // 0x391044: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391040) {
            ctx->pc = 0x39107Cu;
            goto label_39107c;
        }
    }
    ctx->pc = 0x391048u;
    // 0x391048: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x391048u;
    {
        const bool branch_taken_0x391048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391048u;
        // 0x39104c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391048) {
            ctx->pc = 0x3910C0u;
            goto label_3910c0;
        }
    }
    ctx->pc = 0x391050u;
    // 0x391050: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x391050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x391054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391054u;
    {
        const bool branch_taken_0x391054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391054u;
        // 0x391058: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391054) {
            ctx->pc = 0x391068u;
            goto label_391068;
        }
    }
    ctx->pc = 0x39105Cu;
    // 0x39105c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x39105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x391060: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391064: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391064u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391068:
    // 0x391068: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x391068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39106c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x39106Cu;
    {
        const bool branch_taken_0x39106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39106Cu;
        // 0x391070: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39106c) {
            ctx->pc = 0x3910B4u;
            goto label_3910b4;
        }
    }
    ctx->pc = 0x391074u;
    // 0x391074: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x391074u;
    {
        const bool branch_taken_0x391074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391074u;
        // 0x391078: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391074) {
            ctx->pc = 0x3910ACu;
            goto label_3910ac;
        }
    }
    ctx->pc = 0x39107Cu;
label_39107c:
    // 0x39107c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39107Cu;
    {
        const bool branch_taken_0x39107c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39107Cu;
        // 0x391080: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39107c) {
            ctx->pc = 0x3910C0u;
            goto label_3910c0;
        }
    }
    ctx->pc = 0x391084u;
    // 0x391084: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x391084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x391088: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391088u;
    {
        const bool branch_taken_0x391088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391088u;
        // 0x39108c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391088) {
            ctx->pc = 0x39109Cu;
            goto label_39109c;
        }
    }
    ctx->pc = 0x391090u;
    // 0x391090: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x391094: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391098: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391098u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_39109c:
    // 0x39109c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3910a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3910A0u;
    {
        const bool branch_taken_0x3910a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3910A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910A0u;
        // 0x3910a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910a0) {
            ctx->pc = 0x3910B4u;
            goto label_3910b4;
        }
    }
    ctx->pc = 0x3910A8u;
    // 0x3910a8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3910a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3910ac:
    // 0x3910ac: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3910acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3910b0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3910b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3910b4:
    // 0x3910b4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x3910b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3910b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3910B8u;
    {
        const bool branch_taken_0x3910b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3910b8) {
            ctx->pc = 0x3910C4u;
            goto label_3910c4;
        }
    }
    ctx->pc = 0x3910C0u;
label_3910c0:
    // 0x3910c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3910c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3910c4:
    // 0x3910c4: 0x10c00047  beqz        $a2, . + 4 + (0x47 << 2)
    ctx->pc = 0x3910C4u;
    {
        const bool branch_taken_0x3910c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3910C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910C4u;
        // 0x3910c8: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910c4) {
            ctx->pc = 0x3911E4u;
            goto label_3911e4;
        }
    }
    ctx->pc = 0x3910CCu;
    // 0x3910cc: 0x512a0005  beql        $t1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3910CCu;
    {
        const bool branch_taken_0x3910cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x3910cc) {
            ctx->pc = 0x3910D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3910CCu;
            // 0x3910d0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3910E4u;
            goto label_3910e4;
        }
    }
    ctx->pc = 0x3910D4u;
    // 0x3910d4: 0x51270003  beql        $t1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3910D4u;
    {
        const bool branch_taken_0x3910d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        if (branch_taken_0x3910d4) {
            ctx->pc = 0x3910D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3910D4u;
            // 0x3910d8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3910E4u;
            goto label_3910e4;
        }
    }
    ctx->pc = 0x3910DCu;
    // 0x3910dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3910DCu;
    {
        const bool branch_taken_0x3910dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3910E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910DCu;
        // 0x3910e0: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910dc) {
            ctx->pc = 0x391108u;
            goto label_391108;
        }
    }
    ctx->pc = 0x3910E4u;
label_3910e4:
    // 0x3910e4: 0x504a0005  beql        $v0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3910E4u;
    {
        const bool branch_taken_0x3910e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x3910e4) {
            ctx->pc = 0x3910E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3910E4u;
            // 0x3910e8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3910FCu;
            goto label_3910fc;
        }
    }
    ctx->pc = 0x3910ECu;
    // 0x3910ec: 0x50470003  beql        $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3910ECu;
    {
        const bool branch_taken_0x3910ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x3910ec) {
            ctx->pc = 0x3910F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3910ECu;
            // 0x3910f0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3910FCu;
            goto label_3910fc;
        }
    }
    ctx->pc = 0x3910F4u;
    // 0x3910f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3910F4u;
    {
        const bool branch_taken_0x3910f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3910F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910F4u;
        // 0x3910f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910f4) {
            ctx->pc = 0x391108u;
            goto label_391108;
        }
    }
    ctx->pc = 0x3910FCu;
label_3910fc:
    // 0x3910fc: 0x108a0002  beq         $a0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3910FCu;
    {
        const bool branch_taken_0x3910fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x391100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910FCu;
        // 0x391100: 0x871026  xor         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910fc) {
            ctx->pc = 0x391108u;
            goto label_391108;
        }
    }
    ctx->pc = 0x391104u;
    // 0x391104: 0x82980b  movn        $s3, $a0, $v0
    ctx->pc = 0x391104u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_391108:
    // 0x391108: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x391108u;
    {
        const bool branch_taken_0x391108 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x391108) {
            ctx->pc = 0x391144u;
            goto label_391144;
        }
    }
    ctx->pc = 0x391110u;
    // 0x391110: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x391110u;
    {
        const bool branch_taken_0x391110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x391114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391110u;
        // 0x391114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391110) {
            ctx->pc = 0x391188u;
            goto label_391188;
        }
    }
    ctx->pc = 0x391118u;
    // 0x391118: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x391118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x39111c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39111Cu;
    {
        const bool branch_taken_0x39111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39111Cu;
        // 0x391120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39111c) {
            ctx->pc = 0x391130u;
            goto label_391130;
        }
    }
    ctx->pc = 0x391124u;
    // 0x391124: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x391124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x391128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39112c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x39112cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391130:
    // 0x391130: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x391130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x391134: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x391134u;
    {
        const bool branch_taken_0x391134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391134u;
        // 0x391138: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391134) {
            ctx->pc = 0x39117Cu;
            goto label_39117c;
        }
    }
    ctx->pc = 0x39113Cu;
    // 0x39113c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39113Cu;
    {
        const bool branch_taken_0x39113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39113Cu;
        // 0x391140: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39113c) {
            ctx->pc = 0x391174u;
            goto label_391174;
        }
    }
    ctx->pc = 0x391144u;
label_391144:
    // 0x391144: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x391144u;
    {
        const bool branch_taken_0x391144 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x391148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391144u;
        // 0x391148: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391144) {
            ctx->pc = 0x391188u;
            goto label_391188;
        }
    }
    ctx->pc = 0x39114Cu;
    // 0x39114c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x39114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x391150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391150u;
    {
        const bool branch_taken_0x391150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391150u;
        // 0x391154: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391150) {
            ctx->pc = 0x391164u;
            goto label_391164;
        }
    }
    ctx->pc = 0x391158u;
    // 0x391158: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x39115c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391160: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391160u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391164:
    // 0x391164: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x391164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x391168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391168u;
    {
        const bool branch_taken_0x391168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391168u;
        // 0x39116c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391168) {
            ctx->pc = 0x39117Cu;
            goto label_39117c;
        }
    }
    ctx->pc = 0x391170u;
    // 0x391170: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391174:
    // 0x391174: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x391174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391178: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x391178u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_39117c:
    // 0x39117c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x39117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x391180: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x391180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391184: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x391184u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_391188:
    // 0x391188: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x391188u;
    {
        const bool branch_taken_0x391188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391188u;
        // 0x39118c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391188) {
            ctx->pc = 0x3911C8u;
            goto label_3911c8;
        }
    }
    ctx->pc = 0x391190u;
    // 0x391190: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x391190u;
    {
        const bool branch_taken_0x391190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391190u;
        // 0x391194: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391190) {
            ctx->pc = 0x3911CCu;
            goto label_3911cc;
        }
    }
    ctx->pc = 0x391198u;
    // 0x391198: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x391198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39119c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x39119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3911a0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3911a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3911a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3911a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3911a8: 0x9464fffc  lhu         $a0, -0x4($v1)
    ctx->pc = 0x3911a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3911ac: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3911acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3911b0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3911b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3911b4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3911b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3911b8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3911b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3911bc: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x3911bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3911c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3911C0u;
    {
        const bool branch_taken_0x3911c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3911C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911C0u;
        // 0x3911c4: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911c0) {
            ctx->pc = 0x3911F4u;
            goto label_3911f4;
        }
    }
    ctx->pc = 0x3911C8u;
label_3911c8:
    // 0x3911c8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3911cc:
    // 0x3911cc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3911ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3911d0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3911d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3911d4: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3911d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x3911d8: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x3911d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3911dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3911DCu;
    {
        const bool branch_taken_0x3911dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3911E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911DCu;
        // 0x3911e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911dc) {
            ctx->pc = 0x3911F4u;
            goto label_3911f4;
        }
    }
    ctx->pc = 0x3911E4u;
label_3911e4:
    // 0x3911e4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3911e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3911e8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3911e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3911ec: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3911ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x3911f0: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x3911f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
label_3911f4:
    // 0x3911f4: 0x1600ff22  bnez        $s0, . + 4 + (-0xDE << 2)
    ctx->pc = 0x3911F4u;
    {
        const bool branch_taken_0x3911f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3911F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911F4u;
        // 0x3911f8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3911f4) {
            ctx->pc = 0x390E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390e80;
        }
    }
    ctx->pc = 0x3911FCu;
label_3911fc:
    // 0x3911fc: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x3911fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391200: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x391200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x391204: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x391204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x391208: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x391208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39120c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x39120cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x391210: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x391210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x391214: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x391214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x391218: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x391218u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39121c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x39121cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x391220: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x391220u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x391224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x391224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x391228: 0x3e00008  jr          $ra
    ctx->pc = 0x391228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391228u;
        // 0x39122c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391230u;
}
