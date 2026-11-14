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

// Function: sub_004ECEE0
// Address: 0x4ecee0 - 0x4ecef8
void sub_004ECEE0_0x4ecee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECEE0_0x4ecee0");
#endif

    ctx->pc = 0x4ecee0u;

    // 0x4ecee0: 0x6b6c6177  ldl         $t4, 0x6177($k1)
    ctx->pc = 0x4ecee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24951); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4ecee4: 0x7474696c  .word       0x7474696C                   # INVALID     $v1, $s4, 0x696C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecee4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECEE4 raw=0x7474696C");
    // 0x4ecee8: 0x7473656c  .word       0x7473656C                   # INVALID     $v1, $s3, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecee8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECEE8 raw=0x7473656C");
    // 0x4eceec: 0x65676761  daddiu      $a3, $t3, 0x6761
    ctx->pc = 0x4eceecu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26465);
    // 0x4ecef0: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4ecef0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ecef4: 0x0  nop
    ctx->pc = 0x4ecef4u;
    // NOP
    ctx->pc = 0x4ecef8u;
}
