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

// Function: sub_004B09F8
// Address: 0x4b09f8 - 0x4b0cd8
void sub_004B09F8_0x4b09f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B09F8_0x4b09f8");
#endif

    switch (ctx->pc) {
        case 0x4b0b38u: goto label_4b0b38;
        case 0x4b0b68u: goto label_4b0b68;
        case 0x4b0b7cu: goto label_4b0b7c;
        case 0x4b0ba4u: goto label_4b0ba4;
        case 0x4b0bb0u: goto label_4b0bb0;
        case 0x4b0bb8u: goto label_4b0bb8;
        case 0x4b0bf0u: goto label_4b0bf0;
        case 0x4b0bf8u: goto label_4b0bf8;
        case 0x4b0c00u: goto label_4b0c00;
        case 0x4b0c28u: goto label_4b0c28;
        case 0x4b0c4cu: goto label_4b0c4c;
        case 0x4b0c58u: goto label_4b0c58;
        case 0x4b0c60u: goto label_4b0c60;
        case 0x4b0c74u: goto label_4b0c74;
        case 0x4b0c8cu: goto label_4b0c8c;
        case 0x4b0ca4u: goto label_4b0ca4;
        default: break;
    }

    ctx->pc = 0x4b09f8u;

    // 0x4b09f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4b09f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4b09fc: 0xaf80c260  sw          $zero, -0x3DA0($gp)
    ctx->pc = 0x4b09fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951520), GPR_U32(ctx, 0));
    // 0x4b0a00: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4b0a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4b0a04: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4b0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x4b0a08: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4b0a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4b0a0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b0a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0a10: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x4b0a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4b0a14: 0xaf80c264  sw          $zero, -0x3D9C($gp)
    ctx->pc = 0x4b0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951524), GPR_U32(ctx, 0));
    // 0x4b0a18: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4b0a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4b0a1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0a20: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4b0a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4b0a24: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x4b0a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4b0a28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b0a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4b0a2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b0a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b0a30: 0xaf91b90c  sw          $s1, -0x46F4($gp)
    ctx->pc = 0x4b0a30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949132), GPR_U32(ctx, 17));
    // 0x4b0a34: 0xaf80c254  sw          $zero, -0x3DAC($gp)
    ctx->pc = 0x4b0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951508), GPR_U32(ctx, 0));
    // 0x4b0a38: 0xae201380  sw          $zero, 0x1380($s1)
    ctx->pc = 0x4b0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4992), GPR_U32(ctx, 0));
    // 0x4b0a3c: 0xae201398  sw          $zero, 0x1398($s1)
    ctx->pc = 0x4b0a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5016), GPR_U32(ctx, 0));
    // 0x4b0a40: 0xae201384  sw          $zero, 0x1384($s1)
    ctx->pc = 0x4b0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4996), GPR_U32(ctx, 0));
    // 0x4b0a44: 0xae201390  sw          $zero, 0x1390($s1)
    ctx->pc = 0x4b0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5008), GPR_U32(ctx, 0));
    // 0x4b0a48: 0xae201394  sw          $zero, 0x1394($s1)
    ctx->pc = 0x4b0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5012), GPR_U32(ctx, 0));
    // 0x4b0a4c: 0x24692e48  addiu       $t1, $v1, 0x2E48
    ctx->pc = 0x4b0a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 11848));
    // 0x4b0a50: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x4b0a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b0a54: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x4b0a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b0a58: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x4b0a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4b0a5c: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x4b0a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4b0a60: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x4b0a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4b0a64: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x4b0a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4b0a68: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4b0a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0a6c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4b0a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0a70: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x4b0a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0a74: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x4b0a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0a78: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x4b0a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0a7c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x4b0a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0a80: 0x6922001f  ldl         $v0, 0x1F($t1)
    ctx->pc = 0x4b0a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b0a84: 0x6d220018  ldr         $v0, 0x18($t1)
    ctx->pc = 0x4b0a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b0a88: 0x69270027  ldl         $a3, 0x27($t1)
    ctx->pc = 0x4b0a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4b0a8c: 0x6d270020  ldr         $a3, 0x20($t1)
    ctx->pc = 0x4b0a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4b0a90: 0x6928002f  ldl         $t0, 0x2F($t1)
    ctx->pc = 0x4b0a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4b0a94: 0x6d280028  ldr         $t0, 0x28($t1)
    ctx->pc = 0x4b0a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4b0a98: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x4b0a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0a9c: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x4b0a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0aa0: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x4b0aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0aa4: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x4b0aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0aa8: 0xb3a8002f  sdl         $t0, 0x2F($sp)
    ctx->pc = 0x4b0aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0aac: 0xb7a80028  sdr         $t0, 0x28($sp)
    ctx->pc = 0x4b0aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0ab0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b0ab4: 0xae240660  sw          $a0, 0x660($s1)
    ctx->pc = 0x4b0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 4));
    // 0x4b0ab8: 0xae2213a0  sw          $v0, 0x13A0($s1)
    ctx->pc = 0x4b0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5024), GPR_U32(ctx, 2));
    // 0x4b0abc: 0xae250664  sw          $a1, 0x664($s1)
    ctx->pc = 0x4b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 5));
    // 0x4b0ac0: 0xae2013d8  sw          $zero, 0x13D8($s1)
    ctx->pc = 0x4b0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5080), GPR_U32(ctx, 0));
    // 0x4b0ac4: 0xae201370  sw          $zero, 0x1370($s1)
    ctx->pc = 0x4b0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4976), GPR_U32(ctx, 0));
    // 0x4b0ac8: 0xae200cf0  sw          $zero, 0xCF0($s1)
    ctx->pc = 0x4b0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3312), GPR_U32(ctx, 0));
    // 0x4b0acc: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x4b0accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x4b0ad0: 0xae200634  sw          $zero, 0x634($s1)
    ctx->pc = 0x4b0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1588), GPR_U32(ctx, 0));
    // 0x4b0ad4: 0xae200630  sw          $zero, 0x630($s1)
    ctx->pc = 0x4b0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1584), GPR_U32(ctx, 0));
    // 0x4b0ad8: 0xae20063c  sw          $zero, 0x63C($s1)
    ctx->pc = 0x4b0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1596), GPR_U32(ctx, 0));
    // 0x4b0adc: 0xae200638  sw          $zero, 0x638($s1)
    ctx->pc = 0x4b0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1592), GPR_U32(ctx, 0));
    // 0x4b0ae0: 0xae200644  sw          $zero, 0x644($s1)
    ctx->pc = 0x4b0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 0));
    // 0x4b0ae4: 0xae200640  sw          $zero, 0x640($s1)
    ctx->pc = 0x4b0ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 0));
    // 0x4b0ae8: 0xae20064c  sw          $zero, 0x64C($s1)
    ctx->pc = 0x4b0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 0));
    // 0x4b0aec: 0xae200648  sw          $zero, 0x648($s1)
    ctx->pc = 0x4b0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 0));
    // 0x4b0af0: 0xae200654  sw          $zero, 0x654($s1)
    ctx->pc = 0x4b0af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 0));
    // 0x4b0af4: 0xae200650  sw          $zero, 0x650($s1)
    ctx->pc = 0x4b0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 0));
    // 0x4b0af8: 0xaf80c250  sw          $zero, -0x3DB0($gp)
    ctx->pc = 0x4b0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951504), GPR_U32(ctx, 0));
    // 0x4b0afc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4b0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4b0b00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B0B00u;
    {
        const bool branch_taken_0x4b0b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0b00) {
            ctx->pc = 0x4B0B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0B00u;
            // 0x4b0b04: 0xaf85c250  sw          $a1, -0x3DB0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294951504), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0B08u;
            goto label_4b0b08;
        }
    }
    ctx->pc = 0x4B0B08u;
