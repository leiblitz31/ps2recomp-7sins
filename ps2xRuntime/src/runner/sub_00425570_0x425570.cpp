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

// Function: sub_00425570
// Address: 0x425570 - 0x425b90
void sub_00425570_0x425570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00425570_0x425570");
#endif

    switch (ctx->pc) {
        case 0x425610u: goto label_425610;
        case 0x42565cu: goto label_42565c;
        case 0x42566cu: goto label_42566c;
        case 0x425748u: goto label_425748;
        case 0x425794u: goto label_425794;
        case 0x4257a4u: goto label_4257a4;
        case 0x425880u: goto label_425880;
        case 0x4258ccu: goto label_4258cc;
        case 0x4258dcu: goto label_4258dc;
        case 0x4259b8u: goto label_4259b8;
        case 0x425a04u: goto label_425a04;
        case 0x425a14u: goto label_425a14;
        default: break;
    }

    ctx->pc = 0x425570u;

    // 0x425570: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x425570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x425574: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x425574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x425578: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x425578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x42557c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x42557cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425580: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x425580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x425584: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x425584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425588: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x425588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x42558c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x42558cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425590: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x425590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x425594: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x425594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x425598: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x425598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x42559c: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x42559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
    // 0x4255a0: 0xe7b50268  swc1        $f21, 0x268($sp)
    ctx->pc = 0x4255a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x4255a4: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x4255a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x4255a8: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x4255a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4255ac: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4255acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4255b0: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x4255b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4255b4: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x4255b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4255b8: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x4255b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4255bc: 0x6a64000f  ldl         $a0, 0xF($s3)
    ctx->pc = 0x4255bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4255c0: 0x6e640008  ldr         $a0, 0x8($s3)
    ctx->pc = 0x4255c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4255c4: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x4255c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4255c8: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x4255c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4255cc: 0x6a66001f  ldl         $a2, 0x1F($s3)
    ctx->pc = 0x4255ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4255d0: 0x6e660018  ldr         $a2, 0x18($s3)
    ctx->pc = 0x4255d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4255d4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x4255d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255d8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x4255d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255dc: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x4255dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255e0: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x4255e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255e4: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x4255e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255e8: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x4255e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255ec: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x4255ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255f0: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x4255f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4255f4: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x4255f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4255f8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4255f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4255fc: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4255FCu;
    {
        const bool branch_taken_0x4255fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4255FCu;
        // 0x425600: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4255fc) {
            ctx->pc = 0x4256DCu;
            goto label_4256dc;
        }
    }
    ctx->pc = 0x425604u;
    // 0x425604: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x425604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x425608: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x425608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x42560c: 0x0  nop
    ctx->pc = 0x42560cu;
    // NOP
label_425610:
    // 0x425610: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x425610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x425614: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x425614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x425618: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x425618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x42561c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x42561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x425620: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x425620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425624: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x425624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x425628: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x425628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x42562c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x42562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x425630: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x425630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x425634: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x425634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x425638: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x425638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x42563c: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x42563cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x425640: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x425640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x425644: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x425644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x425648: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x425648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x42564c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x42564cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x425650: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x425650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x425654: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x425654u;
    SET_GPR_U32(ctx, 31, 0x42565Cu);
    ctx->pc = 0x425658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425654u;
    // 0x425658: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4252C0u, 0x425654u, 0x42565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42565Cu;
label_42565c:
    // 0x42565c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x42565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x425660: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x425660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425664: 0xc109260  jal         func_424980
    ctx->pc = 0x425664u;
    SET_GPR_U32(ctx, 31, 0x42566Cu);
    ctx->pc = 0x425668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425664u;
    // 0x425668: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424980u, 0x425664u, 0x42566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42566Cu;
