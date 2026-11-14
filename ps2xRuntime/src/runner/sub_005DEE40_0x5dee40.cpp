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

// Function: sub_005DEE40
// Address: 0x5dee40 - 0x5dee50
void sub_005DEE40_0x5dee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEE40_0x5dee40");
#endif

    ctx->pc = 0x5dee40u;

    // 0x5dee40: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dee40u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEE40 raw=0x4C4C554E");
    // 0x5dee44: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5dee44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x5dee48: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dee48u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DEE48 raw=0x7265746E");
    // 0x5dee4c: 0x0  nop
    ctx->pc = 0x5dee4cu;
    // NOP
    ctx->pc = 0x5dee50u;
}
