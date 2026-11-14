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

// Function: sub_003227F0
// Address: 0x3227f0 - 0x322998
void sub_003227F0_0x3227f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003227F0_0x3227f0");
#endif

    switch (ctx->pc) {
        case 0x322830u: goto label_322830;
        case 0x3228c8u: goto label_3228c8;
        case 0x3228e8u: goto label_3228e8;
        case 0x322908u: goto label_322908;
        case 0x322928u: goto label_322928;
        case 0x322948u: goto label_322948;
        case 0x322968u: goto label_322968;
        default: break;
    }

    ctx->pc = 0x3227f0u;

    // 0x3227f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3227f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3227f4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3227f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3227f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3227f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3227fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3227fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x322800: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x322800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x322804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322808: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x322808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x32280c: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x32280cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x322810: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
    ctx->pc = 0x322810u;
    {
        const bool branch_taken_0x322810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x322814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322810u;
        // 0x322814: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322810) {
            ctx->pc = 0x322978u;
            goto label_322978;
        }
    }
    ctx->pc = 0x322818u;
    // 0x322818: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x322818u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x32281c: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x32281cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x322820: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x322820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x322824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322828: 0xc103404  jal         func_40D010
    ctx->pc = 0x322828u;
    SET_GPR_U32(ctx, 31, 0x322830u);
    ctx->pc = 0x32282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322828u;
    // 0x32282c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x322828u, 0x322830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322830u;
label_322830:
    // 0x322830: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x322830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322834: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x322834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x322838: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x322838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x32283c: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x32283cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x322840: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x322840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x322844: 0x6a270017  ldl         $a3, 0x17($s1)
    ctx->pc = 0x322844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x322848: 0x6e270010  ldr         $a3, 0x10($s1)
    ctx->pc = 0x322848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x32284c: 0x6a28001f  ldl         $t0, 0x1F($s1)
    ctx->pc = 0x32284cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x322850: 0x6e280018  ldr         $t0, 0x18($s1)
    ctx->pc = 0x322850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x322854: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x322854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322858: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x322858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32285c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x32285cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322860: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x322860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322864: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x322864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322868: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x322868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32286c: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x32286cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322870: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x322870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322874: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x322874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x322878: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x322878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x32287c: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x32287cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x322880: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x322880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x322884: 0x6a270037  ldl         $a3, 0x37($s1)
    ctx->pc = 0x322884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x322888: 0x6e270030  ldr         $a3, 0x30($s1)
    ctx->pc = 0x322888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x32288c: 0x6a28003f  ldl         $t0, 0x3F($s1)
    ctx->pc = 0x32288cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x322890: 0x6e280038  ldr         $t0, 0x38($s1)
    ctx->pc = 0x322890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x322894: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x322894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x322898: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x322898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32289c: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x32289cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3228a0: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x3228a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3228a4: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x3228a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3228a8: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x3228a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3228ac: 0xb3a8003f  sdl         $t0, 0x3F($sp)
    ctx->pc = 0x3228acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3228b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3228b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3228b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3228b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3228bc: 0xb7a80038  sdr         $t0, 0x38($sp)
    ctx->pc = 0x3228bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3228c0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3228C0u;
    SET_GPR_U32(ctx, 31, 0x3228C8u);
    ctx->pc = 0x3228C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3228C0u;
    // 0x3228c4: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3228C0u, 0x3228C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228C8u;
label_3228c8:
    // 0x3228c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3228c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3228cc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3228CCu;
    {
        const bool branch_taken_0x3228cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3228cc) {
            ctx->pc = 0x3228D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3228CCu;
            // 0x3228d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3228ECu;
            goto label_3228ec;
        }
    }
    ctx->pc = 0x3228D4u;
    // 0x3228d4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3228d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3228d8: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3228D8u;
    {
        const bool branch_taken_0x3228d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3228d8) {
            ctx->pc = 0x3228DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3228D8u;
            // 0x3228dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3228ECu;
            goto label_3228ec;
        }
    }
    ctx->pc = 0x3228E0u;
    // 0x3228e0: 0xc0e2f1c  jal         func_38BC70
    ctx->pc = 0x3228E0u;
    SET_GPR_U32(ctx, 31, 0x3228E8u);
    ctx->pc = 0x3228E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3228E0u;
    // 0x3228e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BC70u, 0x3228E0u, 0x3228E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228E8u;
