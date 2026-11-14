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

// Function: sub_0033E938
// Address: 0x33e938 - 0x33f030
void sub_0033E938_0x33e938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E938_0x33e938");
#endif

    switch (ctx->pc) {
        case 0x33e994u: goto label_33e994;
        case 0x33ea78u: goto label_33ea78;
        case 0x33ecd0u: goto label_33ecd0;
        case 0x33ed68u: goto label_33ed68;
        case 0x33ed74u: goto label_33ed74;
        default: break;
    }

    ctx->pc = 0x33e938u;

    // 0x33e938: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x33e93c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x33e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x33e940: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x33e940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x33e944: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e948: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x33e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x33e94c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x33e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x33e950: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x33e950u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e954: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x33e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x33e958: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x33e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x33e95c: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x33e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x33e960: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x33e960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x33e964: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x33e964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x33e968: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x33e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x33e96c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x33e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x33e970: 0xe7b90178  swc1        $f25, 0x178($sp)
    ctx->pc = 0x33e970u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x33e974: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x33e974u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x33e978: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x33e978u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x33e97c: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x33e97cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x33e980: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x33e980u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x33e984: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x33e984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x33e988: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x33e988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x33e98c: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33E98Cu;
    SET_GPR_U32(ctx, 31, 0x33E994u);
    ctx->pc = 0x33E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E98Cu;
    // 0x33e990: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33E98Cu, 0x33E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E994u;
label_33e994:
    // 0x33e994: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33e998: 0x2442c210  addiu       $v0, $v0, -0x3DF0
    ctx->pc = 0x33e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33e99c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x33e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C224u));
    // 0x33e9a0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x33e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C250u));
    // 0x33e9a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e9a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e9ac: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33E9ACu;
    {
        const bool branch_taken_0x33e9ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x33E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9ACu;
        // 0x33e9b0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9ac) {
            ctx->pc = 0x33E9CCu;
            goto label_33e9cc;
        }
    }
    ctx->pc = 0x33E9B4u;
    // 0x33e9b4: 0x44b021  addu        $s6, $v0, $a0
    ctx->pc = 0x33e9b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e9b8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x33e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33e9bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33e9c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33e9c4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x33e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x33e9c8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x33e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_33e9cc:
    // 0x33e9cc: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x33e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x33e9d0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x33e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e9d4: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x33e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e9d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33e9d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e9dc: 0x0  nop
    ctx->pc = 0x33e9dcu;
    // NOP
    // 0x33e9e0: 0x45000181  bc1f        . + 4 + (0x181 << 2)
    ctx->pc = 0x33E9E0u;
    {
        const bool branch_taken_0x33e9e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9E0u;
        // 0x33e9e4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9e0) {
            ctx->pc = 0x33EFE8u;
            goto label_33efe8;
        }
    }
    ctx->pc = 0x33E9E8u;
    // 0x33e9e8: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x33e9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e9ec: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x33e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x33e9f0: 0x10a0017c  beqz        $a1, . + 4 + (0x17C << 2)
    ctx->pc = 0x33E9F0u;
    {
        const bool branch_taken_0x33e9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9F0u;
        // 0x33e9f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9f0) {
            ctx->pc = 0x33EFE4u;
            goto label_33efe4;
        }
    }
    ctx->pc = 0x33E9F8u;
    // 0x33e9f8: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x33e9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33e9fc: 0x10c20179  beq         $a2, $v0, . + 4 + (0x179 << 2)
    ctx->pc = 0x33E9FCu;
    {
        const bool branch_taken_0x33e9fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9FCu;
        // 0x33ea00: 0x3c030bb3  lui         $v1, 0xBB3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2995 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9fc) {
            ctx->pc = 0x33EFE4u;
            goto label_33efe4;
        }
    }
    ctx->pc = 0x33EA04u;
    // 0x33ea04: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33ea08: 0x34638435  ori         $v1, $v1, 0x8435
    ctx->pc = 0x33ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33845);
    // 0x33ea0c: 0x3c023619  lui         $v0, 0x3619
    ctx->pc = 0x33ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13849 << 16));
    // 0x33ea10: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x33ea10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ea14: 0x3442636b  ori         $v0, $v0, 0x636B
    ctx->pc = 0x33ea14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25451);
    // 0x33ea18: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x33ea18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ea1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ea20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33ea20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea24: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x33ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x33ea28: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x33ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x33ea2c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33ea30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33ea34: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x33ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x33ea38: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x33ea38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ea3c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33ea40: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x33ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33ea44: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x33ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x33ea48: 0x18800164  blez        $a0, . + 4 + (0x164 << 2)
    ctx->pc = 0x33EA48u;
    {
        const bool branch_taken_0x33ea48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x33EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA48u;
        // 0x33ea4c: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea48) {
            ctx->pc = 0x33EFDCu;
            goto label_33efdc;
        }
    }
    ctx->pc = 0x33EA50u;
    // 0x33ea50: 0x3c060bb3  lui         $a2, 0xBB3
    ctx->pc = 0x33ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2995 << 16));
    // 0x33ea54: 0x3c1e3619  lui         $fp, 0x3619
    ctx->pc = 0x33ea54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)13849 << 16));
    // 0x33ea58: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x33ea58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x33ea5c: 0x34c68435  ori         $a2, $a2, 0x8435
    ctx->pc = 0x33ea5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33845);
    // 0x33ea60: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33ea60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33ea64: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x33ea64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33ea68: 0x37de636b  ori         $fp, $fp, 0x636B
    ctx->pc = 0x33ea68u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)25451);
    // 0x33ea6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33ea70: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33ea70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33ea74: 0x0  nop
    ctx->pc = 0x33ea74u;
    // NOP
