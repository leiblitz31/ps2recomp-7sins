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

// Function: sub_004E4520
// Address: 0x4e4520 - 0x4e4540
void sub_004E4520_0x4e4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4520_0x4e4520");
#endif

    ctx->pc = 0x4e4520u;

    // 0x4e4520: 0x696e696d  ldl         $t6, 0x696D($t3)
    ctx->pc = 0x4e4520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e4524: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e4524u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e4528: 0x6432252e  daddiu      $s2, $at, 0x252E
    ctx->pc = 0x4e4528u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9518);
    // 0x4e452c: 0x7369682e  .word       0x7369682E                   # INVALID     $k1, $t1, 0x682E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e452cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E452C raw=0x7369682E");
    // 0x4e4530: 0x65726f63  daddiu      $s2, $t3, 0x6F63
    ctx->pc = 0x4e4530u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
    // 0x4e4534: 0x0  nop
    ctx->pc = 0x4e4534u;
    // NOP
    // 0x4e4538: 0x0  nop
    ctx->pc = 0x4e4538u;
    // NOP
    // 0x4e453c: 0x0  nop
    ctx->pc = 0x4e453cu;
    // NOP
    ctx->pc = 0x4e4540u;
}
