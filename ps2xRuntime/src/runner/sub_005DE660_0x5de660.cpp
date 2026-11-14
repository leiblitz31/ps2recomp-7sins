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

// Function: sub_005DE660
// Address: 0x5de660 - 0x5de6b0
void sub_005DE660_0x5de660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DE660_0x5de660");
#endif

    switch (ctx->pc) {
        case 0x5de66cu: goto label_5de66c;
        case 0x5de678u: goto label_5de678;
        case 0x5de67cu: goto label_5de67c;
        default: break;
    }

    ctx->pc = 0x5de660u;

    // 0x5de660: 0x20212121  addi        $at, $at, 0x2121
    ctx->pc = 0x5de660u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x5de664: 0x544e4144  bnel        $v0, $t6, . + 4 + (0x4144 << 2)
    ctx->pc = 0x5DE664u;
    {
        const bool branch_taken_0x5de664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x5de664) {
            ctx->pc = 0x5DE668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE664u;
            // 0x5de668: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
            SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EEB78u;
            return;
        }
    }
    ctx->pc = 0x5DE66Cu;
label_5de66c:
    // 0x5de66c: 0x6e456374  ldr         $a1, 0x6374($s2)
    ctx->pc = 0x5de66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 25460); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5de670: 0x50797274  beql        $v1, $t9, . + 4 + (0x7274 << 2)
    ctx->pc = 0x5DE670u;
    {
        const bool branch_taken_0x5de670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 25));
        if (branch_taken_0x5de670) {
            ctx->pc = 0x5DE674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE670u;
            // 0x5de674: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE674 raw=0x746E696F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FB044u;
            return;
        }
    }
    ctx->pc = 0x5DE678u;
label_5de678:
    // 0x5de678: 0x6e493a3a  ldr         $t1, 0x3A3A($s2)
    ctx->pc = 0x5de678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de67c:
    // 0x5de67c: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5de67cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x5de680: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5de680u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
    // 0x5de684: 0x64203a20  daddiu      $zero, $at, 0x3A20
    ctx->pc = 0x5de684u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14880);
    // 0x5de688: 0x72456374  .word       0x72456374                   # psllh       $t4, $a1, 13 # 02400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de688u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 5), 13));
    // 0x5de68c: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x5de68cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
    // 0x5de690: 0x696e493a  ldl         $t6, 0x493A($t3)
    ctx->pc = 0x5de690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5de694: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5de694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5de698: 0x20657369  addi        $a1, $v1, 0x7369
    ctx->pc = 0x5de698u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29545, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5de69c: 0x4c494146  .word       0x4C494146                   # INVALID     $v0, $t1, 0x4146 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de69cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE69C raw=0x4C494146");
    // 0x5de6a0: 0xa4445  .word       0x000A4445                   # INVALID     $zero, $t2, 0x4445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de6a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DE6A0 raw=0x000A4445");
    // 0x5de6a4: 0x0  nop
    ctx->pc = 0x5de6a4u;
    // NOP
    // 0x5de6a8: 0x0  nop
    ctx->pc = 0x5de6a8u;
    // NOP
    // 0x5de6ac: 0x0  nop
    ctx->pc = 0x5de6acu;
    // NOP
    ctx->pc = 0x5de6b0u;
}
