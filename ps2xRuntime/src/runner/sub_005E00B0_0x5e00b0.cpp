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

// Function: sub_005E00B0
// Address: 0x5e00b0 - 0x5e00f0
void sub_005E00B0_0x5e00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E00B0_0x5e00b0");
#endif

    ctx->pc = 0x5e00b0u;

    // 0x5e00b0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E00B0u;
    {
        const bool branch_taken_0x5e00b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e00b0) {
            ctx->pc = 0x5E00B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E00B0u;
            // 0x5e00b4: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD244u;
            return;
        }
    }
    ctx->pc = 0x5E00B8u;
    // 0x5e00b8: 0x7465533a  .word       0x7465533A                   # INVALID     $v1, $a1, 0x533A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e00b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E00B8 raw=0x7465533A");
    // 0x5e00bc: 0x77617244  .word       0x77617244                   # INVALID     $k1, $at, 0x7244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e00bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E00BC raw=0x77617244");
    // 0x5e00c0: 0x74706544  .word       0x74706544                   # INVALID     $v1, $s0, 0x6544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e00c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E00C0 raw=0x74706544");
    // 0x5e00c4: 0x2d2d2068  sltiu       $t5, $t1, 0x2068
    ctx->pc = 0x5e00c4u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8296) ? 1 : 0);
    // 0x5e00c8: 0x7464203e  .word       0x7464203E                   # INVALID     $v1, $a0, 0x203E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e00c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E00C8 raw=0x7464203E");
    // 0x5e00cc: 0x32745267  andi        $s4, $s3, 0x5267
    ctx->pc = 0x5e00ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)21095);
    // 0x5e00d0: 0x68732064  ldl         $s3, 0x2064($v1)
    ctx->pc = 0x5e00d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5e00d4: 0x646c756f  daddiu      $t4, $v1, 0x756F
    ctx->pc = 0x5e00d4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
    // 0x5e00d8: 0x20656220  addi        $a1, $v1, 0x6220
    ctx->pc = 0x5e00d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25120, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5e00dc: 0x74696e69  .word       0x74696E69                   # INVALID     $v1, $t1, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e00dcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E00DC raw=0x74696E69");
    // 0x5e00e0: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5e00e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x5e00e4: 0x2e646573  sltiu       $a0, $s3, 0x6573
    ctx->pc = 0x5e00e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25971) ? 1 : 0);
    // 0x5e00e8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5e00e8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5e00ec: 0x0  nop
    ctx->pc = 0x5e00ecu;
    // NOP
    ctx->pc = 0x5e00f0u;
}