label_33ea78:
    // 0x33ea78: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x33ea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ea7c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x33ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33ea80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ea84: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x33ea84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ea88: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x33ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x33ea8c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x33ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x33ea90: 0x4500014d  bc1f        . + 4 + (0x14D << 2)
    ctx->pc = 0x33EA90u;
    {
        const bool branch_taken_0x33ea90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA90u;
        // 0x33ea94: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea90) {
            ctx->pc = 0x33EFC8u;
            goto label_33efc8;
        }
    }
    ctx->pc = 0x33EA98u;
    // 0x33ea98: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x33ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x33ea9c: 0x24a3c210  addiu       $v1, $a1, -0x3DF0
    ctx->pc = 0x33ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951440));
    // 0x33eaa0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x33eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C284u));
    // 0x33eaa4: 0x4400148  bltz        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x33EAA4u;
    {
        const bool branch_taken_0x33eaa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAA4u;
        // 0x33eaa8: 0x2a21021  addu        $v0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eaa4) {
            ctx->pc = 0x33EFC8u;
            goto label_33efc8;
        }
    }
    ctx->pc = 0x33EAACu;
    // 0x33eaac: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x33eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x33eab0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x33eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x33eab4: 0x2061018  mult        $v0, $s0, $a2
    ctx->pc = 0x33eab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33eab8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x33eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33eabc: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x33eabcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33eac0: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x33eac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x33eac4: 0x1255021  addu        $t2, $t1, $a1
    ctx->pc = 0x33eac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x33eac8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x33eacc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x33eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ead0: 0x2a24021  addu        $t0, $s5, $v0
    ctx->pc = 0x33ead0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x33ead4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x33ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x33ead8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EAD8u;
    {
        const bool branch_taken_0x33ead8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAD8u;
        // 0x33eadc: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ead8) {
            ctx->pc = 0x33EAF0u;
            goto label_33eaf0;
        }
    }
    ctx->pc = 0x33EAE0u;
    // 0x33eae0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33eae0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33eae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33eae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33eae8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33EAE8u;
    {
        const bool branch_taken_0x33eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAE8u;
        // 0x33eaec: 0x46180002  mul.s       $f0, $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eae8) {
            ctx->pc = 0x33EB0Cu;
            goto label_33eb0c;
        }
    }
    ctx->pc = 0x33EAF0u;
