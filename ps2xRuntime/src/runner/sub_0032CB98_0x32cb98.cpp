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

// Function: sub_0032CB98
// Address: 0x32cb98 - 0x32d630
void sub_0032CB98_0x32cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CB98_0x32cb98");
#endif

    switch (ctx->pc) {
        case 0x32cbc0u: goto label_32cbc0;
        case 0x32cc50u: goto label_32cc50;
        case 0x32ccccu: goto label_32cccc;
        case 0x32cd30u: goto label_32cd30;
        case 0x32ce18u: goto label_32ce18;
        case 0x32d2c0u: goto label_32d2c0;
        case 0x32d308u: goto label_32d308;
        case 0x32d3d4u: goto label_32d3d4;
        default: break;
    }

    ctx->pc = 0x32cb98u;

    // 0x32cb98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32cb9c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32cb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32cba0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32cba4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32cba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cba8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32cba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32cbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x32cbb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32cbb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x32cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32cbb8: 0xc10a322  jal         func_428C88
    ctx->pc = 0x32CBB8u;
    SET_GPR_U32(ctx, 31, 0x32CBC0u);
    ctx->pc = 0x32CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CBB8u;
    // 0x32cbbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32CBB8u, 0x32CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBC0u;
label_32cbc0:
    // 0x32cbc0: 0x8f90be20  lw          $s0, -0x41E0($gp)
    ctx->pc = 0x32cbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32cbc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32cbc8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x32cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x32cbcc: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x32cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x32cbd0: 0x344203e3  ori         $v0, $v0, 0x3E3
    ctx->pc = 0x32cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)995);
    // 0x32cbd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32cbd8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x32cbdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32cbe0: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x32cbe4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32cbe4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x32cbe8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x32cbec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32cbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32cbf0: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x32cbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x32cbf4: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x32cbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x32cbf8: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x32cbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x32cbfc: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x32cbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x32cc00: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x32cc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc04: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x32cc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc08: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x32cc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc0c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x32cc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc10: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32cc10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cc14: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x32cc18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32cc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32cc1c: 0x6a22001f  ldl         $v0, 0x1F($s1)
    ctx->pc = 0x32cc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x32cc20: 0x6e220018  ldr         $v0, 0x18($s1)
    ctx->pc = 0x32cc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x32cc24: 0x6a230027  ldl         $v1, 0x27($s1)
    ctx->pc = 0x32cc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x32cc28: 0x6e230020  ldr         $v1, 0x20($s1)
    ctx->pc = 0x32cc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x32cc2c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x32cc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc30: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x32cc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc34: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x32cc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc38: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x32cc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32cc3c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32cc3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cc40: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x32cc44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32cc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32cc48: 0xc106784  jal         func_419E10
    ctx->pc = 0x32CC48u;
    SET_GPR_U32(ctx, 31, 0x32CC50u);
    ctx->pc = 0x32CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC48u;
    // 0x32cc4c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32CC48u, 0x32CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC50u;
label_32cc50:
    // 0x32cc50: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x32cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32cc54: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x32cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32cc58: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x32cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x32cc5c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x32cc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32cc60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x32cc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cc64: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x32cc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32cc68: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x32cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32cc6c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x32cc6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x32cc70: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x32cc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32cc74: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32cc74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cc78: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x32cc7c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32cc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32cc80: 0xaf90be20  sw          $s0, -0x41E0($gp)
    ctx->pc = 0x32cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 16));
    // 0x32cc84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cc88: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32cc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32cc8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32cc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32cc90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32cc90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32cc94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cc98: 0x3e00008  jr          $ra
    ctx->pc = 0x32CC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC98u;
        // 0x32cc9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CCA0u;
    // 0x32cca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32cca4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32cca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32cca8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32ccac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32ccacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ccb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32ccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32ccb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ccb8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x32ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x32ccbc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32CCBCu;
    {
        const bool branch_taken_0x32ccbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ccbc) {
            ctx->pc = 0x32CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CCBCu;
            // 0x32ccc0: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CCD0u;
            goto label_32ccd0;
        }
    }
    ctx->pc = 0x32CCC4u;
    // 0x32ccc4: 0xc110e98  jal         func_443A60
    ctx->pc = 0x32CCC4u;
    SET_GPR_U32(ctx, 31, 0x32CCCCu);
    ctx->pc = 0x32CCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCC4u;
    // 0x32ccc8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x32CCC4u, 0x32CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCCCu;
