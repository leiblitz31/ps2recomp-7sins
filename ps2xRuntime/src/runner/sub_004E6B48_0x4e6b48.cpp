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

// Function: sub_004E6B48
// Address: 0x4e6b48 - 0x4e6b60
void sub_004E6B48_0x4e6b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B48_0x4e6b48");
#endif

    ctx->pc = 0x4e6b48u;

    // 0x4e6b48: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6b48u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6B48 raw=0x465F474D");
    // 0x4e6b4c: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6b4cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6B4C raw=0x74686769");
    // 0x4e6b50: 0x6e455f32  ldr         $a1, 0x5F32($s2)
    ctx->pc = 0x4e6b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24370); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e6b54: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6b54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e6b58: 0x0  nop
    ctx->pc = 0x4e6b58u;
    // NOP
    // 0x4e6b5c: 0x0  nop
    ctx->pc = 0x4e6b5cu;
    // NOP
    ctx->pc = 0x4e6b60u;
}
