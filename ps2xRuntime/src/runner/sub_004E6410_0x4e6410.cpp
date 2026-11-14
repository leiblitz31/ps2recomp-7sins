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

// Function: sub_004E6410
// Address: 0x4e6410 - 0x4e6430
void sub_004E6410_0x4e6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6410_0x4e6410");
#endif

    ctx->pc = 0x4e6410u;

    // 0x4e6410: 0x6169616d  daddi       $t1, $t3, 0x616D
    ctx->pc = 0x4e6410u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24941; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x4e6414: 0x6972645f  ldl         $s2, 0x645F($t3)
    ctx->pc = 0x4e6414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x4e6418: 0x696d6b6e  ldl         $t5, 0x6B6E($t3)
    ctx->pc = 0x4e6418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27502); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x4e641c: 0x775f696e  .word       0x775F696E                   # INVALID     $k0, $ra, 0x696E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e641cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E641C raw=0x775F696E");
    // 0x4e6420: 0x657069  .word       0x00657069                   # mtsa        $v1 # 00057040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e6420u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4e6424: 0x0  nop
    ctx->pc = 0x4e6424u;
    // NOP
    // 0x4e6428: 0x0  nop
    ctx->pc = 0x4e6428u;
    // NOP
    // 0x4e642c: 0x0  nop
    ctx->pc = 0x4e642cu;
    // NOP
    ctx->pc = 0x4e6430u;
}