label_32cccc:
    // 0x32cccc: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x32ccccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_32ccd0:
    // 0x32ccd0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32CCD0u;
    {
        const bool branch_taken_0x32ccd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCD0u;
        // 0x32ccd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ccd0) {
            ctx->pc = 0x32CCDCu;
            goto label_32ccdc;
        }
    }
    ctx->pc = 0x32CCD8u;
    // 0x32ccd8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x32ccd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32ccdc:
    // 0x32ccdc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32CCDCu;
    {
        const bool branch_taken_0x32ccdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCDCu;
        // 0x32cce0: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ccdc) {
            ctx->pc = 0x32CD04u;
            goto label_32cd04;
        }
    }
    ctx->pc = 0x32CCE4u;
    // 0x32cce4: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x32cce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x32cce8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x32cce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x32ccec: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x32ccecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x32ccf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32ccf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x32ccf4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x32ccf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32ccf8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x32ccf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32ccfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cd00: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x32cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_32cd04:
    // 0x32cd04: 0x8f82bec0  lw          $v0, -0x4140($gp)
    ctx->pc = 0x32cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
    // 0x32cd08: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x32CD08u;
    {
        const bool branch_taken_0x32cd08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x32CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD08u;
        // 0x32cd0c: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd08) {
            ctx->pc = 0x32CDECu;
            goto label_32cdec;
        }
    }
    ctx->pc = 0x32CD10u;
    // 0x32cd10: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32CD10u;
    {
        const bool branch_taken_0x32cd10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD10u;
        // 0x32cd14: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd10) {
            ctx->pc = 0x32CD38u;
            goto label_32cd38;
        }
    }
    ctx->pc = 0x32CD18u;
    // 0x32cd18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32cd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32cd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32cd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cd28: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x32CD28u;
    SET_GPR_U32(ctx, 31, 0x32CD30u);
    ctx->pc = 0x32CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CD28u;
    // 0x32cd2c: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x32CD28u, 0x32CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD30u;
label_32cd30:
    // 0x32cd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CD30u;
    {
        const bool branch_taken_0x32cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD30u;
        // 0x32cd34: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd30) {
            ctx->pc = 0x32CD48u;
            goto label_32cd48;
        }
    }
    ctx->pc = 0x32CD38u;
label_32cd38:
    // 0x32cd38: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x32cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x32cd3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32cd40: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x32cd44: 0xaf90bec0  sw          $s0, -0x4140($gp)
    ctx->pc = 0x32cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
label_32cd48:
    // 0x32cd48: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x32CD48u;
    {
        const bool branch_taken_0x32cd48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD48u;
        // 0x32cd4c: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd48) {
            ctx->pc = 0x32CDE8u;
            goto label_32cde8;
        }
    }
    ctx->pc = 0x32CD50u;
    // 0x32cd50: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x32cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x32cd54: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x32cd54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x32cd58: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x32cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x32cd5c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x32cd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x32cd60: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x32cd60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x32cd64: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32CD64u;
    {
        const bool branch_taken_0x32cd64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32cd64) {
            ctx->pc = 0x32CD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CD64u;
            // 0x32cd68: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CDA0u;
            goto label_32cda0;
        }
    }
    ctx->pc = 0x32CD6Cu;
    // 0x32cd6c: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x32cd6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x32cd70: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32CD70u;
    {
        const bool branch_taken_0x32cd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32cd70) {
            ctx->pc = 0x32CD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CD70u;
            // 0x32cd74: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CDA0u;
            goto label_32cda0;
        }
    }
    ctx->pc = 0x32CD78u;
    // 0x32cd78: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x32cd78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x32cd7c: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32CD7Cu;
    {
        const bool branch_taken_0x32cd7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32cd7c) {
            ctx->pc = 0x32CD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CD7Cu;
            // 0x32cd80: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CDA0u;
            goto label_32cda0;
        }
    }
    ctx->pc = 0x32CD84u;
    // 0x32cd84: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x32cd84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x32cd88: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CD88u;
    {
        const bool branch_taken_0x32cd88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32cd88) {
            ctx->pc = 0x32CD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CD88u;
            // 0x32cd8c: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CDA0u;
            goto label_32cda0;
        }
    }
    ctx->pc = 0x32CD90u;
    // 0x32cd90: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x32cd90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x32cd94: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32CD94u;
    {
        const bool branch_taken_0x32cd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x32cd94) {
            ctx->pc = 0x32CD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CD94u;
            // 0x32cd98: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CDA0u;
            goto label_32cda0;
        }
    }
    ctx->pc = 0x32CD9Cu;
    // 0x32cd9c: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x32cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_32cda0:
    // 0x32cda0: 0x0  nop
    ctx->pc = 0x32cda0u;
    // NOP
    // 0x32cda4: 0xff82ae68  sd          $v0, -0x5198($gp)
    ctx->pc = 0x32cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 2));
    // 0x32cda8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32cdac: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x32cdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x32cdb0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x32cdb4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32CDB4u;
    {
        const bool branch_taken_0x32cdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDB4u;
        // 0x32cdb8: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cdb4) {
            ctx->pc = 0x32CDC8u;
            goto label_32cdc8;
        }
    }
    ctx->pc = 0x32CDBCu;
    // 0x32cdbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cdc0: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x32cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
    // 0x32cdc4: 0x0  nop
    ctx->pc = 0x32cdc4u;
    // NOP