label_4b0b08:
    // 0x4b0b08: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4b0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4b0b0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0B0Cu;
    {
        const bool branch_taken_0x4b0b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B0Cu;
        // 0x4b0b10: 0x8f82c250  lw          $v0, -0x3DB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b0c) {
            ctx->pc = 0x4B0B1Cu;
            goto label_4b0b1c;
        }
    }
    ctx->pc = 0x4B0B14u;
    // 0x4b0b14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4b0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4b0b18: 0xaf82c250  sw          $v0, -0x3DB0($gp)
    ctx->pc = 0x4b0b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951504), GPR_U32(ctx, 2));
label_4b0b1c:
    // 0x4b0b1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b0b20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b0b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b24: 0x2444eb80  addiu       $a0, $v0, -0x1480
    ctx->pc = 0x4b0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b0b28: 0x26530d40  addiu       $s3, $s2, 0xD40
    ctx->pc = 0x4b0b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b0b2c: 0x265413bf  addiu       $s4, $s2, 0x13BF
    ctx->pc = 0x4b0b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 5055));
    // 0x4b0b30: 0x26450640  addiu       $a1, $s2, 0x640
    ctx->pc = 0x4b0b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    // 0x4b0b34: 0x0  nop
    ctx->pc = 0x4b0b34u;
    // NOP
