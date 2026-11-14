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

// Function: sub_004ED5C8
// Address: 0x4ed5c8 - 0x4ed5f8
void sub_004ED5C8_0x4ed5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED5C8_0x4ed5c8");
#endif

    ctx->pc = 0x4ed5c8u;

    // 0x4ed5c8: 0x6c6c6f63  ldr         $t4, 0x6F63($v1)
    ctx->pc = 0x4ed5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4ed5cc: 0x6f697369  ldr         $t1, 0x7369($k1)
    ctx->pc = 0x4ed5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ed5d0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed5d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x4ed5d4: 0x0  nop
    ctx->pc = 0x4ed5d4u;
    // NOP
    // 0x4ed5d8: 0x0  nop
    ctx->pc = 0x4ed5d8u;
    // NOP
    // 0x4ed5dc: 0x0  nop
    ctx->pc = 0x4ed5dcu;
    // NOP
    // 0x4ed5e0: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x4ed5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x4ed5e4: 0x0  nop
    ctx->pc = 0x4ed5e4u;
    // NOP
    // 0x4ed5e8: 0x0  nop
    ctx->pc = 0x4ed5e8u;
    // NOP
    // 0x4ed5ec: 0x43700000  .word       0x43700000                   # INVALID     $k1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4ed5ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x4ED5EC raw=0x43700000");
    // 0x4ed5f0: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4ed5f0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x4ED5F0 raw=0x41A00000");
    // 0x4ed5f4: 0x0  nop
    ctx->pc = 0x4ed5f4u;
    // NOP
    ctx->pc = 0x4ed5f8u;
}
