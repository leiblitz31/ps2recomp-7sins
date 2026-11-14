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

// Function: sub_00409ED8
// Address: 0x409ed8 - 0x40a5e8
void sub_00409ED8_0x409ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409ED8_0x409ed8");
#endif

    switch (ctx->pc) {
        case 0x409f24u: goto label_409f24;
        case 0x409f50u: goto label_409f50;
        case 0x409f84u: goto label_409f84;
        case 0x409f98u: goto label_409f98;
        case 0x40a048u: goto label_40a048;
        case 0x40a110u: goto label_40a110;
        case 0x40a1d8u: goto label_40a1d8;
        case 0x40a298u: goto label_40a298;
        case 0x40a360u: goto label_40a360;
        case 0x40a3a8u: goto label_40a3a8;
        case 0x40a4c8u: goto label_40a4c8;
        default: break;
    }

    ctx->pc = 0x409ed8u;

    // 0x409ed8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x409ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x409edc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x409edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x409ee0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x409ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x409ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ee8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x409ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x409eec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x409eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ef0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x409ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x409ef4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x409ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x409ef8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x409ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x409efc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x409efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x409f00: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x409f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x409f04: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x409f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x409f08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x409f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x409f0c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x409f0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x409f10: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x409f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x409f14: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x409f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x409f18: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x409f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x409f1c: 0xc0de646  jal         func_379918
    ctx->pc = 0x409F1Cu;
    SET_GPR_U32(ctx, 31, 0x409F24u);
    ctx->pc = 0x409F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F1Cu;
    // 0x409f20: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x409F1Cu, 0x409F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F24u;
label_409f24:
    // 0x409f24: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x409f24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f28: 0x8e37001c  lw          $s7, 0x1C($s1)
    ctx->pc = 0x409f28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x409f2c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x409f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x409f30: 0x8e360018  lw          $s6, 0x18($s1)
    ctx->pc = 0x409f30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x409f34: 0x8e13002c  lw          $s3, 0x2C($s0)
    ctx->pc = 0x409f34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x409f38: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x409f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x409f3c: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x409F3Cu;
    {
        const bool branch_taken_0x409f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409F3Cu;
        // 0x409f40: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409f3c) {
            ctx->pc = 0x40A2F8u;
            goto label_40a2f8;
        }
    }
    ctx->pc = 0x409F44u;
    // 0x409f44: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x409f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x409f48: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x409f48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x409f4c: 0x0  nop
    ctx->pc = 0x409f4cu;
    // NOP
label_409f50:
    // 0x409f50: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x409f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x409f54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x409f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f58: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x409f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x409f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x409f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f60: 0x7ea018  mult        $s4, $v1, $fp
    ctx->pc = 0x409f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x409f64: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x409f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x409f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x409f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x409f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x409f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x409f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x409f74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x409f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x409f78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x409f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x409f7c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x409F7Cu;
    SET_GPR_U32(ctx, 31, 0x409F84u);
    ctx->pc = 0x409F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F7Cu;
    // 0x409f80: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x409F7Cu, 0x409F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F84u;