label_32cdc8:
    // 0x32cdc8: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x32cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x32cdcc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x32cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x32cdd0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CDD0u;
    {
        const bool branch_taken_0x32cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDD0u;
        // 0x32cdd4: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cdd0) {
            ctx->pc = 0x32CDECu;
            goto label_32cdec;
        }
    }
    ctx->pc = 0x32CDD8u;
    // 0x32cdd8: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32cdd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x32cddc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32cde0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32cde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cde4: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x32cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_32cde8:
    // 0x32cde8: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x32cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_32cdec:
    // 0x32cdec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32CDECu;
    {
        const bool branch_taken_0x32cdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDECu;
        // 0x32cdf0: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cdec) {
            ctx->pc = 0x32CE00u;
            goto label_32ce00;
        }
    }
    ctx->pc = 0x32CDF4u;
    // 0x32cdf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cdf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32CDF8u;
    {
        const bool branch_taken_0x32cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDF8u;
        // 0x32cdfc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cdf8) {
            ctx->pc = 0x32CE08u;
            goto label_32ce08;
        }
    }
    ctx->pc = 0x32CE00u;
label_32ce00:
    // 0x32ce00: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32ce04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32ce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32ce08:
    // 0x32ce08: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x32ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
    // 0x32ce0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ce0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ce10: 0xc10a322  jal         func_428C88
    ctx->pc = 0x32CE10u;
    SET_GPR_U32(ctx, 31, 0x32CE18u);
    ctx->pc = 0x32CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE10u;
    // 0x32ce14: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32CE10u, 0x32CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE18u;
label_32ce18:
    // 0x32ce18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32ce1c: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x32ce1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x32ce20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ce20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ce24: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x32ce24u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x32ce28: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x32ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32ce2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x32ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x32ce30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x32ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x32ce34: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32ce38: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x32ce38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x32ce3c: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x32ce3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
    // 0x32ce40: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x32ce40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x32ce44: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x32ce44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x32ce48: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x32ce48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x32ce4c: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x32ce4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x32ce50: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x32ce50u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x32ce54: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x32ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x32ce58: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x32ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x32ce5c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32ce60: 0x92430047  lbu         $v1, 0x47($s2)
    ctx->pc = 0x32ce60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x32ce64: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x32ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x32ce68: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x32ce68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x32ce6c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x32ce6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32ce70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32ce74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CE74u;
    {
        const bool branch_taken_0x32ce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE74u;
        // 0x32ce78: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce74) {
            ctx->pc = 0x32CE90u;
            goto label_32ce90;
        }
    }
    ctx->pc = 0x32CE7Cu;
    // 0x32ce7c: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32ce7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x32ce80: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32ce84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CE84u;
    {
        const bool branch_taken_0x32ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE84u;
        // 0x32ce88: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce84) {
            ctx->pc = 0x32CE9Cu;
            goto label_32ce9c;
        }
    }
    ctx->pc = 0x32CE8Cu;
    // 0x32ce8c: 0x0  nop
    ctx->pc = 0x32ce8cu;
    // NOP
