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

// Function: sub_004ECC28
// Address: 0x4ecc28 - 0x4ecc38
void sub_004ECC28_0x4ecc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC28_0x4ecc28");
#endif

    ctx->pc = 0x4ecc28u;

    // 0x4ecc28: 0x6f6d7973  ldr         $t5, 0x7973($k1)
    ctx->pc = 0x4ecc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 31091); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x4ecc2c: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x4ecc2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4ecc30: 0x73253d74  .word       0x73253D74                   # psllh       $a3, $a1, 21 # 03200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecc30u;
    SET_GPR_VEC(ctx, 7, _mm_slli_epi16(GPR_VEC(ctx, 5), 21));
    // 0x4ecc34: 0x0  nop
    ctx->pc = 0x4ecc34u;
    // NOP
    ctx->pc = 0x4ecc38u;
}