label_409f84:
    // 0x409f84: 0x266c0008  addiu       $t4, $s3, 0x8
    ctx->pc = 0x409f84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x409f88: 0x264e0001  addiu       $t6, $s2, 0x1
    ctx->pc = 0x409f88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x409f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x409f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f90: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x409f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x409f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_409f98:
    // 0x409f98: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x409f98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x409f9c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x409f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x409fa0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x409fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x409fa4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x409fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x409fa8: 0x2c45021  addu        $t2, $s6, $a0
    ctx->pc = 0x409fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x409fac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x409fb0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x409fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x409fb4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x409fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x409fb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x409fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x409fbc: 0x0  nop
    ctx->pc = 0x409fbcu;
    // NOP
    // 0x409fc0: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x409FC0u;
    {
        const bool branch_taken_0x409fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x409FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409FC0u;
        // 0x409fc4: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409fc0) {
            ctx->pc = 0x40A074u;
            goto label_40a074;
        }
    }
    ctx->pc = 0x409FC8u;
    // 0x409fc8: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x409fc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x409fcc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x409fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x409fd0: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x409fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x409fd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x409fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x409fd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x409fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x409fdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x409fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x409fe0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x409fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x409fe4: 0x1495000e  bne         $a0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x409FE4u;
    {
        const bool branch_taken_0x409fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x409FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409FE4u;
        // 0x409fe8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409fe4) {
            ctx->pc = 0x40A020u;
            goto label_40a020;
        }
    }
    ctx->pc = 0x409FECu;
    // 0x409fec: 0x96640006  lhu         $a0, 0x6($s3)
    ctx->pc = 0x409fecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x409ff0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x409ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x409ff4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x409ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x409ff8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x409ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x409ffc: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x409ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x40a000: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x40a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x40a004: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40a004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a008: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x40a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x40a00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40a010: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x40a010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x40a014: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x40a01c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x40a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_40a020:
    // 0x40a020: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x40a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x40a024: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a028: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x40a028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x40a02c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x40A02Cu;
    {
        const bool branch_taken_0x40a02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A02Cu;
        // 0x40a030: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a02c) {
            ctx->pc = 0x40A060u;
            goto label_40a060;
        }
    }
    ctx->pc = 0x40A034u;
    // 0x40a034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a038: 0x10470009  beq         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x40A038u;
    {
        const bool branch_taken_0x40a038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x40a038) {
            ctx->pc = 0x40A060u;
            goto label_40a060;
        }
    }
    ctx->pc = 0x40A040u;
    // 0x40a040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a044: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_40a048:
    // 0x40a048: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x40a048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40a04c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40A04Cu;
    {
        const bool branch_taken_0x40a04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A04Cu;
        // 0x40a050: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a04c) {
            ctx->pc = 0x40A060u;
            goto label_40a060;
        }
    }
    ctx->pc = 0x40A054u;
    // 0x40a054: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a058: 0x5447fffb  bnel        $v0, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x40A058u;
    {
        const bool branch_taken_0x40a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x40a058) {
            ctx->pc = 0x40A05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A058u;
            // 0x40a05c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a048;
        }
    }
    ctx->pc = 0x40A060u;
label_40a060:
    // 0x40a060: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40A060u;
    {
        const bool branch_taken_0x40a060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x40a060) {
            ctx->pc = 0x40A064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A060u;
            // 0x40a064: 0xc5400004  lwc1        $f0, 0x4($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A078u;
            goto label_40a078;
        }
    }
    ctx->pc = 0x40A068u;
    // 0x40a068: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x40a068u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x40a06c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x40a06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x40a070: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x40a070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_40a074:
    // 0x40a074: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x40a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40a078:
    // 0x40a078: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40a078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40a07c: 0x0  nop
    ctx->pc = 0x40a07cu;
    // NOP
    // 0x40a080: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
    ctx->pc = 0x40A080u;
    {
        const bool branch_taken_0x40a080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a080) {
            ctx->pc = 0x40A084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A080u;
            // 0x40a084: 0xc5400008  lwc1        $f0, 0x8($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A140u;
            goto label_40a140;
        }
    }
    ctx->pc = 0x40A088u;
    // 0x40a088: 0x84202  srl         $t0, $t0, 8
    ctx->pc = 0x40a088u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x40a08c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x40a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x40a090: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x40a090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x40a094: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x40a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x40a098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40a098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x40a09c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40a0a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40a0a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40a0a8: 0x1495000e  bne         $a0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x40A0A8u;
    {
        const bool branch_taken_0x40a0a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x40A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A0A8u;
        // 0x40a0ac: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a0a8) {
            ctx->pc = 0x40A0E4u;
            goto label_40a0e4;
        }
    }
    ctx->pc = 0x40A0B0u;
    // 0x40a0b0: 0x96640006  lhu         $a0, 0x6($s3)
    ctx->pc = 0x40a0b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x40a0b4: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x40a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x40a0b8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x40a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x40a0bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x40a0c0: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x40a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x40a0c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x40a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x40a0c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a0cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x40a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x40a0d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40a0d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x40a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x40a0d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a0dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x40a0e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x40a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_40a0e4:
    // 0x40a0e4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x40a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x40a0e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a0ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x40a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x40a0f0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x40A0F0u;
    {
        const bool branch_taken_0x40a0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A0F0u;
        // 0x40a0f4: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a0f0) {
            ctx->pc = 0x40A128u;
            goto label_40a128;
        }
    }
    ctx->pc = 0x40A0F8u;
    // 0x40a0f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a0fc: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x40A0FCu;
    {
        const bool branch_taken_0x40a0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x40a0fc) {
            ctx->pc = 0x40A128u;
            goto label_40a128;
        }
    }
    ctx->pc = 0x40A104u;
    // 0x40a104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a108: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40a10c: 0x0  nop
    ctx->pc = 0x40a10cu;
    // NOP
