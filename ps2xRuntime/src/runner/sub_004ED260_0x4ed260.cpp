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

// Function: sub_004ED260
// Address: 0x4ed260 - 0x4ed280
void sub_004ED260_0x4ed260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED260_0x4ed260");
#endif

    ctx->pc = 0x4ed260u;

    // 0x4ed260: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed260u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED260 raw=0x732E7866");
    // 0x4ed264: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x4ed264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4ed268: 0x696c6962  ldl         $t4, 0x6962($t3)
    ctx->pc = 0x4ed268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4ed26c: 0x732e7974  .word       0x732E7974                   # psllh       $t7, $t6, 5 # 03200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed26cu;
    SET_GPR_VEC(ctx, 15, _mm_slli_epi16(GPR_VEC(ctx, 14), 5));
    // 0x4ed270: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed270u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ed274: 0x0  nop
    ctx->pc = 0x4ed274u;
    // NOP
    // 0x4ed278: 0x0  nop
    ctx->pc = 0x4ed278u;
    // NOP
    // 0x4ed27c: 0x0  nop
    ctx->pc = 0x4ed27cu;
    // NOP
    ctx->pc = 0x4ed280u;
}
