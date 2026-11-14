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

// Function: sub_003774E8
// Address: 0x3774e8 - 0x377620
void sub_003774E8_0x3774e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003774E8_0x3774e8");
#endif

    switch (ctx->pc) {
        case 0x377534u: goto label_377534;
        case 0x377588u: goto label_377588;
        default: break;
    }

    ctx->pc = 0x3774e8u;

    // 0x3774e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3774e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3774ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3774ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3774f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3774f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3774f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3774f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3774f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3774fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3774fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377500: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x377500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x377504: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x377504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x377508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37750c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x37750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x377510: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x377510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x377514: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x377514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x377518: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x377518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37751c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x37751cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x377520: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x377520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x377524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x377524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377528: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x377528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37752c: 0xc0dd1b8  jal         func_3746E0
    ctx->pc = 0x37752Cu;
    SET_GPR_U32(ctx, 31, 0x377534u);
    ctx->pc = 0x377530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37752Cu;
    // 0x377530: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3746E0u, 0x37752Cu, 0x377534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377534u;
label_377534:
    // 0x377534: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x377534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377538: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x377538u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37753c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x37753cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377540: 0x0  nop
    ctx->pc = 0x377540u;
    // NOP
    // 0x377544: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x377544u;
    {
        const bool branch_taken_0x377544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x377548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377544u;
        // 0x377548: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377544) {
            ctx->pc = 0x377600u;
            goto label_377600;
        }
    }
    ctx->pc = 0x37754Cu;
    // 0x37754c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x37754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x377550: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x377550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377554: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x377554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377558: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x377558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37755c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37755cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x377560: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x377560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x377564: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x377564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x377568: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x377568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37756c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x37756cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x377570: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x377570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x377574: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x377574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377578: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x377578u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x37757c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x37757cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x377580: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x377580u;
    SET_GPR_U32(ctx, 31, 0x377588u);
    ctx->pc = 0x377584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377580u;
    // 0x377584: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x377580u, 0x377588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377588u;
label_377588:
    // 0x377588: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x377588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37758c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x37758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x377590: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x377590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x377594: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x377594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x377598: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x377598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x37759c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x37759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3775a0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3775a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3775a4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3775a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3775a8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3775a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3775ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3775acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3775b0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3775b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3775b4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3775b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3775b8: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x3775b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3775bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3775BCu;
    {
        const bool branch_taken_0x3775bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3775bc) {
            ctx->pc = 0x3775D8u;
            goto label_3775d8;
        }
    }
    ctx->pc = 0x3775C4u;
    // 0x3775c4: 0xc7808138  lwc1        $f0, -0x7EC8($gp)
    ctx->pc = 0x3775c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3775c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3775c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3775cc: 0x0  nop
    ctx->pc = 0x3775ccu;
    // NOP
    // 0x3775d0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3775D0u;
    {
        const bool branch_taken_0x3775d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3775D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3775D0u;
        // 0x3775d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3775d0) {
            ctx->pc = 0x377604u;
            goto label_377604;
        }
    }
    ctx->pc = 0x3775D8u;
label_3775d8:
    // 0x3775d8: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x3775d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3775dc: 0x0  nop
    ctx->pc = 0x3775dcu;
    // NOP
    // 0x3775e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3775E0u;
    {
        const bool branch_taken_0x3775e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3775E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3775E0u;
        // 0x3775e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3775e0) {
            ctx->pc = 0x3775ECu;
            goto label_3775ec;
        }
    }
    ctx->pc = 0x3775E8u;
    // 0x3775e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3775e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3775ec:
    // 0x3775ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3775ECu;
    {
        const bool branch_taken_0x3775ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3775F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3775ECu;
        // 0x3775f0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3775ec) {
            ctx->pc = 0x3775FCu;
            goto label_3775fc;
        }
    }
    ctx->pc = 0x3775F4u;
    // 0x3775f4: 0xc780813c  lwc1        $f0, -0x7EC4($gp)
    ctx->pc = 0x3775f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3775f8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3775f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3775fc:
    // 0x3775fc: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x3775fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_377600:
    // 0x377600: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377604:
    // 0x377604: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x377604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377608: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x377608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37760c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37760cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x377610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377614: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x377614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377618: 0x3e00008  jr          $ra
    ctx->pc = 0x377618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377618u;
        // 0x37761c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377620u;
}