label_4b0b38:
    // 0x4b0b38: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x4b0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4b0b3c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4b0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4b0b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b0b44: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x4b0b44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b0b48: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x4b0b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x4b0b4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B0B4Cu;
    {
        const bool branch_taken_0x4b0b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B4Cu;
        // 0x4b0b50: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b4c) {
            ctx->pc = 0x4B0B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0b38;
        }
    }
    ctx->pc = 0x4B0B54u;
    // 0x4b0b54: 0x8f82c250  lw          $v0, -0x3DB0($gp)
    ctx->pc = 0x4b0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
    // 0x4b0b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0B58u;
    {
        const bool branch_taken_0x4b0b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B58u;
        // 0x4b0b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b58) {
            ctx->pc = 0x4B0B68u;
            goto label_4b0b68;
        }
    }
    ctx->pc = 0x4B0B60u;
    // 0x4b0b60: 0xc12c38a  jal         func_4B0E28
    ctx->pc = 0x4B0B60u;
    SET_GPR_U32(ctx, 31, 0x4B0B68u);
    ctx->pc = 0x4B0B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B60u;
    // 0x4b0b64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E28u, 0x4B0B60u, 0x4B0B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0B68u;
label_4b0b68:
    // 0x4b0b68: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x4b0b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x4b0b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b0b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b70: 0x24840578  addiu       $a0, $a0, 0x578
    ctx->pc = 0x4b0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1400));
    // 0x4b0b74: 0xc12b9de  jal         func_4AE778
    ctx->pc = 0x4B0B74u;
    SET_GPR_U32(ctx, 31, 0x4B0B7Cu);
    ctx->pc = 0x4B0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B74u;
    // 0x4b0b78: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE778u, 0x4B0B74u, 0x4B0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0B7Cu;
label_4b0b7c:
    // 0x4b0b7c: 0x8e2a13a0  lw          $t2, 0x13A0($s1)
    ctx->pc = 0x4b0b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5024)));
    // 0x4b0b80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b0b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b84: 0x8f8bc250  lw          $t3, -0x3DB0($gp)
    ctx->pc = 0x4b0b84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
    // 0x4b0b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b0b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b8c: 0xaf80b8f4  sw          $zero, -0x470C($gp)
    ctx->pc = 0x4b0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949108), GPR_U32(ctx, 0));
    // 0x4b0b90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b0b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b94: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x4b0b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b0b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b0b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0b9c: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B0B9Cu;
    SET_GPR_U32(ctx, 31, 0x4B0BA4u);
    ctx->pc = 0x4B0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B9Cu;
    // 0x4b0ba0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B0B9Cu, 0x4B0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0BA4u;
label_4b0ba4:
    // 0x4b0ba4: 0x8f82b8f4  lw          $v0, -0x470C($gp)
    ctx->pc = 0x4b0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949108)));
    // 0x4b0ba8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0BA8u;
    {
        const bool branch_taken_0x4b0ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BA8u;
        // 0x4b0bac: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ba8) {
            ctx->pc = 0x4B0BC4u;
            goto label_4b0bc4;
        }
    }
    ctx->pc = 0x4B0BB0u;
