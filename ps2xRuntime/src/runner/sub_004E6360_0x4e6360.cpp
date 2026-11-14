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

// Function: sub_004E6360
// Address: 0x4e6360 - 0x4e6380
void sub_004E6360_0x4e6360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6360_0x4e6360");
#endif

    ctx->pc = 0x4e6360u;

    // 0x4e6360: 0x6169616d  daddi       $t1, $t3, 0x616D
    ctx->pc = 0x4e6360u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24941; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x4e6364: 0x6972645f  ldl         $s2, 0x645F($t3)
    ctx->pc = 0x4e6364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x4e6368: 0x61686b6e  daddi       $t0, $t3, 0x6B6E
    ctx->pc = 0x4e6368u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27502; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x4e636c: 0x696d6472  ldl         $t5, 0x6472($t3)
    ctx->pc = 0x4e636cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x4e6370: 0x696e  .word       0x0000696E                   # dsub        $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6370u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    // 0x4e6374: 0x0  nop
    ctx->pc = 0x4e6374u;
    // NOP
    // 0x4e6378: 0x0  nop
    ctx->pc = 0x4e6378u;
    // NOP
    // 0x4e637c: 0x0  nop
    ctx->pc = 0x4e637cu;
    // NOP
    ctx->pc = 0x4e6380u;
}