label_42566c:
    // 0x42566c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x42566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425670: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x425670u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425674: 0x0  nop
    ctx->pc = 0x425674u;
    // NOP
    // 0x425678: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x425678u;
    {
        const bool branch_taken_0x425678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x425678) {
            ctx->pc = 0x42567Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425678u;
            // 0x42567c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4256CCu;
            goto label_4256cc;
        }
    }
    ctx->pc = 0x425680u;
    // 0x425680: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x425680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425684: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x425684u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425688: 0x0  nop
    ctx->pc = 0x425688u;
    // NOP
    // 0x42568c: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x42568Cu;
    {
        const bool branch_taken_0x42568c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42568c) {
            ctx->pc = 0x425690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42568Cu;
            // 0x425690: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4256CCu;
            goto label_4256cc;
        }
    }
    ctx->pc = 0x425694u;
    // 0x425694: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x425694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x425698: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x425698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42569c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x42569cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4256a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4256a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4256a4: 0x0  nop
    ctx->pc = 0x4256a4u;
    // NOP
    // 0x4256a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4256A8u;
    {
        const bool branch_taken_0x4256a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4256ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4256A8u;
        // 0x4256ac: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4256a8) {
            ctx->pc = 0x4256B8u;
            goto label_4256b8;
        }
    }
    ctx->pc = 0x4256B0u;
    // 0x4256b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4256b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4256b4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4256b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4256b8:
    // 0x4256b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4256b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4256bc: 0x0  nop
    ctx->pc = 0x4256bcu;
    // NOP
    // 0x4256c0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x4256C0u;
    {
        const bool branch_taken_0x4256c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4256c0) {
            ctx->pc = 0x4256C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4256C0u;
            // 0x4256c4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4256CCu;
            goto label_4256cc;
        }
    }
    ctx->pc = 0x4256C8u;
    // 0x4256c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4256c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4256cc:
    // 0x4256cc: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x4256ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4256d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4256d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4256d4: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x4256D4u;
    {
        const bool branch_taken_0x4256d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4256D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4256D4u;
        // 0x4256d8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4256d4) {
            ctx->pc = 0x425610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425610;
        }
    }
    ctx->pc = 0x4256DCu;
label_4256dc:
    // 0x4256dc: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x4256dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4256e0: 0x8e720014  lw          $s2, 0x14($s3)
    ctx->pc = 0x4256e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4256e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4256e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4256e8: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x4256e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4256ec: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x4256ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4256f0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4256f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4256f4: 0x6a670007  ldl         $a3, 0x7($s3)
    ctx->pc = 0x4256f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4256f8: 0x6e670000  ldr         $a3, 0x0($s3)
    ctx->pc = 0x4256f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4256fc: 0x6a68000f  ldl         $t0, 0xF($s3)
    ctx->pc = 0x4256fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x425700: 0x6e680008  ldr         $t0, 0x8($s3)
    ctx->pc = 0x425700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x425704: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x425704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x425708: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x425708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x42570c: 0x6a65001f  ldl         $a1, 0x1F($s3)
    ctx->pc = 0x42570cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x425710: 0x6e650018  ldr         $a1, 0x18($s3)
    ctx->pc = 0x425710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x425714: 0xb3a70097  sdl         $a3, 0x97($sp)
    ctx->pc = 0x425714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425718: 0xb7a70090  sdr         $a3, 0x90($sp)
    ctx->pc = 0x425718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42571c: 0xb3a8009f  sdl         $t0, 0x9F($sp)
    ctx->pc = 0x42571cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425720: 0xb7a80098  sdr         $t0, 0x98($sp)
    ctx->pc = 0x425720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425724: 0xb3a400a7  sdl         $a0, 0xA7($sp)
    ctx->pc = 0x425724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425728: 0xb7a400a0  sdr         $a0, 0xA0($sp)
    ctx->pc = 0x425728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42572c: 0xb3a500af  sdl         $a1, 0xAF($sp)
    ctx->pc = 0x42572cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425730: 0xb7a500a8  sdr         $a1, 0xA8($sp)
    ctx->pc = 0x425730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425734: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x425734u;
    {
        const bool branch_taken_0x425734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x425734) {
            ctx->pc = 0x425738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425734u;
            // 0x425738: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425818u;
            goto label_425818;
        }
    }
    ctx->pc = 0x42573Cu;
    // 0x42573c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x42573cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x425740: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x425740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x425744: 0x0  nop
    ctx->pc = 0x425744u;
    // NOP
