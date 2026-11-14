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

// Function: sub_004E4258
// Address: 0x4e4258 - 0x4e4268
void sub_004E4258_0x4e4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4258_0x4e4258");
#endif

    ctx->pc = 0x4e4258u;

    // 0x4e4258: 0x6b636162  ldl         $v1, 0x6162($k1)
    ctx->pc = 0x4e4258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4e425c: 0x756f7267  .word       0x756F7267                   # INVALID     $t3, $t7, 0x7267 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e425cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E425C raw=0x756F7267");
    // 0x4e4260: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4260u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x4e4264: 0x0  nop
    ctx->pc = 0x4e4264u;
    // NOP
    ctx->pc = 0x4e4268u;
}
