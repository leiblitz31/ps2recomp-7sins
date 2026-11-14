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

// Function: sub_004ED2B8
// Address: 0x4ed2b8 - 0x4ed2d0
void sub_004ED2B8_0x4ed2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED2B8_0x4ed2b8");
#endif

    ctx->pc = 0x4ed2b8u;

    // 0x4ed2b8: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed2b8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED2B8 raw=0x732E7866");
    // 0x4ed2bc: 0x6c6c696b  ldr         $t4, 0x696B($v1)
    ctx->pc = 0x4ed2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4ed2c0: 0x64692e  .word       0x0064692E                   # dsub        $t5, $v1, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed2c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    // 0x4ed2c4: 0x0  nop
    ctx->pc = 0x4ed2c4u;
    // NOP
    // 0x4ed2c8: 0x0  nop
    ctx->pc = 0x4ed2c8u;
    // NOP
    // 0x4ed2cc: 0x0  nop
    ctx->pc = 0x4ed2ccu;
    // NOP
    ctx->pc = 0x4ed2d0u;
}
