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

// Function: sub_004E2A70
// Address: 0x4e2a70 - 0x4e2a80
void sub_004E2A70_0x4e2a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2A70_0x4e2a70");
#endif

    ctx->pc = 0x4e2a70u;

    // 0x4e2a70: 0x6873656d  ldl         $s3, 0x656D($v1)
    ctx->pc = 0x4e2a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4e2a74: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4e2a74u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x4e2a78: 0x746f622e  .word       0x746F622E                   # INVALID     $v1, $t7, 0x622E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2a78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2A78 raw=0x746F622E");
    // 0x4e2a7c: 0x6d6f74  teq         $v1, $t5, 445
    ctx->pc = 0x4e2a7cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e2a80u;
}