label_40a110:
    // 0x40a110: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x40a110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40a114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40A114u;
    {
        const bool branch_taken_0x40a114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A114u;
        // 0x40a118: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a114) {
            ctx->pc = 0x40A128u;
            goto label_40a128;
        }
    }
    ctx->pc = 0x40A11Cu;
    // 0x40a11c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a120: 0x5447fffb  bnel        $v0, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x40A120u;
    {
        const bool branch_taken_0x40a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x40a120) {
            ctx->pc = 0x40A124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A120u;
            // 0x40a124: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a110;
        }
    }
    ctx->pc = 0x40A128u;
label_40a128:
    // 0x40a128: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40A128u;
    {
        const bool branch_taken_0x40a128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x40a128) {
            ctx->pc = 0x40A12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A128u;
            // 0x40a12c: 0xc5400008  lwc1        $f0, 0x8($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A140u;
            goto label_40a140;
        }
    }
    ctx->pc = 0x40A130u;
    // 0x40a130: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x40a130u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x40a134: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x40a134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x40a138: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x40a138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x40a13c: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x40a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40a140:
    // 0x40a140: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40a140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40a144: 0x0  nop
    ctx->pc = 0x40a144u;
    // NOP
    // 0x40a148: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
    ctx->pc = 0x40A148u;
    {
        const bool branch_taken_0x40a148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a148) {
            ctx->pc = 0x40A14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A148u;
            // 0x40a14c: 0xc540000c  lwc1        $f0, 0xC($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A208u;
            goto label_40a208;
        }
    }
    ctx->pc = 0x40A150u;
    // 0x40a150: 0x84202  srl         $t0, $t0, 8
    ctx->pc = 0x40a150u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x40a154: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x40a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x40a158: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x40a158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x40a15c: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x40a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x40a160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40a160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x40a164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40a164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40a168: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40a16c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40a170: 0x1495000e  bne         $a0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x40A170u;
    {
        const bool branch_taken_0x40a170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x40A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A170u;
        // 0x40a174: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a170) {
            ctx->pc = 0x40A1ACu;
            goto label_40a1ac;
        }
    }
    ctx->pc = 0x40A178u;
    // 0x40a178: 0x96640006  lhu         $a0, 0x6($s3)
    ctx->pc = 0x40a178u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x40a17c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x40a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x40a180: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x40a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x40a184: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40a184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x40a188: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x40a188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x40a18c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x40a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x40a190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a194: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x40a194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x40a198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40a19c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x40a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x40a1a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a1a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x40a1a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x40a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_40a1ac:
    // 0x40a1ac: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x40a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x40a1b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a1b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x40a1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x40a1b8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x40A1B8u;
    {
        const bool branch_taken_0x40a1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A1B8u;
        // 0x40a1bc: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a1b8) {
            ctx->pc = 0x40A1F0u;
            goto label_40a1f0;
        }
    }
    ctx->pc = 0x40A1C0u;
    // 0x40a1c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a1c4: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x40A1C4u;
    {
        const bool branch_taken_0x40a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x40a1c4) {
            ctx->pc = 0x40A1F0u;
            goto label_40a1f0;
        }
    }
    ctx->pc = 0x40A1CCu;
    // 0x40a1cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a1d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40a1d4: 0x0  nop
    ctx->pc = 0x40a1d4u;
    // NOP