label_32ce90:
    // 0x32ce90: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32ce90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x32ce94: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x32ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x32ce98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32ce9c:
    // 0x32ce9c: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x32ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x32cea0: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x32cea0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x32cea4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x32cea8: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x32cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x32ceac: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x32ceacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x32ceb0: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x32ceb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x32ceb4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32ceb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x32ceb8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32ceb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x32cebc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x32cebcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x32cec0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x32cec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x32cec4: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x32cec4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x32cec8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32cecc: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x32ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x32ced0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x32ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x32ced4: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x32ced4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x32ced8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x32ced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x32cedc: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x32cedcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32cee0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x32cee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32cee4: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x32cee4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x32cee8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x32cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x32ceec: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x32ceecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32cef0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x32cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x32cef4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x32cef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x32cef8: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x32cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x32cefc: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x32cf00: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x32cf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x32cf04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32cf08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x32cf0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32cf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32cf10: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x32cf14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32cf14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf18: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32cf18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x32cf1c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x32cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x32cf20: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x32cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x32cf24: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x32cf28: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x32cf28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x32cf2c: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x32cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32cf30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32cf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x32cf34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32CF34u;
    {
        const bool branch_taken_0x32cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF34u;
        // 0x32cf38: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cf34) {
            ctx->pc = 0x32CF40u;
            goto label_32cf40;
        }
    }
    ctx->pc = 0x32CF3Cu;
    // 0x32cf3c: 0xc785823c  lwc1        $f5, -0x7DC4($gp)
    ctx->pc = 0x32cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32cf40:
    // 0x32cf40: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x32cf40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x32cf44: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x32cf44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x32cf48: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x32cf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32cf4c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x32cf4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x32cf50: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x32cf50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x32cf54: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x32cf54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32cf58: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x32cf58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32cf5c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x32cf5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32cf60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32cf60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32cf64: 0xc781823c  lwc1        $f1, -0x7DC4($gp)
    ctx->pc = 0x32cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32cf68: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32cf68u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32cf6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32cf6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32cf70: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x32cf70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32cf74: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x32cf74u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x32cf78: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32cf78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32cf7c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32cf7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32cf80: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32cf80u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x32cf84: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32cf84u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x32cf88: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x32cf88u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x32cf8c: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x32cf8cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x32cf90: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32cf90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32cf94: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x32cf94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32cf98: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32cf98u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x32cf9c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x32cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x32cfa0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x32cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x32cfa4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x32cfa8: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x32cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x32cfac: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x32cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x32cfb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32cfb4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x32cfb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32cfbc: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x32cfc0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x32cfc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x32cfc4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x32cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x32cfc8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x32cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x32cfcc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x32cfd0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x32cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x32cfd4: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x32cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32cfd8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x32cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32cfdc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x32cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32cfe0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x32cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32cfe4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x32cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cfe8: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x32cfe8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x32cfec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32cfecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32cff0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32cff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32cff4: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x32cff4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x32cff8: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x32cff8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x32cffc: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x32cffcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x32d000: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x32d000u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x32d004: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x32d004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32d008: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x32d008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32d00c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x32d00cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x32d010: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x32d010u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x32d014: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x32d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x32d018: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32d018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x32d01c: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x32d01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x32d020: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x32d020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x32d024: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x32d024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x32d028: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32d028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x32d02c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x32d02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x32d030: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x32d030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x32d034: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x32d034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x32d038: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x32d038u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x32d03c: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x32d03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x32d040: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x32d040u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x32d044: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x32d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x32d048: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d048u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d04c: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x32d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x32d050: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D050u;
    {
        const bool branch_taken_0x32d050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D050u;
        // 0x32d054: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d050) {
            ctx->pc = 0x32D060u;
            goto label_32d060;
        }
    }
    ctx->pc = 0x32D058u;
    // 0x32d058: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D058u;
    {
        const bool branch_taken_0x32d058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d058) {
            ctx->pc = 0x32D05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D058u;
            // 0x32d05c: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D078u;
            goto label_32d078;
        }
    }
    ctx->pc = 0x32D060u;
label_32d060:
    // 0x32d060: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x32d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x32d064: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32D064u;
    {
        const bool branch_taken_0x32d064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D064u;
        // 0x32d068: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d064) {
            ctx->pc = 0x32D0A0u;
            goto label_32d0a0;
        }
    }
    ctx->pc = 0x32D06Cu;
    // 0x32d06c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x32D06Cu;
    {
        const bool branch_taken_0x32d06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d06c) {
            ctx->pc = 0x32D070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D06Cu;
            // 0x32d070: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D0A8u;
            goto label_32d0a8;
        }
    }
    ctx->pc = 0x32D074u;
    // 0x32d074: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x32d074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_32d078:
    // 0x32d078: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32d07c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x32d080: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x32d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    // 0x32d084: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32d084u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD670u));
    // 0x32d088: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d088u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x32d08c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32d090: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32d090u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x32d094: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32d094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x32d098: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32D098u;
    {
        const bool branch_taken_0x32d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D098u;
        // 0x32d09c: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d098) {
            ctx->pc = 0x32D0C8u;
            goto label_32d0c8;
        }
    }
    ctx->pc = 0x32D0A0u;
label_32d0a0:
    // 0x32d0a0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x32d0a4: 0x0  nop
    ctx->pc = 0x32d0a4u;
    // NOP
