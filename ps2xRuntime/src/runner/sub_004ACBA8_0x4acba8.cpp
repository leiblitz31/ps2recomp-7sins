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

// Function: sub_004ACBA8
// Address: 0x4acba8 - 0x4ad160
void sub_004ACBA8_0x4acba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACBA8_0x4acba8");
#endif

    switch (ctx->pc) {
        case 0x4acc38u: goto label_4acc38;
        case 0x4accb8u: goto label_4accb8;
        case 0x4acd28u: goto label_4acd28;
        case 0x4acd80u: goto label_4acd80;
        case 0x4acdd8u: goto label_4acdd8;
        case 0x4ace30u: goto label_4ace30;
        case 0x4ace7cu: goto label_4ace7c;
        case 0x4ace94u: goto label_4ace94;
        case 0x4acef0u: goto label_4acef0;
        case 0x4acf44u: goto label_4acf44;
        case 0x4acfccu: goto label_4acfcc;
        case 0x4ad078u: goto label_4ad078;
        case 0x4ad0d0u: goto label_4ad0d0;
        case 0x4ad138u: goto label_4ad138;
        default: break;
    }

    ctx->pc = 0x4acba8u;

    // 0x4acba8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4acba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4acbac: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACBACu;
        // 0x4acbb0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACBB4u;
    // 0x4acbb4: 0x0  nop
    ctx->pc = 0x4acbb4u;
    // NOP
    // 0x4acbb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbbc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4acbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACBC0u;
        // 0x4acbc4: 0xe4400090  swc1        $f0, 0x90($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACBC8u;
    // 0x4acbc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbcc: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x4acbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACBD0u;
        // 0x4acbd4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACBD8u;
    // 0x4acbd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbdc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4acbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACBE0u;
        // 0x4acbe4: 0xe4400094  swc1        $f0, 0x94($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACBE8u;
    // 0x4acbe8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbec: 0xc4400094  lwc1        $f0, 0x94($v0)
    ctx->pc = 0x4acbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACBF0u;
        // 0x4acbf4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACBF8u;
    // 0x4acbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acbfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acc00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acc04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acc08: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x4acc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4acc0c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x4acc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4acc10: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4acc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4acc14: 0xb2020077  sdl         $v0, 0x77($s0)
    ctx->pc = 0x4acc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acc18: 0xb6020070  sdr         $v0, 0x70($s0)
    ctx->pc = 0x4acc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acc1c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x4acc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x4acc20: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4acc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4acc24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACC24u;
    {
        const bool branch_taken_0x4acc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC24u;
        // 0x4acc28: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acc24) {
            ctx->pc = 0x4ACC38u;
            goto label_4acc38;
        }
    }
    ctx->pc = 0x4ACC2Cu;
    // 0x4acc2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4acc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acc30: 0xc1262e8  jal         func_498BA0
    ctx->pc = 0x4ACC30u;
    SET_GPR_U32(ctx, 31, 0x4ACC38u);
    ctx->pc = 0x4ACC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACC30u;
    // 0x4acc34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498BA0u, 0x4ACC30u, 0x4ACC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACC38u;
label_4acc38:
    // 0x4acc38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acc3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acc40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4acc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acc44: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC44u;
        // 0x4acc48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACC4Cu;
    // 0x4acc4c: 0x0  nop
    ctx->pc = 0x4acc4cu;
    // NOP
    // 0x4acc50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acc50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acc54: 0x68430077  ldl         $v1, 0x77($v0)
    ctx->pc = 0x4acc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4acc58: 0x6c430070  ldr         $v1, 0x70($v0)
    ctx->pc = 0x4acc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4acc5c: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x4acc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x4acc60: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4acc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acc64: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4acc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acc68: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4acc68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4acc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACC74u;
    // 0x4acc74: 0x0  nop
    ctx->pc = 0x4acc74u;
    // NOP
    // 0x4acc78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acc7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acc80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acc84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acc88: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x4acc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4acc8c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x4acc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4acc90: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4acc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4acc94: 0xb2020083  sdl         $v0, 0x83($s0)
    ctx->pc = 0x4acc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acc98: 0xb602007c  sdr         $v0, 0x7C($s0)
    ctx->pc = 0x4acc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acc9c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x4acc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x4acca0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4acca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4acca4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACCA4u;
    {
        const bool branch_taken_0x4acca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACCA4u;
        // 0x4acca8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acca4) {
            ctx->pc = 0x4ACCB8u;
            goto label_4accb8;
        }
    }
    ctx->pc = 0x4ACCACu;
    // 0x4accac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4accacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4accb0: 0xc1262e8  jal         func_498BA0
    ctx->pc = 0x4ACCB0u;
    SET_GPR_U32(ctx, 31, 0x4ACCB8u);
    ctx->pc = 0x4ACCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACCB0u;
    // 0x4accb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498BA0u, 0x4ACCB0u, 0x4ACCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACCB8u;