label_425748:
    // 0x425748: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x425748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x42574c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x42574cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x425750: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x425750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x425754: 0xafb000a4  sw          $s0, 0xA4($sp)
    ctx->pc = 0x425754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
    // 0x425758: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x425758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42575c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x42575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x425760: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x425760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x425764: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x425764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x425768: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x425768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x42576c: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x42576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x425770: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x425770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x425774: 0xa3a000c8  sb          $zero, 0xC8($sp)
    ctx->pc = 0x425774u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x425778: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x425778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x42577c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x42577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x425780: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x425780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x425784: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x425784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x425788: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x425788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x42578c: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x42578Cu;
    SET_GPR_U32(ctx, 31, 0x425794u);
    ctx->pc = 0x425790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42578Cu;
    // 0x425790: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4252C0u, 0x42578Cu, 0x425794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425794u;
label_425794:
    // 0x425794: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x425794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x425798: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x425798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42579c: 0xc109260  jal         func_424980
    ctx->pc = 0x42579Cu;
    SET_GPR_U32(ctx, 31, 0x4257A4u);
    ctx->pc = 0x4257A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42579Cu;
    // 0x4257a0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424980u, 0x42579Cu, 0x4257A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4257A4u;
label_4257a4:
    // 0x4257a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x4257a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4257a8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x4257a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4257ac: 0x0  nop
    ctx->pc = 0x4257acu;
    // NOP
    // 0x4257b0: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x4257B0u;
    {
        const bool branch_taken_0x4257b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4257b0) {
            ctx->pc = 0x4257B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4257B0u;
            // 0x4257b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425804u;
            goto label_425804;
        }
    }
    ctx->pc = 0x4257B8u;
    // 0x4257b8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x4257b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4257bc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x4257bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4257c0: 0x0  nop
    ctx->pc = 0x4257c0u;
    // NOP
    // 0x4257c4: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x4257C4u;
    {
        const bool branch_taken_0x4257c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4257c4) {
            ctx->pc = 0x4257C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4257C4u;
            // 0x4257c8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425804u;
            goto label_425804;
        }
    }
    ctx->pc = 0x4257CCu;
    // 0x4257cc: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x4257ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4257d0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x4257d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4257d4: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x4257d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4257d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4257d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4257dc: 0x0  nop
    ctx->pc = 0x4257dcu;
    // NOP
    // 0x4257e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4257E0u;
    {
        const bool branch_taken_0x4257e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4257E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4257E0u;
        // 0x4257e4: 0x8fa200a4  lw          $v0, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4257e0) {
            ctx->pc = 0x4257F0u;
            goto label_4257f0;
        }
    }
    ctx->pc = 0x4257E8u;
    // 0x4257e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4257e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4257ec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4257ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_4257f0:
    // 0x4257f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4257f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4257f4: 0x0  nop
    ctx->pc = 0x4257f4u;
    // NOP
    // 0x4257f8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x4257F8u;
    {
        const bool branch_taken_0x4257f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4257f8) {
            ctx->pc = 0x4257FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4257F8u;
            // 0x4257fc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425804u;
            goto label_425804;
        }
    }
    ctx->pc = 0x425800u;
    // 0x425800: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x425800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_425804:
    // 0x425804: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x425804u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x425808: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x425808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x42580c: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x42580Cu;
    {
        const bool branch_taken_0x42580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42580Cu;
        // 0x425810: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42580c) {
            ctx->pc = 0x425748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425748;
        }
    }
    ctx->pc = 0x425814u;
    // 0x425814: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x425814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_425818:
    // 0x425818: 0x8e720018  lw          $s2, 0x18($s3)
    ctx->pc = 0x425818u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x42581c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x42581cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x425820: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x425820u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x425824: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x425824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x425828: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x425828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x42582c: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x42582cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x425830: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x425830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x425834: 0x6a67000f  ldl         $a3, 0xF($s3)
    ctx->pc = 0x425834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x425838: 0x6e670008  ldr         $a3, 0x8($s3)
    ctx->pc = 0x425838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x42583c: 0x6a680017  ldl         $t0, 0x17($s3)
    ctx->pc = 0x42583cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x425840: 0x6e680010  ldr         $t0, 0x10($s3)
    ctx->pc = 0x425840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x425844: 0x6a64001f  ldl         $a0, 0x1F($s3)
    ctx->pc = 0x425844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x425848: 0x6e640018  ldr         $a0, 0x18($s3)
    ctx->pc = 0x425848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x42584c: 0xb3a60107  sdl         $a2, 0x107($sp)
    ctx->pc = 0x42584cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425850: 0xb7a60100  sdr         $a2, 0x100($sp)
    ctx->pc = 0x425850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425854: 0xb3a7010f  sdl         $a3, 0x10F($sp)
    ctx->pc = 0x425854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425858: 0xb7a70108  sdr         $a3, 0x108($sp)
    ctx->pc = 0x425858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42585c: 0xb3a80117  sdl         $t0, 0x117($sp)
    ctx->pc = 0x42585cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425860: 0xb7a80110  sdr         $t0, 0x110($sp)
    ctx->pc = 0x425860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425864: 0xb3a4011f  sdl         $a0, 0x11F($sp)
    ctx->pc = 0x425864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425868: 0xb7a40118  sdr         $a0, 0x118($sp)
    ctx->pc = 0x425868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42586c: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x42586Cu;
    {
        const bool branch_taken_0x42586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42586c) {
            ctx->pc = 0x425870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42586Cu;
            // 0x425870: 0x8e71000c  lw          $s1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425950u;
            goto label_425950;
        }
    }
    ctx->pc = 0x425874u;
    // 0x425874: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x425874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x425878: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x425878u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x42587c: 0x0  nop
    ctx->pc = 0x42587cu;
    // NOP