label_32d0a8:
    // 0x32d0a8: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32d0ac: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x32d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x32d0b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32d0b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d0b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x32d0b8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32d0bc: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x32d0c0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x32d0c4: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x32d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_32d0c8:
    // 0x32d0c8: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x32d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32d0cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x32d0ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d0d0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x32d0d4: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x32d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x32d0d8: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x32d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x32d0dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32d0e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D0E0u;
    {
        const bool branch_taken_0x32d0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0E0u;
        // 0x32d0e4: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0e0) {
            ctx->pc = 0x32D0F0u;
            goto label_32d0f0;
        }
    }
    ctx->pc = 0x32D0E8u;
    // 0x32d0e8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32d0ec: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x32d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_32d0f0:
    // 0x32d0f0: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x32d0f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x32d0f4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32d0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x32d0f8: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x32d0f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x32d0fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x32d0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x32d100: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32d104: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x32d104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32d108: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x32d108u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x32d10c: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x32d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32d110: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x32d110u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x32d114: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32d118: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x32d118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x32d11c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x32d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x32d120: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x32D120u;
    {
        const bool branch_taken_0x32d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D120u;
        // 0x32d124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d120) {
            ctx->pc = 0x32D1A0u;
            goto label_32d1a0;
        }
    }
    ctx->pc = 0x32D128u;
    // 0x32d128: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32d128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x32d12c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32d12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x32d130: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32d134: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32d134u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32d138: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d138u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x32d13c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32d140: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d144: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32d144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32d148: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32d14c: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x32d14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x32d150: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32d154: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32d154u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32d158: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x32d158u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x32d15c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x32d160: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d164: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32d164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x32d168: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x32d16c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32d16cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32d170: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32d170u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x32d174: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x32d178: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d17c: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x32d17cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x32d180: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x32d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32d184: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32d184u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32d188: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32d188u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x32d18c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x32d190: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d194: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x32d194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x32d198: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32D198u;
    {
        const bool branch_taken_0x32d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D198u;
        // 0x32d19c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d198) {
            ctx->pc = 0x32D208u;
            goto label_32d208;
        }
    }
    ctx->pc = 0x32D1A0u;
label_32d1a0:
    // 0x32d1a0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x32d1a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32d1a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x32d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x32d1a8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32d1ac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d1b0: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x32d1b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32d1b4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x32d1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x32d1b8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x32d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x32d1bc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d1c0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x32d1c4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x32d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x32d1c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32d1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32d1cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d1d0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32d1d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32d1d4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x32d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x32d1d8: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x32d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x32d1dc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d1e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32d1e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32d1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32d1e8: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x32d1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x32d1ec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32d1f0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32d1f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32d1f4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x32d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x32d1f8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x32d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x32d1fc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d200: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x32d200u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x32d204: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x32d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_32d208:
    // 0x32d208: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32d208u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32d20c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x32d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x32d210: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x32d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x32d214: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x32d214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x32d218: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x32d218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x32d21c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x32d220: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x32d220u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x32d224: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x32d224u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d228: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32d228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32d22c: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x32d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x32d230: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d234: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x32d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x32d238: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32d238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32d23c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d240: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x32d240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32d244: 0x10a6000a  beq         $a1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x32D244u;
    {
        const bool branch_taken_0x32d244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x32D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D244u;
        // 0x32d248: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d244) {
            ctx->pc = 0x32D270u;
            goto label_32d270;
        }
    }
    ctx->pc = 0x32D24Cu;
    // 0x32d24c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x32d250: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32d250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32d254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d258: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32d258u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x32d25c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32d260: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32d260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x32d264: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32d268: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32d268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x32d26c: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x32d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_32d270:
    // 0x32d270: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x32d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x32d274: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x32d274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x32d278: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x32d278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32d27c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x32d27cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x32d280: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32d280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32d284: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x32d284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x32d288: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x32d28c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x32d28cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x32d290: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x32d290u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x32d294: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x32d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x32d298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32d29c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32d29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x32d2a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32d2a4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x32d2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x32d2a8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x32d2a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x32d2ac: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x32d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x32d2b0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x32d2b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32d2b8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x32d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x32d2bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_32d2c0:
    // 0x32d2c0: 0x42000039  di
    ctx->pc = 0x32d2c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x32d2c4: 0x40f  sync.p
    ctx->pc = 0x32d2c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x32d2c8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x32d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x32d2cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32d2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d2d0: 0x0  nop
    ctx->pc = 0x32d2d0u;
    // NOP
    // 0x32d2d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32D2D4u;
    {
        const bool branch_taken_0x32d2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d2d4) {
            ctx->pc = 0x32D2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d2c0;
        }
    }
    ctx->pc = 0x32D2DCu;
    // 0x32d2dc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x32d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x32d2e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d2e4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x32d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x32d2e8: 0x42000038  ei
    ctx->pc = 0x32d2e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x32d2ec: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x32d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x32d2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32d2f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D2F8u;
    {
        const bool branch_taken_0x32d2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D2F8u;
        // 0x32d2fc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2f8) {
            ctx->pc = 0x32D308u;
            goto label_32d308;
        }
    }
    ctx->pc = 0x32D300u;
    // 0x32d300: 0xc10a762  jal         func_429D88
    ctx->pc = 0x32D300u;
    SET_GPR_U32(ctx, 31, 0x32D308u);
    ctx->pc = 0x32D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D300u;
    // 0x32d304: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x32D300u, 0x32D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D308u;
