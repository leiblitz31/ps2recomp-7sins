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

// Function: sub_004B2EB0
// Address: 0x4b2eb0 - 0x4b30c0
void sub_004B2EB0_0x4b2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2EB0_0x4b2eb0");
#endif

    ctx->pc = 0x4b2eb0u;

    // 0x4b2eb0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x4b2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4b2eb4: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x4b2eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4b2eb8: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x4b2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2ebc: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x4b2ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2ec0: 0x30820018  andi        $v0, $a0, 0x18
    ctx->pc = 0x4b2ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24);
    // 0x4b2ec4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x4b2ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b2ec8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B2EC8u;
    {
        const bool branch_taken_0x4b2ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EC8u;
        // 0x4b2ecc: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ec8) {
            ctx->pc = 0x4B2F04u;
            goto label_4b2f04;
        }
    }
    ctx->pc = 0x4B2ED0u;
    // 0x4b2ed0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4b2ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2ed4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4b2ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2ed8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4b2ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4b2edc: 0xc7828198  lwc1        $f2, -0x7E68($gp)
    ctx->pc = 0x4b2edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2ee0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4b2ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4b2ee4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4b2ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4b2ee8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4b2ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4b2eec: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2eecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4b2ef0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4b2ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b2ef4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2ef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2ef8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b2ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4b2efc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x4B2EFCu;
    {
        const bool branch_taken_0x4b2efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EFCu;
        // 0x4b2f00: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2efc) {
            ctx->pc = 0x4B30B0u;
            goto label_4b30b0;
        }
    }
    ctx->pc = 0x4B2F04u;
label_4b2f04:
    // 0x4b2f04: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x4b2f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x4b2f08: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x4B2F08u;
    {
        const bool branch_taken_0x4b2f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2f08) {
            ctx->pc = 0x4B30B8u;
            goto label_4b30b8;
        }
    }
    ctx->pc = 0x4B2F10u;
    // 0x4b2f10: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x4b2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x4b2f14: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B2F14u;
    {
        const bool branch_taken_0x4b2f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2f14) {
            ctx->pc = 0x4B2F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2F14u;
            // 0x4b2f18: 0xc4620058  lwc1        $f2, 0x58($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2F20u;
            goto label_4b2f20;
        }
    }
    ctx->pc = 0x4B2F1Cu;
    // 0x4b2f1c: 0xc4620064  lwc1        $f2, 0x64($v1)
    ctx->pc = 0x4b2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b2f20:
    // 0x4b2f20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4b2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4b2f24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b2f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b2f28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b2f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b2f2c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4b2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4b2f30: 0x8c620664  lw          $v0, 0x664($v1)
    ctx->pc = 0x4b2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1636)));
    // 0x4b2f34: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x4b2f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b2f38: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x4b2f38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4b2f3c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4B2F3Cu;
    {
        const bool branch_taken_0x4b2f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F3Cu;
        // 0x4b2f40: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f3c) {
            ctx->pc = 0x4B2F7Cu;
            goto label_4b2f7c;
        }
    }
    ctx->pc = 0x4B2F44u;
    // 0x4b2f44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4b2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4b2f48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4b2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4b2f4c: 0x24422ec0  addiu       $v0, $v0, 0x2EC0
    ctx->pc = 0x4b2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11968));
    // 0x4b2f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b2f54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b2f58: 0x800008  jr          $a0
    ctx->pc = 0x4B2F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B2F60u: goto label_4b2f60;
            case 0x4B2F6Cu: goto label_4b2f6c;
            case 0x4B2F74u: goto label_4b2f74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2F58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B2F60u;
label_4b2f60:
    // 0x4b2f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b2f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b2f64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2F64u;
    {
        const bool branch_taken_0x4b2f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F64u;
        // 0x4b2f68: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f64) {
            ctx->pc = 0x4B2F74u;
            goto label_4b2f74;
        }
    }
    ctx->pc = 0x4B2F6Cu;
