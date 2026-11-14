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

// Function: sub_003CDA28
// Address: 0x3cda28 - 0x3cdb78
void sub_003CDA28_0x3cda28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDA28_0x3cda28");
#endif

    switch (ctx->pc) {
        case 0x3cda7cu: goto label_3cda7c;
        case 0x3cdafcu: goto label_3cdafc;
        case 0x3cdb28u: goto label_3cdb28;
        default: break;
    }

    ctx->pc = 0x3cda28u;

    // 0x3cda28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cda28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3cda2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3cda2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3cda30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3cda30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3cda34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cda34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda38: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3cda38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3cda3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3cda3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cda40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3cda44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3cda44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3cda48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cda48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cda4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3cda50: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3cda50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3cda54: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x3cda54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x3cda58: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cda58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cda5c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x3cda5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3cda60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cda60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cda64: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x3cda64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3cda68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cda68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3cda6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3cda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3cda70: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3cda70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cda74: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x3CDA74u;
    SET_GPR_U32(ctx, 31, 0x3CDA7Cu);
    ctx->pc = 0x3CDA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA74u;
    // 0x3cda78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CDA74u, 0x3CDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA7Cu;
label_3cda7c:
    // 0x3cda7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3cda7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3cda80: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3CDA80u;
    {
        const bool branch_taken_0x3cda80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA80u;
        // 0x3cda84: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cda80) {
            ctx->pc = 0x3CDB58u;
            goto label_3cdb58;
        }
    }
    ctx->pc = 0x3CDA88u;
    // 0x3cda88: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3cda88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cda8c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cda8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cda90: 0x0  nop
    ctx->pc = 0x3cda90u;
    // NOP
    // 0x3cda94: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x3CDA94u;
    {
        const bool branch_taken_0x3cda94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA94u;
        // 0x3cda98: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cda94) {
            ctx->pc = 0x3CDB54u;
            goto label_3cdb54;
        }
    }
    ctx->pc = 0x3CDA9Cu;
    // 0x3cda9c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x3cda9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3cdaa0: 0x2450b298  addiu       $s0, $v0, -0x4D68
    ctx->pc = 0x3cdaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x3cdaa4: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x3cdaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3cdaa8: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x3cdaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3cdaac: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x3cdaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3cdab0: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x3cdab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3cdab4: 0x6a450017  ldl         $a1, 0x17($s2)
    ctx->pc = 0x3cdab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3cdab8: 0x6e450010  ldr         $a1, 0x10($s2)
    ctx->pc = 0x3cdab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3cdabc: 0x6a46001f  ldl         $a2, 0x1F($s2)
    ctx->pc = 0x3cdabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3cdac0: 0x6e460018  ldr         $a2, 0x18($s2)
    ctx->pc = 0x3cdac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3cdac4: 0xb20200cb  sdl         $v0, 0xCB($s0)
    ctx->pc = 0x3cdac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 203); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdac8: 0xb60200c4  sdr         $v0, 0xC4($s0)
    ctx->pc = 0x3cdac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 196); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdacc: 0xb20300d3  sdl         $v1, 0xD3($s0)
    ctx->pc = 0x3cdaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdad0: 0xb60300cc  sdr         $v1, 0xCC($s0)
    ctx->pc = 0x3cdad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdad4: 0xb20500db  sdl         $a1, 0xDB($s0)
    ctx->pc = 0x3cdad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdad8: 0xb60500d4  sdr         $a1, 0xD4($s0)
    ctx->pc = 0x3cdad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdadc: 0xb20600e3  sdl         $a2, 0xE3($s0)
    ctx->pc = 0x3cdadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdae0: 0xb60600dc  sdr         $a2, 0xDC($s0)
    ctx->pc = 0x3cdae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdae4: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x3cdae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3cdae8: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x3cdae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3cdaec: 0xb20200eb  sdl         $v0, 0xEB($s0)
    ctx->pc = 0x3cdaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdaf0: 0xb60200e4  sdr         $v0, 0xE4($s0)
    ctx->pc = 0x3cdaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cdaf4: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x3CDAF4u;
    SET_GPR_U32(ctx, 31, 0x3CDAFCu);
    ctx->pc = 0x3CDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDAF4u;
    // 0x3cdaf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CDAF4u, 0x3CDAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDAFCu;
label_3cdafc:
    // 0x3cdafc: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3cdafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3cdb00: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3cdb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3cdb04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cdb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cdb08: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x3cdb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x3cdb0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3cdb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3cdb10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CDB10u;
    {
        const bool branch_taken_0x3cdb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB10u;
        // 0x3cdb14: 0xae0400ec  sw          $a0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb10) {
            ctx->pc = 0x3CDB20u;
            goto label_3cdb20;
        }
    }
    ctx->pc = 0x3CDB18u;
    // 0x3cdb18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3CDB18u;
    {
        const bool branch_taken_0x3cdb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB18u;
        // 0x3cdb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb18) {
            ctx->pc = 0x3CDB58u;
            goto label_3cdb58;
        }
    }
    ctx->pc = 0x3CDB20u;
label_3cdb20:
    // 0x3cdb20: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x3CDB20u;
    SET_GPR_U32(ctx, 31, 0x3CDB28u);
    ctx->pc = 0x3CDB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDB20u;
    // 0x3cdb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CDB20u, 0x3CDB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB28u;
label_3cdb28:
    // 0x3cdb28: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3cdb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3cdb2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CDB2Cu;
    {
        const bool branch_taken_0x3cdb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdb2c) {
            ctx->pc = 0x3CDB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDB2Cu;
            // 0x3cdb30: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDB44u;
            goto label_3cdb44;
        }
    }
    ctx->pc = 0x3CDB34u;
    // 0x3cdb34: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x3cdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3cdb38: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3cdb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3cdb3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CDB3Cu;
    {
        const bool branch_taken_0x3cdb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB3Cu;
        // 0x3cdb40: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb3c) {
            ctx->pc = 0x3CDB54u;
            goto label_3cdb54;
        }
    }
    ctx->pc = 0x3CDB44u;
label_3cdb44:
    // 0x3cdb44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3cdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3cdb48: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3cdb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x3cdb4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3cdb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3cdb50: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x3cdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_3cdb54:
    // 0x3cdb54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3cdb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cdb58:
    // 0x3cdb58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3cdb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cdb5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cdb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cdb60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3cdb60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cdb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cdb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cdb68: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3cdb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cdb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CDB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB6Cu;
        // 0x3cdb70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDB74u;
    // 0x3cdb74: 0x0  nop
    ctx->pc = 0x3cdb74u;
    // NOP
    ctx->pc = 0x3cdb78u;
}
