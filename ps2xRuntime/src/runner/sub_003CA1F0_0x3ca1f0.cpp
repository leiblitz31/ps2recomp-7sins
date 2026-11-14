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

// Function: sub_003CA1F0
// Address: 0x3ca1f0 - 0x3ca3b0
void sub_003CA1F0_0x3ca1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA1F0_0x3ca1f0");
#endif

    switch (ctx->pc) {
        case 0x3ca228u: goto label_3ca228;
        case 0x3ca240u: goto label_3ca240;
        case 0x3ca268u: goto label_3ca268;
        case 0x3ca280u: goto label_3ca280;
        case 0x3ca288u: goto label_3ca288;
        case 0x3ca330u: goto label_3ca330;
        case 0x3ca368u: goto label_3ca368;
        default: break;
    }

    ctx->pc = 0x3ca1f0u;

    // 0x3ca1f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3ca1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3ca1f4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3ca1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3ca1f8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3ca1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3ca1fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ca1fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca200: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3ca200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3ca204: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3ca204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3ca208: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3ca208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3ca20c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3ca20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3ca210: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3ca210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3ca214: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ca214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3ca218: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3ca218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x3ca21c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ca21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3ca220: 0xc0ddc7a  jal         func_3771E8
    ctx->pc = 0x3CA220u;
    SET_GPR_U32(ctx, 31, 0x3CA228u);
    ctx->pc = 0x3CA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA220u;
    // 0x3ca224: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3771E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3771E8u, 0x3CA220u, 0x3CA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA228u;
label_3ca228:
    // 0x3ca228: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3ca228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca22c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3ca22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3ca230: 0x8c52b348  lw          $s2, -0x4CB8($v0)
    ctx->pc = 0x3ca230u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5DB348u));
    // 0x3ca234: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x3CA234u;
    {
        const bool branch_taken_0x3ca234 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA234u;
        // 0x3ca238: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca234) {
            ctx->pc = 0x3CA380u;
            goto label_3ca380;
        }
    }
    ctx->pc = 0x3CA23Cu;
    // 0x3ca23c: 0x0  nop
    ctx->pc = 0x3ca23cu;
    // NOP
label_3ca240:
    // 0x3ca240: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CA240u;
    {
        const bool branch_taken_0x3ca240 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA240u;
        // 0x3ca244: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca240) {
            ctx->pc = 0x3CA268u;
            goto label_3ca268;
        }
    }
    ctx->pc = 0x3CA248u;
    // 0x3ca248: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x3ca248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ca24c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x3ca24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ca250: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3ca250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ca254: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3ca254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ca258: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3ca258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ca25c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ca25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca260: 0xc0ddbe8  jal         func_376FA0
    ctx->pc = 0x3CA260u;
    SET_GPR_U32(ctx, 31, 0x3CA268u);
    ctx->pc = 0x3CA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA260u;
    // 0x3ca264: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376FA0u, 0x3CA260u, 0x3CA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA268u;
label_3ca268:
    // 0x3ca268: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3ca268u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x3ca26c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3ca26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca270: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x3ca270u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ca274: 0x3c17003d  lui         $s7, 0x3D
    ctx->pc = 0x3ca274u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)61 << 16));
    // 0x3ca278: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3CA278u;
    {
        const bool branch_taken_0x3ca278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA278u;
        // 0x3ca27c: 0x3673fffd  ori         $s3, $s3, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca278) {
            ctx->pc = 0x3CA360u;
            goto label_3ca360;
        }
    }
    ctx->pc = 0x3CA280u;
label_3ca280:
    // 0x3ca280: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3CA280u;
    SET_GPR_U32(ctx, 31, 0x3CA288u);
    ctx->pc = 0x3CA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA280u;
    // 0x3ca284: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CA280u, 0x3CA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA288u;