label_425880:
    // 0x425880: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x425880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x425884: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x425884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x425888: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x425888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x42588c: 0xafb00118  sw          $s0, 0x118($sp)
    ctx->pc = 0x42588cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 16));
    // 0x425890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x425890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425894: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x425894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x425898: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x425898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x42589c: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x42589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x4258a0: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x4258a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x4258a4: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x4258a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x4258a8: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x4258a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x4258ac: 0xa3a00138  sb          $zero, 0x138($sp)
    ctx->pc = 0x4258acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x4258b0: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x4258b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x4258b4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x4258b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x4258b8: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x4258b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x4258bc: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x4258bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x4258c0: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x4258c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x4258c4: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x4258C4u;
    SET_GPR_U32(ctx, 31, 0x4258CCu);
    ctx->pc = 0x4258C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4258C4u;
    // 0x4258c8: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4252C0u, 0x4258C4u, 0x4258CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4258CCu;
label_4258cc:
    // 0x4258cc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4258ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x4258d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4258d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4258d4: 0xc109260  jal         func_424980
    ctx->pc = 0x4258D4u;
    SET_GPR_U32(ctx, 31, 0x4258DCu);
    ctx->pc = 0x4258D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4258D4u;
    // 0x4258d8: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424980u, 0x4258D4u, 0x4258DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4258DCu;
