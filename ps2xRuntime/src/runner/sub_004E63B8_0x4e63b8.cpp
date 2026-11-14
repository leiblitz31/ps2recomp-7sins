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

// Function: sub_004E63B8
// Address: 0x4e63b8 - 0x4e63d0
void sub_004E63B8_0x4e63b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E63B8_0x4e63b8");
#endif

    switch (ctx->pc) {
        case 0x4e63c4u: goto label_4e63c4;
        default: break;
    }

    ctx->pc = 0x4e63b8u;

    // 0x4e63b8: 0x6169616d  daddi       $t1, $t3, 0x616D
    ctx->pc = 0x4e63b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24941; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x4e63bc: 0x6972645f  ldl         $s2, 0x645F($t3)
    ctx->pc = 0x4e63bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x4e63c0: 0x696d6b6e  ldl         $t5, 0x6B6E($t3)
    ctx->pc = 0x4e63c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27502); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_4e63c4:
    // 0x4e63c4: 0x696e  .word       0x0000696E                   # dsub        $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e63c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    // 0x4e63c8: 0x0  nop
    ctx->pc = 0x4e63c8u;
    // NOP
    // 0x4e63cc: 0x0  nop
    ctx->pc = 0x4e63ccu;
    // NOP
    ctx->pc = 0x4e63d0u;
}
