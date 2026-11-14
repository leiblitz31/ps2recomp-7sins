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

// Function: sub_004E5070
// Address: 0x4e5070 - 0x4e5080
void sub_004E5070_0x4e5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5070_0x4e5070");
#endif

    switch (ctx->pc) {
        case 0x4e5078u: goto label_4e5078;
        default: break;
    }

    ctx->pc = 0x4e5070u;

    // 0x4e5070: 0x6867696e  ldl         $a3, 0x696E($v1)
    ctx->pc = 0x4e5070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4e5074: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5074u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
label_4e5078:
    // 0x4e5078: 0x78665f65  lq          $a2, 0x5F65($v1)
    ctx->pc = 0x4e5078u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 24421)));
    // 0x4e507c: 0x0  nop
    ctx->pc = 0x4e507cu;
    // NOP
    ctx->pc = 0x4e5080u;
}