label_4accb8:
    // 0x4accb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4accb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4accbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4accbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4accc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4accc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4accc4: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACCC4u;
        // 0x4accc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACCCCu;
    // 0x4acccc: 0x0  nop
    ctx->pc = 0x4accccu;
    // NOP
    // 0x4accd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4accd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4accd4: 0x68430083  ldl         $v1, 0x83($v0)
    ctx->pc = 0x4accd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4accd8: 0x6c43007c  ldr         $v1, 0x7C($v0)
    ctx->pc = 0x4accd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4accdc: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x4accdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x4acce0: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4acce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acce4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4acce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4acce8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4acce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4accec: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACCF4u;
    // 0x4accf4: 0x0  nop
    ctx->pc = 0x4accf4u;
    // NOP
    // 0x4accf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4accf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4accfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4accfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acd04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acd08: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4acd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acd0c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4acd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4acd10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACD10u;
    {
        const bool branch_taken_0x4acd10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD10u;
        // 0x4acd14: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acd10) {
            ctx->pc = 0x4ACD28u;
            goto label_4acd28;
        }
    }
    ctx->pc = 0x4ACD18u;
    // 0x4acd18: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x4acd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4acd1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4acd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4acd20: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4ACD20u;
    SET_GPR_U32(ctx, 31, 0x4ACD28u);
    ctx->pc = 0x4ACD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACD20u;
    // 0x4acd24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4ACD20u, 0x4ACD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACD28u;
label_4acd28:
    // 0x4acd28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acd2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acd30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4acd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acd34: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD34u;
        // 0x4acd38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACD3Cu;
    // 0x4acd3c: 0x0  nop
    ctx->pc = 0x4acd3cu;
    // NOP
    // 0x4acd40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acd44: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x4acd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acd48: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD48u;
        // 0x4acd4c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACD50u;
    // 0x4acd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acd54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acd5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acd60: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4acd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acd64: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4acd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4acd68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACD68u;
    {
        const bool branch_taken_0x4acd68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD68u;
        // 0x4acd6c: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acd68) {
            ctx->pc = 0x4ACD80u;
            goto label_4acd80;
        }
    }
    ctx->pc = 0x4ACD70u;
    // 0x4acd70: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x4acd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4acd74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4acd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4acd78: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4ACD78u;
    SET_GPR_U32(ctx, 31, 0x4ACD80u);
    ctx->pc = 0x4ACD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACD78u;
    // 0x4acd7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4ACD78u, 0x4ACD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACD80u;
label_4acd80:
    // 0x4acd80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acd84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acd88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4acd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD8Cu;
        // 0x4acd90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACD94u;
    // 0x4acd94: 0x0  nop
    ctx->pc = 0x4acd94u;
    // NOP
    // 0x4acd98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acd9c: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x4acd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acda0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDA0u;
        // 0x4acda4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACDA8u;
    // 0x4acda8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acdac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acdb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acdb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acdb8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4acdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acdbc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4acdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4acdc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACDC0u;
    {
        const bool branch_taken_0x4acdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDC0u;
        // 0x4acdc4: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acdc0) {
            ctx->pc = 0x4ACDD8u;
            goto label_4acdd8;
        }
    }
    ctx->pc = 0x4ACDC8u;
    // 0x4acdc8: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x4acdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4acdcc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4acdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4acdd0: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4ACDD0u;
    SET_GPR_U32(ctx, 31, 0x4ACDD8u);
    ctx->pc = 0x4ACDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACDD0u;
    // 0x4acdd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4ACDD0u, 0x4ACDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACDD8u;
