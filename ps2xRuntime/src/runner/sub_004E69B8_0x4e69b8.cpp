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

// Function: sub_004E69B8
// Address: 0x4e69b8 - 0x4e69c8
void sub_004E69B8_0x4e69b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E69B8_0x4e69b8");
#endif

    ctx->pc = 0x4e69b8u;

    // 0x4e69b8: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e69b8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E69B8 raw=0x465F474D");
    // 0x4e69bc: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e69bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E69BC raw=0x74686769");
    // 0x4e69c0: 0x6c64495f  ldr         $a0, 0x495F($v1)
    ctx->pc = 0x4e69c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4e69c4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e69c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4e69c8u;
}