label_32d308:
    // 0x32d308: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32d308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d310: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32d310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d314: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32d314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d31c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D31Cu;
        // 0x32d320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D324u;
    // 0x32d324: 0x0  nop
    ctx->pc = 0x32d324u;
    // NOP
    // 0x32d328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32d32c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32d330: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32d330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32d334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d33c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32d33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d340: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32d344: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x32d344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32d348: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x32d348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x32d34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d350: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x32d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x32d354: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x32d354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32d358: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32D358u;
    {
        const bool branch_taken_0x32d358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D358u;
        // 0x32d35c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d358) {
            ctx->pc = 0x32D394u;
            goto label_32d394;
        }
    }
    ctx->pc = 0x32D360u;
    // 0x32d360: 0x8f82bd7c  lw          $v0, -0x4284($gp)
    ctx->pc = 0x32d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
    // 0x32d364: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x32d364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x32d368: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x32d368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x32d36c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32d370: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D370u;
    {
        const bool branch_taken_0x32d370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D370u;
        // 0x32d374: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d370) {
            ctx->pc = 0x32D388u;
            goto label_32d388;
        }
    }
    ctx->pc = 0x32D378u;
    // 0x32d378: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32d378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d37c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x32d37cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32d380: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32D380u;
    {
        const bool branch_taken_0x32d380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D380u;
        // 0x32d384: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d380) {
            ctx->pc = 0x32D3D4u;
            goto label_32d3d4;
        }
    }
    ctx->pc = 0x32D388u;
label_32d388:
    // 0x32d388: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x32d388u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32d38c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32D38Cu;
    {
        const bool branch_taken_0x32d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D38Cu;
        // 0x32d390: 0x2262021  addu        $a0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d38c) {
            ctx->pc = 0x32D3CCu;
            goto label_32d3cc;
        }
    }
    ctx->pc = 0x32D394u;
label_32d394:
    // 0x32d394: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x32d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x32d398: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x32d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x32d39c: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x32d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32d3a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32d3a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D3A4u;
    {
        const bool branch_taken_0x32d3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3A4u;
        // 0x32d3a8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3a4) {
            ctx->pc = 0x32D3C4u;
            goto label_32d3c4;
        }
    }
    ctx->pc = 0x32D3ACu;
    // 0x32d3ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d3b0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x32d3b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32d3b4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D3B4u;
    {
        const bool branch_taken_0x32d3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d3b4) {
            ctx->pc = 0x32D3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D3B4u;
            // 0x32d3b8: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D3C8u;
            goto label_32d3c8;
        }
    }
    ctx->pc = 0x32D3BCu;
    // 0x32d3bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D3BCu;
    {
        const bool branch_taken_0x32d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3BCu;
        // 0x32d3c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3bc) {
            ctx->pc = 0x32D3D4u;
            goto label_32d3d4;
        }
    }
    ctx->pc = 0x32D3C4u;
label_32d3c4:
    // 0x32d3c4: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x32d3c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_32d3c8:
    // 0x32d3c8: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x32d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_32d3cc:
    // 0x32d3cc: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x32D3CCu;
    SET_GPR_U32(ctx, 31, 0x32D3D4u);
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x32D3CCu, 0x32D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3D4u;
label_32d3d4:
    // 0x32d3d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32d3d8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x32d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x32d3dc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x32d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x32d3e0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x32d3e4: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x32d3e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32d3e8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D3E8u;
    {
        const bool branch_taken_0x32d3e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3E8u;
        // 0x32d3ec: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3e8) {
            ctx->pc = 0x32D408u;
            goto label_32d408;
        }
    }
    ctx->pc = 0x32D3F0u;
    // 0x32d3f0: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x32d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x32d3f4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x32d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d3f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x32d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d3fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32d400: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x32d400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x32d404: 0x0  nop
    ctx->pc = 0x32d404u;
    // NOP