label_4acdd8:
    // 0x4acdd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acdd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acde0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4acde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acde4: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDE4u;
        // 0x4acde8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACDECu;
    // 0x4acdec: 0x0  nop
    ctx->pc = 0x4acdecu;
    // NOP
    // 0x4acdf0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acdf4: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x4acdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4acdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDF8u;
        // 0x4acdfc: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACE00u;
    // 0x4ace00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ace00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ace04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ace04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ace08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ace08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ace0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ace0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ace10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4ace10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ace14: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4ace14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4ace18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACE18u;
    {
        const bool branch_taken_0x4ace18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE18u;
        // 0x4ace1c: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace18) {
            ctx->pc = 0x4ACE30u;
            goto label_4ace30;
        }
    }
    ctx->pc = 0x4ACE20u;
    // 0x4ace20: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x4ace20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ace24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4ace24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4ace28: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4ACE28u;
    SET_GPR_U32(ctx, 31, 0x4ACE30u);
    ctx->pc = 0x4ACE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACE28u;
    // 0x4ace2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4ACE28u, 0x4ACE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACE30u;
label_4ace30:
    // 0x4ace30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ace30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ace34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ace34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ace38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ace38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ace3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE3Cu;
        // 0x4ace40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACE44u;
    // 0x4ace44: 0x0  nop
    ctx->pc = 0x4ace44u;
    // NOP
    // 0x4ace48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ace48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ace4c: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x4ace4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ace50: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE50u;
        // 0x4ace54: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACE58u;
    // 0x4ace58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ace58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ace5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ace5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ace60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ace60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ace64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ace64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ace68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ACE68u;
    {
        const bool branch_taken_0x4ace68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE68u;
        // 0x4ace6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace68) {
            ctx->pc = 0x4ACE88u;
            goto label_4ace88;
        }
    }
    ctx->pc = 0x4ACE70u;
    // 0x4ace70: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ace70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ace74: 0xc12a7f0  jal         func_4A9FC0
    ctx->pc = 0x4ACE74u;
    SET_GPR_U32(ctx, 31, 0x4ACE7Cu);
    ctx->pc = 0x4ACE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACE74u;
    // 0x4ace78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FC0u, 0x4ACE74u, 0x4ACE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACE7Cu;
label_4ace7c:
    // 0x4ace7c: 0x8f82b88c  lw          $v0, -0x4774($gp)
    ctx->pc = 0x4ace7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949004)));
    // 0x4ace80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACE80u;
    {
        const bool branch_taken_0x4ace80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE80u;
        // 0x4ace84: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace80) {
            ctx->pc = 0x4ACE94u;
            goto label_4ace94;
        }
    }
    ctx->pc = 0x4ACE88u;
label_4ace88:
    // 0x4ace88: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ace88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ace8c: 0xc12a7f0  jal         func_4A9FC0
    ctx->pc = 0x4ACE8Cu;
    SET_GPR_U32(ctx, 31, 0x4ACE94u);
    ctx->pc = 0x4ACE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACE8Cu;
    // 0x4ace90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FC0u, 0x4ACE8Cu, 0x4ACE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACE94u;
label_4ace94:
    // 0x4ace94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ace94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ace98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ace98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ace9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ace9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acea0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEA0u;
        // 0x4acea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACEA8u;
    // 0x4acea8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aceac: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x4aceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x4aceb0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4aceb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4aceb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4aceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4aceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEB8u;
        // 0x4acebc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACEC0u;
    // 0x4acec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aceccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aced0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4aced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aced4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4aced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4aced8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACED8u;
    {
        const bool branch_taken_0x4aced8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACED8u;
        // 0x4acedc: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aced8) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACEE0u;
    // 0x4acee0: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4acee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4acee4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4acee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4acee8: 0xc12637e  jal         func_498DF8
    ctx->pc = 0x4ACEE8u;
    SET_GPR_U32(ctx, 31, 0x4ACEF0u);
    ctx->pc = 0x4ACEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACEE8u;
    // 0x4aceec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DF8u, 0x4ACEE8u, 0x4ACEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACEF0u;
label_4acef0:
    // 0x4acef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acef8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4acef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acefc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEFCu;
        // 0x4acf00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACF04u;
    // 0x4acf04: 0x0  nop
    ctx->pc = 0x4acf04u;
    // NOP
    // 0x4acf08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4acf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4acf0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4acf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4acf10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4acf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4acf14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acf14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acf1c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4acf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4acf20: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4ACF20u;
    {
        const bool branch_taken_0x4acf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF20u;
        // 0x4acf24: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf20) {
            ctx->pc = 0x4ACF50u;
            goto label_4acf50;
        }
    }
    ctx->pc = 0x4ACF28u;
    // 0x4acf28: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x4acf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4acf2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4acf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4acf30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ACF30u;
    {
        const bool branch_taken_0x4acf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF30u;
        // 0x4acf34: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf30) {
            ctx->pc = 0x4ACF50u;
            goto label_4acf50;
        }
    }
    ctx->pc = 0x4ACF38u;
    // 0x4acf38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4acf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4acf3c: 0xc126482  jal         func_499208
    ctx->pc = 0x4ACF3Cu;
    SET_GPR_U32(ctx, 31, 0x4ACF44u);
    ctx->pc = 0x4ACF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACF3Cu;
    // 0x4acf40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x4ACF3Cu, 0x4ACF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACF44u;