label_40a1d8:
    // 0x40a1d8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x40a1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40a1dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40A1DCu;
    {
        const bool branch_taken_0x40a1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A1DCu;
        // 0x40a1e0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a1dc) {
            ctx->pc = 0x40A1F0u;
            goto label_40a1f0;
        }
    }
    ctx->pc = 0x40A1E4u;
    // 0x40a1e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a1e8: 0x5447fffb  bnel        $v0, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x40A1E8u;
    {
        const bool branch_taken_0x40a1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x40a1e8) {
            ctx->pc = 0x40A1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A1E8u;
            // 0x40a1ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a1d8;
        }
    }
    ctx->pc = 0x40A1F0u;
label_40a1f0:
    // 0x40a1f0: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40A1F0u;
    {
        const bool branch_taken_0x40a1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x40a1f0) {
            ctx->pc = 0x40A1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A1F0u;
            // 0x40a1f4: 0xc540000c  lwc1        $f0, 0xC($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A208u;
            goto label_40a208;
        }
    }
    ctx->pc = 0x40A1F8u;
    // 0x40a1f8: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x40a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x40a1fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x40a1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x40a200: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x40a200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x40a204: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x40a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40a208:
    // 0x40a208: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40a208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40a20c: 0x0  nop
    ctx->pc = 0x40a20cu;
    // NOP
    // 0x40a210: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x40A210u;
    {
        const bool branch_taken_0x40a210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A210u;
        // 0x40a214: 0x84202  srl         $t0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a210) {
            ctx->pc = 0x40A2C4u;
            goto label_40a2c4;
        }
    }
    ctx->pc = 0x40A218u;
    // 0x40a218: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x40a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x40a21c: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x40a21cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x40a220: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x40a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x40a224: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40a224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x40a228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40a228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40a22c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40a230: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40a230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40a234: 0x1495000e  bne         $a0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x40A234u;
    {
        const bool branch_taken_0x40a234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x40A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A234u;
        // 0x40a238: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a234) {
            ctx->pc = 0x40A270u;
            goto label_40a270;
        }
    }
    ctx->pc = 0x40A23Cu;
    // 0x40a23c: 0x96640006  lhu         $a0, 0x6($s3)
    ctx->pc = 0x40a23cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x40a240: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x40a240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x40a244: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x40a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x40a248: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40a248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x40a24c: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x40a24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x40a250: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x40a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x40a254: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40a254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a258: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x40a258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x40a25c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40a260: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x40a260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x40a264: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x40a26c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x40a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_40a270:
    // 0x40a270: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x40a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x40a274: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40a274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a278: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x40a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x40a27c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x40A27Cu;
    {
        const bool branch_taken_0x40a27c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A27Cu;
        // 0x40a280: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a27c) {
            ctx->pc = 0x40A2B0u;
            goto label_40a2b0;
        }
    }
    ctx->pc = 0x40A284u;
    // 0x40a284: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a288: 0x10470009  beq         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x40A288u;
    {
        const bool branch_taken_0x40a288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x40A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A288u;
        // 0x40a28c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a288) {
            ctx->pc = 0x40A2B0u;
            goto label_40a2b0;
        }
    }
    ctx->pc = 0x40A290u;
    // 0x40a290: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40a294: 0x0  nop
    ctx->pc = 0x40a294u;
    // NOP
label_40a298:
    // 0x40a298: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x40a298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40a29c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40A29Cu;
    {
        const bool branch_taken_0x40a29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A29Cu;
        // 0x40a2a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a29c) {
            ctx->pc = 0x40A2B0u;
            goto label_40a2b0;
        }
    }
    ctx->pc = 0x40A2A4u;
    // 0x40a2a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a2a8: 0x5447fffb  bnel        $v0, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x40A2A8u;
    {
        const bool branch_taken_0x40a2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x40a2a8) {
            ctx->pc = 0x40A2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A2A8u;
            // 0x40a2ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a298;
        }
    }
    ctx->pc = 0x40A2B0u;