label_33eaf0:
    // 0x33eaf0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33eaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33eaf4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33eaf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33eafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33eafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33eb00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33eb00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33eb04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33eb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33eb08: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33eb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_33eb0c:
    // 0x33eb0c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x33eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33eb10: 0x2061818  mult        $v1, $s0, $a2
    ctx->pc = 0x33eb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33eb14: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33eb18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33eb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33eb1c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x33eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33eb20: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x33eb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x33eb24: 0x46170101  sub.s       $f4, $f0, $f23
    ctx->pc = 0x33eb24u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x33eb28: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x33eb28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x33eb2c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EB2Cu;
    {
        const bool branch_taken_0x33eb2c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB2Cu;
        // 0x33eb30: 0x46011140  add.s       $f5, $f2, $f1 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb2c) {
            ctx->pc = 0x33EB44u;
            goto label_33eb44;
        }
    }
    ctx->pc = 0x33EB34u;
    // 0x33eb34: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33eb34u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33eb38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33eb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33eb3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33EB3Cu;
    {
        const bool branch_taken_0x33eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB3Cu;
        // 0x33eb40: 0x46180842  mul.s       $f1, $f1, $f24 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb3c) {
            ctx->pc = 0x33EB64u;
            goto label_33eb64;
        }
    }
    ctx->pc = 0x33EB44u;
label_33eb44:
    // 0x33eb44: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33eb48: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33eb4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33eb50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33eb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33eb54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33eb54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33eb58: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33eb58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33eb5c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x33eb5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x33eb60: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x33eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_33eb64:
    // 0x33eb64: 0x2061818  mult        $v1, $s0, $a2
    ctx->pc = 0x33eb64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33eb68: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x33eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33eb6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33eb6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33eb70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33eb74: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x33eb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x33eb78: 0x46170901  sub.s       $f4, $f1, $f23
    ctx->pc = 0x33eb78u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x33eb7c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x33eb7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33eb80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33eb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33eb84: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EB84u;
    {
        const bool branch_taken_0x33eb84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB84u;
        // 0x33eb88: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb84) {
            ctx->pc = 0x33EB9Cu;
            goto label_33eb9c;
        }
    }
    ctx->pc = 0x33EB8Cu;
    // 0x33eb8c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33eb8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33eb90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33eb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33eb94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33EB94u;
    {
        const bool branch_taken_0x33eb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB94u;
        // 0x33eb98: 0x46180842  mul.s       $f1, $f1, $f24 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb94) {
            ctx->pc = 0x33EBB8u;
            goto label_33ebb8;
        }
    }
    ctx->pc = 0x33EB9Cu;
label_33eb9c:
    // 0x33eb9c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33eb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33eba0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33eba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33eba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33eba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ebac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33ebacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33ebb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33ebb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33ebb4: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x33ebb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_33ebb8:
    // 0x33ebb8: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x33ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33ebbc: 0x2061818  mult        $v1, $s0, $a2
    ctx->pc = 0x33ebbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ebc0: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x33ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ebc4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33ebc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33ebc8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x33ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ebcc: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x33ebccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x33ebd0: 0x46170901  sub.s       $f4, $f1, $f23
    ctx->pc = 0x33ebd0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x33ebd4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x33ebd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33ebd8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33ebd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33ebdc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EBDCu;
    {
        const bool branch_taken_0x33ebdc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBDCu;
        // 0x33ebe0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ebdc) {
            ctx->pc = 0x33EBF4u;
            goto label_33ebf4;
        }
    }
    ctx->pc = 0x33EBE4u;
    // 0x33ebe4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33ebe4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ebe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33ebe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33ebec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33EBECu;
    {
        const bool branch_taken_0x33ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBECu;
        // 0x33ebf0: 0x46180842  mul.s       $f1, $f1, $f24 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ebec) {
            ctx->pc = 0x33EC10u;
            goto label_33ec10;
        }
    }
    ctx->pc = 0x33EBF4u;
label_33ebf4:
    // 0x33ebf4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ebf8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ebfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ec00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33ec00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ec04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33ec04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33ec08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33ec08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33ec0c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x33ec0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_33ec10:
    // 0x33ec10: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x33ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33ec14: 0x2061818  mult        $v1, $s0, $a2
    ctx->pc = 0x33ec14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ec18: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x33ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ec1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33ec1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33ec20: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x33ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ec24: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x33ec24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x33ec28: 0x46170901  sub.s       $f4, $f1, $f23
    ctx->pc = 0x33ec28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x33ec2c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x33ec2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33ec30: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33ec30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33ec34: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EC34u;
    {
        const bool branch_taken_0x33ec34 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC34u;
        // 0x33ec38: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec34) {
            ctx->pc = 0x33EC4Cu;
            goto label_33ec4c;
        }
    }
    ctx->pc = 0x33EC3Cu;
    // 0x33ec3c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33ec3cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ec40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33ec40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33ec44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33EC44u;
    {
        const bool branch_taken_0x33ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC44u;
        // 0x33ec48: 0x46180842  mul.s       $f1, $f1, $f24 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec44) {
            ctx->pc = 0x33EC68u;
            goto label_33ec68;
        }
    }
    ctx->pc = 0x33EC4Cu;