label_4acf44:
    // 0x4acf44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4ACF44u;
    {
        const bool branch_taken_0x4acf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF44u;
        // 0x4acf48: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf44) {
            ctx->pc = 0x4ACF54u;
            goto label_4acf54;
        }
    }
    ctx->pc = 0x4ACF4Cu;
    // 0x4acf4c: 0x0  nop
    ctx->pc = 0x4acf4cu;
    // NOP
label_4acf50:
    // 0x4acf50: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x4acf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4acf54:
    // 0x4acf54: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x4acf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x4acf58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acf58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acf5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4acf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4acf60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4acf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4acf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF6Cu;
        // 0x4acf70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACF74u;
    // 0x4acf74: 0x0  nop
    ctx->pc = 0x4acf74u;
    // NOP
    // 0x4acf78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acf7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acf80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acf84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4acf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4acf88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACF88u;
    {
        const bool branch_taken_0x4acf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF88u;
        // 0x4acf8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf88) {
            ctx->pc = 0x4ACFA0u;
            goto label_4acfa0;
        }
    }
    ctx->pc = 0x4ACF90u;
    // 0x4acf90: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x4acf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4acf94: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4acf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4acf98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4ACF98u;
    {
        const bool branch_taken_0x4acf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF98u;
        // 0x4acf9c: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf98) {
            ctx->pc = 0x4ACFB4u;
            goto label_4acfb4;
        }
    }
    ctx->pc = 0x4ACFA0u;
label_4acfa0:
    // 0x4acfa0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x4acfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4acfa4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4acfa8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x4acfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x4acfac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4acfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acfb0: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x4acfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_4acfb4:
    // 0x4acfb4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4acfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4acfb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACFB8u;
    {
        const bool branch_taken_0x4acfb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFB8u;
        // 0x4acfbc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acfb8) {
            ctx->pc = 0x4ACFCCu;
            goto label_4acfcc;
        }
    }
    ctx->pc = 0x4ACFC0u;
    // 0x4acfc0: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4acfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4acfc4: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4ACFC4u;
    SET_GPR_U32(ctx, 31, 0x4ACFCCu);
    ctx->pc = 0x4ACFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACFC4u;
    // 0x4acfc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4ACFC4u, 0x4ACFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACFCCu;
label_4acfcc:
    // 0x4acfcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acfd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acfd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4acfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFD8u;
        // 0x4acfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACFE0u;
    // 0x4acfe0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4acfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acfe4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x4acfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x4acfe8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4acfe8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4acfec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4acfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4acff0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFF0u;
        // 0x4acff4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACFF8u;
    // 0x4acff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ad000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad008: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x4ad008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4ad00c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AD00Cu;
    {
        const bool branch_taken_0x4ad00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad00c) {
            ctx->pc = 0x4AD010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD00Cu;
            // 0x4ad010: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD018u;
            goto label_4ad018;
        }
    }
    ctx->pc = 0x4AD014u;
    // 0x4ad014: 0x0  nop
    ctx->pc = 0x4ad014u;
    // NOP
