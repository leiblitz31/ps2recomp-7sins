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

// Function: sub_004E3FF0
// Address: 0x4e3ff0 - 0x4e4000
void sub_004E3FF0_0x4e3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3FF0_0x4e3ff0");
#endif

    ctx->pc = 0x4e3ff0u;

    // 0x4e3ff0: 0x43525426  .word       0x43525426                   # INVALID     $k0, $s2, 0x5426 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e3ff0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E3FF0 raw=0x43525426");
    // 0x4e3ff4: 0x6e6f635f  ldr         $t7, 0x635F($s3)
    ctx->pc = 0x4e3ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e3ff8: 0x6d726966  ldr         $s2, 0x6966($t3)
    ctx->pc = 0x4e3ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x4e3ffc: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x4e3ffcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e4000u;
}
