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

// Function: sub_004B1978
// Address: 0x4b1978 - 0x4b1ae0
void sub_004B1978_0x4b1978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1978_0x4b1978");
#endif

    switch (ctx->pc) {
        case 0x4b198cu: goto label_4b198c;
        case 0x4b19b0u: goto label_4b19b0;
        case 0x4b19b8u: goto label_4b19b8;
        default: break;
    }

    ctx->pc = 0x4b1978u;

    // 0x4b1978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b197c: 0xaf84b908  sw          $a0, -0x46F8($gp)
    ctx->pc = 0x4b197cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949128), GPR_U32(ctx, 4));
    // 0x4b1980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1984: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4B1984u;
    SET_GPR_U32(ctx, 31, 0x4B198Cu);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4B1984u, 0x4B198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B198Cu;
label_4b198c:
    // 0x4b198c: 0x8f8ab908  lw          $t2, -0x46F8($gp)
    ctx->pc = 0x4b198cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949128)));
    // 0x4b1990: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b1990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b199c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b199cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b19a0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x4b19a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b19a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b19a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b19a8: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B19A8u;
    SET_GPR_U32(ctx, 31, 0x4B19B0u);
    ctx->pc = 0x4B19ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B19A8u;
    // 0x4b19ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B19A8u, 0x4B19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B19B0u;
label_4b19b0:
    // 0x4b19b0: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4B19B0u;
    SET_GPR_U32(ctx, 31, 0x4B19B8u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4B19B0u, 0x4B19B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B19B8u;
label_4b19b8:
    // 0x4b19b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b19b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b19bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B19BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19BCu;
        // 0x4b19c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B19BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B19C4u;
    // 0x4b19c4: 0x0  nop
    ctx->pc = 0x4b19c4u;
    // NOP
    // 0x4b19c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b19cc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x4b19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4b19d0: 0xac820658  sw          $v0, 0x658($a0)
    ctx->pc = 0x4b19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1624), GPR_U32(ctx, 2));
    // 0x4b19d4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x4b19d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4b19d8: 0xa483065c  sh          $v1, 0x65C($a0)
    ctx->pc = 0x4b19d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1628), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b19dc: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x4b19dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x4b19e0: 0xa482065e  sh          $v0, 0x65E($a0)
    ctx->pc = 0x4b19e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1630), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b19e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4b19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4b19e8: 0xac830668  sw          $v1, 0x668($a0)
    ctx->pc = 0x4b19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1640), GPR_U32(ctx, 3));
    // 0x4b19ec: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4b19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4b19f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B19F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B19F0u;
        // 0x4b19f4: 0xac82066c  sw          $v0, 0x66C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B19F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B19F8u;
    // 0x4b19f8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x4b19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4b19fc: 0x8c820658  lw          $v0, 0x658($a0)
    ctx->pc = 0x4b19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1624)));
    // 0x4b1a00: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b1a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b1a04: 0x9483065c  lhu         $v1, 0x65C($a0)
    ctx->pc = 0x4b1a04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x4b1a08: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x4b1a08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b1a0c: 0x9482065e  lhu         $v0, 0x65E($a0)
    ctx->pc = 0x4b1a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1630)));
    // 0x4b1a10: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x4b1a10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1a14: 0x8c830668  lw          $v1, 0x668($a0)
    ctx->pc = 0x4b1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1640)));
    // 0x4b1a18: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4b1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4b1a1c: 0x8c82066c  lw          $v0, 0x66C($a0)
    ctx->pc = 0x4b1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1644)));
    // 0x4b1a20: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A20u;
        // 0x4b1a24: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1A28u;
    // 0x4b1a28: 0xc78081a4  lwc1        $f0, -0x7E5C($gp)
    ctx->pc = 0x4b1a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1a2c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x4b1a2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4b1a30: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b1a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b1a34: 0xe48006a0  swc1        $f0, 0x6A0($a0)
    ctx->pc = 0x4b1a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x4b1a38: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1A40u;
    // 0x4b1a40: 0xc48106a0  lwc1        $f1, 0x6A0($a0)
    ctx->pc = 0x4b1a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b1a44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4b1a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4b1a48: 0xc78081a4  lwc1        $f0, -0x7E5C($gp)
    ctx->pc = 0x4b1a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1a4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4b1a4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4b1a50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1A58u;
    // 0x4b1a58: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A58u;
        // 0x4b1a5c: 0xac851418  sw          $a1, 0x1418($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1A60u;
    // 0x4b1a60: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1A60u;
        // 0x4b1a64: 0x8c821418  lw          $v0, 0x1418($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1A68u;
    // 0x4b1a68: 0x688213ef  ldl         $v0, 0x13EF($a0)
    ctx->pc = 0x4b1a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b1a6c: 0x6c8213e8  ldr         $v0, 0x13E8($a0)
    ctx->pc = 0x4b1a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b1a70: 0x688313f7  ldl         $v1, 0x13F7($a0)
    ctx->pc = 0x4b1a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b1a74: 0x6c8313f0  ldr         $v1, 0x13F0($a0)
    ctx->pc = 0x4b1a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b1a78: 0x688613ff  ldl         $a2, 0x13FF($a0)
    ctx->pc = 0x4b1a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4b1a7c: 0x6c8613f8  ldr         $a2, 0x13F8($a0)
    ctx->pc = 0x4b1a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4b1a80: 0x68871407  ldl         $a3, 0x1407($a0)
    ctx->pc = 0x4b1a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4b1a84: 0x6c871400  ldr         $a3, 0x1400($a0)
    ctx->pc = 0x4b1a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4b1a88: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4b1a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1a8c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4b1a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1a90: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x4b1a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1a94: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x4b1a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1a98: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x4b1a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1a9c: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x4b1a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1aa0: 0xb0a7001f  sdl         $a3, 0x1F($a1)
    ctx->pc = 0x4b1aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1aa4: 0xb4a70018  sdr         $a3, 0x18($a1)
    ctx->pc = 0x4b1aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1aa8: 0x6882140f  ldl         $v0, 0x140F($a0)
    ctx->pc = 0x4b1aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b1aac: 0x6c821408  ldr         $v0, 0x1408($a0)
    ctx->pc = 0x4b1aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b1ab0: 0x68831417  ldl         $v1, 0x1417($a0)
    ctx->pc = 0x4b1ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b1ab4: 0x6c831410  ldr         $v1, 0x1410($a0)
    ctx->pc = 0x4b1ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b1ab8: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x4b1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1abc: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x4b1abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1ac0: 0xb0a3002f  sdl         $v1, 0x2F($a1)
    ctx->pc = 0x4b1ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1ac4: 0xb4a30028  sdr         $v1, 0x28($a1)
    ctx->pc = 0x4b1ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b1ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1AD0u;
    // 0x4b1ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AD0u;
        // 0x4b1ad4: 0xac8506a4  sw          $a1, 0x6A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1700), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1AD8u;
    // 0x4b1ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AD8u;
        // 0x4b1adc: 0x8c8206a4  lw          $v0, 0x6A4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1700)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1AE0u;
}