label_4b0bb0:
    // 0x4b0bb0: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4B0BB0u;
    SET_GPR_U32(ctx, 31, 0x4B0BB8u);
    ctx->pc = 0x4B0BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BB0u;
    // 0x4b0bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4B0BB0u, 0x4B0BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0BB8u;
label_4b0bb8:
    // 0x4b0bb8: 0x8f82b8f4  lw          $v0, -0x470C($gp)
    ctx->pc = 0x4b0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949108)));
    // 0x4b0bbc: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4B0BBCu;
    {
        const bool branch_taken_0x4b0bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BBCu;
        // 0x4b0bc0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0bbc) {
            ctx->pc = 0x4B0BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0bb0;
        }
    }
    ctx->pc = 0x4B0BC4u;
label_4b0bc4:
    // 0x4b0bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0bc8: 0xaf90b8ec  sw          $s0, -0x4714($gp)
    ctx->pc = 0x4b0bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949100), GPR_U32(ctx, 16));
    // 0x4b0bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b0bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0bd0: 0xaf90b8f0  sw          $s0, -0x4710($gp)
    ctx->pc = 0x4b0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949104), GPR_U32(ctx, 16));
    // 0x4b0bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b0bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0bd8: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x4b0bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x4b0bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b0bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0be0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b0be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0be4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b0be4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0be8: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B0BE8u;
    SET_GPR_U32(ctx, 31, 0x4B0BF0u);
    ctx->pc = 0x4B0BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BE8u;
    // 0x4b0bec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B0BE8u, 0x4B0BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0BF0u;
label_4b0bf0:
    // 0x4b0bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0BF0u;
    {
        const bool branch_taken_0x4b0bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0bf0) {
            ctx->pc = 0x4B0C00u;
            goto label_4b0c00;
        }
    }
    ctx->pc = 0x4B0BF8u;
label_4b0bf8:
    // 0x4b0bf8: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4B0BF8u;
    SET_GPR_U32(ctx, 31, 0x4B0C00u);
    ctx->pc = 0x4B0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BF8u;
    // 0x4b0bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4B0BF8u, 0x4B0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0C00u;
label_4b0c00:
    // 0x4b0c00: 0x8f83b8ec  lw          $v1, -0x4714($gp)
    ctx->pc = 0x4b0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949100)));
    // 0x4b0c04: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B0C04u;
    {
        const bool branch_taken_0x4b0c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b0c04) {
            ctx->pc = 0x4B0C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0C04u;
            // 0x4b0c08: 0xae2013a4  sw          $zero, 0x13A4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0C1Cu;
            goto label_4b0c1c;
        }
    }
    ctx->pc = 0x4B0C0Cu;
    // 0x4b0c0c: 0x8f82b8f0  lw          $v0, -0x4710($gp)
    ctx->pc = 0x4b0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949104)));
    // 0x4b0c10: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B0C10u;
    {
        const bool branch_taken_0x4b0c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b0c10) {
            ctx->pc = 0x4B0BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0bf8;
        }
    }
    ctx->pc = 0x4B0C18u;
    // 0x4b0c18: 0xae2013a4  sw          $zero, 0x13A4($s1)
    ctx->pc = 0x4b0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5028), GPR_U32(ctx, 0));
label_4b0c1c:
    // 0x4b0c1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b0c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0c20: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4B0C20u;
    SET_GPR_U32(ctx, 31, 0x4B0C28u);
    ctx->pc = 0x4B0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0C20u;
    // 0x4b0c24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4B0C20u, 0x4B0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0C28u;
label_4b0c28:
    // 0x4b0c28: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x4b0c28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0c2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b0c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b0c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0c38: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x4b0c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x4b0c3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b0c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0c40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b0c40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0c44: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B0C44u;
    SET_GPR_U32(ctx, 31, 0x4B0C4Cu);
    ctx->pc = 0x4B0C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0C44u;
    // 0x4b0c48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B0C44u, 0x4B0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0C4Cu;