label_33ec4c:
    // 0x33ec4c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ec50: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ec54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ec58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33ec58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ec5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33ec5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33ec60: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33ec60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33ec64: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x33ec64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_33ec68:
    // 0x33ec68: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x33ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33ec6c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x33ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33ec70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x33ec70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33ec74: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x33ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
    // 0x33ec78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x33ec78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33ec7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33ec80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ec84: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x33ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ec88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33ec8c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x33ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ec90: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x33ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x33ec94: 0x46170901  sub.s       $f4, $f1, $f23
    ctx->pc = 0x33ec94u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x33ec98: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x33ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x33ec9c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x33ec9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33eca0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33eca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33eca4: 0x186000b1  blez        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x33ECA4u;
    {
        const bool branch_taken_0x33eca4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x33ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECA4u;
        // 0x33eca8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eca4) {
            ctx->pc = 0x33EF6Cu;
            goto label_33ef6c;
        }
    }
    ctx->pc = 0x33ECACu;
    // 0x33ecac: 0x3c130bb3  lui         $s3, 0xBB3
    ctx->pc = 0x33ecacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2995 << 16));
    // 0x33ecb0: 0x3c123619  lui         $s2, 0x3619
    ctx->pc = 0x33ecb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)13849 << 16));
    // 0x33ecb4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33ecb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x33ecb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x33ecbc: 0x36738435  ori         $s3, $s3, 0x8435
    ctx->pc = 0x33ecbcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)33845);
    // 0x33ecc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33ecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33ecc4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33ecc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33ecc8: 0x3652636b  ori         $s2, $s2, 0x636B
    ctx->pc = 0x33ecc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)25451);
    // 0x33eccc: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x33ecccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_33ecd0:
    // 0x33ecd0: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33ecd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33ecd4: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x33ecd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x33ecd8: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33ecd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33ecdc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33ECDCu;
    {
        const bool branch_taken_0x33ecdc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECDCu;
        // 0x33ece0: 0xafb10068  sw          $s1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ecdc) {
            ctx->pc = 0x33ECF4u;
            goto label_33ecf4;
        }
    }
    ctx->pc = 0x33ECE4u;
    // 0x33ece4: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33ece4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33ece8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33ece8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33ecec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33ECECu;
    {
        const bool branch_taken_0x33ecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECECu;
        // 0x33ecf0: 0x46151082  mul.s       $f2, $f2, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ecec) {
            ctx->pc = 0x33ED10u;
            goto label_33ed10;
        }
    }
    ctx->pc = 0x33ECF4u;
label_33ecf4:
    // 0x33ecf4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ecf8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ecfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ed00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33ed00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33ed04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33ed04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33ed08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33ed08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33ed0c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x33ed0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_33ed10:
    // 0x33ed10: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33ed10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33ed14: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x33ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33ed18: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x33ed1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33ed1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33ed20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x33ed20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33ed24: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x33ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33ed28: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33ed28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33ed2c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x33ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ed30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33ed34: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ed38: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x33ed38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x33ed3c: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x33ed3cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x33ed40: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x33ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33ed44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33ed44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33ed48: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x33ed48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x33ed4c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x33ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x33ed50: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x33ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x33ed54: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x33ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x33ed58: 0x46011d00  add.s       $f20, $f3, $f1
    ctx->pc = 0x33ed58u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x33ed5c: 0x7faa00a0  sq          $t2, 0xA0($sp)
    ctx->pc = 0x33ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 10));
    // 0x33ed60: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x33ED60u;
    SET_GPR_U32(ctx, 31, 0x33ED68u);
    ctx->pc = 0x33ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED60u;
    // 0x33ed64: 0x4605a301  sub.s       $f12, $f20, $f5 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[5]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x33ED60u, 0x33ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED68u;
