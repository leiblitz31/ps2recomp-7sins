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

// Function: sub_003845A0
// Address: 0x3845a0 - 0x384698
void sub_003845A0_0x3845a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003845A0_0x3845a0");
#endif

    switch (ctx->pc) {
        case 0x384608u: goto label_384608;
        case 0x384620u: goto label_384620;
        case 0x384640u: goto label_384640;
        case 0x384654u: goto label_384654;
        default: break;
    }

    ctx->pc = 0x3845a0u;

    // 0x3845a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3845a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3845a4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3845a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x3845a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3845a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3845ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3845acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3845b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3845b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3845b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3845b8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3845b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3845bc: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x3845bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3845c0: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x3845c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3845c4: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x3845c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3845c8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x3845c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3845cc: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3845ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x3845d0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3845d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3845d4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3845d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3845d8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3845d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x3845dc: 0x24e5ba10  addiu       $a1, $a3, -0x45F0
    ctx->pc = 0x3845dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949392));
    // 0x3845e0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3845e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3845e4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3845e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3845e8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3845e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FBA18u));
    // 0x3845ec: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x3845ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3845f0: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x3845f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3845f4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3845f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x3845f8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x3845f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3845fc: 0xc7ad0000  lwc1        $f13, 0x0($sp)
    ctx->pc = 0x3845fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x384600: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x384600u;
    SET_GPR_U32(ctx, 31, 0x384608u);
    ctx->pc = 0x384604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384600u;
    // 0x384604: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x384600u, 0x384608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384608u;
label_384608:
    // 0x384608: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x384608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x38460c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x38460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x384610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384614: 0x24a5ba20  addiu       $a1, $a1, -0x45E0
    ctx->pc = 0x384614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949408));
    // 0x384618: 0xc103d16  jal         func_40F458
    ctx->pc = 0x384618u;
    SET_GPR_U32(ctx, 31, 0x384620u);
    ctx->pc = 0x38461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384618u;
    // 0x38461c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x384618u, 0x384620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384620u;
label_384620:
    // 0x384620: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x384620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x384624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x384624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384628: 0xc7808154  lwc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x384628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38462c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384630: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x384630u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x384634: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x384634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384638: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x384638u;
    SET_GPR_U32(ctx, 31, 0x384640u);
    ctx->pc = 0x38463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384638u;
    // 0x38463c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x384638u, 0x384640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384640u;
label_384640:
    // 0x384640: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x384640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x384644: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384648: 0x24a5ba30  addiu       $a1, $a1, -0x45D0
    ctx->pc = 0x384648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949424));
    // 0x38464c: 0xc103d16  jal         func_40F458
    ctx->pc = 0x38464Cu;
    SET_GPR_U32(ctx, 31, 0x384654u);
    ctx->pc = 0x384650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38464Cu;
    // 0x384650: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x38464Cu, 0x384654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384654u;
label_384654:
    // 0x384654: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x384654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x384658: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x384658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38465c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x38465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384660: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x384660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384664: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x384664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384668: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x384668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38466c: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x38466cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x384670: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x384670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x384674: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x384674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x384678: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x384678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x38467c: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x38467cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x384680: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x384680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x384684: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x384684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x384688: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x384688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38468c: 0x3e00008  jr          $ra
    ctx->pc = 0x38468Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38468Cu;
        // 0x384690: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38468Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384694u;
    // 0x384694: 0x0  nop
    ctx->pc = 0x384694u;
    // NOP
    ctx->pc = 0x384698u;
}