label_4258dc:
    // 0x4258dc: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x4258dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4258e0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x4258e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4258e4: 0x0  nop
    ctx->pc = 0x4258e4u;
    // NOP
    // 0x4258e8: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x4258E8u;
    {
        const bool branch_taken_0x4258e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4258e8) {
            ctx->pc = 0x4258ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4258E8u;
            // 0x4258ec: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42593Cu;
            goto label_42593c;
        }
    }
    ctx->pc = 0x4258F0u;
    // 0x4258f0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x4258f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4258f4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x4258f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4258f8: 0x0  nop
    ctx->pc = 0x4258f8u;
    // NOP
    // 0x4258fc: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x4258FCu;
    {
        const bool branch_taken_0x4258fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4258fc) {
            ctx->pc = 0x425900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4258FCu;
            // 0x425900: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42593Cu;
            goto label_42593c;
        }
    }
    ctx->pc = 0x425904u;
    // 0x425904: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x425904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x425908: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x425908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42590c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x42590cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x425910: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x425910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425914: 0x0  nop
    ctx->pc = 0x425914u;
    // NOP
    // 0x425918: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x425918u;
    {
        const bool branch_taken_0x425918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x42591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425918u;
        // 0x42591c: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425918) {
            ctx->pc = 0x425928u;
            goto label_425928;
        }
    }
    ctx->pc = 0x425920u;
    // 0x425920: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x425920u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x425924: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x425924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_425928:
    // 0x425928: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x425928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x42592c: 0x0  nop
    ctx->pc = 0x42592cu;
    // NOP
    // 0x425930: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x425930u;
    {
        const bool branch_taken_0x425930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x425930) {
            ctx->pc = 0x425934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425930u;
            // 0x425934: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42593Cu;
            goto label_42593c;
        }
    }
    ctx->pc = 0x425938u;
    // 0x425938: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x425938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42593c:
    // 0x42593c: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x42593cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x425940: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x425940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x425944: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x425944u;
    {
        const bool branch_taken_0x425944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425944u;
        // 0x425948: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425944) {
            ctx->pc = 0x425880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425880;
        }
    }
    ctx->pc = 0x42594Cu;
    // 0x42594c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x42594cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_425950:
    // 0x425950: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x425950u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x425954: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x425954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x425958: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x425958u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x42595c: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x42595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x425960: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x425960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x425964: 0x6a650007  ldl         $a1, 0x7($s3)
    ctx->pc = 0x425964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x425968: 0x6e650000  ldr         $a1, 0x0($s3)
    ctx->pc = 0x425968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x42596c: 0x6a66000f  ldl         $a2, 0xF($s3)
    ctx->pc = 0x42596cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x425970: 0x6e660008  ldr         $a2, 0x8($s3)
    ctx->pc = 0x425970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x425974: 0x6a670017  ldl         $a3, 0x17($s3)
    ctx->pc = 0x425974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x425978: 0x6e670010  ldr         $a3, 0x10($s3)
    ctx->pc = 0x425978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x42597c: 0x6a68001f  ldl         $t0, 0x1F($s3)
    ctx->pc = 0x42597cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x425980: 0x6e680018  ldr         $t0, 0x18($s3)
    ctx->pc = 0x425980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x425984: 0xb3a50177  sdl         $a1, 0x177($sp)
    ctx->pc = 0x425984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425988: 0xb7a50170  sdr         $a1, 0x170($sp)
    ctx->pc = 0x425988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42598c: 0xb3a6017f  sdl         $a2, 0x17F($sp)
    ctx->pc = 0x42598cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425990: 0xb7a60178  sdr         $a2, 0x178($sp)
    ctx->pc = 0x425990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425994: 0xb3a70187  sdl         $a3, 0x187($sp)
    ctx->pc = 0x425994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425998: 0xb7a70180  sdr         $a3, 0x180($sp)
    ctx->pc = 0x425998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42599c: 0xb3a8018f  sdl         $t0, 0x18F($sp)
    ctx->pc = 0x42599cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4259a0: 0xb7a80188  sdr         $t0, 0x188($sp)
    ctx->pc = 0x4259a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4259a4: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x4259A4u;
    {
        const bool branch_taken_0x4259a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4259a4) {
            ctx->pc = 0x4259A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4259A4u;
            // 0x4259a8: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x425A88u;
            goto label_425a88;
        }
    }
    ctx->pc = 0x4259ACu;
    // 0x4259ac: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x4259acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x4259b0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x4259b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4259b4: 0x0  nop
    ctx->pc = 0x4259b4u;
    // NOP