label_4b2f6c:
    // 0x4b2f6c: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x4b2f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2f70: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4b2f70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4b2f74:
    // 0x4b2f74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b2f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b2f78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b2f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b2f7c:
    // 0x4b2f7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b2f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b2f80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4b2f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b2f84: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4b2f84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4b2f88: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b2f88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4b2f8c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x4b2f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4b2f90: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4b2f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4b2f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b2f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b2f98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4b2f98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b2f9c: 0x0  nop
    ctx->pc = 0x4b2f9cu;
    // NOP
    // 0x4b2fa0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x4B2FA0u;
    {
        const bool branch_taken_0x4b2fa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FA0u;
        // 0x4b2fa4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2fa0) {
            ctx->pc = 0x4B3010u;
            goto label_4b3010;
        }
    }
    ctx->pc = 0x4B2FA8u;
    // 0x4b2fa8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b2fac: 0x225c2  srl         $a0, $v0, 23
    ctx->pc = 0x4b2facu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x4b2fb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2fb4: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x4b2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x4b2fb8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4b2fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b2fbc: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x4b2fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4b2fc0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4b2fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4b2fc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2FC4u;
    {
        const bool branch_taken_0x4b2fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FC4u;
        // 0x4b2fc8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2fc4) {
            ctx->pc = 0x4B2FD8u;
            goto label_4b2fd8;
        }
    }
    ctx->pc = 0x4B2FCCu;
    // 0x4b2fcc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4b2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4b2fd0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x4b2fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b2fd4: 0x0  nop
    ctx->pc = 0x4b2fd4u;
    // NOP
label_4b2fd8:
    // 0x4b2fd8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4b2fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2fdc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4b2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x4b2fe0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b2fe4: 0x24636100  addiu       $v1, $v1, 0x6100
    ctx->pc = 0x4b2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24832));
    // 0x4b2fe8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b2fec: 0x72443  sra         $a0, $a3, 17
    ctx->pc = 0x4b2fecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 17));
    // 0x4b2ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b2ff4: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4b2ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4b2ff8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4b2ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b2ffc: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x4b2ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x4b3000: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b3000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b3004: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x4b3004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b3008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b3008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b300c: 0x0  nop
    ctx->pc = 0x4b300cu;
    // NOP
label_4b3010:
    // 0x4b3010: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x4b3010u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b3014: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x4B3014u;
    {
        const bool branch_taken_0x4b3014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b3014) {
            ctx->pc = 0x4B3080u;
            goto label_4b3080;
        }
    }
    ctx->pc = 0x4B301Cu;
    // 0x4b301c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x4b301cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4b3020: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4b3020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3024: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b3024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b3028: 0x225c2  srl         $a0, $v0, 23
    ctx->pc = 0x4b3028u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x4b302c: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x4b302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x4b3030: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3034: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4b3034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b3038: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x4b3038u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4b303c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4b303cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4b3040: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3040u;
    {
        const bool branch_taken_0x4b3040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3040u;
        // 0x4b3044: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3040) {
            ctx->pc = 0x4B3050u;
            goto label_4b3050;
        }
    }
    ctx->pc = 0x4B3048u;
    // 0x4b3048: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4b3048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4b304c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4b304cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b3050:
    // 0x4b3050: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4b3050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3054: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4b3054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x4b3058: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b3058u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b305c: 0x24636100  addiu       $v1, $v1, 0x6100
    ctx->pc = 0x4b305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24832));
    // 0x4b3060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b3060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b3064: 0x72443  sra         $a0, $a3, 17
    ctx->pc = 0x4b3064u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 17));
    // 0x4b3068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b3068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b306c: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4b306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4b3070: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4b3070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b3074: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x4b3074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x4b3078: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b3078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b307c: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x4b307cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4b3080:
    // 0x4b3080: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4b3080u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b3084: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x4b3084u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4b3088: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x4b3088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4b308c: 0xc7828198  lwc1        $f2, -0x7E68($gp)
    ctx->pc = 0x4b308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b3090: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x4b3090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x4b3094: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4b3094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4b3098: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4b3098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4b309c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b309cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4b30a0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4b30a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b30a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b30a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4b30a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4b30a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4b30ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b30acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b30b0:
    // 0x4b30b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b30b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b30b4: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x4b30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_4b30b8:
    // 0x4b30b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B30B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B30B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B30C0u;
}
