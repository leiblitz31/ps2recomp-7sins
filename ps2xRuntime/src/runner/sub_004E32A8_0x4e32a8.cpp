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

// Function: sub_004E32A8
// Address: 0x4e32a8 - 0x4e32b8
void sub_004E32A8_0x4e32a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E32A8_0x4e32a8");
#endif

    ctx->pc = 0x4e32a8u;

    // 0x4e32a8: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e32a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e32ac: 0x6e6f6d5f  ldr         $t7, 0x6D5F($s3)
    ctx->pc = 0x4e32acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e32b0: 0x7965  .word       0x00007965                   # move        $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e32b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e32b4: 0x0  nop
    ctx->pc = 0x4e32b4u;
    // NOP
    ctx->pc = 0x4e32b8u;
}