label_3ca288:
    // 0x3ca288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ca288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca28c: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x3ca28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ca290: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3ca290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca294: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3ca294u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3ca298: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x3ca298u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3ca29c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3ca29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ca2a0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3ca2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca2a4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3ca2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ca2a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ca2a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ca2ac: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x3ca2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ca2b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3ca2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ca2b4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3ca2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca2b8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3ca2b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3ca2bc: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3ca2bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3ca2c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3ca2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca2c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3ca2c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3ca2c8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3ca2c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3ca2cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3ca2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3ca2d0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3ca2d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3ca2d4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3ca2d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3ca2d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3ca2d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3ca2dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ca2dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3ca2e0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x3ca2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ca2e4: 0x0  nop
    ctx->pc = 0x3ca2e4u;
    // NOP
    // 0x3ca2e8: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x3CA2E8u;
    {
        const bool branch_taken_0x3ca2e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ca2e8) {
            ctx->pc = 0x3CA2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA2E8u;
            // 0x3ca2ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA354u;
            goto label_3ca354;
        }
    }
    ctx->pc = 0x3CA2F0u;
    // 0x3ca2f0: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x3CA2F0u;
    {
        const bool branch_taken_0x3ca2f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2F0u;
        // 0x3ca2f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca2f0) {
            ctx->pc = 0x3CA348u;
            goto label_3ca348;
        }
    }
    ctx->pc = 0x3CA2F8u;
    // 0x3ca2f8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3ca2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x3ca2fc: 0xafbe0038  sw          $fp, 0x38($sp)
    ctx->pc = 0x3ca2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 30));
    // 0x3ca300: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3ca300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ca304: 0x6a08000f  ldl         $t0, 0xF($s0)
    ctx->pc = 0x3ca304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3ca308: 0x6e080008  ldr         $t0, 0x8($s0)
    ctx->pc = 0x3ca308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3ca30c: 0x6a090017  ldl         $t1, 0x17($s0)
    ctx->pc = 0x3ca30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3ca310: 0x6e090010  ldr         $t1, 0x10($s0)
    ctx->pc = 0x3ca310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3ca314: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x3ca314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ca318: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x3ca318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ca31c: 0xb3a9002f  sdl         $t1, 0x2F($sp)
    ctx->pc = 0x3ca31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ca320: 0xb7a90028  sdr         $t1, 0x28($sp)
    ctx->pc = 0x3ca320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ca324: 0x26e6d498  addiu       $a2, $s7, -0x2B68
    ctx->pc = 0x3ca324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956184));
    // 0x3ca328: 0xc0c6b94  jal         func_31AE50
    ctx->pc = 0x3CA328u;
    SET_GPR_U32(ctx, 31, 0x3CA330u);
    ctx->pc = 0x3CA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA328u;
    // 0x3ca32c: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE50u, 0x3CA328u, 0x3CA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA330u;
label_3ca330:
    // 0x3ca330: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3ca330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ca334: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CA334u;
    {
        const bool branch_taken_0x3ca334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA334u;
        // 0x3ca338: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca334) {
            ctx->pc = 0x3CA354u;
            goto label_3ca354;
        }
    }
    ctx->pc = 0x3CA33Cu;
    // 0x3ca33c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CA33Cu;
    {
        const bool branch_taken_0x3ca33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA33Cu;
        // 0x3ca340: 0x531024  and         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca33c) {
            ctx->pc = 0x3CA358u;
            goto label_3ca358;
        }
    }
    ctx->pc = 0x3CA344u;
    // 0x3ca344: 0x0  nop
    ctx->pc = 0x3ca344u;
    // NOP
label_3ca348:
    // 0x3ca348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ca348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ca34c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3CA34Cu;
    {
        const bool branch_taken_0x3ca34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA34Cu;
        // 0x3ca350: 0x531024  and         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca34c) {
            ctx->pc = 0x3CA358u;
            goto label_3ca358;
        }
    }
    ctx->pc = 0x3CA354u;
label_3ca354:
    // 0x3ca354: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3ca354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3ca358:
    // 0x3ca358: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ca358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ca35c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ca35cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ca360:
    // 0x3ca360: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3CA360u;
    SET_GPR_U32(ctx, 31, 0x3CA368u);
    ctx->pc = 0x3CA364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA360u;
    // 0x3ca364: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CA360u, 0x3CA368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA368u;
label_3ca368:
    // 0x3ca368: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3ca368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ca36c: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3CA36Cu;
    {
        const bool branch_taken_0x3ca36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca36c) {
            ctx->pc = 0x3CA370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA36Cu;
            // 0x3ca370: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca280;
        }
    }
    ctx->pc = 0x3CA374u;
    // 0x3ca374: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x3ca374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3ca378: 0x1640ffb1  bnez        $s2, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3CA378u;
    {
        const bool branch_taken_0x3ca378 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA378u;
        // 0x3ca37c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca378) {
            ctx->pc = 0x3CA240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca240;
        }
    }
    ctx->pc = 0x3CA380u;
label_3ca380:
    // 0x3ca380: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3ca380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3ca384: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3ca384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3ca388: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3ca388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ca38c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3ca38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ca390: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3ca390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ca394: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3ca394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ca398: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ca398u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ca39c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3ca39cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ca3a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ca3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ca3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA3A4u;
        // 0x3ca3a8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA3ACu;
    // 0x3ca3ac: 0x0  nop
    ctx->pc = 0x3ca3acu;
    // NOP
    ctx->pc = 0x3ca3b0u;
}
