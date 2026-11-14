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

// Function: sub_004E6498
// Address: 0x4e6498 - 0x4e64a8
void sub_004E6498_0x4e6498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6498_0x4e6498");
#endif

    ctx->pc = 0x4e6498u;

    // 0x4e6498: 0x445f474d  .word       0x445F474D                   # cfc1        $ra, $8 # 0000074D <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6498u;
    SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR8
    // 0x4e649c: 0x6b6e6972  ldl         $t6, 0x6972($k1)
    ctx->pc = 0x4e649cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e64a0: 0x6f72445f  ldr         $s2, 0x445F($k1)
    ctx->pc = 0x4e64a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x4e64a4: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x4e64a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e64a8u;
}
