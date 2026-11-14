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

// Function: sub_004EC5E0
// Address: 0x4ec5e0 - 0x4ec5f0
void sub_004EC5E0_0x4ec5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC5E0_0x4ec5e0");
#endif

    ctx->pc = 0x4ec5e0u;

    // 0x4ec5e0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec5e4: 0x72612e6c  .word       0x72612E6C                   # INVALID     $s3, $at, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec5e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4EC5E4 raw=0x72612E6C");
    // 0x4ec5e8: 0x746e6567  .word       0x746E6567                   # INVALID     $v1, $t6, 0x6567 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec5e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC5E8 raw=0x746E6567");
    // 0x4ec5ec: 0x0  nop
    ctx->pc = 0x4ec5ecu;
    // NOP
    ctx->pc = 0x4ec5f0u;
}