label_40a2b0:
    // 0x40a2b0: 0x14700005  bne         $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40A2B0u;
    {
        const bool branch_taken_0x40a2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x40A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A2B0u;
        // 0x40a2b4: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a2b0) {
            ctx->pc = 0x40A2C8u;
            goto label_40a2c8;
        }
    }
    ctx->pc = 0x40A2B8u;
    // 0x40a2b8: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x40a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x40a2bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x40a2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x40a2c0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x40a2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_40a2c4:
    // 0x40a2c4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x40a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_40a2c8:
    // 0x40a2c8: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x40a2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x40a2cc: 0x1440ff32  bnez        $v0, . + 4 + (-0xCE << 2)
    ctx->pc = 0x40A2CCu;
    {
        const bool branch_taken_0x40a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A2CCu;
        // 0x40a2d0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a2cc) {
            ctx->pc = 0x409F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409f98;
        }
    }
    ctx->pc = 0x40A2D4u;
    // 0x40a2d4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x40a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x40a2d8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x40a2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40a2dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x40A2DCu;
    {
        const bool branch_taken_0x40a2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a2dc) {
            ctx->pc = 0x40A2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A2DCu;
            // 0x40a2e0: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A2E4u;
            goto label_40a2e4;
        }
    }
    ctx->pc = 0x40A2E4u;
label_40a2e4:
    // 0x40a2e4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x40a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x40a2e8: 0x1c0902d  daddu       $s2, $t6, $zero
    ctx->pc = 0x40a2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a2ec: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x40a2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40a2f0: 0x1440ff17  bnez        $v0, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x40A2F0u;
    {
        const bool branch_taken_0x40a2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A2F0u;
        // 0x40a2f4: 0x180982d  daddu       $s3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a2f0) {
            ctx->pc = 0x409F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409f50;
        }
    }
    ctx->pc = 0x40A2F8u;
label_40a2f8:
    // 0x40a2f8: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x40a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x40a2fc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x40a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x40a300: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40A300u;
    {
        const bool branch_taken_0x40a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A300u;
        // 0x40a304: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a300) {
            ctx->pc = 0x40A32Cu;
            goto label_40a32c;
        }
    }
    ctx->pc = 0x40A308u;
    // 0x40a308: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x40a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x40a30c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40A30Cu;
    {
        const bool branch_taken_0x40a30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A30Cu;
        // 0x40a310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a30c) {
            ctx->pc = 0x40A32Cu;
            goto label_40a32c;
        }
    }
    ctx->pc = 0x40A314u;
    // 0x40a314: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x40a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x40a318: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40A318u;
    {
        const bool branch_taken_0x40a318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A318u;
        // 0x40a31c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a318) {
            ctx->pc = 0x40A32Cu;
            goto label_40a32c;
        }
    }
    ctx->pc = 0x40A320u;
    // 0x40a320: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x40a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x40a324: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x40A324u;
    {
        const bool branch_taken_0x40a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A324u;
        // 0x40a328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a324) {
            ctx->pc = 0x40A330u;
            goto label_40a330;
        }
    }
    ctx->pc = 0x40A32Cu;
label_40a32c:
    // 0x40a32c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x40a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_40a330:
    // 0x40a330: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x40a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x40a334: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x40A334u;
    {
        const bool branch_taken_0x40a334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A334u;
        // 0x40a338: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a334) {
            ctx->pc = 0x40A5ACu;
            goto label_40a5ac;
        }
    }
    ctx->pc = 0x40A33Cu;
    // 0x40a33c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x40a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40a340: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x40a340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40a344: 0x8e350058  lw          $s5, 0x58($s1)
    ctx->pc = 0x40a344u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x40a348: 0x8c4b0010  lw          $t3, 0x10($v0)
    ctx->pc = 0x40a348u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x40a34c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x40a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x40a350: 0x8e34005c  lw          $s4, 0x5C($s1)
    ctx->pc = 0x40a350u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x40a354: 0x2450e390  addiu       $s0, $v0, -0x1C70
    ctx->pc = 0x40a354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x40a358: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x40a358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x40a35c: 0x0  nop
    ctx->pc = 0x40a35cu;
    // NOP
