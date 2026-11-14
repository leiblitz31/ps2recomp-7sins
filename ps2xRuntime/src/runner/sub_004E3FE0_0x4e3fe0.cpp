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

// Function: sub_004E3FE0
// Address: 0x4e3fe0 - 0x4e3ff0
void sub_004E3FE0_0x4e3fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3FE0_0x4e3fe0");
#endif

    ctx->pc = 0x4e3fe0u;

    // 0x4e3fe0: 0x43525426  .word       0x43525426                   # INVALID     $k0, $s2, 0x5426 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e3fe0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E3FE0 raw=0x43525426");
    // 0x4e3fe4: 0x7061635f  .word       0x7061635F                   # INVALID     $v1, $at, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3fe4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E3FE4 raw=0x7061635F");
    // 0x4e3fe8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e3fec: 0x0  nop
    ctx->pc = 0x4e3fecu;
    // NOP
    ctx->pc = 0x4e3ff0u;
}
