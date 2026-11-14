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

// Function: sub_004E4F58
// Address: 0x4e4f58 - 0x4e4f68
void sub_004E4F58_0x4e4f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F58_0x4e4f58");
#endif

    ctx->pc = 0x4e4f58u;

    // 0x4e4f58: 0x6b726f66  ldl         $s2, 0x6F66($k1)
    ctx->pc = 0x4e4f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x4e4f5c: 0x6b63625f  ldl         $v1, 0x625F($k1)
    ctx->pc = 0x4e4f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4e4f60: 0x752567  .word       0x00752567                   # nor         $a0, $v1, $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4f60u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 21)));
    // 0x4e4f64: 0x0  nop
    ctx->pc = 0x4e4f64u;
    // NOP
    ctx->pc = 0x4e4f68u;
}