label_4259b8:
    // 0x4259b8: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x4259b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x4259bc: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x4259bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4259c0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x4259c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x4259c4: 0xafb0018c  sw          $s0, 0x18C($sp)
    ctx->pc = 0x4259c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 16));
    // 0x4259c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4259c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4259cc: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x4259ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
    // 0x4259d0: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x4259d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x4259d4: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x4259d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
    // 0x4259d8: 0x27a80190  addiu       $t0, $sp, 0x190
    ctx->pc = 0x4259d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x4259dc: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x4259dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
    // 0x4259e0: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x4259e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
    // 0x4259e4: 0xa3a001a8  sb          $zero, 0x1A8($sp)
    ctx->pc = 0x4259e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 424), (uint8_t)GPR_U32(ctx, 0));
    // 0x4259e8: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x4259e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x4259ec: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x4259ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x4259f0: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x4259f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x4259f4: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x4259f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x4259f8: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x4259f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x4259fc: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x4259FCu;
    SET_GPR_U32(ctx, 31, 0x425A04u);
    ctx->pc = 0x425A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4259FCu;
    // 0x425a00: 0xafa001a4  sw          $zero, 0x1A4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4252C0u, 0x4259FCu, 0x425A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425A04u;
label_425a04:
    // 0x425a04: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x425a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x425a08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x425a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425a0c: 0xc109260  jal         func_424980
    ctx->pc = 0x425A0Cu;
    SET_GPR_U32(ctx, 31, 0x425A14u);
    ctx->pc = 0x425A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425A0Cu;
    // 0x425a10: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424980u, 0x425A0Cu, 0x425A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425A14u;
label_425a14:
    // 0x425a14: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x425a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425a18: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x425a18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425a1c: 0x0  nop
    ctx->pc = 0x425a1cu;
    // NOP
    // 0x425a20: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x425A20u;
    {
        const bool branch_taken_0x425a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x425a20) {
            ctx->pc = 0x425A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425A20u;
            // 0x425a24: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425A74u;
            goto label_425a74;
        }
    }
    ctx->pc = 0x425A28u;
    // 0x425a28: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x425a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425a2c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x425a2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425a30: 0x0  nop
    ctx->pc = 0x425a30u;
    // NOP
    // 0x425a34: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x425A34u;
    {
        const bool branch_taken_0x425a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x425a34) {
            ctx->pc = 0x425A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425A34u;
            // 0x425a38: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425A74u;
            goto label_425a74;
        }
    }
    ctx->pc = 0x425A3Cu;
    // 0x425a3c: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x425a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x425a40: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x425a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x425a44: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x425a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x425a48: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x425a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425a4c: 0x0  nop
    ctx->pc = 0x425a4cu;
    // NOP
    // 0x425a50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x425A50u;
    {
        const bool branch_taken_0x425a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x425A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425A50u;
        // 0x425a54: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425a50) {
            ctx->pc = 0x425A60u;
            goto label_425a60;
        }
    }
    ctx->pc = 0x425A58u;
    // 0x425a58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x425a58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x425a5c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x425a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_425a60:
    // 0x425a60: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x425a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425a64: 0x0  nop
    ctx->pc = 0x425a64u;
    // NOP
    // 0x425a68: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x425A68u;
    {
        const bool branch_taken_0x425a68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x425a68) {
            ctx->pc = 0x425A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425A68u;
            // 0x425a6c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425A74u;
            goto label_425a74;
        }
    }
    ctx->pc = 0x425A70u;
    // 0x425a70: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x425a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_425a74:
    // 0x425a74: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x425a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x425a78: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x425a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x425a7c: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x425A7Cu;
    {
        const bool branch_taken_0x425a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425A7Cu;
        // 0x425a80: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425a7c) {
            ctx->pc = 0x4259B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4259b8;
        }
    }
    ctx->pc = 0x425A84u;
    // 0x425a84: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x425a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_425a88:
    // 0x425a88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x425a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425a8c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x425a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x425a90: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x425a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425a94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x425a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425a98: 0x0  nop
    ctx->pc = 0x425a98u;
    // NOP
    // 0x425a9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x425A9Cu;
    {
        const bool branch_taken_0x425a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x425AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425A9Cu;
        // 0x425aa0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425a9c) {
            ctx->pc = 0x425AA8u;
            goto label_425aa8;
        }
    }
    ctx->pc = 0x425AA4u;
    // 0x425aa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x425aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425aa8:
    // 0x425aa8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x425aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x425aac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x425aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x425ab0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x425ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x425ab4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x425ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425ab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x425ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425abc: 0x0  nop
    ctx->pc = 0x425abcu;
    // NOP
    // 0x425ac0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x425AC0u;
    {
        const bool branch_taken_0x425ac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x425ac0) {
            ctx->pc = 0x425AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425AC0u;
            // 0x425ac4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425AC8u;
            goto label_425ac8;
        }
    }
    ctx->pc = 0x425AC8u;