label_4ad018:
    // 0x4ad018: 0x50c00012  beql        $a2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AD018u;
    {
        const bool branch_taken_0x4ad018 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad018) {
            ctx->pc = 0x4AD01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD018u;
            // 0x4ad01c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD064u;
            goto label_4ad064;
        }
    }
    ctx->pc = 0x4AD020u;
    // 0x4ad020: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x4ad020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x4ad024: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4AD024u;
    {
        const bool branch_taken_0x4ad024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD024u;
        // 0x4ad028: 0xae060068  sw          $a2, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad024) {
            ctx->pc = 0x4AD060u;
            goto label_4ad060;
        }
    }
    ctx->pc = 0x4AD02Cu;
    // 0x4ad02c: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x4ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x4ad030: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD030u;
    {
        const bool branch_taken_0x4ad030 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD030u;
        // 0x4ad034: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad030) {
            ctx->pc = 0x4AD048u;
            goto label_4ad048;
        }
    }
    ctx->pc = 0x4AD038u;
    // 0x4ad038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ad038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad03c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ad03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4ad040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD040u;
    {
        const bool branch_taken_0x4ad040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD040u;
        // 0x4ad044: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad040) {
            ctx->pc = 0x4AD060u;
            goto label_4ad060;
        }
    }
    ctx->pc = 0x4AD048u;
label_4ad048:
    // 0x4ad048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ad048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ad04c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ad04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ad050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ad050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ad054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ad054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4ad058: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4ad058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4ad05c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x4ad05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_4ad060:
    // 0x4ad060: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4ad060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_4ad064:
    // 0x4ad064: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD064u;
    {
        const bool branch_taken_0x4ad064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD064u;
        // 0x4ad068: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad064) {
            ctx->pc = 0x4AD078u;
            goto label_4ad078;
        }
    }
    ctx->pc = 0x4AD06Cu;
    // 0x4ad06c: 0x8e070068  lw          $a3, 0x68($s0)
    ctx->pc = 0x4ad06cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4ad070: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4AD070u;
    SET_GPR_U32(ctx, 31, 0x4AD078u);
    ctx->pc = 0x4AD074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD070u;
    // 0x4ad074: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4AD070u, 0x4AD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD078u;
label_4ad078:
    // 0x4ad078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad080: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ad080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad084: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD084u;
        // 0x4ad088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD08Cu;
    // 0x4ad08c: 0x0  nop
    ctx->pc = 0x4ad08cu;
    // NOP
    // 0x4ad090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ad090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad094: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x4ad094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x4ad098: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD098u;
        // 0x4ad09c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD0A0u;
    // 0x4ad0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad0a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ad0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ad0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad0b0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4ad0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad0b4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4ad0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4ad0b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD0B8u;
    {
        const bool branch_taken_0x4ad0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0B8u;
        // 0x4ad0bc: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad0b8) {
            ctx->pc = 0x4AD0D0u;
            goto label_4ad0d0;
        }
    }
    ctx->pc = 0x4AD0C0u;
    // 0x4ad0c0: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x4ad0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ad0c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4ad0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4ad0c8: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4AD0C8u;
    SET_GPR_U32(ctx, 31, 0x4AD0D0u);
    ctx->pc = 0x4AD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD0C8u;
    // 0x4ad0cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4AD0C8u, 0x4AD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD0D0u;
label_4ad0d0:
    // 0x4ad0d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad0d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ad0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0DCu;
        // 0x4ad0e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD0E4u;
    // 0x4ad0e4: 0x0  nop
    ctx->pc = 0x4ad0e4u;
    // NOP
    // 0x4ad0e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ad0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad0ec: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x4ad0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0F0u;
        // 0x4ad0f4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD0F8u;
    // 0x4ad0f8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4ad0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4ad0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0FCu;
        // 0x4ad100: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD104u;
    // 0x4ad104: 0x0  nop
    ctx->pc = 0x4ad104u;
    // NOP
    // 0x4ad108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad10c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ad10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ad110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad118: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4ad118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad11c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4ad11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4ad120: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD120u;
    {
        const bool branch_taken_0x4ad120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD120u;
        // 0x4ad124: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad120) {
            ctx->pc = 0x4AD138u;
            goto label_4ad138;
        }
    }
    ctx->pc = 0x4AD128u;
    // 0x4ad128: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x4ad128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ad12c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4ad12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4ad130: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x4AD130u;
    SET_GPR_U32(ctx, 31, 0x4AD138u);
    ctx->pc = 0x4AD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD130u;
    // 0x4ad134: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x4AD130u, 0x4AD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD138u;
label_4ad138:
    // 0x4ad138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ad140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad144: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD144u;
        // 0x4ad148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD14Cu;
    // 0x4ad14c: 0x0  nop
    ctx->pc = 0x4ad14cu;
    // NOP
    // 0x4ad150: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ad150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad154: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x4ad154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ad158: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD158u;
        // 0x4ad15c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD160u;
}