label_4b0c4c:
    // 0x4b0c4c: 0x8e2213a4  lw          $v0, 0x13A4($s1)
    ctx->pc = 0x4b0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5028)));
    // 0x4b0c50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0C50u;
    {
        const bool branch_taken_0x4b0c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0c50) {
            ctx->pc = 0x4B0C6Cu;
            goto label_4b0c6c;
        }
    }
    ctx->pc = 0x4B0C58u;
label_4b0c58:
    // 0x4b0c58: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4B0C58u;
    SET_GPR_U32(ctx, 31, 0x4B0C60u);
    ctx->pc = 0x4B0C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0C58u;
    // 0x4b0c5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4B0C58u, 0x4B0C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0C60u;
label_4b0c60:
    // 0x4b0c60: 0x8e2213a4  lw          $v0, 0x13A4($s1)
    ctx->pc = 0x4b0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5028)));
    // 0x4b0c64: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4B0C64u;
    {
        const bool branch_taken_0x4b0c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0c64) {
            ctx->pc = 0x4B0C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0c58;
        }
    }
    ctx->pc = 0x4B0C6Cu;
label_4b0c6c:
    // 0x4b0c6c: 0xc12d03c  jal         func_4B40F0
    ctx->pc = 0x4B0C6Cu;
    SET_GPR_U32(ctx, 31, 0x4B0C74u);
    ctx->pc = 0x4B40F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B40F0u, 0x4B0C6Cu, 0x4B0C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0C74u;
label_4b0c74:
    // 0x4b0c74: 0x8f82c250  lw          $v0, -0x3DB0($gp)
    ctx->pc = 0x4b0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
    // 0x4b0c78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b0c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b0c7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0C7Cu;
    {
        const bool branch_taken_0x4b0c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C7Cu;
        // 0x4b0c80: 0x3c04001c  lui         $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c7c) {
            ctx->pc = 0x4B0C8Cu;
            goto label_4b0c8c;
        }
    }
    ctx->pc = 0x4B0C84u;
    // 0x4b0c84: 0xc12d024  jal         func_4B4090
    ctx->pc = 0x4B0C84u;
    SET_GPR_U32(ctx, 31, 0x4B0C8Cu);
    ctx->pc = 0x4B0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0C84u;
    // 0x4b0c88: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4090u, 0x4B0C84u, 0x4B0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0C8Cu;
label_4b0c8c:
    // 0x4b0c8c: 0x8f82c250  lw          $v0, -0x3DB0($gp)
    ctx->pc = 0x4b0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951504)));
    // 0x4b0c90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b0c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4b0c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0C94u;
    {
        const bool branch_taken_0x4b0c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C94u;
        // 0x4b0c98: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c94) {
            ctx->pc = 0x4B0CA4u;
            goto label_4b0ca4;
        }
    }
    ctx->pc = 0x4B0C9Cu;
    // 0x4b0c9c: 0xc12d024  jal         func_4B4090
    ctx->pc = 0x4B0C9Cu;
    SET_GPR_U32(ctx, 31, 0x4B0CA4u);
    ctx->pc = 0x4B0CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0C9Cu;
    // 0x4b0ca0: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4090u, 0x4B0C9Cu, 0x4B0CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0CA4u;
label_4b0ca4:
    // 0x4b0ca4: 0xa380b914  sb          $zero, -0x46EC($gp)
    ctx->pc = 0x4b0ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949140), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b0ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0cac: 0xae221380  sw          $v0, 0x1380($s1)
    ctx->pc = 0x4b0cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4992), GPR_U32(ctx, 2));
    // 0x4b0cb0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b0cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0cb4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4b0cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b0cb8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4b0cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b0cbc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4b0cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b0cc0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4b0cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b0cc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b0cc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b0cc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b0cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CCCu;
        // 0x4b0cd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0CD4u;
    // 0x4b0cd4: 0x0  nop
    ctx->pc = 0x4b0cd4u;
    // NOP
    ctx->pc = 0x4b0cd8u;
}
