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

// Function: sub_00322608
// Address: 0x322608 - 0x322730
void sub_00322608_0x322608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322608_0x322608");
#endif

    switch (ctx->pc) {
        case 0x322640u: goto label_322640;
        case 0x322660u: goto label_322660;
        case 0x322680u: goto label_322680;
        default: break;
    }

    ctx->pc = 0x322608u;

    // 0x322608: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x322608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x32260c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32260cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x322610: 0x8ca3b1ac  lw          $v1, -0x4E54($a1)
    ctx->pc = 0x322610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ACu));
    // 0x322614: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x322618: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x322618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x32261c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x322620: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322624: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x322624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x322628: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x322628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32262c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x32262cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322630: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x322630u;
    {
        const bool branch_taken_0x322630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x322634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322630u;
        // 0x322634: 0x8c50e880  lw          $s0, -0x1780($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322630) {
            ctx->pc = 0x322718u;
            goto label_322718;
        }
    }
    ctx->pc = 0x322638u;
    // 0x322638: 0xc106784  jal         func_419E10
    ctx->pc = 0x322638u;
    SET_GPR_U32(ctx, 31, 0x322640u);
    ctx->pc = 0x32263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322638u;
    // 0x32263c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x322638u, 0x322640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322640u;
label_322640:
    // 0x322640: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x322640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x322644: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x322644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x322648: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x32264c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x32264cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322650: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x322650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322654: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x322654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x322658: 0xc106784  jal         func_419E10
    ctx->pc = 0x322658u;
    SET_GPR_U32(ctx, 31, 0x322660u);
    ctx->pc = 0x32265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322658u;
    // 0x32265c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x322658u, 0x322660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322660u;
label_322660:
    // 0x322660: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x322660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x322664: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x322664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x322668: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x322668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x32266c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x32266cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322670: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x322670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322674: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x322674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x322678: 0xc106784  jal         func_419E10
    ctx->pc = 0x322678u;
    SET_GPR_U32(ctx, 31, 0x322680u);
    ctx->pc = 0x32267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322678u;
    // 0x32267c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x322678u, 0x322680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322680u;
label_322680:
    // 0x322680: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x322680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x322684: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x322684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x322688: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x322688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x32268c: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x32268cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322690: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x322690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322694: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x322694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x322698: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x322698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32269c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x32269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3226a0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x3226a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3226a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3226a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3226a8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x3226a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3226ac: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x3226acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3226b0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3226b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3226b4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x3226b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3226b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3226b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3226bc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3226bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3226c0: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3226c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3226c4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3226c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3226c8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3226c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3226cc: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x3226ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3226d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3226d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3226d4: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x3226d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3226d8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3226d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3226dc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x3226dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3226e0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3226e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x3226e4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3226e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3226e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3226e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3226ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3226ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3226f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3226f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3226f4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3226f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3226f8: 0x0  nop
    ctx->pc = 0x3226f8u;
    // NOP
    // 0x3226fc: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3226FCu;
    {
        const bool branch_taken_0x3226fc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x322700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226FCu;
        // 0x322700: 0x28a2000a  slti        $v0, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226fc) {
            ctx->pc = 0x322710u;
            goto label_322710;
        }
    }
    ctx->pc = 0x322704u;
    // 0x322704: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x322704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x322708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x322708u;
    {
        const bool branch_taken_0x322708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322708u;
        // 0x32270c: 0xa2180b  movn        $v1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322708) {
            ctx->pc = 0x322714u;
            goto label_322714;
        }
    }
    ctx->pc = 0x322710u;
label_322710:
    // 0x322710: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x322710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322714:
    // 0x322714: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x322714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_322718:
    // 0x322718: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x322718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32271c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32271cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322720: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x322720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322724: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x322724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322728: 0x3e00008  jr          $ra
    ctx->pc = 0x322728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322728u;
        // 0x32272c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322730u;
}
