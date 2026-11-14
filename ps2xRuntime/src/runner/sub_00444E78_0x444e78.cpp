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

// Function: sub_00444E78
// Address: 0x444e78 - 0x445120
void sub_00444E78_0x444e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444E78_0x444e78");
#endif

    switch (ctx->pc) {
        case 0x444f80u: goto label_444f80;
        case 0x444fc0u: goto label_444fc0;
        case 0x445010u: goto label_445010;
        case 0x445078u: goto label_445078;
        default: break;
    }

    ctx->pc = 0x444e78u;

    // 0x444e78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x444e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x444e7c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x444e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x444e80: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x444e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x444e84: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x444e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x444e88: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x444e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x444e8c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x444e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x444e90: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x444e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x444e94: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x444e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x444e98: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x444e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x444e9c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x444e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x444ea0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x444ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x444ea4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x444ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x444ea8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x444ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x444eac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x444eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x444eb0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x444eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x444eb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x444eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x444eb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x444eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x444ebc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x444ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x444ec0: 0x1043008a  beq         $v0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x444EC0u;
    {
        const bool branch_taken_0x444ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x444EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444EC0u;
        // 0x444ec4: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444ec0) {
            ctx->pc = 0x4450ECu;
            goto label_4450ec;
        }
    }
    ctx->pc = 0x444EC8u;
    // 0x444ec8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x444ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444ecc: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x444eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x444ed0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x444ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x444ed4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x444ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x444ed8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444edc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x444edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x444ee0: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x444EE0u;
    {
        const bool branch_taken_0x444ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444EE0u;
        // 0x444ee4: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444ee0) {
            ctx->pc = 0x4450E4u;
            goto label_4450e4;
        }
    }
    ctx->pc = 0x444EE8u;
    // 0x444ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x444ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444eec: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x444eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x444ef0: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x444ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x444ef4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x444ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x444ef8: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x444ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x444efc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x444efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x444f00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x444f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x444f04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x444f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x444f08: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x444F08u;
    {
        const bool branch_taken_0x444f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444F08u;
        // 0x444f0c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444f08) {
            ctx->pc = 0x4450BCu;
            goto label_4450bc;
        }
    }
    ctx->pc = 0x444F10u;
    // 0x444f10: 0x94f70002  lhu         $s7, 0x2($a3)
    ctx->pc = 0x444f10u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x444f14: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x444f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x444f18: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x444f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x444f1c: 0x17f080  sll         $fp, $s7, 2
    ctx->pc = 0x444f1cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x444f20: 0x32e30001  andi        $v1, $s7, 0x1
    ctx->pc = 0x444f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x444f24: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x444f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x444f28: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x444f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x444f2c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x444F2Cu;
    {
        const bool branch_taken_0x444f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x444F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444F2Cu;
        // 0x444f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444f2c) {
            ctx->pc = 0x444FA8u;
            goto label_444fa8;
        }
    }
    ctx->pc = 0x444F34u;
    // 0x444f34: 0x3c51821  addu        $v1, $fp, $a1
    ctx->pc = 0x444f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x444f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x444f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444f3c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x444f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x444f40: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x444f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x444f44: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x444F44u;
    {
        const bool branch_taken_0x444f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444f44) {
            ctx->pc = 0x444F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444F44u;
            // 0x444f48: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444F9Cu;
            goto label_444f9c;
        }
    }
    ctx->pc = 0x444F4Cu;
    // 0x444f4c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x444f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x444f50: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x444F50u;
    {
        const bool branch_taken_0x444f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x444f50) {
            ctx->pc = 0x444F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444F50u;
            // 0x444f54: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444F9Cu;
            goto label_444f9c;
        }
    }
    ctx->pc = 0x444F58u;
    // 0x444f58: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x444f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x444f5c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x444F5Cu;
    {
        const bool branch_taken_0x444f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x444f5c) {
            ctx->pc = 0x444F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444F5Cu;
            // 0x444f60: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444F88u;
            goto label_444f88;
        }
    }
    ctx->pc = 0x444F64u;
    // 0x444f64: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x444f64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x444f68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x444f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x444f6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x444F6Cu;
    {
        const bool branch_taken_0x444f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444f6c) {
            ctx->pc = 0x444F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444F6Cu;
            // 0x444f70: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444F88u;
            goto label_444f88;
        }
    }
    ctx->pc = 0x444F74u;
    // 0x444f74: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x444f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    // 0x444f78: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x444F78u;
    SET_GPR_U32(ctx, 31, 0x444F80u);
    ctx->pc = 0x444F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444F78u;
    // 0x444f7c: 0x7fa70010  sq          $a3, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x444F78u, 0x444F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444F80u;