label_33ed68:
    // 0x33ed68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33ed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ed6c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x33ED6Cu;
    SET_GPR_U32(ctx, 31, 0x33ED74u);
    ctx->pc = 0x33ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED6Cu;
    // 0x33ed70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x33ED6Cu, 0x33ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED74u;
label_33ed74:
    // 0x33ed74: 0x7ba60070  lq          $a2, 0x70($sp)
    ctx->pc = 0x33ed74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33ed78: 0x7ba80080  lq          $t0, 0x80($sp)
    ctx->pc = 0x33ed78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33ed7c: 0x7ba90090  lq          $t1, 0x90($sp)
    ctx->pc = 0x33ed7cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33ed80: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33ed80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33ed84: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33ed88: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33ED88u;
    {
        const bool branch_taken_0x33ed88 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED88u;
        // 0x33ed8c: 0x7baa00a0  lq          $t2, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed88) {
            ctx->pc = 0x33EDA0u;
            goto label_33eda0;
        }
    }
    ctx->pc = 0x33ED90u;
    // 0x33ed90: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33ed90u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33ed94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33ed94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33ed98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33ED98u;
    {
        const bool branch_taken_0x33ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED98u;
        // 0x33ed9c: 0x2131818  mult        $v1, $s0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed98) {
            ctx->pc = 0x33EDBCu;
            goto label_33edbc;
        }
    }
    ctx->pc = 0x33EDA0u;
label_33eda0:
    // 0x33eda0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33eda4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33eda8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33edac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33edacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33edb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33edb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33edb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33edb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33edb8: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x33edb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33edbc:
    // 0x33edbc: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x33edbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x33edc0: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33edc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33edc4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33edc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33edc8: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x33edc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33edcc: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x33edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33edd0: 0x46161101  sub.s       $f4, $f2, $f22
    ctx->pc = 0x33edd0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x33edd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33edd8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x33edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33eddc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x33eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ede0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x33ede0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x33ede4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33ede4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33ede8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EDE8u;
    {
        const bool branch_taken_0x33ede8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDE8u;
        // 0x33edec: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ede8) {
            ctx->pc = 0x33EE00u;
            goto label_33ee00;
        }
    }
    ctx->pc = 0x33EDF0u;
    // 0x33edf0: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33edf0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33edf4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33edf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33edf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33EDF8u;
    {
        const bool branch_taken_0x33edf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDF8u;
        // 0x33edfc: 0x2131818  mult        $v1, $s0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33edf8) {
            ctx->pc = 0x33EE1Cu;
            goto label_33ee1c;
        }
    }
    ctx->pc = 0x33EE00u;
label_33ee00:
    // 0x33ee00: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ee04: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ee08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ee08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ee0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33ee0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33ee10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33ee10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33ee14: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33ee14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33ee18: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x33ee18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33ee1c:
    // 0x33ee1c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x33ee1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x33ee20: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33ee20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33ee24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33ee24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33ee28: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x33ee28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33ee2c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x33ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33ee30: 0x46161101  sub.s       $f4, $f2, $f22
    ctx->pc = 0x33ee30u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x33ee34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ee38: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x33ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ee3c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x33ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ee40: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x33ee40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x33ee44: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33ee44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33ee48: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EE48u;
    {
        const bool branch_taken_0x33ee48 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE48u;
        // 0x33ee4c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee48) {
            ctx->pc = 0x33EE60u;
            goto label_33ee60;
        }
    }
    ctx->pc = 0x33EE50u;
    // 0x33ee50: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33ee50u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33ee54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33ee54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33ee58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33EE58u;
    {
        const bool branch_taken_0x33ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE58u;
        // 0x33ee5c: 0x2131818  mult        $v1, $s0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee58) {
            ctx->pc = 0x33EE7Cu;
            goto label_33ee7c;
        }
    }
    ctx->pc = 0x33EE60u;
