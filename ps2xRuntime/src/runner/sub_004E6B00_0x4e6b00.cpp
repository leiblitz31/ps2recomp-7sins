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

// Function: sub_004E6B00
// Address: 0x4e6b00 - 0x4e6b10
void sub_004E6B00_0x4e6b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B00_0x4e6b00");
#endif

    ctx->pc = 0x4e6b00u;

    // 0x4e6b00: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6b00u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6B00 raw=0x465F474D");
    // 0x4e6b04: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6b04u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6B04 raw=0x74686769");
    // 0x4e6b08: 0x6f445f32  ldr         $a0, 0x5F32($k0)
    ctx->pc = 0x4e6b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 24370); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4e6b0c: 0x656764  .word       0x00656764                   # and         $t4, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6b0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    ctx->pc = 0x4e6b10u;
}
