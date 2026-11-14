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

// Function: sub_004ECCC8
// Address: 0x4eccc8 - 0x4eccd8
void sub_004ECCC8_0x4eccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECCC8_0x4eccc8");
#endif

    ctx->pc = 0x4eccc8u;

    // 0x4eccc8: 0x746f6870  .word       0x746F6870                   # INVALID     $v1, $t7, 0x6870 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eccc8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECCC8 raw=0x746F6870");
    // 0x4ecccc: 0x6f635f6f  ldr         $v1, 0x5F6F($k1)
    ctx->pc = 0x4eccccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4eccd0: 0x686375  .word       0x00686375                   # INVALID     $v1, $t0, 0x6375 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eccd0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4ECCD0 raw=0x00686375");
    // 0x4eccd4: 0x0  nop
    ctx->pc = 0x4eccd4u;
    // NOP
    ctx->pc = 0x4eccd8u;
}