label_33ee60:
    // 0x33ee60: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ee64: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ee68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ee6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33ee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33ee70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33ee70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33ee74: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33ee74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33ee78: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x33ee78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33ee7c:
    // 0x33ee7c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x33ee7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x33ee80: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33ee80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33ee84: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33ee84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33ee88: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x33ee88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33ee8c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x33ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33ee90: 0x46161101  sub.s       $f4, $f2, $f22
    ctx->pc = 0x33ee90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x33ee94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ee98: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x33ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ee9c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x33ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33eea0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x33eea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x33eea4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33eea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33eea8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EEA8u;
    {
        const bool branch_taken_0x33eea8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEA8u;
        // 0x33eeac: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eea8) {
            ctx->pc = 0x33EEC0u;
            goto label_33eec0;
        }
    }
    ctx->pc = 0x33EEB0u;
    // 0x33eeb0: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33eeb0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33eeb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33eeb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33eeb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33EEB8u;
    {
        const bool branch_taken_0x33eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEB8u;
        // 0x33eebc: 0x46151082  mul.s       $f2, $f2, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eeb8) {
            ctx->pc = 0x33EEDCu;
            goto label_33eedc;
        }
    }
    ctx->pc = 0x33EEC0u;
label_33eec0:
    // 0x33eec0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33eec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33eec4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33eec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33eecc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33eeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33eed0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33eed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33eed4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33eed4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33eed8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x33eed8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_33eedc:
    // 0x33eedc: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33eedcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33eee0: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x33eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x33eee4: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x33eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x33eee8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x33eee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33eeec: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x33eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x33eef0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33eef0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33eef4: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x33eef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x33eef8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33eefc: 0x8fb40068  lw          $s4, 0x68($sp)
    ctx->pc = 0x33eefcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef00: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x33ef00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ef04: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x33ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33ef08: 0x46161101  sub.s       $f4, $f2, $f22
    ctx->pc = 0x33ef08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x33ef0c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x33ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ef10: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x33ef10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x33ef14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33ef14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33ef18: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33ef18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33ef1c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x33ef1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x33ef20: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x33ef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ef24: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x33ef24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x33ef28: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x33ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ef2c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x33ef2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33ef30: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x33ef30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ef34: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x33ef34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33ef38: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x33ef38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33ef3c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x33ef3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33ef40: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x33ef40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ef44: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x33ef44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ef48: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x33ef48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x33ef4c: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x33ef4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x33ef50: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x33ef50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ef54: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x33ef54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ef58: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x33ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33ef5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33ef60: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x33ef60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33ef64: 0x1440ff5a  bnez        $v0, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x33EF64u;
    {
        const bool branch_taken_0x33ef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF64u;
        // 0x33ef68: 0x4600a146  mov.s       $f5, $f20 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef64) {
            ctx->pc = 0x33ECD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ecd0;
        }
    }
    ctx->pc = 0x33EF6Cu;
label_33ef6c:
    // 0x33ef6c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x33ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ef70: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x33ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x33ef74: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x33ef74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33ef78: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33ef7c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x33ef7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33ef80: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x33ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x33ef84: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x33ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x33ef88: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x33ef8c: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x33ef90: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x33ef90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33ef94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33ef98: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x33ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ef9c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33ef9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33efa0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x33efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33efa4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x33efa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33efa8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x33efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33efac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33efacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33efb0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x33efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33efb4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33efb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33efb8: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x33efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x33efbc: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x33efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x33efc0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x33efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x33efc4: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x33efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_33efc8:
    // 0x33efc8: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x33efc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x33efcc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x33efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33efd0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x33efd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33efd4: 0x1440fea8  bnez        $v0, . + 4 + (-0x158 << 2)
    ctx->pc = 0x33EFD4u;
    {
        const bool branch_taken_0x33efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFD4u;
        // 0x33efd8: 0x8fb50060  lw          $s5, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33efd4) {
            ctx->pc = 0x33EA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ea78;
        }
    }
    ctx->pc = 0x33EFDCu;
label_33efdc:
    // 0x33efdc: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x33efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x33efe0: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x33efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_33efe4:
    // 0x33efe4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_33efe8:
    // 0x33efe8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x33efe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33efec: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x33efecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x33eff0: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x33eff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x33eff4: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x33eff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x33eff8: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x33eff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33effc: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x33effcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33f000: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x33f000u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33f004: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x33f004u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33f008: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x33f008u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33f00c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x33f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33f010: 0xc7b90178  lwc1        $f25, 0x178($sp)
    ctx->pc = 0x33f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33f014: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x33f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33f018: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x33f018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33f01c: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x33f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33f020: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x33f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33f024: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x33f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33f028: 0x3e00008  jr          $ra
    ctx->pc = 0x33F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F028u;
        // 0x33f02c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F030u;
}