label_40a360:
    // 0x40a360: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x40a360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x40a364: 0x557821  addu        $t7, $v0, $s5
    ctx->pc = 0x40a364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x40a368: 0x746021  addu        $t4, $v1, $s4
    ctx->pc = 0x40a368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x40a36c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x40a36cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a370: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x40a370u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x40a374: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x40a374u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x40a378: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x40a378u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x40a37c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x40a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x40a380: 0xad800010  sw          $zero, 0x10($t4)
    ctx->pc = 0x40a380u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
    // 0x40a384: 0xad800014  sw          $zero, 0x14($t4)
    ctx->pc = 0x40a384u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 0));
    // 0x40a388: 0xad800018  sw          $zero, 0x18($t4)
    ctx->pc = 0x40a388u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 0));
    // 0x40a38c: 0xad80001c  sw          $zero, 0x1C($t4)
    ctx->pc = 0x40a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 0));
    // 0x40a390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x40a390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a394: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x40a394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a398: 0x264e0001  addiu       $t6, $s2, 0x1
    ctx->pc = 0x40a398u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x40a39c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x40a39cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a3a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40a3a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a3a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x40a3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_40a3a8:
    // 0x40a3a8: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x40a3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x40a3ac: 0x81142  srl         $v0, $t0, 5
    ctx->pc = 0x40a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
    // 0x40a3b0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x40a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x40a3b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40a3b8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x40a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x40a3bc: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x40a3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x40a3c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40a3c4: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x40a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x40a3c8: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x40a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x40a3cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x40a3ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x40a3d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x40a3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x40a3d4: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x40a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x40a3d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x40a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x40a3dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x40a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x40a3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x40a3e4: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x40A3E4u;
    {
        const bool branch_taken_0x40a3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A3E4u;
        // 0x40a3e8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a3e4) {
            ctx->pc = 0x40A580u;
            goto label_40a580;
        }
    }
    ctx->pc = 0x40A3ECu;
    // 0x40a3ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x40a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40a3f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x40a3f4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x40a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x40a3f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x40a3fc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x40a3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x40a400: 0x5460005c  bnel        $v1, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x40A400u;
    {
        const bool branch_taken_0x40a400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a400) {
            ctx->pc = 0x40A404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A400u;
            // 0x40a404: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A574u;
            goto label_40a574;
        }
    }
    ctx->pc = 0x40A408u;
    // 0x40a408: 0x11200059  beqz        $t1, . + 4 + (0x59 << 2)
    ctx->pc = 0x40A408u;
    {
        const bool branch_taken_0x40a408 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A408u;
        // 0x40a40c: 0x91023  negu        $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a408) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A410u;
    // 0x40a410: 0x1502021  addu        $a0, $t2, $s0
    ctx->pc = 0x40a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x40a414: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x40a414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40a418: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x40A418u;
    {
        const bool branch_taken_0x40a418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A418u;
        // 0x40a41c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a418) {
            ctx->pc = 0x40A4C0u;
            goto label_40a4c0;
        }
    }
    ctx->pc = 0x40A420u;
    // 0x40a420: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40a420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40a424: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x40A424u;
    {
        const bool branch_taken_0x40a424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A424u;
        // 0x40a428: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a424) {
            ctx->pc = 0x40A48Cu;
            goto label_40a48c;
        }
    }
    ctx->pc = 0x40A42Cu;
    // 0x40a42c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x40A42Cu;
    {
        const bool branch_taken_0x40a42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A42Cu;
        // 0x40a430: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a42c) {
            ctx->pc = 0x40A460u;
            goto label_40a460;
        }
    }
    ctx->pc = 0x40A434u;
    // 0x40a434: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a438: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x40a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a43c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a440: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a444: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a448: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a44c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x40a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x40a450: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a454: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a458: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x40A458u;
    {
        const bool branch_taken_0x40a458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A458u;
        // 0x40a45c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a458) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A460u;
label_40a460:
    // 0x40a460: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x40a460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x40a464: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a468: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40a468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a46c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a470: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a474: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a478: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x40a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x40a47c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a480: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a484: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x40A484u;
    {
        const bool branch_taken_0x40a484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A484u;
        // 0x40a488: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a484) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A48Cu;
label_40a48c:
    // 0x40a48c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x40a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x40a490: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a494: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40a498: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a49c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a49cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a4a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a4a4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x40a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x40a4a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a4ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a4b0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x40A4B0u;
    {
        const bool branch_taken_0x40a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A4B0u;
        // 0x40a4b4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a4b0) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A4B8u;
    // 0x40a4b8: 0x5120002e  beql        $t1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x40A4B8u;
    {
        const bool branch_taken_0x40a4b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x40a4b8) {
            ctx->pc = 0x40A4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A4B8u;
            // 0x40a4bc: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A574u;
            goto label_40a574;
        }
    }
    ctx->pc = 0x40A4C0u;
label_40a4c0:
    // 0x40a4c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x40a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a4c4: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x40a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_40a4c8:
    // 0x40a4c8: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a4cc: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a4d0: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a4d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a4d8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x40a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x40a4dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a4e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a4e4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x40A4E4u;
    {
        const bool branch_taken_0x40a4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A4E4u;
        // 0x40a4e8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a4e4) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A4ECu;
    // 0x40a4ec: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x40a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x40a4f0: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a4f4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a4f8: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a4f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a4fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a500: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x40a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x40a504: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a508: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a50c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x40A50Cu;
    {
        const bool branch_taken_0x40a50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A50Cu;
        // 0x40a510: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a50c) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A514u;
    // 0x40a514: 0x8c83fff4  lw          $v1, -0xC($a0)
    ctx->pc = 0x40a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
    // 0x40a518: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a51c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a520: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a524: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a528: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x40a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x40a52c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a530: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a534: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x40A534u;
    {
        const bool branch_taken_0x40a534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A534u;
        // 0x40a538: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a534) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A53Cu;
    // 0x40a53c: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x40a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x40a540: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x40a544: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40a548: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a54c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a54cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a550: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x40a550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x40a554: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x40a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x40a558: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x40a55c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x40a560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40A560u;
    {
        const bool branch_taken_0x40a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A560u;
        // 0x40a564: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a560) {
            ctx->pc = 0x40A570u;
            goto label_40a570;
        }
    }
    ctx->pc = 0x40A568u;
    // 0x40a568: 0x5520ffd7  bnel        $t1, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x40A568u;
    {
        const bool branch_taken_0x40a568 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x40a568) {
            ctx->pc = 0x40A56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40A568u;
            // 0x40a56c: 0x8c83fffc  lw          $v1, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40A4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a4c8;
        }
    }
    ctx->pc = 0x40A570u;
label_40a570:
    // 0x40a570: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x40a570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_40a574:
    // 0x40a574: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x40a574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x40a578: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x40a578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x40a57c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x40a57cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_40a580:
    // 0x40a580: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x40a580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x40a584: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x40a584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x40a588: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x40a588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x40a58c: 0x1520ff86  bnez        $t1, . + 4 + (-0x7A << 2)
    ctx->pc = 0x40A58Cu;
    {
        const bool branch_taken_0x40a58c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A58Cu;
        // 0x40a590: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a58c) {
            ctx->pc = 0x40A3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a3a8;
        }
    }
    ctx->pc = 0x40A594u;
    // 0x40a594: 0xaded0000  sw          $t5, 0x0($t7)
    ctx->pc = 0x40a594u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 13));
    // 0x40a598: 0x1c0902d  daddu       $s2, $t6, $zero
    ctx->pc = 0x40a598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a59c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x40a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x40a5a0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x40a5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40a5a4: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x40A5A4u;
    {
        const bool branch_taken_0x40a5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A5A4u;
        // 0x40a5a8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a5a4) {
            ctx->pc = 0x40A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40a360;
        }
    }
    ctx->pc = 0x40A5ACu;
label_40a5ac:
    // 0x40a5ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40a5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a5b0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x40a5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x40a5b4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x40a5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x40a5b8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x40a5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x40a5bc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x40a5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x40a5c0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x40a5c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40a5c4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x40a5c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40a5c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x40a5c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40a5cc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x40a5ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40a5d0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x40a5d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40a5d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40a5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40a5d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x40a5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40a5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x40A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A5DCu;
        // 0x40a5e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A5E4u;
    // 0x40a5e4: 0x0  nop
    ctx->pc = 0x40a5e4u;
    // NOP
    ctx->pc = 0x40a5e8u;
}
