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

// Function: sub_004A5E28
// Address: 0x4a5e28 - 0x4a5f68
void sub_004A5E28_0x4a5e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5E28_0x4a5e28");
#endif

    switch (ctx->pc) {
        case 0x4a5e4cu: goto label_4a5e4c;
        case 0x4a5e58u: goto label_4a5e58;
        case 0x4a5e6cu: goto label_4a5e6c;
        case 0x4a5e84u: goto label_4a5e84;
        default: break;
    }

    ctx->pc = 0x4a5e28u;

    // 0x4a5e28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a5e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a5e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a5e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a5e30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a5e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a5e34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a5e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e38: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a5e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a5e3c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a5e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a5e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a5e44: 0xc1296f8  jal         func_4A5BE0
    ctx->pc = 0x4A5E44u;
    SET_GPR_U32(ctx, 31, 0x4A5E4Cu);
    ctx->pc = 0x4A5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E44u;
    // 0x4a5e48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5BE0u, 0x4A5E44u, 0x4A5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E4Cu;
label_4a5e4c:
    // 0x4a5e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a5e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e50: 0xc1295d8  jal         func_4A5760
    ctx->pc = 0x4A5E50u;
    SET_GPR_U32(ctx, 31, 0x4A5E58u);
    ctx->pc = 0x4A5E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E50u;
    // 0x4a5e54: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5760u, 0x4A5E50u, 0x4A5E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E58u;
label_4a5e58:
    // 0x4a5e58: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5e5c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a5e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e64: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5E64u;
    SET_GPR_U32(ctx, 31, 0x4A5E6Cu);
    ctx->pc = 0x4A5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E64u;
    // 0x4a5e68: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5E64u, 0x4A5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E6Cu;
label_4a5e6c:
    // 0x4a5e6c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A5E6Cu;
    {
        const bool branch_taken_0x4a5e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5e6c) {
            ctx->pc = 0x4A5E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5E6Cu;
            // 0x4a5e70: 0x9243000d  lbu         $v1, 0xD($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5E90u;
            goto label_4a5e90;
        }
    }
    ctx->pc = 0x4A5E74u;
    // 0x4a5e74: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a5e78: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a5e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5e7c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A5E7Cu;
    SET_GPR_U32(ctx, 31, 0x4A5E84u);
    ctx->pc = 0x4A5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E7Cu;
    // 0x4a5e80: 0x24a526a0  addiu       $a1, $a1, 0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A5E7Cu, 0x4A5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E84u;
label_4a5e84:
    // 0x4a5e84: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A5E84u;
    {
        const bool branch_taken_0x4a5e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5e84) {
            ctx->pc = 0x4A5E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5E84u;
            // 0x4a5e88: 0x230001b  divu        $zero, $s1, $s0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5F10u;
            goto label_4a5f10;
        }
    }
    ctx->pc = 0x4A5E8Cu;
    // 0x4a5e8c: 0x9243000d  lbu         $v1, 0xD($s2)
    ctx->pc = 0x4a5e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
label_4a5e90:
    // 0x4a5e90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a5e94: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4A5E94u;
    {
        const bool branch_taken_0x4a5e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a5e94) {
            ctx->pc = 0x4A5E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5E94u;
            // 0x4a5e98: 0x230001b  divu        $zero, $s1, $s0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5F10u;
            goto label_4a5f10;
        }
    }
    ctx->pc = 0x4A5E9Cu;
    // 0x4a5e9c: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A5E9Cu;
    {
        const bool branch_taken_0x4a5e9c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x4A5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5E9Cu;
        // 0x4a5ea0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5e9c) {
            ctx->pc = 0x4A5EB4u;
            goto label_4a5eb4;
        }
    }
    ctx->pc = 0x4A5EA4u;
    // 0x4a5ea4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a5ea4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a5ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a5ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a5eac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A5EACu;
    {
        const bool branch_taken_0x4a5eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5eac) {
            ctx->pc = 0x4A5EC8u;
            goto label_4a5ec8;
        }
    }
    ctx->pc = 0x4A5EB4u;
label_4a5eb4:
    // 0x4a5eb4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4a5eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4a5eb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a5eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a5ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a5ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a5ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a5ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a5ec4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a5ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a5ec8:
    // 0x4a5ec8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A5EC8u;
    {
        const bool branch_taken_0x4a5ec8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x4A5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5EC8u;
        // 0x4a5ecc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ec8) {
            ctx->pc = 0x4A5EE0u;
            goto label_4a5ee0;
        }
    }
    ctx->pc = 0x4A5ED0u;
    // 0x4a5ed0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x4a5ed0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a5ed4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a5ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a5ed8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A5ED8u;
    {
        const bool branch_taken_0x4a5ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5ed8) {
            ctx->pc = 0x4A5EF4u;
            goto label_4a5ef4;
        }
    }
    ctx->pc = 0x4A5EE0u;
label_4a5ee0:
    // 0x4a5ee0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4a5ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4a5ee4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a5ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a5ee8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a5ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a5eec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a5eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a5ef0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4a5ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4a5ef4:
    // 0x4a5ef4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x4a5ef4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4a5ef8: 0xc780818c  lwc1        $f0, -0x7E74($gp)
    ctx->pc = 0x4a5ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a5efc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a5efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a5f00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a5f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a5f04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4a5f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a5f08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A5F08u;
    {
        const bool branch_taken_0x4a5f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5F08u;
        // 0x4a5f0c: 0x92420018  lbu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5f08) {
            ctx->pc = 0x4A5F24u;
            goto label_4a5f24;
        }
    }
    ctx->pc = 0x4A5F10u;
label_4a5f10:
    // 0x4a5f10: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A5F10u;
    {
        const bool branch_taken_0x4a5f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5f10) {
            ctx->pc = 0x4A5F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5F10u;
            // 0x4a5f14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5F18u;
            goto label_4a5f18;
        }
    }
    ctx->pc = 0x4A5F18u;
label_4a5f18:
    // 0x4a5f18: 0x1012  mflo        $v0
    ctx->pc = 0x4a5f18u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a5f1c: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x4a5f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a5f20: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x4a5f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_4a5f24:
    // 0x4a5f24: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4a5f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4a5f28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A5F28u;
    {
        const bool branch_taken_0x4a5f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5F28u;
        // 0x4a5f2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5f28) {
            ctx->pc = 0x4A5F48u;
            goto label_4a5f48;
        }
    }
    ctx->pc = 0x4A5F30u;
    // 0x4a5f30: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x4a5f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x4a5f34: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x4a5f34u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4a5f38: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A5F38u;
    {
        const bool branch_taken_0x4a5f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5f38) {
            ctx->pc = 0x4A5F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5F38u;
            // 0x4a5f3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5F40u;
            goto label_4a5f40;
        }
    }
    ctx->pc = 0x4A5F40u;
label_4a5f40:
    // 0x4a5f40: 0x1812  mflo        $v1
    ctx->pc = 0x4a5f40u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4a5f44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a5f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a5f48:
    // 0x4a5f48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a5f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5f4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a5f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5f50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a5f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5f54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a5f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5F5Cu;
        // 0x4a5f60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5F64u;
    // 0x4a5f64: 0x0  nop
    ctx->pc = 0x4a5f64u;
    // NOP
    ctx->pc = 0x4a5f68u;
}