label_444f80:
    // 0x444f80: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x444f80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444f84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x444f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_444f88:
    // 0x444f88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x444f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x444f8c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x444f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x444f90: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x444f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x444f94: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x444f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x444f98: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x444f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_444f9c:
    // 0x444f9c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x444f9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x444fa0: 0x12e00045  beqz        $s7, . + 4 + (0x45 << 2)
    ctx->pc = 0x444FA0u;
    {
        const bool branch_taken_0x444fa0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x444FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444FA0u;
        // 0x444fa4: 0x27defffc  addiu       $fp, $fp, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444fa0) {
            ctx->pc = 0x4450B8u;
            goto label_4450b8;
        }
    }
    ctx->pc = 0x444FA8u;
label_444fa8:
    // 0x444fa8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x444fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444fac: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x444facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444fb0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x444fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444fb4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x444fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444fb8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x444fb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444fbc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x444fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444fc0:
    // 0x444fc0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x444fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x444fc4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x444fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x444fc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x444fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x444fcc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x444fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x444fd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x444fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x444fd4: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x444FD4u;
    {
        const bool branch_taken_0x444fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x444fd4) {
            ctx->pc = 0x444FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444FD4u;
            // 0x444fd8: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44502Cu;
            goto label_44502c;
        }
    }
    ctx->pc = 0x444FDCu;
    // 0x444fdc: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x444fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x444fe0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x444FE0u;
    {
        const bool branch_taken_0x444fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x444fe0) {
            ctx->pc = 0x444FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444FE0u;
            // 0x444fe4: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44502Cu;
            goto label_44502c;
        }
    }
    ctx->pc = 0x444FE8u;
    // 0x444fe8: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x444fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x444fec: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x444FECu;
    {
        const bool branch_taken_0x444fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x444fec) {
            ctx->pc = 0x444FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444FECu;
            // 0x444ff0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445018u;
            goto label_445018;
        }
    }
    ctx->pc = 0x444FF4u;
    // 0x444ff4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x444ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x444ff8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x444ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x444ffc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x444FFCu;
    {
        const bool branch_taken_0x444ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444ffc) {
            ctx->pc = 0x445000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444FFCu;
            // 0x445000: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445018u;
            goto label_445018;
        }
    }
    ctx->pc = 0x445004u;
    // 0x445004: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x445004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    // 0x445008: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x445008u;
    SET_GPR_U32(ctx, 31, 0x445010u);
    ctx->pc = 0x44500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445008u;
    // 0x44500c: 0x7fa70010  sq          $a3, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445008u, 0x445010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445010u;
label_445010:
    // 0x445010: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x445010u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x445014: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x445014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_445018:
    // 0x445018: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x445018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x44501c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x44501cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x445020: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x445020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x445024: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x445024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x445028: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x445028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_44502c:
    // 0x44502c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x44502cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x445030: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x445030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x445034: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x445034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x445038: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x445038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x44503c: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x44503Cu;
    {
        const bool branch_taken_0x44503c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44503c) {
            ctx->pc = 0x445040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44503Cu;
            // 0x445040: 0x2610ffc8  addiu       $s0, $s0, -0x38 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967240));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445094u;
            goto label_445094;
        }
    }
    ctx->pc = 0x445044u;
    // 0x445044: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x445044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x445048: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x445048u;
    {
        const bool branch_taken_0x445048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445048) {
            ctx->pc = 0x44504Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445048u;
            // 0x44504c: 0x2610ffc8  addiu       $s0, $s0, -0x38 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967240));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445094u;
            goto label_445094;
        }
    }
    ctx->pc = 0x445050u;
    // 0x445050: 0x8ec5ffe8  lw          $a1, -0x18($s6)
    ctx->pc = 0x445050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967272)));
    // 0x445054: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x445054u;
    {
        const bool branch_taken_0x445054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x445054) {
            ctx->pc = 0x445058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445054u;
            // 0x445058: 0xae20ffe4  sw          $zero, -0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294967268), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445080u;
            goto label_445080;
        }
    }
    ctx->pc = 0x44505Cu;
    // 0x44505c: 0x9622ffe4  lhu         $v0, -0x1C($s1)
    ctx->pc = 0x44505cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967268)));
    // 0x445060: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x445064: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x445064u;
    {
        const bool branch_taken_0x445064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445064) {
            ctx->pc = 0x445068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445064u;
            // 0x445068: 0xae20ffe4  sw          $zero, -0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294967268), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445080u;
            goto label_445080;
        }
    }
    ctx->pc = 0x44506Cu;
    // 0x44506c: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x44506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    // 0x445070: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x445070u;
    SET_GPR_U32(ctx, 31, 0x445078u);
    ctx->pc = 0x445074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445070u;
    // 0x445074: 0x7fa70010  sq          $a3, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445070u, 0x445078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445078u;