label_3228e8:
    // 0x3228e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3228e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3228ec:
    // 0x3228ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3228ECu;
    {
        const bool branch_taken_0x3228ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3228F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228ECu;
        // 0x3228f0: 0x26630001  addiu       $v1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228ec) {
            ctx->pc = 0x322908u;
            goto label_322908;
        }
    }
    ctx->pc = 0x3228F4u;
    // 0x3228f4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3228f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3228f8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3228F8u;
    {
        const bool branch_taken_0x3228f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3228f8) {
            ctx->pc = 0x3228FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3228F8u;
            // 0x3228fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32290Cu;
            goto label_32290c;
        }
    }
    ctx->pc = 0x322900u;
    // 0x322900: 0xc0e2f1c  jal         func_38BC70
    ctx->pc = 0x322900u;
    SET_GPR_U32(ctx, 31, 0x322908u);
    ctx->pc = 0x322904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322900u;
    // 0x322904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BC70u, 0x322900u, 0x322908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322908u;
label_322908:
    // 0x322908: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x322908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32290c:
    // 0x32290c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32290Cu;
    {
        const bool branch_taken_0x32290c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32290Cu;
        // 0x322910: 0x26630002  addiu       $v1, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32290c) {
            ctx->pc = 0x322928u;
            goto label_322928;
        }
    }
    ctx->pc = 0x322914u;
    // 0x322914: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x322914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x322918: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322918u;
    {
        const bool branch_taken_0x322918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x322918) {
            ctx->pc = 0x32291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322918u;
            // 0x32291c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32292Cu;
            goto label_32292c;
        }
    }
    ctx->pc = 0x322920u;
    // 0x322920: 0xc0e2f1c  jal         func_38BC70
    ctx->pc = 0x322920u;
    SET_GPR_U32(ctx, 31, 0x322928u);
    ctx->pc = 0x322924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322920u;
    // 0x322924: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BC70u, 0x322920u, 0x322928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322928u;
label_322928:
    // 0x322928: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x322928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32292c:
    // 0x32292c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32292Cu;
    {
        const bool branch_taken_0x32292c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32292Cu;
        // 0x322930: 0x26630003  addiu       $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32292c) {
            ctx->pc = 0x322948u;
            goto label_322948;
        }
    }
    ctx->pc = 0x322934u;
    // 0x322934: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x322934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x322938: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322938u;
    {
        const bool branch_taken_0x322938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x322938) {
            ctx->pc = 0x32293Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322938u;
            // 0x32293c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32294Cu;
            goto label_32294c;
        }
    }
    ctx->pc = 0x322940u;
    // 0x322940: 0xc0e2f1c  jal         func_38BC70
    ctx->pc = 0x322940u;
    SET_GPR_U32(ctx, 31, 0x322948u);
    ctx->pc = 0x322944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322940u;
    // 0x322944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BC70u, 0x322940u, 0x322948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322948u;
label_322948:
    // 0x322948: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x322948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_32294c:
    // 0x32294c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32294Cu;
    {
        const bool branch_taken_0x32294c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32294Cu;
        // 0x322950: 0x26630004  addiu       $v1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32294c) {
            ctx->pc = 0x322968u;
            goto label_322968;
        }
    }
    ctx->pc = 0x322954u;
    // 0x322954: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x322954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x322958: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322958u;
    {
        const bool branch_taken_0x322958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x322958) {
            ctx->pc = 0x32295Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322958u;
            // 0x32295c: 0x26730005  addiu       $s3, $s3, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32296Cu;
            goto label_32296c;
        }
    }
    ctx->pc = 0x322960u;
    // 0x322960: 0xc0e2f1c  jal         func_38BC70
    ctx->pc = 0x322960u;
    SET_GPR_U32(ctx, 31, 0x322968u);
    ctx->pc = 0x322964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322960u;
    // 0x322964: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BC70u, 0x322960u, 0x322968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322968u;
label_322968:
    // 0x322968: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x322968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_32296c:
    // 0x32296c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x32296cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x322970: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x322970u;
    {
        const bool branch_taken_0x322970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322970u;
        // 0x322974: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322970) {
            ctx->pc = 0x3228C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3228c8;
        }
    }
    ctx->pc = 0x322978u;
label_322978:
    // 0x322978: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x322978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32297c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x32297cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x322980: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x322980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322984: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x322984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322988: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x322988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32298c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32298cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322990: 0x3e00008  jr          $ra
    ctx->pc = 0x322990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322990u;
        // 0x322994: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322998u;
}