label_32d408:
    // 0x32d408: 0x8e280018  lw          $t0, 0x18($s1)
    ctx->pc = 0x32d408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x32d40c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x32d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x32d410: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x32d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x32d414: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32d418: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x32D418u;
    {
        const bool branch_taken_0x32d418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d418) {
            ctx->pc = 0x32D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D418u;
            // 0x32d41c: 0x8e23004c  lw          $v1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D520u;
            goto label_32d520;
        }
    }
    ctx->pc = 0x32D420u;
    // 0x32d420: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x32d420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32d424: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x32d424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x32d428: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x32d428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x32d42c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x32d42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x32d430: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x32d430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x32d434: 0x91040018  lbu         $a0, 0x18($t0)
    ctx->pc = 0x32d434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x32d438: 0x3063009f  andi        $v1, $v1, 0x9F
    ctx->pc = 0x32d438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)159);
    // 0x32d43c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x32d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x32d440: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32d440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32d444: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32d448: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x32d448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x32d44c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x32d44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x32d450: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x32d450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32d454: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x32d454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32d458: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x32d458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x32d45c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x32d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32d460: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x32D460u;
    {
        const bool branch_taken_0x32d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D460u;
        // 0x32d464: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d460) {
            ctx->pc = 0x32D518u;
            goto label_32d518;
        }
    }
    ctx->pc = 0x32D468u;
    // 0x32d468: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x32d468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x32d46c: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x32d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x32d470: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x32D470u;
    {
        const bool branch_taken_0x32d470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x32D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D470u;
        // 0x32d474: 0x2627004c  addiu       $a3, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d470) {
            ctx->pc = 0x32D4ACu;
            goto label_32d4ac;
        }
    }
    ctx->pc = 0x32D478u;
    // 0x32d478: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x32d478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x32d47c: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x32d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x32d480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32d480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d484: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d488: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D488u;
    {
        const bool branch_taken_0x32d488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D488u;
        // 0x32d48c: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d488) {
            ctx->pc = 0x32D4A8u;
            goto label_32d4a8;
        }
    }
    ctx->pc = 0x32D490u;
    // 0x32d490: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x32d490u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x32d494: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x32d494u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x32d498: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D498u;
    {
        const bool branch_taken_0x32d498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D498u;
        // 0x32d49c: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d498) {
            ctx->pc = 0x32D4A8u;
            goto label_32d4a8;
        }
    }
    ctx->pc = 0x32D4A0u;
    // 0x32d4a0: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x32d4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x32d4a4: 0x0  nop
    ctx->pc = 0x32d4a4u;
    // NOP
label_32d4a8:
    // 0x32d4a8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x32d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_32d4ac:
    // 0x32d4ac: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x32d4acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x32d4b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32D4B0u;
    {
        const bool branch_taken_0x32d4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D4B0u;
        // 0x32d4b4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4b0) {
            ctx->pc = 0x32D4DCu;
            goto label_32d4dc;
        }
    }
    ctx->pc = 0x32D4B8u;
    // 0x32d4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D4B8u;
    {
        const bool branch_taken_0x32d4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D4B8u;
        // 0x32d4bc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4b8) {
            ctx->pc = 0x32D4C8u;
            goto label_32d4c8;
        }
    }
    ctx->pc = 0x32D4C0u;
    // 0x32d4c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D4C0u;
    {
        const bool branch_taken_0x32d4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D4C0u;
        // 0x32d4c4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4c0) {
            ctx->pc = 0x32D4D8u;
            goto label_32d4d8;
        }
    }
    ctx->pc = 0x32D4C8u;
label_32d4c8:
    // 0x32d4c8: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x32d4c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x32d4cc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x32d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x32d4d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32d4d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32d4d8:
    // 0x32d4d8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x32d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_32d4dc:
    // 0x32d4dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32d4e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32d4e4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x32D4E4u;
    {
        const bool branch_taken_0x32d4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d4e4) {
            ctx->pc = 0x32D4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D4E4u;
            // 0x32d4e8: 0x8e23004c  lw          $v1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D520u;
            goto label_32d520;
        }
    }
    ctx->pc = 0x32D4ECu;
    // 0x32d4ec: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x32d4ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x32d4f0: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x32d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x32d4f4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D4F4u;
    {
        const bool branch_taken_0x32d4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d4f4) {
            ctx->pc = 0x32D4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D4F4u;
            // 0x32d4f8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D510u;
            goto label_32d510;
        }
    }
    ctx->pc = 0x32D4FCu;
    // 0x32d4fc: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x32d4fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32d500: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x32d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x32d504: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D504u;
    {
        const bool branch_taken_0x32d504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d504) {
            ctx->pc = 0x32D508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D504u;
            // 0x32d508: 0x8e23004c  lw          $v1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D520u;
            goto label_32d520;
        }
    }
    ctx->pc = 0x32D50Cu;
    // 0x32d50c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x32d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_32d510:
    // 0x32d510: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x32d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x32d514: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x32d514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_32d518:
    // 0x32d518: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x32d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x32d51c: 0x0  nop
    ctx->pc = 0x32d51cu;
    // NOP