label_445078:
    // 0x445078: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x445078u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44507c: 0xae20ffe4  sw          $zero, -0x1C($s1)
    ctx->pc = 0x44507cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967268), GPR_U32(ctx, 0));
label_445080:
    // 0x445080: 0xae60fff0  sw          $zero, -0x10($s3)
    ctx->pc = 0x445080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967280), GPR_U32(ctx, 0));
    // 0x445084: 0xae40ffe8  sw          $zero, -0x18($s2)
    ctx->pc = 0x445084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967272), GPR_U32(ctx, 0));
    // 0x445088: 0xae80fff4  sw          $zero, -0xC($s4)
    ctx->pc = 0x445088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294967284), GPR_U32(ctx, 0));
    // 0x44508c: 0xae00fff8  sw          $zero, -0x8($s0)
    ctx->pc = 0x44508cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
    // 0x445090: 0x2610ffc8  addiu       $s0, $s0, -0x38
    ctx->pc = 0x445090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967240));
label_445094:
    // 0x445094: 0x2694ffc8  addiu       $s4, $s4, -0x38
    ctx->pc = 0x445094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967240));
    // 0x445098: 0x2673ffc8  addiu       $s3, $s3, -0x38
    ctx->pc = 0x445098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967240));
    // 0x44509c: 0x2652ffc8  addiu       $s2, $s2, -0x38
    ctx->pc = 0x44509cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967240));
    // 0x4450a0: 0x2631ffc8  addiu       $s1, $s1, -0x38
    ctx->pc = 0x4450a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967240));
    // 0x4450a4: 0x26d6ffc8  addiu       $s6, $s6, -0x38
    ctx->pc = 0x4450a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967240));
    // 0x4450a8: 0x26b5ffc8  addiu       $s5, $s5, -0x38
    ctx->pc = 0x4450a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967240));
    // 0x4450ac: 0x26f7fffe  addiu       $s7, $s7, -0x2
    ctx->pc = 0x4450acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x4450b0: 0x16e0ffc3  bnez        $s7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x4450B0u;
    {
        const bool branch_taken_0x4450b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4450B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4450B0u;
        // 0x4450b4: 0x27defff8  addiu       $fp, $fp, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4450b0) {
            ctx->pc = 0x444FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444fc0;
        }
    }
    ctx->pc = 0x4450B8u;
label_4450b8:
    // 0x4450b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4450b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4450bc:
    // 0x4450bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4450bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4450c0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4450c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4450c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4450c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4450c8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x4450c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x4450cc: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x4450ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x4450d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4450d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4450d4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4450d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4450d8: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x4450d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x4450dc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4450dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4450e0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x4450e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_4450e4:
    // 0x4450e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4450E4u;
    {
        const bool branch_taken_0x4450e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4450E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4450E4u;
        // 0x4450e8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4450e4) {
            ctx->pc = 0x4450F0u;
            goto label_4450f0;
        }
    }
    ctx->pc = 0x4450ECu;
label_4450ec:
    // 0x4450ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4450ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4450f0:
    // 0x4450f0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4450f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4450f4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4450f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4450f8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4450f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4450fc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4450fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x445100: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x445100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x445104: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x445104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x445108: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x445108u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44510c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x44510cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x445110: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x445110u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x445114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x445114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x445118: 0x3e00008  jr          $ra
    ctx->pc = 0x445118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445118u;
        // 0x44511c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445120u;
}