label_425ac8:
    // 0x425ac8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x425ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x425acc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x425accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x425ad0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x425ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425ad4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x425ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425ad8: 0x0  nop
    ctx->pc = 0x425ad8u;
    // NOP
    // 0x425adc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x425ADCu;
    {
        const bool branch_taken_0x425adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x425adc) {
            ctx->pc = 0x425AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425ADCu;
            // 0x425ae0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425AE4u;
            goto label_425ae4;
        }
    }
    ctx->pc = 0x425AE4u;
label_425ae4:
    // 0x425ae4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x425ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x425ae8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x425ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425aec: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x425aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x425af0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x425af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x425af4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x425af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x425af8: 0x0  nop
    ctx->pc = 0x425af8u;
    // NOP
    // 0x425afc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x425AFCu;
    {
        const bool branch_taken_0x425afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x425B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425AFCu;
        // 0x425b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425afc) {
            ctx->pc = 0x425B60u;
            goto label_425b60;
        }
    }
    ctx->pc = 0x425B04u;
    // 0x425b04: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x425b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x425b08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x425b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x425b0c: 0x2c42821  addu        $a1, $s6, $a0
    ctx->pc = 0x425b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x425b10: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x425b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x425b14: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x425b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x425b18: 0x6a66000f  ldl         $a2, 0xF($s3)
    ctx->pc = 0x425b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x425b1c: 0x6e660008  ldr         $a2, 0x8($s3)
    ctx->pc = 0x425b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x425b20: 0x6a670017  ldl         $a3, 0x17($s3)
    ctx->pc = 0x425b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x425b24: 0x6e670010  ldr         $a3, 0x10($s3)
    ctx->pc = 0x425b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x425b28: 0x6a68001f  ldl         $t0, 0x1F($s3)
    ctx->pc = 0x425b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x425b2c: 0x6e680018  ldr         $t0, 0x18($s3)
    ctx->pc = 0x425b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x425b30: 0xb2c20007  sdl         $v0, 0x7($s6)
    ctx->pc = 0x425b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b34: 0xb6c20000  sdr         $v0, 0x0($s6)
    ctx->pc = 0x425b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b38: 0xb2c6000f  sdl         $a2, 0xF($s6)
    ctx->pc = 0x425b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b3c: 0xb6c60008  sdr         $a2, 0x8($s6)
    ctx->pc = 0x425b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b40: 0xb2c70017  sdl         $a3, 0x17($s6)
    ctx->pc = 0x425b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b44: 0xb6c70010  sdr         $a3, 0x10($s6)
    ctx->pc = 0x425b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b48: 0xb2c8001f  sdl         $t0, 0x1F($s6)
    ctx->pc = 0x425b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b4c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x425b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x425b50: 0xb6c80018  sdr         $t0, 0x18($s6)
    ctx->pc = 0x425b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x425b54: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x425b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x425b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x425b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x425b5c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x425b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_425b60:
    // 0x425b60: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x425b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x425b64: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x425b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x425b68: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x425b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x425b6c: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x425b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x425b70: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x425b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x425b74: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x425b74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x425b78: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x425b78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x425b7c: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x425b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x425b80: 0xc7b50268  lwc1        $f21, 0x268($sp)
    ctx->pc = 0x425b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x425b84: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x425b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x425b88: 0x3e00008  jr          $ra
    ctx->pc = 0x425B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425B88u;
        // 0x425b8c: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x425B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x425B90u;
}