label_32d520:
    // 0x32d520: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x32d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32d524: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x32d524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x32d528: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32d528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d52c: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x32d52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x32d530: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x32d530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x32d534: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32d538: 0x8c44e880  lw          $a0, -0x1780($v0)
    ctx->pc = 0x32d538u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E880u));
    // 0x32d53c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x32d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32d540: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x32d540u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x32d544: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x32d544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x32d548: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x32d548u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x32d54c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x32d54cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32d550: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x32d550u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x32d554: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x32d554u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x32d558: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x32d558u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x32d55c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x32d55cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x32d560: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x32d560u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x32d564: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32d568: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d56c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x32d56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32d570: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32D570u;
    {
        const bool branch_taken_0x32d570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D570u;
        // 0x32d574: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d570) {
            ctx->pc = 0x32D5B0u;
            goto label_32d5b0;
        }
    }
    ctx->pc = 0x32D578u;
    // 0x32d578: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x32d578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d57c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D57Cu;
    {
        const bool branch_taken_0x32d57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d57c) {
            ctx->pc = 0x32D580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D57Cu;
            // 0x32d580: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D598u;
            goto label_32d598;
        }
    }
    ctx->pc = 0x32D584u;
    // 0x32d584: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x32d584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32d588: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D588u;
    {
        const bool branch_taken_0x32d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d588) {
            ctx->pc = 0x32D58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D588u;
            // 0x32d58c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D5A8u;
            goto label_32d5a8;
        }
    }
    ctx->pc = 0x32D590u;
    // 0x32d590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32d594: 0x0  nop
    ctx->pc = 0x32d594u;
    // NOP
label_32d598:
    // 0x32d598: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x32d598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d59c: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x32d59cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x32d5a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32D5A0u;
    {
        const bool branch_taken_0x32d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5A0u;
        // 0x32d5a4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5a0) {
            ctx->pc = 0x32D5ECu;
            goto label_32d5ec;
        }
    }
    ctx->pc = 0x32D5A8u;
label_32d5a8:
    // 0x32d5a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D5A8u;
    {
        const bool branch_taken_0x32d5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5A8u;
        // 0x32d5ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5a8) {
            ctx->pc = 0x32D5C0u;
            goto label_32d5c0;
        }
    }
    ctx->pc = 0x32D5B0u;
label_32d5b0:
    // 0x32d5b0: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x32d5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d5b4: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x32d5b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x32d5b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32D5B8u;
    {
        const bool branch_taken_0x32d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5B8u;
        // 0x32d5bc: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5b8) {
            ctx->pc = 0x32D5F0u;
            goto label_32d5f0;
        }
    }
    ctx->pc = 0x32D5C0u;
label_32d5c0:
    // 0x32d5c0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x32d5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x32d5c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D5C4u;
    {
        const bool branch_taken_0x32d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5C4u;
        // 0x32d5c8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5c4) {
            ctx->pc = 0x32D5DCu;
            goto label_32d5dc;
        }
    }
    ctx->pc = 0x32D5CCu;
    // 0x32d5cc: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x32d5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d5d0: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x32d5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x32d5d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D5D4u;
    {
        const bool branch_taken_0x32d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5D4u;
        // 0x32d5d8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5d4) {
            ctx->pc = 0x32D5ECu;
            goto label_32d5ec;
        }
    }
    ctx->pc = 0x32D5DCu;
label_32d5dc:
    // 0x32d5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d5e0: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x32d5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d5e4: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x32d5e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x32d5e8: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x32d5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_32d5ec:
    // 0x32d5ec: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x32d5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_32d5f0:
    // 0x32d5f0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x32d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x32d5f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32d5f8: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x32d5f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x32d5fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32d5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32d600: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x32d600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d604: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x32d608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32d608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32d60c: 0xaf82bd74  sw          $v0, -0x428C($gp)
    ctx->pc = 0x32d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
    // 0x32d610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d614: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32d614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d618: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32d618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d61c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32d61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d624: 0x3e00008  jr          $ra
    ctx->pc = 0x32D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D624u;
        // 0x32d628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D62Cu;
    // 0x32d62c: 0x0  nop
    ctx->pc = 0x32d62cu;
    // NOP
    ctx->pc = 0x32d630u;
}
